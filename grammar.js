const NUMERIC_SYSTEM_FUNCTIONS = [
  /[aA][bB][sS]/,
  /[aA][iI][dD][xX]/,
  /[aA][tT][nN]/,
  /[bB][eE][lL][lL]/,
  /[cC][eE][iI][lL]/,
  /[cC][mM][dD][kK][eE][yY]/,
  /[cC][nN][tT]/,
  /[cC][oO][dD][eE]/,
  /[cC][oO][sS]/,
  /[cC][uU][rR][cC][oO][lL]/,
  /[cC][uU][rR][fF][lL][dD]/,
  /[cC][uU][rR][pP][oO][sS]/,
  /[cC][uU][rR][rR][oO][wW]/,
  /[cC][uU][rR][tT][aA][bB]/,
  /[cC][uU][rR][wW][iI][nN][dD][oO][wW]/,
  /[dD][aA][tT][eE]/,
  /[dD][aA][yY][sS]/,
  /[dD][eE][bB][uU][gG]_[sS][tT][rR]/,
  /[dD][iI][dD][xX]/,
  /[eE][rR][rR]/,
  /[eE][xX][iI][sS][tT][sS]/,
  /[eE][xX][pP]/,
  /[fF][iI][lL][eE]/,
  /[fF][iI][lL][eE][nN][uU][mM]/,
  /[fF][kK][eE][yY]/,
  /[fF][pP]/,
  /[fF][rR][eE][eE][sS][pP]/,
  /[iI][nN][fF]/,
  /[iI][nN][tT]/,
  /[iI][pP]/,
  /[kK][lL][nN]/,
  /[kK][pP][sS]/,
  /[kK][rR][eE][cC]/,
  /[lL][eE][nN]/,
  /[lL][iI][nN][eE]/,
  /[lL][iI][nN][eE][sS]/,
  /[lL][iI][nN][eE][sS][pP][pP]/,
  /[lL][oO][gG]/,
  /[lL][rR][eE][cC]/,
  /[mM][aA][tT]2[sS][tT][rR]/,
  /[mM][aA][xX]/,
  /[mM][iI][nN]/,
  /[mM][oO][dD]/,
  /[mM][sS][gG]/,
  /[mM][sS][gG][bB][oO][xX]/,
  /[nN][eE][wW][pP][aA][gG][eE]/,
  /[nN][eE][xX][tT]/,
  /[nN][xX][tT][cC][oO][lL]/,
  /[nN][xX][tT][fF][lL][dD]/,
  /[nN][xX][tT][rR][oO][wW]/,
  /[oO][rR][dD]/,
  /[pP][iI]/,
  /[pP][oO][sS]/,
  /[pP][rR][iI][nN][tT][eE][rR]_[lL][iI][sS][tT]/,
  /[pP][rR][oO][cC][iI][nN]/,
  /[rR][eE][cC]/,
  /[rR][eE][mM]/,
  /[rR][lL][nN]/,
  /[rR][nN][dD]/,
  /[rR][oO][uU][nN][dD]/,
  /[sS][eE][rR][iI][aA][lL]/,
  /[sS][eE][tT][eE][nN][vV]/,
  /[sS][gG][nN]/,
  /[sS][iI][nN]/,
  /[sS][lL][eE][eE][pP]/,
  /[sS][qQ][rR]/,
  /[sS][rR][cC][hH]/,
  /[sS][tT][rR]2[mM][aA][tT]/,
  /[sS][uU][mM]/,
  /[tT][aA][bB]/,
  /[tT][aA][nN]/,
  /[tT][iI][mM][eE][rR]/,
  /[uU][dD][iI][mM]/,
  /[vV][aA][lL]/,
  /[vV][eE][rR][sS][iI][oO][nN]/
]

