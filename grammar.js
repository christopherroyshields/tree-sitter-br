module.exports = grammar({
  name: 'br',

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.string_function_definition,
      $.numeric_function_definition
    ),

    string_function_definition: $ => seq(
      'def',
      $.string_function_name,
      optional($.function_length),
      $.parameter_list,
    ),

    numeric_function_definition: $ => seq(
      'def',
      $.numeric_function_name,
      $.parameter_list
    ),

    function_length: $ => seq(
      '*',
      $.number
    ),

    string_function_name: $ => /fn\w+\$/i,
    numeric_function_name: $ => /fn\w+/i,
    
    parameter_list: $ => seq(
      '(',
      $.parameter,
      ')'
    ),

    parameter: $ => seq(
      optional('&'),
      $.identifier,
      optional('*'),
      optional($.number)
    ),

    _type: $ => choice(
      'bool'
      // TODO: other kinds of types
    ),

    _statement: $ => choice(
      $.return_statement
      // TODO: other kinds of statements
    ),

    return_statement: $ => seq(
      'return',
      $._expression,
      ';'
    ),

    _expression: $ => choice(
      $.identifier,
      $.number
      // TODO: other kinds of expressions
    ),

    identifier: $ => /[a-z]\w*\$?/,

    number: $ => /\d+/
  }
});