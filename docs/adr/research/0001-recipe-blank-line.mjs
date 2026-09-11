/**
 * Is the blank line between a B41 recipe's requirements and its attributes
 * actually required?
 *
 * grammar.js terminates `recipe_requirements` with token.immediate('\n\n'), and
 * both README.md and CLAUDE.md describe that blank line as load-bearing. This
 * counts the shipped B41 recipes that omit it — each one is content the current
 * parser reports as an ERROR. Backs issue #3.
 *
 * The count depends on whether PZ's block comments nest, which is itself
 * unsettled, so both readings are reported. Recipes that only appear under the
 * non-nesting reading are called out separately: the figure quoted in the ADR is
 * the one that holds either way.
 *
 *   node docs/adr/research/0001-recipe-blank-line.mjs
 */

import { liveMask, lineOf, loadBuild, n } from './lib.mjs';

// `recipe <label>` / `{` ... `}` at the same indentation. Non-greedy body, so it
// stops at the first closing brace on its own line.
const RECIPE = /^[ \t]*recipe[ \t]+([^\n{]*)\n[ \t]*\{(.*?)\n[ \t]*\}/gms;
// An attribute inside a recipe body is `Key:Value,`; a requirement never
// contains a `:`. That distinction — not the layout — is what actually
// separates the two sections.
const ATTRIBUTE_LINE = /^[ \t]*[A-Za-z][A-Za-z0-9_]*[ \t]*:/;

/** @param {boolean} nested */
function analyze(nested) {
  const result = { raw: 0, live: 0, withBlank: 0, withoutBlank: 0, offenders: [] };

  for (const file of loadBuild('b41')) {
    const mask = liveMask(file.text, { nested });

    for (const match of file.text.matchAll(RECIPE)) {
      result.raw++;
      // A recipe whose header sits inside a comment is not shipped content.
      if (!mask[match.index]) continue;
      result.live++;

      const lines = match[2].split('\n');
      const firstAttribute = lines.findIndex((l) => ATTRIBUTE_LINE.test(l));
      if (firstAttribute <= 0) continue;

      if (lines[firstAttribute - 1].trim() === '') {
        result.withBlank++;
      } else {
        result.withoutBlank++;
        result.offenders.push({
          label: match[1].trim(),
          location: `${file.rel}:${lineOf(file.text, match.index)}`,
          requirements: lines.slice(0, firstAttribute).map((l) => l.trim()).filter(Boolean),
        });
      }
    }
  }
  return result;
}

const readings = { 'comments do NOT nest': analyze(false), 'comments DO nest': analyze(true) };

for (const [name, r] of Object.entries(readings)) {
  console.log(`\n=== assuming ${name} ===`);
  console.log(`  recipe blocks found (incl. commented out): ${n(r.raw)}`);
  console.log(`  live recipe blocks:                        ${n(r.live)}`);
  console.log(`    with a blank line before attributes:     ${n(r.withBlank)}`);
  console.log(`    WITHOUT one (parsed as ERROR today):     ${n(r.withoutBlank)}`);
  for (const o of r.offenders) {
    console.log(`      - ${o.location}  recipe ${o.label}`);
    console.log(`          requirements: ${o.requirements.join(' ')}`);
  }
}

const [loose, strict] = Object.values(readings);
const robust = Math.min(loose.withoutBlank, strict.withoutBlank);
const sensitive = loose.offenders
  .filter((o) => !strict.offenders.some((s) => s.location === o.location))
  .map((o) => `${o.label} (${o.location})`);

console.log(`\n=== conclusion ===`);
console.log(`${n(robust)} live recipes omit the blank line under BOTH comment readings.`);
if (sensitive.length) {
  console.log(`${n(sensitive.length)} more only count if comments do not nest: ${sensitive.join(', ')}`);
}
console.log(
  robust > 0
    ? 'So the blank line is a formatting convention, not a delimiter.'
    : 'So the blank line may genuinely be required.',
);