const STRING_SYSTEM_FUNCTIONS = [
  /[bB][rR]_[fF][iI][lL][eE][nN][aA][mM][eE]\$/,
  /[bB][rR][eE][rR][rR]\$/,
  /[cC][fF][oO][rR][mM]\$/,
  /[cC][hH][rR]\$/,
  /[cC][nN][vV][rR][tT]\$/,
  /[dD][aA][tT][eE]\$/,
  /[dD][eE][cC][rR][yY][pP][tT]\$/,
  /[eE][nN][cC][rR][yY][pP][tT]\$/,
  /[eE][nN][vV]\$/,
  /[fF][iI][lL][eE]\$/,
  /[hH][eE][lL][pP]\$/,
  /[hH][eE][xX]\$/,
  /[kK][sS][tT][aA][tT]\$/,
  /[lL][oO][gG][iI][nN]_[nN][aA][mM][eE]\$/,
  /[lL][pP][aA][dD]\$/,
  /[lL][tT][rR][mM]\$/,
  /[lL][wW][rR][cC]\$/,
  /[mM][aA][xX]\$/,
  /[mM][iI][nN]\$/,
  /[mM][sS][gG]\$/,
  /[oO][sS]_[fF][iI][lL][eE][nN][aA][mM][eE]\$/,
  /[pP][iI][cC]\$/,
  /[pP][rR][oO][gG][rR][aA][mM]\$/,
  /[rR][pP][aA][dD]\$/,
  /[rR][pP][tT]\$/,
  /[rR][tT][rR][mM]\$/,
  /[sS][eE][sS][sS][iI][oO][nN]\$/,
  /[sS][rR][eE][pP]\$/,
  /[sS][tT][rR]\$/,
  /[tT][iI][mM][eE]\$/,
  /[tT][rR][iI][mM]\$/,
  /[uU][nN][hH][eE][xX]\$/,
  /[uU][pP][rR][cC]\$/,
  /[uU][sS][eE][rR][iI][dD]\$/,
  /[vV][aA][rR][iI][aA][bB][lL][eE]\$/,
  /[wW][bB][pP][lL][aA][tT][fF][oO][rR][mM]\$/,
  /[wW][bB][vV][eE][rR][sS][iI][oO][nN]\$/,
  /[wW][sS][iI][dD]\$/,
  /[xX][lL][aA][tT][eE]\$/  
]

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
    //   'call',
    //   $.update_expression,
    //   'unary_not',
      'unary_void',
      'binary_exp',
      'binary_times',
      'binary_plus',
      'binary_shift',
      // 'binary_compare',
      'binary_relation',
      'binary_equality',
      'bitwise_and',
      // 'bitwise_xor',
      // 'bitwise_or',
      'logical_and',
      'logical_or',
    ],
    // [$.rest_pattern, 'assign'],
    ['assign', $.numeric_primary_expression],
    // ['member', 'new', 'call', $.expression],
    // ['declaration', 'literal'],
    // [$.numeric_primary_expression, $.statement_block, 'object'],
  ],
  externals: $ => [
    $.eol,
    $.comment
  ],

  extras: $ => [
    /[ \t]/
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
      ),
      $.eol
    ),

    _line_end: $ => /(\r?\n)/,

    _single_line_statement: $ => choice(
      $._definition
    ),

    statement_separator: $ => ":",

    continuation: $=> /!:[\t ]*(\r?\n)?/,

    _multi_line_statement: $ => seq(      
      $.statement,
      repeat(
        seq(
          choice(
            $.continuation,
            $.statement_separator
            // $.comment_continuation,
            // $.comment_sep
          ),
          $.statement,
        )
      )
    ),

    statement: $ => choice(
      $.comment,
      seq(
        choice(
          $.mat_statement,
          $.print_statement,
          $.let_statement,
        ),
        optional($.comment)
      )
    ),

    let_statement: $ => seq(
      optional(seq(/[lL][eE][tT]/,
      /[ \t]+/)),
      choice(
        $.string_assignment_expression,
        $.numeric_assignment_expression,
        $.numeric_expression
      )
    ),

    mat_statement: $ => seq(
      $._mat,
      choice(
        seq(
          $.stringidentifier,
          optional(
            seq(
              "(",
              commaSep1($.numeric_expression),
              ")",
              optional(
                seq(
                  "=",
                  "(",
                  $.string_expression,
                  ")"
                )
              )
            )
          )
        ),
        seq(
          $.numberidentifier,
          optional(
            seq(
              "(",
              commaSep1($.numeric_expression),
              ")",
              optional(
                seq(
                  "=",
                  "(",
                  $.numeric_expression,
                  ")"
                )
              )
            )
          )
        )
      )
    ),

    _definition: $ => choice(
      $.function_definition,
      // other types of definitions
    ),

    line_number: $ => /\d{1,5}[ \t]/,
    
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
          $.numeric_expression
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

    print_statement: $ => seq(
      /[pP][rR][iI][nN][tT]/,
      /[ \t]+/,
      $.expression,
      repeat(
        seq(
          choice(
            ",",
            ";"
          ),
          $.expression,
        )
      )
    ),

    expression: $ => choice(
      $.string_array_expression,
      $.numeric_array_expression,
      $.numeric_expression,
      $.string_expression
    ),

    string_array_expression: $ => choice(
      $.string_array_forced_assignment_expression,
      $.string_array_primary_expression
    ),

    numeric_array_expression: $ => choice(
      $.numeric_array_forced_assignment_expression,
      $.numeric_array_primary_expression
    ),

    numeric_expression: $ => choice(
      $.numeric_forced_assignment_expression,
      $.numeric_unary_expression,
      $.numeric_binary_expression,
      $.numeric_primary_expression,
    ),

    string_expression: $ => choice(
      $.string_forced_assignment_expression,
      $.string_binary_expression,
      $.string_primary_expression,
    ),

    string_binary_expression: $ => prec.left(seq(
      field('left', $.string_expression),
      field('operator', "&"),
      field('right', $.string_expression)
    )),

    numeric_binary_expression: $ => choice(
      ...[
        ['and', 'logical_and'],
        ['&&', 'logical_and'],
        ['or', 'logical_or'],
        ['||', 'logical_or'],
        ['>>', 'binary_shift'],
        ['<<', 'binary_shift'],
        ['&', 'bitwise_and'],
        ['+', 'binary_plus'],
        ['-', 'binary_plus'],
        ['*', 'binary_times'],
        ['/', 'binary_times'],
        ['%', 'binary_times'],
        ['**', 'binary_exp', 'right'],
        ['<', 'binary_relation'],
        ['<=', 'binary_relation'],
        ['==', 'binary_equality'],
        ['~=', 'binary_equality'],
        ['>=', 'binary_relation'],
        ['>', 'binary_relation'],
      ].map(([operator, precedence, associativity]) =>
        (associativity === 'right' ? prec.right : prec.left)(precedence, seq(
          field('left', $.numeric_expression),
          field('operator', operator),
          field('right', $.numeric_expression)
        ))
      )
    ),

    numeric_unary_expression: $ => prec.left('unary_void', seq(
      field('operator', choice('~', '-', '+', /[nN][oO][tT][ \t]*/)),
      field('argument', $.numeric_expression)
    )),

    numeric_array_primary_expression: $ => choice(
      $.numberarray
    ),

    string_array_primary_expression: $ => choice(
      $.stringarray,
    ),

    numeric_primary_expression: $ => choice(
      $._numeric_reference,
      $.parenthesized_expression,
      $.number,
      $.numeric_call_expression
    ),

    string_primary_expression: $ => choice(
      $._string_reference,
      $.string,
      $.template_string,
      $.string_call_expression
    ),

    numeric_call_expression: $ => choice(
      $.numeric_system_function,
      $.numeric_user_function
    ),

    string_call_expression: $ => choice(
      $.string_system_function,
      $.string_user_function
    ),

    numeric_system_function: $ => seq(
      field('function', choice(
        ...NUMERIC_SYSTEM_FUNCTIONS
      )),
      optional(field('arguments', $.arguments))
    ),

    string_system_function: $ => seq(
      field('function', choice(
        ...STRING_SYSTEM_FUNCTIONS
      )),
      optional(field('arguments', $.arguments))
    ),

    numeric_user_function: $ => seq(
      field('function', choice(
        $._numeric_function_identifier
      )),
      optional(field('arguments', $.arguments))
    ),

    string_user_function: $ => seq(
      field('function', choice(
        $._string_function_identifier,
      )),
      optional(field('arguments', $.arguments))
    ),

    arguments: $ => seq(
      "(",
      commaSep1($.expression),
      ")"
    ),

    _string_function_identifier: $ => /[fF][nN]\w+\$/,
    _numeric_function_identifier: $ => /[fF][nN]\w+/,

    template_string: $ => seq(
      '`',
      repeat(choice(
        $._template_chars,
        "``",
        $.template_substitution
      )),
      '`'
    ),

    _template_chars: $ => /[^`]/,

    template_substitution: $ => seq(
      '{{',
      $.string_expression,
      '}}'
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
      $.numeric_expression,
      ')'
    ),

    string_assignment_expression: $ => prec.right('assign', seq(
      field('left', $._string_reference),
      '=',
      field('right', choice(
        $.string_expression,
        $.string_assignment_expression
      ))
    )),

    numeric_assignment_expression: $ => prec.right('assign', seq(
      field('left', $._numeric_reference),
      '=',
      field('right', choice(
        $.numeric_expression,
        $.numeric_assignment_expression
      ))
    )),

    string_array_forced_assignment_expression: $ => prec.right('assign', seq(
      field('left', $.stringarray),
      ":=",
      field('right', choice(
        seq(
          "(",
          choice(
            $.string_expression,
            $.string_array_expression
          ),
          ")"
        ),
        $.string_array_expression
      ))
    )),

    numeric_array_forced_assignment_expression: $ => prec.right('assign', seq(
      field('left', $.numberarray),
      ":=",
      field('right', choice(
        seq(
          "(",
          choice(
            $.numeric_expression,
            $.numeric_array_expression
          ),
          ")"
        ),
        $.numeric_array_expression
      ))
    )),

    numeric_forced_assignment_expression: $ => prec.right('assign', seq(
      field('left', $._numeric_reference),
      choice(...FORCED_ASSIGNMENT_OPERATORS),
      field('right', $.numeric_expression)
    )),

    string_forced_assignment_expression: $ => prec.right('assign', seq(
      field('left', $._string_reference),
      ":=",
      field('right', $.string_expression)
    )),

    _numeric_reference: $ => choice(
      $.numberelement,
      $.numberreference
    ),

    _string_reference: $ => choice(
      $.stringelement,
      $.stringreference,
    ),

    numberelement: $ => seq(
      $.numberidentifier,
      seq(
        "(",
        commaSep1($.numeric_expression),
        ")"
      )
    ),

    stringelement: $ => seq(
      $.stringidentifier,
      seq(
        "(",
        commaSep1($.numeric_expression),
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
      $.numeric_expression,
      ':',
      $.numeric_expression
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
