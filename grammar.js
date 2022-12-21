module.exports = grammar({
  name: 'br',

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => repeat($.line),

    line: $ => seq(
      optional($.line_number),
      optional($.label),
      choice(
        $._single_line_statement,
        $._multi_line_statement
      )
    ),

    _line_end: $ => /(\r?\n)/,

    _single_line_statement: $ => choice(
      $._definition
    ),

    _multi_line_statement: $ => seq(      
      $._statement,
      repeat(
        seq(
          choice(
            /!:[\t ]*\r?\n/,
            ":"
          ),
          $._statement
        )
      )
    ),

    _statement: $ => choice(
      $.print_statement
    ),

    _definition: $ => choice(
      $.function_definition,
      // other types of definitions
    ),

    line_number: $ => /\d{1,5}\s/,
    
    label: $ => /[a-zA-Z_]\w*:\s/,

    function_definition: $ => seq(
      'def',
      choice(
        $.string_function_definition,
        $.numeric_function_definition
      ),
      choice(
        seq(
          "=",
          $._expression
        ),
        seq(
          repeat($.line),
          'fnend'
        )
      )
    ),

    string_function_definition: $ => seq(
      $.string_function_name,
      optional($.function_length),
      $.parameter_list,
    ),

    numeric_function_definition: $ => seq(
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

    print_statement: $ => seq(
      'print',
      $._expression,
      repeat(
        seq(
          choice(
            ",",
            ";"
          ),
          $._expression,
        )
      )
    ),

    _expression: $ => choice(
      $.identifier,
      $.number
      // TODO: other kinds of expressions
    ),

    identifier: $ => /[a-zA-Z_]\w*\$?/,

    number: $ => /\d+(\.\d+)?/
  }
});