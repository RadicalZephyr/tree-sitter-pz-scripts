# 1. One grammar across game builds

- **Status:** Draft
- **Date:** 2026-09-11

## Context

Project Zomboid's script format changed between Build 41 and Build 42. B42 is
now the stable build and is the grammar's primary target. B41 is frozen at
41.78.21, still widely played, and still the target of most published mods, so
parsing it is worth something — but it is a nice-to-have, not a requirement.

The grammar as written targets a B41-shaped subset: `item` with `key = value,`
attributes, and `recipe` with a requirement list, a blank line, and `key:value,`
attributes. B42 has no `recipe` blocks at all.

The question this ADR settles is whether supporting both builds means two
parsers or one — and if two, how they are laid out and published.

## Evidence

Both builds ship in the same Steam app (`380870`, "Project Zomboid Dedicated
Server"), which is anonymously downloadable: B42 on the `public` branch and B41
on `legacy41`. `tools/fetch-pz-scripts.sh` pulls either.

Every number below comes from the shipped `media/scripts/` of both builds —
264,029 lines across 1004 files for B42, 89,429 across 153 for B41 — and is
reproduced by the scripts in `docs/adr/research/`. Run them against a populated
`tmp/pz-scripts/` rather than trusting this table; see that directory's README.
Counts are taken after stripping comments, so commented-out definitions are not
mistaken for shipped content.

| Axis | B41 | B42 |
| --- | --- | --- |
| Block keywords removed in B42 | `recipe`, `uniquerecipe`, `multistagebuild`, `install`, `uninstall` | — |
| Block keywords added in B42 | — | 97, among them `craftRecipe`, `entity`, `fluid`, `timedAction`, `component`, `itemMapper`, `xuiSkin` |
| Shared block keywords | 35 | 35 |
| `key : value,` attributes | 2,800 | 0 |
| `key = value,` attributes | 46,120 | 135,772 |
| `recipe` blocks (live; 386 counting commented-out ones) | 381 | 0 |

The divergence is of two kinds, and both are **disjoint** rather than
conflicting:

- **Different keywords.** B42 replaced `recipe` with `craftRecipe`, whose body
  uses explicit nested `inputs { }` / `outputs { }` blocks. These are different
  tokens; a file only ever uses one set.
- **A normalized separator.** B42 moved the shared `evolvedrecipe` and `fixing`
  blocks from `:` to `=`. Again different tokens, and outside comments `:` does
  not appear as an attribute separator anywhere in B42 at all.

What matters is what is *absent*: there is no construct where the same text
should produce a different tree depending on the build. That absence is the
whole decision. The reason `tree-sitter-typescript` must ship two parsers is a
genuine ambiguity — `<T>(x)` is a type assertion in `.ts` and a JSX element in
`.tsx`, so `common/define-grammar.js` branches on the dialect because an LR
parser cannot decide without it. PZ has no analogue. Disjoint keyword sets and
disjoint separator conventions compose with zero conflicts, so a dialect flag
would have nothing to disambiguate.

## Decision

**One grammar, accepting the union of both builds. Build-specific rejection is
not the parser's job.**

The grammar carries rules for B41-only constructs (`recipe` and friends) and
B42-only constructs (`craftRecipe`, `entity`, …) side by side. A B42 file simply
never reaches the `recipe` rule, and a B41 file never reaches `craftRecipe`.

Where a build matters to a consumer, it is determined a layer above the parser:
walk the tree against a table of `node type -> introduced in / removed in` and
emit diagnostics. This is how version targeting is handled everywhere else —
ruff's `target-version`, TypeScript's `lib`/`target`, clippy's MSRV — and it is
both cheaper than a second parser and more expressive, because it can say
"`recipe` was removed in Build 42, use `craftRecipe`" where a second parser can
only say `ERROR`.

The grammar's version number tracks the grammar, not the game. B42 is still
moving (42.19.2 at the time of writing) and new block types will keep arriving;
they are additive, and adding one is not a breaking change.

## Consequences

**Good:**

- One `parser.c`, one crate, one npm package, one corpus, one CI drift check.
- The work actually in front of us is shared, and it is lexical. `item_attribute_value`
  is `/\w+/` today, which rejects **91,640** of the corpus's attribute values —
  19,352 in B41 and 72,288 in B42. Of those, 20,108 contain a space and 11,867
  are dotted identifiers like `Base.Plank`; the rest carry separators such as
  `;`, brackets, or signs. Every one of these is byte-identical in both builds,
  so splitting first would mean fixing them twice, or building the sharing
  machinery before fixing anything.
- Build detection falls out for free: which build a file targets can be
  inferred from which node types appear. Script files carry no build marker, so
  a tool that demands the dialect up front is asking for information its user
  often does not have. Two parsers can only answer "parses / does not parse".
- B41 support becomes nearly free, which suits its nice-to-have status.

**Bad:**

- The parser over-accepts. A B41 `recipe` block in a file intended as B42 parses
  clean, and a mixed-build file nothing could load parses clean too. Nothing
  downstream currently needs the parser itself to reject wrong-build syntax; if
  something ever does — an editor integration keying purely off `ERROR` nodes,
  say — that is the one argument that reopens this decision.
- Accepting either separator in shared blocks means `item { Foo : Bar, }` parses
  even though no build accepts it. Keeping the separator strict per block type
  limits this: only `evolvedrecipe` and `fixing` need to accept both.
- The corpus has to cover two builds' worth of syntax in one suite, so corpus
  cases should name the build they came from.

**Reversible:** going union -> split later is mechanical — extract the shared
rules into `common/define-grammar.js`, add a dialect parameter, add a second
entry to the `grammars` array in `tree-sitter.json`. That array already exists
with a single `"path": "."` entry, so the shape is latent. Going split -> union
means throwing a parser away.

## Alternatives considered

**Parallel `b41/` and `b42/` directories in this repository.** The
ecosystem-standard shape for real dialects, and the fallback if an ambiguity
ever turns up: a shared `common/define-grammar.js`, a three-line `grammar.js`
per dialect, a `grammars` array entry each, and one crate exposing two
`LANGUAGE_*` constants. Rejected because there is no ambiguity to justify it. It
also imposes a symmetric structure on an asymmetric problem — `legacy41` is
frozen, B42 is live — and naming a directory `b42/` quietly commits us to
tracking TIS's point releases.

**Separate published crates.** Rejected: duplicates the shared lexical layer
across two release cadences, so every `identifier` fix has to be ported by hand,
and it buys nothing a single crate cannot do. One crate can export several
languages.

**Separate repositories.** Rejected for the same reason, plus the loss of local
code sharing. `tree-sitter-typescript` depends on `tree-sitter-javascript` only
because JavaScript is independently useful as a base grammar; B41 scripts are
not a base for B42, they are a sibling.

## Follow-ups this surfaced

Neither depends on the decision above; both were found while gathering the
evidence.

- **The blank line in a recipe is not load-bearing.** Five of the 381 live
  shipped B41 recipes put attributes directly after requirements with no blank
  line — `recipe Slice Onion` at `recipes.txt:3883` is the cleanest specimen. (A
  sixth, `recipe HockeyMaskSmashBottle`, only counts if block comments do not
  nest; see below. Five hold either way.) PZ
  discriminates a requirement from an attribute by whether the line contains a
  `:`, not by layout. `recipe_requirements`' `token.immediate('\n\n')` will emit
  `ERROR` on real game content, and both `README.md` and `CLAUDE.md` currently
  describe the blank line as required. Wants a corpus case and a rule change.
- **Block comment nesting is undecided.** `media/scripts/recipes.txt` contains a
  `/*` block holding a nested `/* ... */` and a commented-out `recipe`, with
  balanced `/*` and `*/` counts across the file. Under C semantics the inner
  `*/` closes the comment early and leaves a stray `*/`; under nesting semantics
  the whole block is a comment. The scripts alone cannot settle which PZ does —
  it needs the game's parser or an in-game experiment. Nesting requires an
  external scanner, so this should be settled before the comment rule is
  extended.
