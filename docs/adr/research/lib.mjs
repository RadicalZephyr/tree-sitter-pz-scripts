/**
 * Shared helpers for the ADR 0001 corpus analyses.
 *
 * Everything here reads the extracted game scripts under tmp/pz-scripts/<build>/,
 * which tools/fetch-pz-scripts.sh produces and .gitignore excludes.
 */

import { readdirSync, readFileSync, statSync } from 'node:fs';
import { join, relative } from 'node:path';
import { fileURLToPath } from 'node:url';

const HERE = fileURLToPath(new URL('.', import.meta.url));
export const REPO_ROOT = join(HERE, '..', '..', '..');
export const BUILDS = ['b41', 'b42'];

/** Where a build's extracted scripts live. */
export function buildDir(build) {
  return join(REPO_ROOT, 'tmp', 'pz-scripts', build);
}

/**
 * Every .txt under a build, as { path, rel, text }. Newlines are normalized to
 * \n so that line offsets are consistent across the CRLF files in the corpus.
 *
 * @param {string} build
 */
export function loadBuild(build) {
  const root = buildDir(build);
  try {
    statSync(root);
  } catch {
    throw new Error(
      `missing ${relative(REPO_ROOT, root)} — run ./tools/fetch-pz-scripts.sh ${build}`,
    );
  }

  const out = [];
  const walk = (dir) => {
    for (const entry of readdirSync(dir, { withFileTypes: true })) {
      const path = join(dir, entry.name);
      if (entry.isDirectory()) walk(path);
      else if (entry.name.endsWith('.txt')) {
        out.push({
          path,
          rel: relative(root, path),
          text: readFileSync(path, 'latin1').replace(/\r\n?/g, '\n'),
        });
      }
    }
  };
  walk(root);
  // Sorted so that runs are reproducible rather than filesystem-ordered.
  return out.sort((a, b) => a.rel.localeCompare(b.rel));
}

/**
 * Per-character "is this outside a comment" mask.
 *
 * Whether PZ's block comments nest is an open question — see issue #15 — so this
 * takes it as a parameter rather than guessing. With nested: false a `/*` runs to
 * the first `*\/` (C semantics); with nested: true openers are counted and the
 * comment ends when the depth returns to zero.
 *
 * @param {string} text
 * @param {{ nested?: boolean }} [options]
 * @return {boolean[]}
 */
export function liveMask(text, { nested = false } = {}) {
  const mask = new Array(text.length).fill(true);
  const blank = (from, to) => {
    for (let k = from; k < to; k++) mask[k] = false;
  };

  let i = 0;
  while (i < text.length) {
    if (text.startsWith('/*', i)) {
      let j = i + 2;
      let depth = 1;
      while (j < text.length && depth > 0) {
        if (nested && text.startsWith('/*', j)) {
          depth++;
          j += 2;
        } else if (text.startsWith('*/', j)) {
          depth--;
          j += 2;
        } else {
          j++;
        }
      }
      blank(i, j);
      i = j;
    } else if (text.startsWith('//', i)) {
      let j = text.indexOf('\n', i);
      if (j < 0) j = text.length;
      blank(i, j);
      i = j;
    } else {
      i++;
    }
  }
  return mask;
}

/**
 * The text with comments replaced by spaces, preserving every newline so that
 * line numbers still line up with the file on disk.
 *
 * @param {string} text
 * @param {{ nested?: boolean }} [options]
 */
export function stripComments(text, options) {
  const mask = liveMask(text, options);
  let out = '';
  for (let i = 0; i < text.length; i++) {
    out += mask[i] ? text[i] : text[i] === '\n' ? '\n' : ' ';
  }
  return out;
}

/** 1-based line number of a character offset. */
export function lineOf(text, offset) {
  let line = 1;
  for (let i = 0; i < offset && i < text.length; i++) {
    if (text[i] === '\n') line++;
  }
  return line;
}

/**
 * First token of every line that opens a brace block, e.g. `item Foo {` or
 * `item Foo` followed by a line holding only `{`. This is how the script format
 * introduces every definition and sub-block, so the token is the block's kind.
 *
 * Comments are stripped first — the corpus contains commented-out definitions
 * that would otherwise be counted as real ones.
 *
 * @param {string} rawText
 * @param {{ nested?: boolean }} [options]
 * @return {string[]}
 */
export function blockKeywords(rawText, options) {
  const lines = stripComments(rawText, options).split('\n');
  const trimmed = lines.map((l) => l.trim());
  const keywords = [];

  for (let i = 0; i < trimmed.length; i++) {
    const line = trimmed[i];
    if (line === '' || line === '{' || line === '}') continue;

    let opens = line.endsWith('{');
    if (!opens) {
      // A `{` on the next non-blank line still opens a block for this header.
      let j = i + 1;
      while (j < trimmed.length && trimmed[j] === '') j++;
      opens = j < trimmed.length && trimmed[j] === '{';
    }
    if (!opens) continue;

    const head = line.replace(/\s*\{$/, '').trim();
    const first = head.split(/\s+/)[0];
    // Keep only plausible keywords: drops `}module` style run-ons from
    // single-line blocks and numeric heads like the `1 {` indices in vehicles.
    if (/^[A-Za-z_][A-Za-z0-9_]*$/.test(first)) keywords.push(first);
  }
  return keywords;
}

/** Sorted { key, count } pairs, descending by count then by key. */
export function histogram(values) {
  const counts = new Map();
  for (const v of values) counts.set(v, (counts.get(v) ?? 0) + 1);
  return [...counts]
    .map(([key, count]) => ({ key, count }))
    .sort((a, b) => b.count - a.count || a.key.localeCompare(b.key));
}

/** Formats an integer with thousands separators, for tables. */
export function n(value) {
  return value.toLocaleString('en-US');
}
