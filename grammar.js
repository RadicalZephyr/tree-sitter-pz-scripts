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

    identifier: _ => /[a-zA-Z][a-zA-Z0-9]*/,

    // TODO: make sure that name parsing captures names correctly
    // without leading or trailing spaces
    name: _ => token(separated_list1(' ', /[a-zA-Z][a-zA-Z0-9]*/)),

    number: _ => /[0-9]+(\.[0-9]+)?/,

    comment: _ => seq(
      '/*',
      /[^*]*\*+([^/*][^*]*\*+)*/,
      '/',
    ),

    imports: $ => seq(
      'imports',
      '{',
      separated_list(',', $.identifier),
      '}'
    ),

    _definition: $ => choice(
      $.item,
      $.recipe,
    ),


    ////////////////////////////////////////
    // Item
    ////////////////////////////////////////

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


    ////////////////////////////////////////
    // Recipe
    ////////////////////////////////////////

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
      $.recipe_requirement_choice,
      $.recipe_requirement_simple
    ),

    recipe_requirement_choice: $ => seq(
      separated_list2(
        token.immediate('/'),
        $.identifier
      ),
      ','
    ),

    recipe_requirement_simple: $ => seq($.identifier, ','),

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
 * Creates a rule to match two or more of the rules separated by a
 * separator.
 *
 * @param {RuleOrLiteral} sep
 * @param {RuleOrLiteral} rule
 *
 * @return {SeqRule}
 *
 */
function separated_list2(sep, rule) {
  return seq(rule, repeat1(seq(sep, rule)));
}

/**
 * Creates a rule to match one or more of the rules separated by a
 * separator.
 *
 * @param {RuleOrLiteral} sep
 * @param {RuleOrLiteral} rule
 *
 * @return {SeqRule}
 *
 */
function separated_list1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)));
}

/**
 * Creates a rule to optionally match one or more of the rules
 * separated by a separator
 *
 * @param {RuleOrLiteral} sep
 * @param {RuleOrLiteral} rule
 *
 * @return {ChoiceRule}
 *
 */
function separated_list(sep, rule) {
  return optional(separated_list1(sep, rule));
}
