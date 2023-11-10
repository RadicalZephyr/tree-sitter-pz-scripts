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

  rules: {
    identifier: _ => /[a-zA-Z]+/,

    number: _ => /[0-9]+(\.[0-9]+)?/,

    comment: _ => seq(
      '/*',
      /[^*]*\*+([^/*][^*]*\*+)*/,
      '/',
    ),

    source_file: $ => $._module,

    _module: $ => seq(
      'module',
      $.identifier,
      '{',
      optional($.imports),
      '}'
    ),

    imports: $ => seq(
      'imports',
      '{',
      repeat($.identifier),
      '}'
    ),

    item: $ => seq(
      'item',
      $.identifier,
      '{',
      repeat($.item_attribute),
      '}'
    ),

    item_attribute: $ => seq(
      $.identifier,
      '=',
      $.item_attr_value,
      ','
    ),

    item_attr_value: $ => choice(
      $.number,
      $.identifier
    ),

    recipe: $ => seq(
      'recipe',
      $.recipe_name,
      '{',
      repeat1($.recipe_requirement),
      repeat1($.recipe_attribute),
      '}'
    ),

    recipe_name: $ => /[a-zA-Z ]+/,

    recipe_requirement: $ => seq(
      $.identifier,
      '=',
      $.number
    ),

    recipe_attribute: $ => seq(
      $.identifier,
      ':',
      $.recipe_attr_value,
      ','
    ),

    recipe_attr_value: $ => choice(
      $.number,
      $.identifier,
    ),
  }
});
