# tree-sitter-pz-scripts

[![CI](https://github.com/RadicalZephyr/tree-sitter-pz-scripts/actions/workflows/ci.yml/badge.svg)](https://github.com/RadicalZephyr/tree-sitter-pz-scripts/actions/workflows/ci.yml)

A [tree-sitter](https://tree-sitter.github.io/tree-sitter/) grammar for Project
Zomboid script files — the `.txt` files under `media/scripts/` that define
items, recipes, and the rest of the game's data.

## Status

Early and incomplete. The grammar parses a useful subset of the format, and the
parts it doesn't handle are tracked as `TODO`s in `grammar.js` rather than
quietly ignored. It is not yet ready to point at a real `media/scripts/`
directory — see [Not supported yet](#not-supported-yet) before you try.

## What it parses today

```
module Umbrella {
  imports {
    Base
  }

  recipe Close Umbrella
  {
    UmbrellaWhite,

    Result:ClosedUmbrellaWhite,
    Time:10.0,
  }
}
```

- `module` blocks with an optional `imports` list
- `item` definitions with `key = value,` attributes
- `recipe` definitions with multi-word labels, ingredient requirements, and
  `key:value,` attributes
- slash-alternate requirements — `WineEmpty/WineEmpty2,`
- `/* block comments */`, anywhere

Note the blank line between a recipe's requirements and its attributes. That
separator is currently required; without it the recipe won't parse.

## Not supported yet

- **More than one definition per module.** A second `item` or `recipe` inside
  the same `module` is a parse error today. This is the biggest gap.
- **Dotted identifiers** like `Base.WineEmpty`, which real script files use
  everywhere.
- **Attribute values containing spaces**, e.g. `DisplayName = Black Pepper,`.
- Requirement forms beyond the simple and slash-alternate cases, and attribute
  value types beyond numbers and bare identifiers.
- Syntax highlighting, indentation, and tagging queries — there is no
  `queries/` directory yet.

## Developing

Requires Node. The `tree-sitter` CLI comes in as a dev dependency:

```sh
npm ci
npm test
```

The package is ESM, and the parser targets tree-sitter ABI 15, which needs a
tree-sitter runtime of 0.25 or newer.

To run a single test, match it by its name in the corpus:

```sh
npx tree-sitter test -f "Basic Recipe"
```

After editing `grammar.js`, regenerate the parser and commit the result
alongside your change — `src/` is generated but checked in so that consumers
don't need the CLI. `npm test` does not do this for you; it runs against the
committed parser, so skipping this means testing a stale one:

```sh
npx tree-sitter generate
```

To see what the parser actually does with a file:

```sh
npx tree-sitter parse path/to/script.txt
```

Tests live in `test/corpus/`, grouped by feature, in tree-sitter's corpus
format: a fenced test name, the source, `---`, and the expected s-expression.
Error cases are written out explicitly with their `ERROR` nodes, so a change in
failure behavior shows up as a test failure rather than passing unnoticed.

The workflow here is test-first: add the corpus case, watch it fail, then
extend the grammar.

### Real script files

To get a corpus of real scripts to test against, `tools/fetch-pz-scripts.sh`
pulls the shipped `media/scripts/` out of the Project Zomboid dedicated server.
The server is a Steam Tool app that anonymous SteamCMD is entitled to, so this
needs no Steam account and no copy of the game:

```sh
./tools/fetch-pz-scripts.sh          # Build 42, the current stable build
./tools/fetch-pz-scripts.sh b41      # Build 41.78.21, frozen on the legacy41 branch
./tools/fetch-pz-scripts.sh both
```

Scripts land in `tmp/pz-scripts/<build>/`, which is gitignored — they are The
Indie Stone's game data. Use them to find syntax the grammar mishandles and to
write reduced corpus cases; don't commit them.

Which builds the grammar aims to cover, and why there is one grammar rather than
one per build, is recorded in
[docs/adr/0001-single-grammar-across-game-builds.md](docs/adr/0001-single-grammar-across-game-builds.md).

### Bindings

Node and Rust bindings both build. The Node binding uses `node-addon-api`, and
the Rust one exposes the grammar as a `LANGUAGE` constant:

```sh
npx node-gyp rebuild   # Node native binding
cargo test --locked    # Rust binding
```

## License

ISC.
