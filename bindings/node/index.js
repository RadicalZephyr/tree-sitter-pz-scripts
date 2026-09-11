import { readFileSync } from "node:fs";
import { fileURLToPath } from "node:url";

const root = fileURLToPath(new URL("../..", import.meta.url));

const binding = typeof process.versions.bun === "string"
  // Support `bun build --compile` by being statically analyzable enough to find the .node file at build-time
  ? await import(`${root}/prebuilds/${process.platform}-${process.arch}/tree-sitter-pz-scripts.node`)
  : (await import("node-gyp-build")).default(root);

try {
  // Deviates from `tree-sitter init` output on purpose. The generated form is
  // `await import(`${root}/src/node-types.json`)`, but `root` is a filesystem
  // path, and on Windows that is `D:\...`, which is not a valid ES module
  // specifier. The import throws, the empty catch below swallows it, and
  // nodeTypeInfo silently ends up undefined. Resolving against import.meta.url
  // yields a file: URL on every platform. Re-apply this after `init --update`.
  const nodeTypes = await import(new URL("../../src/node-types.json", import.meta.url).href, { with: { type: "json" } });
  binding.nodeTypeInfo = nodeTypes.default;
} catch { }

const queries = [
  ["HIGHLIGHTS_QUERY", `${root}/queries/highlights.scm`],
  ["INJECTIONS_QUERY", `${root}/queries/injections.scm`],
  ["LOCALS_QUERY", `${root}/queries/locals.scm`],
  ["TAGS_QUERY", `${root}/queries/tags.scm`],
];

for (const [prop, path] of queries) {
  Object.defineProperty(binding, prop, {
    configurable: true,
    enumerable: true,
    get() {
      delete binding[prop];
      try {
        binding[prop] = readFileSync(path, "utf8");
      } catch { }
      return binding[prop];
    }
  });
}

export default binding;
