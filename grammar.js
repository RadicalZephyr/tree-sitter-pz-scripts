/**
 * @file Project Zomboid scripts grammar for tree-sitter
 * @author Zefira Shannon
 * @license ISC
 */

/* eslint-disable arrow-parens */
/* eslint-disable camelcase */
/* eslint-disable-next-line spaced-comment */
/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'pz_scripts',

  extras: $ => [
      /\s/,
    $.comment,
  ],

  rules: {
    module: $ => seq(
      'module',
      $.identifier,
      '{',
      optional($.imports),
      '}'
    ),

    identifier: _ => /[a-zA-Z]+/,

    number: _ => /[0-9]+(\.[0-9]+)?/,

    comment: _ => seq(
      '/*',
      /[^*]*\*+([^/*][^*]*\*+)*/,
      '/',
    ),

    imports: $ => seq(
      'imports',
      '{',
      repeat($.identifier),
      '}'
    )
  }
});
