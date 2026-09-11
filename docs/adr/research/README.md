# ADR research scripts

The analyses behind the evidence in
[ADR 0001](../0001-single-grammar-across-game-builds.md). They exist so that
every number in that document can be re-derived rather than taken on trust — and
re-derived against a *newer* build, since B42 is still moving.

They read the extracted game scripts under `tmp/pz-scripts/<build>/`, which is
gitignored. Populate it first:

```sh
./tools/fetch-pz-scripts.sh both
```

Then, from the repository root:

```sh
node docs/adr/research/corpus-stats.mjs       # sizes, separators, the lexical gaps
node docs/adr/research/block-keywords.mjs     # block kinds per build, and the set difference
node docs/adr/research/recipe-blank-line.mjs  # is the blank line in a recipe required?
```

Plain Node, no dependencies — the repo already requires Node for the tree-sitter
CLI, so these add no toolchain. `lib.mjs` holds the shared corpus loading,
comment stripping and block scanning.

## Things worth knowing before trusting a number

**Strip comments first.** The corpus ships commented-out definitions, including
whole example `recipe` blocks. Counting them as real content inflates every
figure — it is what put a phantom colon-separated attribute in B42 and 35 extra
ones in B41. `lib.mjs`'s `stripComments` blanks comments while preserving
newlines, so per-line regexes and line numbers both still work.

**Comment nesting is unsettled**, so `liveMask` takes it as a parameter instead
of guessing. `recipes.txt` contains a `/*` block holding a nested `/* … */`,
and the two readings disagree about whether one `recipe` is live.
`recipe-blank-line.mjs` reports both and quotes the figure that holds either way;
prefer that habit to picking a reading.

**Count lines per file, not over a concatenation.** Eleven B41 files have no
trailing newline, so `cat *.txt | wc -l` silently merges each of those last lines
into the next file and undercounts. `countLines` matches `wc -l` per file.

**Be careful asking "does this value contain a space".** An earlier
`=[[:space:]]*[^,=]*[[:space:]][^,=]*,` grep matched the separator's own trailing
space, so it reported ~136k hits where the real answer is 20,108 — nearly an
order of magnitude, and it reached a draft of the ADR before this script caught
it. Trim the value, *then* test for interior whitespace.
