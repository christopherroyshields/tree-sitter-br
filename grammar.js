const FORCED_ASSIGNMENT_OPERATORS = [
  ":=",
  "+=",
  "-=",
  "*=",
  "/=",
]

module.exports = grammar({
  name: 'br',
  word: $ => $.identifier,
  precedences: $ => [
    [
    //   'member',
    //   'call',
    //   $.update_expression,
    //   'unary_not',
      'unary_void',
    //   'binary_exp',
    //   'binary_times',
    //   'binary_plus',
    //   'binary_compare',
    //   'binary_relation',
    //   'binary_in',
    //   'binary_and',
    //   'binary_or',
    //   'ternary',
    //   $.await_expression,
    //   $.sequence_expression,
    //   $.arrow_function
    ],
    // [$.rest_pattern, 'assign'],
    ['assign', $.primary_expression],
    // ['member', 'new', 'call', $.expression],
    // ['declaration', 'literal'],
    // [$.primary_expression, $.statement_block, 'object'],
    // [$.import_statement, $.import],
    // [$.export_statement, $.primary_expression],
  ],
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
      $.statement,
      repeat(
        seq(
          choice(
            /!:[\t ]*\r?\n/,
            ":"
          ),
          $.statement
        )
      )
    ),

    statement: $ => choice(
      $.print_statement,
      $.let_statement
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
      field('length', $.number)
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

    let_statement: $ => seq(
      /[lL][eE][tT]/,
      /[ \t]+/,
      choice(
        $.assignment_expression,
        $._expression
      )
    ),

    print_statement: $ => seq(
      /[pP][rR][iI][nN][tT]/,
      /[ \t]+/,
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
      $.forced_assignment_expression,
      // $.augmented_assignment_expression,
      $.unary_expression,
      // $.binary_expression,
      $.primary_expression,

      // $._reference,
      // $.number
      // TODO: other kinds of expressions
    ),

    unary_expression: $ => prec.left('unary_void', seq(
      field('operator', choice('~', '-', '+', /[nN][oO][tT][ \t]*/)),
      field('argument', $._expression)
    )),

    primary_expression: $ => choice(
      // $.subscript_expression,
      $.parenthesized_expression,
      // $.identifier,
      $._reference,
      // alias($._reserved_identifier, $.identifier),
      $.number,
      $.string,
      // $.template_string,
      // $.array,
      // $.function,
      // $.call_expression
    ),

    string: $ => choice(
      seq(
        '"',
        token.immediate(repeat(choice(
          /[^"\r\n]/,
          "\"\""
        ))),
        '"'
      ),
      seq(
        "'",
        token.immediate(repeat(choice(
          /[^'\r\n]/,
          "''"
        ))),
        "'"
      )
    ),

    parenthesized_expression: $ => seq(
      '(',
      $._expression,
      ')'
    ),

    assignment_expression: $ => prec.right('assign', seq(
      field('left', $._reference),
      '=',
      field('right', $._expression)
    )),

    forced_assignment_expression: $ => prec.right('assign', seq(
      field('left', $._reference),
      choice(...FORCED_ASSIGNMENT_OPERATORS),
      field('right', $._expression)
    )),

    _reference: $ => choice(
      $.stringarray,
      $.numberarray,
      $.stringelement,
      $.numberelement,
      $.stringreference,
      $.numberreference
    ),

    numberelement: $ => seq(
      $.numberidentifier,
      seq(
        "(",
        commaSep1($._expression),
        ")"
      )
    ),

    stringelement: $ => seq(
      $.stringidentifier,
      seq(
        "(",
        commaSep1($._expression),
        ")"
      ),
      repeat(
        seq(
          "(",
          $.range,
          ")"
        )
      )
    ),

    stringarray: $ => seq(
      $._mat,
      $.stringidentifier,
      repeat($.dimension)
    ),

    dimension: $ => seq(
      "(",
      commaSep1(
        $.range
      ),
      ")"
    ),

    stringreference: $ => seq(
      $.stringidentifier,
      repeat(
        seq(
          "(",
          $.range,
          ")"
        )
      )
    ),

    numberreference: $ => $.numberidentifier,

    range: $ => seq(
      $._expression,
      ':',
      $._expression
    ),

    stringidentifier: $ => /[a-zA-Z_]\w*\$/,

    numberarray: $ => seq(
      $._mat,
      $.numberidentifier,
      optional($.dimension)
    ),

    numberidentifier: $ => /[a-zA-Z_]\w*/,

    _mat: $ => /[mM][aA][tT][ \t]/,

    identifier: $ => token(seq(
      /[a-zA-Z_]\w*/,
      optional(field('isString', token.immediate('$')))
    )),

    number: $ => seq(
      /\d+/,
      optional(
        seq(
          ".",
          /\d+/
        )
      )
    )
  }
});

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}

function commaSep(rule) {
  return optional(commaSep1(rule));
}
