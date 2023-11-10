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
      commaSep($.identifier),
      '}'
    )
  }
});

/**
 * Creates a rule to match one or more of the rules separated by a comma
 *
 * @param {RuleOrLiteral} rule
 *
 * @return {SeqRule}
 *
 */
function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}

/**
 * Creates a rule to optionally match one or more of the rules separated by a comma
 *
 * @param {RuleOrLiteral} rule
 *
 * @return {ChoiceRule}
 *
 */
function commaSep(rule) {
  return optional(commaSep1(rule));
}
