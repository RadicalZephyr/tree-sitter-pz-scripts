/**
 * Which block kinds each build uses, and how the two sets differ.
 *
 * Backs ADR 0001's claim that the builds diverge by *disjoint* keyword sets
 * rather than by conflicting syntax: a keyword removed in B42 never appears in a
 * B42 file, so a grammar carrying rules for both has nothing to disambiguate.
 *
 *   node docs/adr/research/0001-block-keywords.mjs [--top N]
 */

import { BUILDS, blockKeywords, histogram, loadBuild, n } from './lib.mjs';

const topArg = process.argv.indexOf('--top');
const TOP = topArg === -1 ? 25 : Number(process.argv[topArg + 1]);

const sets = new Map();

for (const build of BUILDS) {
  const files = loadBuild(build);
  const keywords = files.flatMap((f) => blockKeywords(f.text));
  const hist = histogram(keywords);
  sets.set(build, new Set(hist.map((h) => h.key)));

  console.log(`\n=== ${build}: ${n(hist.length)} distinct block kinds, ${n(keywords.length)} blocks ===`);
  for (const { key, count } of hist.slice(0, TOP)) {
    console.log(`  ${String(n(count)).padStart(7)}  ${key}`);
  }
  if (hist.length > TOP) console.log(`  ... and ${n(hist.length - TOP)} more`);
}

const [a, b] = BUILDS;
const only = (x, y) => [...sets.get(x)].filter((k) => !sets.get(y).has(k)).sort();
const shared = [...sets.get(a)].filter((k) => sets.get(b).has(k)).sort();

const removed = only(a, b);
const added = only(b, a);

console.log(`\n=== set difference ===`);
console.log(`removed in ${b} (${removed.length}): ${removed.join(' ')}`);
console.log(`\nadded in ${b} (${added.length}): ${added.join(' ')}`);
console.log(`\nshared (${shared.length}): ${shared.join(' ')}`);
console.log(
  `\nsummary: ${removed.length} removed, ${added.length} added, ${shared.length} shared`,
);
