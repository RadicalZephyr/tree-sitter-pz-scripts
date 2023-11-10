module.exports = grammar({
  name: 'pz_scripts',

  rules: {
    source_file: $ => $._module,

    _module: $ => seq(
      'module',
      $.identifier,
      '{',
      opt($.imports),
      '}'
    ),

    imports: $ => seq(
      'imports',
      '{',
      repeat($.identifier),
      '}'
    ),

    identifier: $ => /\w+/,

    number: $ => /\d+/,

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
