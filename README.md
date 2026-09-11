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
npm install
npm test
```

To run a single test, match it by its name in the corpus:

```sh
npx tree-sitter test -f "Basic Recipe"
```

After editing `grammar.js`, regenerate the parser and commit the result
alongside your change — `src/` is generated but checked in so that consumers
don't need the CLI:

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

### Bindings

Node and Rust bindings are generated boilerplate and both build:

```sh
npx node-gyp rebuild   # Node native binding
cargo test             # Rust binding
```

## License

ISC.
