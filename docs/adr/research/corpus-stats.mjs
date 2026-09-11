/**
 * Corpus size, attribute separator usage, and the two lexical gaps that account
 * for nearly everything the grammar rejects today.
 *
 * Backs ADR 0001's evidence table (file/line counts, `:` vs `=`) and its
 * Consequences claim that the bulk of the outstanding work is shared between
 * builds rather than specific to either.
 *
 *   node docs/adr/research/corpus-stats.mjs
 */

import { BUILDS, loadBuild, n, stripComments } from './lib.mjs';

// An attribute line: a bare key, a `:` or `=` separator, a value, a trailing
// comma. Captured so the separator and the value can be inspected separately.
// The value deliberately allows `:` and `=` inside it — `Fixer = Base.Pistol;
// Aiming=3,` is a real line, and only the FIRST separator delimits the key.
const ATTRIBUTE = /^[ \t]*([A-Za-z][A-Za-z0-9_]*)[ \t]*([:=])[ \t]*([^,\n]*),[ \t]*$/;
const DOTTED = /\b[A-Za-z][A-Za-z0-9]*(?:\.[A-Za-z][A-Za-z0-9_]*)+\b/g;
// What grammar.js accepts as an item_attribute_value today: a single \w+ run.
// Anything else — spaces, dots, semicolons, brackets, signs — is rejected.
const SINGLE_WORD = /^\w+$/;

/** Lines in a file, matching `wc -l` (a trailing newline does not open a line). */
function countLines(text) {
  const parts = text.split('\n');
  return parts.length - (parts[parts.length - 1] === '' ? 1 : 0);
}

const rows = [];

for (const build of BUILDS) {
  const files = loadBuild(build);

  let lines = 0;
  let colon = 0;
  let equals = 0;
  let valuesWithSpaces = 0;
  let valuesNotSingleWord = 0;
  let dottedOccurrences = 0;
  const dottedDistinct = new Set();

  for (const file of files) {
    lines += countLines(file.text);

    // Comments are stripped so that commented-out examples do not inflate the
    // counts; line structure is preserved so per-line regexes still apply.
    const live = stripComments(file.text);

    for (const line of live.split('\n')) {
      const m = ATTRIBUTE.exec(line);
      if (m) {
        const [, , separator, rawValue] = m;
        if (separator === ':') colon++;
        else equals++;
        const value = rawValue.trim();
        if (/\S\s+\S/.test(value)) valuesWithSpaces++;
        if (!SINGLE_WORD.test(value)) valuesNotSingleWord++;
      }
      for (const hit of line.matchAll(DOTTED)) {
        dottedOccurrences++;
        dottedDistinct.add(hit[0]);
      }
    }
  }

  rows.push({
    build,
    files: files.length,
    lines,
    colon,
    equals,
    valuesWithSpaces,
    valuesNotSingleWord,
    dottedOccurrences,
    dottedDistinct: dottedDistinct.size,
  });
}

const label = {
  files: 'files',
  lines: 'lines',
  colon: '`key : value,` attributes',
  equals: '`key = value,` attributes',
  valuesWithSpaces: 'attribute values containing a space',
  valuesNotSingleWord: 'attribute values grammar.js rejects (not /^\\w+$/)',
  dottedOccurrences: 'dotted identifiers (occurrences)',
  dottedDistinct: 'dotted identifiers (distinct)',
};

const width = Math.max(...Object.values(label).map((l) => l.length));
console.log(
  `${''.padEnd(width)}  ${BUILDS.map((b) => b.padStart(9)).join('  ')}  ${'total'.padStart(9)}`,
);
for (const [key, text] of Object.entries(label)) {
  const values = rows.map((r) => r[key]);
  const total = key === 'dottedDistinct' ? '' : n(values.reduce((x, y) => x + y, 0));
  console.log(
    `${text.padEnd(width)}  ${values.map((v) => n(v).padStart(9)).join('  ')}  ${total.padStart(9)}`,
  );
}
