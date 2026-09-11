# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project

A tree-sitter grammar for Project Zomboid script files — the `.txt` files under
`media/scripts/` that define items, recipes, and other game data. The grammar is
early-stage and deliberately covers a narrow slice of the real language; most
rules carry a `TODO` naming what they don't handle yet.

## Commands

```sh
npm test                            # runs `tree-sitter test` — the corpus suite
npx tree-sitter test -f "Basic Recipe"   # run one test, matched by its corpus name
npx tree-sitter test -u             # rewrite corpus expectations from actual output
npx tree-sitter generate            # regenerate src/ from grammar.js
npx tree-sitter parse <file>        # dump a parse tree; exits nonzero if it contains ERROR
cargo test                          # Rust binding loads + doctest
npx node-gyp rebuild                # build the Node native binding into build/Release
```

`tree-sitter generate` runs implicitly as part of `tree-sitter test`, so a
grammar edit is picked up by the test run — but the regenerated `src/` must
still be committed (see below).

Use `-u` with care: it makes any test pass by definition. Read the diff before
committing it.

### Installing the CLI behind a proxy

`tree-sitter-cli`'s postinstall downloads a release binary from GitHub using a
plain (non-CONNECT) request, which the Claude Code web sandbox proxy rejects
with `405`. Work around it rather than skipping the tests:

```sh
npm install --ignore-scripts
curl -sSL -o /tmp/ts.gz https://github.com/tree-sitter/tree-sitter/releases/download/v0.20.8/tree-sitter-linux-x64.gz
gunzip -c /tmp/ts.gz > node_modules/tree-sitter-cli/tree-sitter
chmod +x node_modules/tree-sitter-cli/tree-sitter
```

Match the version to the `tree-sitter-cli` range in `package.json` (currently
`^0.20.8`) so the generated parser stays byte-identical to what's committed.

## Architecture

`grammar.js` is the only hand-written grammar source. Everything in `src/` —
`parser.c`, `grammar.json`, `node-types.json` — is generated output that is
**also committed**, so consumers can build without the CLI. Treat them as a
unit: any change to `grammar.js` must be followed by `tree-sitter generate` and
both committed together. `git status` after a bare `generate` should be clean;
if it isn't, the committed parser had drifted. CI enforces this — the Grammar
job regenerates and fails if anything under `src/` changes, so a grammar edit
pushed without its regenerated parser will go red.

`bindings/node`, `bindings/rust`, and `binding.gyp` are unmodified
`tree-sitter init` boilerplate; `Cargo.toml` is too apart from its `license` and
`repository` fields, which were corrected to match `package.json` (ISC). There's
no reason to touch these unless adding an external scanner or query files — both
have commented-out blocks ready for that.

## Grammar shape

```
module ::= 'module' identifier '{' imports? definition? '}'
definition ::= item | recipe
```

`item` is a brace block of `key = value,` attributes. `recipe` is a block of
comma-terminated ingredient requirements, then a blank line, then `key:value,`
attributes.

### Gotchas worth knowing before editing

These are all verified against the current parser, and most correspond to a
`TODO` in `grammar.js`:

- **The blank line in a recipe is load-bearing.** `recipe_requirements` is
  terminated by `token.immediate('\n\n')`. Whitespace is otherwise in `extras`
  and ignored, but omitting the blank line between requirements and attributes
  turns the whole `recipe` into an `ERROR` — the attributes get mis-lexed as
  further requirements. This is the one place layout is significant.
- **A module holds at most one definition.** `module` uses
  `optional($._definition)`, so a second `item` or `recipe` in the same module
  parses as an `ERROR`. Real PZ modules contain many; this is the most likely
  next thing to fix.
- **`identifier` is `/[a-zA-Z][a-zA-Z0-9]*/`** — no dots or underscores. Real
  script files are full of dotted names like `Base.WineEmpty`, which currently
  fail to parse.
- **`item_attribute_value` is `/\w+/`** — a value with spaces
  (`DisplayName = Black Pepper,`) fails.
- **`name` is wrapped in `token(...)`** so a multi-word recipe label like
  `Close Umbrella` lexes as one token rather than colliding with `extras`
  whitespace. Leading/trailing space handling is a known TODO.

## Tests

`test/corpus/*.txt` uses the standard tree-sitter corpus format: a `===`-fenced
test name, the source, `---`, then the expected s-expression. Files group by
feature — `modules.txt`, `imports.txt`, `definitions.txt`.

Error cases are asserted explicitly rather than omitted: `modules.txt` has a
"Module Names with Spaces Error" case whose expectation contains an `ERROR`
node. When you tighten the grammar, prefer adding a case like that over leaving
a behavior untested.

The git history is test-first — add the corpus case, watch it fail, then extend
`grammar.js`. Follow that order.

## Conventions

Commit messages are imperative and sentence-case, with no prefixes or scopes:
"Add a comment rule", "Handle recipes with slash-alternate requirements",
"Make the separated list helper more generic".

`grammar.js` keeps its `separated_list`/`separated_list1`/`separated_list2`
helpers at the bottom with JSDoc types, and uses `////`-banner comments to
separate definition types.
