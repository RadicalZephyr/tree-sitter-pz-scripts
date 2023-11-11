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
      optional($._definition),
      '}'
    ),

    identifier: _ => /[a-zA-Z]+/,

    name: _ => token.immediate(/[a-zA-Z0-9 ]+/),

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
    ),

    _definition: $ => choice(
      $.item,
      $.recipe,
    ),

    item: $ => seq(
      'item',
      field('name', $.identifier),
      '{',
      repeat1($.item_attribute),
      '}'
    ),

    item_attribute: $ => seq(
      field('key', $.identifier),
      '=',
      field('value', $.item_attribute_value),
        ','
    ),

    // TODO: handle item attr values containing spaces
    item_attribute_value: _ => /\w+/,

    recipe: $ => seq(
      'recipe',
      field('label', $.name),
      '{',
      field('requirements', $.recipe_requirements),
      field('attributes', $.recipe_attributes),
      '}'
    ),

    recipe_requirements: $ => seq(
      repeat1($._recipe_requirement),
      token.immediate('\n\n')
    ),

    _recipe_requirement: $ => choice(
      // TODO: handle other forms of requirements
      $.recipe_direct_req
    ),

    recipe_direct_req: $ => seq($.identifier, ','),

    recipe_attributes: $ => repeat1($.recipe_attribute),

    recipe_attribute: $ => seq(
      $.identifier,
      ':',
      $._recipe_attribute_value,
      ','
    ),

    // TODO: handle other types of attribute values
    _recipe_attribute_value: $ => choice(
      $.number,
      $.identifier,
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
