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
  "="
]

const STATEMENTS = {
  chain: /[cC][hH][aA]?[iI]?[nN]?/,
  close: /[cC][lL][oO][sS][eE]/,
  form: /[fF][oO][rR][mM]/,
  continue: /[cC][oO][nN][tT][iI][nN][uU][eE]/,
  data: /[dD][aA][tT][aA]/,
  def: /[dD][eE][fF]/,
  delete: /[dD][eE][lL][eE][tT][eE]/,
  dim: /[dD][iI][mM]/,
  do: /[dD][oO]/,
  else: /[eE][lL][sS][eE]/,
  if: /[iI][fF]/,
  end_def: /[eE][nN][dD][ \t]+[dD][eE][fF]/,
  end_if: /[eE][nN][dD][ \t]+[iI][fF]/,
  end: /[eE][nN][dD]/,
  execute: /[eE][xX][eE][cC][uU][tT][eE][ \t]/,
  exit_do: /[eE][xX][iI][tT][ \t]+[dD][oO]/,
  exit: /[eE][xX][iI][tT]/,
  fnend: /[fF][nN][eE][nN][dD]/,
  for: /[fF][oO][rR]/,
  gosub: /[gG][oO][sS][uU][bB]/,
  goto: /[gG][oO][tT][oO]/,
  print_fields: /[pP][rR][iI][nN][tT] [fF][iI][eE][lL][dD][sS]/,
  input: /[iI][nN][pP][uU][tT]/,
  rinput: /[rR][iI][nN][pP][uU][tT]/,
  let: /[lL][eE][tT]/,
  linput: /[lL][iI][nN][pP][uU][tT]/,
  loop: /[lL][oO][oO][pP]/,
  next: /[nN][eE][xX][tT]/,
  on: /[oO][nN]/,
  open: /[oO][pP][eE][nN]/,
  option: /[oO][pP][tT][iI][oO][nN]/,
  pause: /[pP][aA][uU][sS][eE]/,
  print: /[pP][rR][iI][nN][tT]/,
  randomize: /[rR][aA][nN][dD][oO][mM][iI][zZ][eE]/,
  read: /[rR][eE][aA][dD]/,
  rem: /[rR][eE][mM]/,
  reread: /[rR][eE][rR][eE][aA][dD]/,
  restore: /[rR][eE][sS][tT][oO][rR][eE]/,
  retry: /[rR][eE][tT][rR][yY]/,
  return: /[rR][eE][tT][uU][rR][nN]/,
  rewrite: /[rR][eE][wW][rR][iI][tT][eE]/,
  stop: /[sS][tT][oO][pP]/,
  trace: /[tT][rR][aA][cC][eE]/,
  while: /[wW][hH][iI][lL][eE]/,
  write: /[wW][rR][iI][tT][eE]/,
  end_select: /#[eE][nN][dD][ \t]+[sS][eE][lL][eE][cC][tT]#/,
  select: /#[sS][eE][lL][eE][cC][tT]#/,
  case: /#[cC][aA][sS][eE]#/,
  case_else: /#[cC][aA][sS][eE][ \t]+[eE][lL][sS][eE]#/,
}

const KEYWORD = {
  free: /[fF][rR][eE][eE]/,
  drop: /[dD][rR][oO][pP]/,
  release: /[rR][eE][lL][eE][aA][sS][eE]/,
  rec: /[rR][eE][cC]/,
  key: /[kK][eE][yY]/,
  release: /[rR][eE][lL][eE][aA][sS][eE]/,
  reserve: /[rR][eE][sS][eE][rR][vV][eE]/,
  while: /[wW][hH][iI][lL][eE]/,
  until: /[uU][nN][tT][iI][lL]/,
  then: /[tT][hH][eE][nN]/,
  to: /[tT][oO]/,
  step: /[sS][tT][eE][pP]/,
  attr: /,[ \t]*[aA][tT][tT][rR][ \t]/,
  help: /,[ \t]*[hH][eE][lL][pP][ \t]/,
  wait: /[wW][aA][iI][tT]=/,
  fields: /[fF][iI][eE][lL][dD][sS][ \t]/,
  ignore: /[iI][gG][nN][oO][rR][eE]/,
  system: /[sS][yY][sS][tT][eE][mM]/,
  none: /[nN][oO][nN][eE]/,
  internal: /[iI][nN][tT][eE][rR][nN][aA][lL]/,
  external: /[eE][xX][tT][eE][rR][nN][aA][lL]/,
  display: /[dD][iI][sS][pP][lL][aA][yY]/,
  input: /[iI][nN][pP][uU][tT]/,
  output: /[oO][uU][tT][pP][uU][tT]/,
  outin: /[oO][uU][tT][iI][nN]/,
  sequential: /[sS][eE][qQ][uU][eE][nN][tT][iI][aA][lL]/,
  keyed: /[kK][eE][yY][eE][dD]/,
  relative: /[rR][eE][lL][aA][tT][iI][vV][eE]/,
  base: /[bB][aA][sS][eE]/,
  invp: /[iI][nN][vV][pP]/,
  collate: /[cC][oO][lL][lL][aA][tT][eE]/,
  native: /[nN][aA][tT][iI][vV][eE]/,
  alternate: /[aA][lL][tT][eE][rR][nN][aA][tT][eE]/,
  border: /[bB][oO][rR][dD][eE][rR][ \t]/,
  using: /[uU][sS][iI][nN][gG][ \t]/,
  first: /[fF][iI][rR][sS][tT]/,
  last: /[lL][aA][sS][tT]/,
  prior: /[pP][rR][iI][oO][rR]/,
  next: /[nN][eE][xX][tT]/,
  same: /[sS][aA][mM][eE]/,
  search: /[sS][eE][aA][rR][cC][hH]/,
  pos: /[pP][oO][sS]/,
  keyonly: /[kK][eE][yY][oO][nN][lL][yY]/,
  link: /[lL][iI][nN][kK]/,
  on: /[oO][nN]/,
  off: /[oO][fF][fF]/,
  print: /[pP][rR][iI][nN][tT]/,
  files: /[fF][iI][lL][eE][sS]/,
  library: /[lL][iI][bB][rR][aA][rR][yY]/,
}

const FORMAT_SPECS = [
  /[bB][lL]/,
  /[bB][hH]/,
  /[bB]/,
  /[cC][cC]/,
  /[cC][rR]/,
  /[cC]/,
  /[dD][hH]/,
  /[dD][lL]/,
  /[dD][tT]/,
  /[dD]/,
  /[gG][fF]/,
  /[gG][zZ]/,
  /[gG]/,
  /[lL]/,
  /[nN][zZ]/,
  /[nN]/,
  /[pP][oO][sS]/,
  /[pP][dD]/,
  /[pP]/,
  /[sS][kK][iI][pP]/,
  /[sS]/,
  /[vV]/,
  /[xX]/,
  /[zZ][dD]/
]

const ERROR_CONDITION = [
  /[aA][tT][tT][nN]/,
  /[cC][oO][nN][vV]/,
  /[eE][oO][fF]/,
  /[eE][rR][rR][oO][rR]/,
  /[hH][eE][lL][pP]/,
  /[iI][oO][eE][rR][rR]/,
  /[lL][oO][cC][kK][eE][dD]/,
  /[oO][fF][lL][oO][wW]/,
  /[pP][aA][gG][eE][oO][fF][lL][oO][wW]/,
  /[sS][oO][fF][lL][oO][wW]/,
  /[tT][iI][mM][eE][oO][uU][tT]/,
  /[zZ][dD][iI][vV]/,
  /[nN][oO][rR][eE][cC]/,
  /[nN][oO][kK][eE][yY]/
]

const FNKEY = /[fF][nN][kK][eE][yY]/

const getStatements = $ => [
  $.chain_statement,
  $.close_statement,
  $.continue_statement,
  $.data_statement,
  $.def_statement,
  $.delete_statement,
  $.do_statement,
  $.end_def_statement,
  $.end_if_statement,
  $.end_statement,
  $.execute_statement,
  $.exit_do_statement,
  $.exit_statement,
  $.mat_statement,
  $.print_statement,
  $.let_statement,
  $.form_statement,
  $.fnend_statement,
  $.form_statement,
  $.for_statement,
  $.gosub_statement,
  $.goto_statement,
  $.input_statement,
  $.linput_statement,
  $.loop_statement,
  $.next_statement,
  $.on_statement,
  $.open_statement,
  $.pause_statement,
  $.randomize_statement,
  $.read_statement,
  $.rem_statement,
  $.reread_statement,
  $.restore_statement,
  $.retry_statement,
  $.return_statement,
  $.rewrite_statement,
  $.stop_statement,
  $.trace_statement,
  $.write_statement,
  $.case_statement,
  $.case_else_statement,
  $.select_case_statement,
  $.end_select_statement,
]

module.exports = grammar({
  name: 'br',
  word: $ => $.identifier,
  precedences: $ => [
    [
      'unary_void',
      'binary_exp',
      'binary_times',
      'binary_plus',
      'binary_shift',
      'binary_relation',
      'binary_equality',
      'bitwise_and',
      'logical_and',
      'logical_or',
    ],
    ['assign', $.numeric_primary_expression],
    [$.string_expression, $.conditional_string_expression],
    ['assign','call']
  ],

  externals: $ => [
    $.eol,
    $.comment,
    $.multiplier
  ],

  extras: $ => [
    /[ \t]/,
    /!_.*\n/
  ],

  rules: {
    source_file: $ => repeat($.line),
    // source_file: $ => choice($.foo,$.bar),

    // fnname: $ => /fntest/,
    
    // foo: $ => seq(
    //   $.fnname,
    //   "=",
    //   "1"
    // ),

    // bar: $ => seq(
    //   $.fnname
    // ),

    line: $ => seq(
      optional($.line_number),
      optional($.label),
      choice(
        $._single_line_statement,
        $._multi_line_statement,
        $.multiline_comment
      ),
      seq($.eol,repeat($._line_end))
    ),

    multiline_comment: $ => seq(
      '/*',
      /[^*]*\*+([^/*][^*]*\*+)*/,
      '/'
    ),

    _line_end: $ => /(\r?\n)/,

    _single_line_statement: $ => seq(
      choice(
        $.dim_statement,
        $.option_statement,
      ),
      optional($.comment)
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
          ),
          $.statement,
        )
      )
    ),

    statement: $ => choice(
      $.comment,
      seq(
        choice(
          $.if_statement,
          $.else_statement,
          ...getStatements($)
        ),
        optional($.comment)
      )
    ),

    continue_statement: $ => STATEMENTS.continue,

    close_statement: $ => seq(
      STATEMENTS.close,
      "#",
      $.numeric_expression,
      optional(seq(",",choice(
        KEYWORD.free,
        KEYWORD.drop
      ))),
      optional(seq(",",choice(
        KEYWORD.release
      ))),
      ":",
      optional(
        $.error_condition_list
      )
    ),

    data_statement: $ => seq(
      STATEMENTS.data,
      commaSep1(choice(
        $.unquoted_data,
        $.string,
        $.number
      ))
    ),

    def_statement: $ => seq(
      STATEMENTS.def,
      optional($.library_keyword),      
      choice(
        $.string_function_definition,
        $.numeric_function_definition,
      )
    ),

    library_keyword: $ => KEYWORD.library,

    string_function_definition: $ => seq(
      $.string_function_name,
      optional($.function_length),
      optional($.parameter_list),
      optional(seq(
        "=",
        $.string_expression
      ))
    ),

    numeric_function_definition: $ => seq(
      $.numeric_function_name,
      optional($.parameter_list),
      optional(seq(
        "=",
        $.numeric_expression
      ))
    ),

    function_length: $ => seq(
      '*',
      field('length', $.int)
    ),

    string_function_name: $ => /[fF][nN]\w+\$/i,
    numeric_function_name: $ => /[fF][nN]\w+/i,
    
    parameter_list: $ => seq(
      '(',
      choice(
        seq(
          ";",
          commaSep1($.optional_parameter)
        ),
        seq(
          commaSep1($.required_paramter),
          optional(seq(
            ";",
            commaSep1($.optional_parameter)
          ))
        )
      ),
      ')'
    ),

    optional_parameter: $ => $.parameter,
    required_paramter: $ => $.parameter,

    parameter: $ => seq(
      optional('&'),
      choice(
        $.string_parameter,
        $.numeric_parameter,
        $.string_array_paramter,
        $.number_array_parameter,
        $.param_substitution,
      ),
    ),

    param_substitution: $ => seq(
      "[[",
      /\w+/,
      "]]"
    ),

    string_array_paramter: $ => $.string_array_name,
    number_array_parameter: $ => $.number_array_name,

    numeric_parameter: $ => $.number_name,

    string_parameter: $ => seq(
      $.string_name,
      optional(seq(
        '*',
        $.int
      )
    )),

    delete_statement: $ => seq(
      STATEMENTS.delete,
      "#",
      $.numeric_expression,
      optional(
        seq(
          ",",
          choice(
            seq(
              KEYWORD.rec,
              token.immediate("="),
              $.numeric_expression
            ),
            seq(
              KEYWORD.key,
              token.immediate("="),
              $.string_expression
            )
          )
        )
      ),
      optional(
        seq(
          ",",
          $.record_locking_rule
        )
      ),
      ":",
      optional(
        $.error_condition_list
      )
    ),

    dim_statement: $ => seq(
      STATEMENTS.dim,
      commaSep1(
        choice(
          $.number_name,
          seq(
            alias($.number_name, $.number_array_name),
            "(",
            commaSep1(/\d+/),
            ")",
          ),
          seq(
            $.string_name,
            optional(
              seq(
                "*",
                /\d+/
              )
            )
          ),
          seq(
            alias($.stringidentifier,$.string_array_name),
            "(",
            commaSep1(/\d+/),
            ")",
            optional(
              seq(
                "*",
                /\d+/
              )
            )
          )
        )
      )
    ),

    do_statement: $ => seq(
      STATEMENTS.do,
      optional(seq(
        choice(
          KEYWORD.while,
          KEYWORD.until
        ),
        $.conditional_expression
      ))
    ),

    error_condition_list: $ => commaSep1(
      seq(
        $.error_condition,
        choice(
          $.line_reference,
          $.label_reference
        )
      )
    ),

    error_condition: $ => choice(
      seq(FNKEY, $.numeric_expression),
      ...ERROR_CONDITION.map((cond) => cond)
    ),

    line_reference: $ => /\d+/,

    chain_statement: $ => seq(
      STATEMENTS.chain,
      $.string_expression,
      optional(
        seq(
          ",",
          choice(
            seq(
              $.chain_files,
              optional(seq(
                ",",
                commaSep1(
                  choice(
                    $.number_name,
                    $.string_name,
                    $.string_array_name,
                    $.number_array_name,
                  )
                ),
              ))
            ),
            commaSep1(
              choice(
                $.number_name,
                $.string_name,
                $.string_array_name,
                $.number_array_name,
              )
            ),
          ),
        )
      )
    ),

    chain_files: $ => token(prec(1,KEYWORD.files)),

    form_statement: $ => seq(
      STATEMENTS.form,
      commaSep1(
        choice(
          $.formspec,
          seq(
            $.form_multiplier,
            "(",
            commaSep1($.formspec),
            ")"
          )
        )
      )
    ),

    form_multiplier: $ => seq(
      choice(
        alias($.multiplier, $.number_name),
        $.int
      ),
      "*"
    ),

    else_statement: $ => seq(
      STATEMENTS.else,
      optional(
        alias(choice(
          ...getStatements($),
          $.if_statement
        ), $.statement)
      )
    ),

    end_def_statement: $ => STATEMENTS.end_def,
    end_if_statement: $ =>  STATEMENTS.end_if,
    end_statement: $ => STATEMENTS.end,
    execute_statement: $ => seq(
      STATEMENTS.execute,
      $.string_expression
    ),
    exit_do_statement: $ => STATEMENTS.exit_do,
    exit_statement: $ => seq(
      STATEMENTS.exit,
      optional($.error_condition_list)
    ),

    if_statement: $ => seq(
      STATEMENTS.if,
      $.conditional_expression,
      KEYWORD.then,
      optional(
        seq(
          alias(choice(
            ...getStatements($)
          ), $.statement),
          optional($.else_statement)
        )
      )
    ),

    int: $ => /\d+/,

    _pic: $ => /[pP][iI][cC]\([^)\n]*\)/,

    spec: $ => choice(...FORMAT_SPECS),

    formspec: $ => seq(
      optional($.form_multiplier),
      choice(
        field("spec", $._pic),
        seq(
          field("spec", $.spec),
          field("size", optional($.number))
        )
      )
    ),

    for_statement: $ => seq(
      STATEMENTS.for,
      $.number_name,
      "=",
      $.numeric_expression,
      KEYWORD.to,
      $.numeric_expression,
      optional(seq(
        KEYWORD.step,
        $.numeric_expression
      ))
    ),

    fnend_statement: $ => STATEMENTS.fnend,

    gosub_statement: $ => seq(
      STATEMENTS.gosub,
      choice(
        $.line_reference,
        $.label_reference
      )
    ),

    goto_statement: $ => seq(
      STATEMENTS.goto,
      choice(
        $.line_reference,
        $.label_reference
      )
    ),

    input_statement: $ => seq(
      choice(
        STATEMENTS.input,
        STATEMENTS.rinput
      ),
      choice(
        $._fields_seq,
        seq(
          $.channel,
          choice(
            seq(
              ":",
              $.variable_list,
              optional($.error_condition_list)
            ),
            seq(
              ",",
              choice(
                seq(
                  KEYWORD.wait,
                  $.numeric_expression,
                  ":",
                  $.variable_list,
                  optional($.error_condition_list)
                ),
                $._fields_seq
              )
            )
          ),
        ),
        seq(
          KEYWORD.wait,
          $.numeric_expression,
          ":",
          $.variable_list,
          optional($.error_condition_list)
        ),
        seq(
          $.variable_list,
          optional($.error_condition_list)
        )
      )
    ),

    variable_list: $ => commaSep1(choice(
      $._numeric_reference,
      $._string_reference,
      $.numberarray,
      $.stringarray,
      seq(
        "(",
        commaSep1(
          $._numeric_reference,
          $._string_reference,
          $.numberarray,
          $.stringarray,
        ),
        ")"
      )
    )),

    channel: $ => seq(
      "#",
      $.numeric_expression,
    ),

    _fields_seq: $ => seq(
      KEYWORD.fields,
      choice(
        $.stringarray,
        $.string_expression
      ),
      optional(seq(
        KEYWORD.attr,
        choice(
          $.string_expression,
          $.stringarray,
        )
      )),
      optional(seq(
        KEYWORD.help,
        choice(
          $.string_expression,
          $.stringarray
        )
      )),
      optional(seq(
        ",",
        KEYWORD.wait,
        $.numeric_expression
      )),
      ":",
      $.variable_list,
      optional($.error_condition_list)
    ),

    let_statement: $ => seq(
      optional(STATEMENTS.let),
      choice(
        $.string_expression,
        $.numeric_expression
      )
    ),

    statement_linput: $ => STATEMENTS.linput,

    linput_statement: $ => seq(
      field("statement", $.statement_linput),
      choice(
        $._string_reference,
        seq(
          KEYWORD.wait,
          $.numeric_expression,
          ":",
          $._string_reference,
        ),
        seq(
          $.channel,
          choice(
            seq(
              ":",
              $._string_reference,
            ),
            seq(
              ",",
              KEYWORD.wait,
              $.numeric_expression,
              ":",
              $._string_reference,
            )
          )
        )
      ),
      optional($.error_condition_list)
    ),

    loop_statement: $ => seq(
      STATEMENTS.loop,
      optional(
        seq(
          choice(
            KEYWORD.while,
            KEYWORD.until,
          ),
          $.conditional_expression
        )        
      )
    ),

    mat_statement: $ => seq(
      $._mat,
      choice(
        seq(
          alias($.stringidentifier, $.string_array_name),
          optional($.mat_range),
          optional(
            seq(
              "=",
              choice(
                seq(
                  alias($.stringidentifier, $.string_array_name),
                  optional($.mat_range),
                ),
                seq(                  
                  "(",
                  $.string_expression,
                  ")"
                )
              )
            )
          )
        ),
        seq(
          alias($._numberidentifier, $.number_array_name),
          optional($.mat_range),
          optional(seq(
            "=",
            choice(
              seq(
                alias($._numberidentifier, $.number_array_name),
                optional($.mat_range)
              ),
              seq(
                "(",
                $.numeric_expression,
                ")"
              )
            )
          ))
        )
      )
    ),

    mat_range: $ => seq(
      "(",
      $.numeric_expression,
      optional(seq(
        ":",
        $.numeric_expression
      )),
      ")",
    ),

    next_statement: $ => seq(
      STATEMENTS.next,
      $.number_name
    ),

    on_statement: $ => seq(
      STATEMENTS.on,
      choice(
        seq(
          $.error_condition,
          choice(
            $.goto_statement,
            $.gosub_statement,
            KEYWORD.ignore,
            KEYWORD.system,
          )
        ),
        seq(
          $.numeric_expression,
          choice(
            STATEMENTS.goto,
            STATEMENTS.gosub,
          ),
          commaSep1(choice(
            $.line_reference,
            $.label_reference
          )),
          optional(
            seq(
              KEYWORD.none,
              choice(
                $.line_reference,
                $.label_reference
              )              
            )
          ),
          optional($.error_condition_list)
        )
      ),
    ),

    keyword_outin: $ => KEYWORD.outin,
    open_statement: $ => seq(
      STATEMENTS.open,
      $.channel,
      ":",
      $.string_expression,
      ",",
      choice(
        seq(
          KEYWORD.display,
          ",",
          choice(
            KEYWORD.input,
            KEYWORD.output,
            KEYWORD.outin,
          )
        ),
        seq(
          KEYWORD.external,
          ",",
          choice(
            KEYWORD.input,
            KEYWORD.output,
            KEYWORD.outin,
          ),
          optional(seq(
            ",",
            choice(
              KEYWORD.sequential,
              KEYWORD.relative
            )
          ))
        ),
        seq(
          KEYWORD.internal,
          ",",
          choice(
            KEYWORD.input,
            KEYWORD.output,
            KEYWORD.outin,
          ),
          optional(seq(
            ",",
            choice(
              KEYWORD.sequential,
              KEYWORD.relative,
              KEYWORD.keyed,
            )
          ))
        )
      ),
      optional($.error_condition_list)
    ),

    option_statement: $ => seq(
      STATEMENTS.option,
      commaSep1(
        choice(
          KEYWORD.invp,
          seq(
            KEYWORD.base,
            choice("0","1")
          ),
          seq(
            KEYWORD.collate,
            choice(
              KEYWORD.alternate,
              KEYWORD.native,
            )
          )
        )
      )
    ),

    pause_statement: $ => STATEMENTS.pause,

    print_statement: $ => seq(
      STATEMENTS.print,
      choice(
        $.print_output,
        $.print_fields,
        $.print_border,
        $.print_using,
        seq(
          $.channel,
          choice(
            seq(
              ":",
              $.print_output
            ),
            seq(
              ",",
              choice(
                $.print_fields,
                $.print_border,
                $.print_using,
              )
            )
          )
        )
      ),
    ),

    print_using: $ => seq(
      KEYWORD.using,
      choice(
        $.string_expression,
        $.line_reference,
        $.label_reference
      ),
      ":",
      $.print_output
    ),

    print_border: $ => seq(
      KEYWORD.border,
      $.string_expression,
      ":",
      $.string_expression
    ),

    print_fields: $ => seq(
      KEYWORD.fields,
      choice(
        $.stringarray,
        $.string_expression
      ),
      ":",
      $.print_output
    ),

    print_output: $ => seq(
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

    read_statement: $ => seq(
      STATEMENTS.read,
      choice(
        $._read_variable_list,
        seq(
          $.channel,
          choice(
            seq(":",$._read_variable_list),
            seq(
              ",",
              choice(
                $.record_locking_rule,
                $._record_selection,
                $.keyonly_seq,
                $.using_seq,
              ),
              ":",
              $._read_variable_list
            )
          )
        )
      ),
      optional($.error_condition_list)
    ),

    using_seq: $ => seq(
      KEYWORD.using,
      choice(
        $.string_expression,
        $.line_reference,
        $.label_reference
      ),
      optional(seq(
        ",",
        choice(
          $.record_locking_rule,
          $._record_selection,
          $.keyonly_seq,
        ),
      ))
    ),

    _record_selection: $ => choice(
      $.positional_parameter,
      $.rec_pos_seq,
      $.key_search_seq,
      $.link_seq,
    ),

    link_seq: $ => seq(
      KEYWORD.link,
      token.immediate("="),
      $.string_expression,
      optional(seq(
        ",",
        $.positional_parameter,
      ))
    ),

    positional_parameter: $ => seq(
      choice(
        KEYWORD.first,
        KEYWORD.last,
        KEYWORD.prior,
        KEYWORD.next,
        KEYWORD.same,
      ),
      optional(seq(
        ",",
        choice(
          $.keyonly_seq,
          $.record_locking_rule
        )
      ))
    ),

    keyonly_seq: $ => KEYWORD.keyonly,

    rec_pos_seq: $ => seq(
      choice(
        KEYWORD.pos,
        KEYWORD.rec
      ),
      token.immediate("="), 
      $.numeric_expression,
      optional(seq(
        ",",
        $.record_locking_rule,
      ))
    ),

    key_search_seq: $ => seq(
      choice(
        KEYWORD.key,
        KEYWORD.search
      ),
      choice("=",">="), 
      $.string_expression,
      optional(seq(
        ",",
        $.record_locking_rule,
      ))
    ),

    record_locking_rule: $ => choice(
      KEYWORD.release,
      KEYWORD.reserve,
    ),

    _read_variable_list: $ => commaSep1(
      choice(
        $.stringarray,
        $.numberarray,
        $._string_reference,
        $._numeric_reference,
      )
    ),

    randomize_statement: $ => STATEMENTS.randomize,

    rem_statement: $ => seq(
      STATEMENTS.rem,
      /.*/
    ),

    reread_statement: $ => seq(
      STATEMENTS.reread,
      $.channel,
      choice(
        seq(
          ",",
          choice(
            $.record_locking_rule,
            $.reread_using,
          )
        )
      ),
      ":",
      $._read_variable_list,
      optional($.error_condition_list)
    ),

    reread_using: $ => seq(
      KEYWORD.using,
      choice(
        $.string_expression,
        $.line_reference,
        $.label_reference
      ),
      optional(seq(
        ",",
        $.record_locking_rule
      ))
    ),

    restore_statement: $ => seq(
      STATEMENTS.restore,
      choice(
        $.restore_data,
        $.restore_file,
      )
    ),

    restore_data: $ => choice(
      $.line_reference,
      $.label_reference,
    ),

    restore_file: $ => seq(
      $.channel,
      optional(seq(
        ",",
        choice(
          $._restore_record_selection,
          $.record_locking_rule
        ),
      )),
      ":",
      optional($.error_condition_list)
    ),

    _restore_record_selection: $ => choice(
      $.restore_positional_parameter,
      $.rec_pos_seq,
      $.key_search_seq
    ),

    restore_positional_parameter: $ => seq(
      choice(
        KEYWORD.first,
        KEYWORD.last,
        KEYWORD.prior,
        KEYWORD.next,
        KEYWORD.same,
      ),
      optional(seq(
        ",",
        choice(
          $.record_locking_rule
        )
      ))
    ),

    retry_statement: $ => STATEMENTS.retry,
    return_statement: $ => STATEMENTS.return,

    rewrite_statement: $ => seq(
      STATEMENTS.rewrite,
      $.channel,
      optional(seq(
        ",",
        choice(
          $.write_using_seq,
          $.rec_pos_seq,
          $.write_key_seq,
          $.record_locking_rule
        )
      ))
    ),

    write_key_seq: $ => seq(
      KEYWORD.key,
      "=", 
      $.string_expression,
      optional(seq(
        ",",
        $.record_locking_rule,
      ))
    ),

    write_statement: $ => seq(
      STATEMENTS.write,
      $.channel,
      optional(seq(
        ",",
        choice(
          $.write_using_seq,
          $.rec_pos_seq,
          $.record_locking_rule
        )
      ))
    ),

    write_using_seq: $ => seq(
      KEYWORD.using,
      choice(
        $.string_expression,
        $.line_reference,
        $.label_reference,
      ),
      optional(seq(
        ",",
        choice(
          $.rec_pos_seq,
          $.record_locking_rule
        )
      )),
      ":",
      commaSep1($.expression),
      optional($.error_condition_list)
    ),

    stop_statement: $ => seq(
      STATEMENTS.stop,
      $.numeric_expression,
    ),

    trace_statement: $ => seq(
      STATEMENTS.trace,
      choice(
        KEYWORD.on,
        KEYWORD.off,
        KEYWORD.print
      )
    ),

    select_case_statement: $ => seq(
      STATEMENTS.select,
      $.expression,
      $.case_statement
    ),

    case_statement: $ => seq(
      STATEMENTS.case,
      $.expression,
      repeat(seq(
        "#",
        $.expression
      ))
    ),

    case_else_statement: $ => STATEMENTS.case_else,
    end_select_statement: $ => STATEMENTS.end_select,

    line_number: $ => /\d{1,5}[ \t]/,
    
    label_reference: $ => /[a-zA-Z_]\w*/,

    label: $ => /[a-zA-Z_]\w*:/,

    logical_operator: $ => choice(
      /[aA][nN][dD]/,
      /[oO][rR]/,
      "&&",
      "||"
    ),

    comparison_operator: $ => choice(
      "<>",
      "><",
      "<=",
      "=<",
      ">=",
      "=>",
      "=",
      "==",
      ">",
      "~="
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
      $.numeric_function_assignment,
      $.numeric_forced_assignment_expression,
      $.numeric_unary_expression,
      $.numeric_binary_expression,
      $.numeric_primary_expression,
    ),

    conditional_expression: $ => choice(
      $.numeric_conditional_forced_assignment_expression,
      $.conditional_unary_expression,
      $.conditional_binary_expression,
      $.numeric_conditional_primary_expression
    ),

    string_expression: $ => choice(
      $.string_forced_assignment_expression,
      $.string_binary_expression,
      $.string_assignment,
      $.string_primary_expression,
    ),

    conditional_string_expression: $ => choice(
      $.conditional_string_forced_assignment_expression,
      $.conditional_string_binary_expression,
      $.string_primary_expression,
    ),

    string_assignment: $ => prec.left(seq(
      field('left', $.string_expression),
      field('operator', "="),
      field('right', $.string_expression)
    )),

    string_binary_expression: $ => prec.left(seq(
      field('left', $.string_expression),
      field('operator', "&"),
      field('right', $.string_expression)
    )),

    conditional_string_binary_expression: $ => prec.left(seq(
      field('left', $.conditional_string_expression),
      field('operator', "&"),
      field('right', $.conditional_string_expression)
    )),

    numeric_binary_expression: $ => choice(
      ...[
        [/[aA][nN][dD]/, 'logical_and'],
        ['&&', 'logical_and'],
        [/[oO][rR]/, 'logical_or'],
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
        ['><', 'binary_relation'],
        ['<>', 'binary_relation'],
    ].map(([operator, precedence, associativity]) =>
        (associativity === 'right' ? prec.right : prec.left)(precedence, seq(
          field('left', $.numeric_expression),
          field('operator', operator),
          field('right', $.numeric_expression)
        ))
      ).concat(
        [
          ['<', 'binary_relation'],
          ['<=', 'binary_relation'],
          ['==', 'binary_equality'],
          ['~=', 'binary_equality'],
          ['>=', 'binary_relation'],
          ['>', 'binary_relation'],
          ['><', 'binary_relation'],
          ['<>', 'binary_relation'],
        ].map(([operator, precedence, associativity]) =>
          (associativity === 'right' ? prec.right : prec.left)(precedence, seq(
            field('left', $.string_expression),
            field('operator', operator),
            field('right', $.string_expression)
          ))
        )
      )
    ),

    conditional_binary_expression: $ => choice(
      ...[
        [/[aA][nN][dD]/, 'logical_and'],
        ['&&', 'logical_and'],
        [/[oO][rR]/, 'logical_or'],
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
        ['=', 'binary_equality'],
        ['~=', 'binary_equality'],
        ['>=', 'binary_relation'],
        ['>', 'binary_relation'],
        ['><', 'binary_relation'],
        ['<>', 'binary_relation'],
    ].map(([operator, precedence, associativity]) =>
        (associativity === 'right' ? prec.right : prec.left)(precedence, seq(
          field('left', $.conditional_expression),
          field('operator', operator),
          field('right', $.conditional_expression)
        ))
      ).concat(
        [
          ['<', 'binary_relation'],
          ['<=', 'binary_relation'],
          ['==', 'binary_equality'],
          ['=', 'binary_equality'],
          ['~=', 'binary_equality'],
          ['>=', 'binary_relation'],
          ['>', 'binary_relation'],
          ['><', 'binary_relation'],
          ['<>', 'binary_relation'],
        ].map(([operator, precedence, associativity]) =>
          (associativity === 'right' ? prec.right : prec.left)(precedence, seq(
            field('left', $.conditional_string_expression),
            field('operator', operator),
            field('right', $.conditional_string_expression)
          ))
        )
      )
    ),

    numeric_unary_expression: $ => prec.left('unary_void', seq(
      field('operator', choice('~', '-', '+', /[nN][oO][tT][ \t]*/)),
      field('argument', $.numeric_expression)
    )),

    conditional_unary_expression: $ => prec.left('unary_void', seq(
      field('operator', choice('~', '-', '+', /[nN][oO][tT][ \t]*/)),
      field('argument', $.conditional_expression)
    )),

    numeric_array_primary_expression: $ => choice(
      $.numberarray
    ),

    string_array_primary_expression: $ => choice(
      $.stringarray,
    ),

    numeric_primary_expression: $ => choice(
      $._numeric_reference,
      $.parenthesized_numeric_expression,
      $.number,
      $.numeric_call_expression
    ),

    numeric_conditional_primary_expression: $ => choice(
      $._numeric_reference,
      $.conditional_parenthesized_numeric_expression,
      $.number,
      $.numeric_call_expression
    ),

    string_primary_expression: $ => choice(
      $.parenthesized_string_expression,
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

    numeric_function_assignment: $ => prec.right('assign',seq(
      field('left', $._numeric_function_identifier),
      "=",
      field('right', $.numeric_expression)
    )),

    numeric_user_function: $ => prec.left('call',seq(
      field('function', choice(
        $._numeric_function_identifier
      )),
      optional(field('arguments', $.arguments))
    )),

    string_user_function: $ => seq(
      field('function', choice(
        $._string_function_identifier,
      )),
      optional(field('arguments', $.arguments))
    ),

    arguments: $ => seq(
      "(",
      commaSep1(choice(
        $.expression,
        $.param_substitution,
      )),
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

    parenthesized_string_expression: $ => seq(
      '(',
      $.string_expression,
      ')'
    ),

    parenthesized_numeric_expression: $ => seq(
      '(',
      $.numeric_expression,
      ')'
    ),

    conditional_parenthesized_numeric_expression: $ => seq(
      '(',
      $.conditional_expression,
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
      field('left', choice(
        $._numeric_reference,
        $.numeric_function_name,
      )),
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

    numeric_conditional_forced_assignment_expression: $ => prec.right('assign', seq(
      field('left', $._numeric_reference),
      ":=",
      field('right', $.numeric_expression)
    )),

    string_forced_assignment_expression: $ => prec.right('assign', seq(
      field('left', $._string_reference),
      ":=",
      field('right', $.string_expression)
    )),

    conditional_string_forced_assignment_expression: $ => prec.right('assign', seq(
      field('left', $._string_reference),
      ":=",
      field('right', $.conditional_string_expression)
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
      alias($._numberidentifier, $.number_array_name),
      seq(
        "(",
        commaSep1($.numeric_expression),
        ")"
      )
    ),

    stringelement: $ => seq(
      alias($.stringidentifier, $.string_array_name),
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

    string_array_name: $ => seq(
      $._mat,
      $.stringidentifier
    ),
    
    stringarray: $ => seq(
      $.string_array_name,
      repeat($.dimension)
    ),

    dimension: $ => seq(
      "(",
      commaSep1(
        $.range
      ),
      ")"
    ),

    string_name: $ => $.stringidentifier,

    stringreference: $ => seq(
      alias($.stringidentifier, $.string_name),
      repeat(
        seq(
          "(",
          $.range,
          ")"
        )
      )
    ),

    number_name: $ => $._numberidentifier,

    numberreference: $ => $.number_name,

    range: $ => seq(
      $.numeric_expression,
      ':',
      $.numeric_expression
    ),

    stringidentifier: $ => /[a-zA-Z_]\w*\$/,

    number_array_name: $ => seq(
      $._mat,
      $._numberidentifier
    ),

    numberarray: $ => seq(
      $.number_array_name,
      optional($.dimension)
    ),

    _numberidentifier: $ => token(prec(-1,/[a-zA-Z_]\w*/)),

    _mat: $ => /[mM][aA][tT][ \t]/,

    identifier: $ => /\w+\$?/,
    
    number: $ => {
      const decimal_digits = /\d+/
      const signed_integer = seq(optional(choice('-', '+')), decimal_digits)
      const exponent_part = seq(choice('e', 'E'), signed_integer)

      const decimal_integer_literal = choice(
        '0',
        seq(optional('0'), /[1-9]/)
      )

      const decimal_literal = choice(
        seq(decimal_integer_literal, '.', optional(decimal_digits), optional(exponent_part)),
        seq('.', decimal_digits, optional(exponent_part)),
        seq(decimal_integer_literal, exponent_part),
        seq(decimal_digits),
      )

      const mod = seq(choice("+","-"),decimal_literal)

      return token(choice(
        decimal_literal,
        mod
      ))
    },

    unquoted_data: $ => /[^"'\n][^,\n]*/,

  }
});

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}

function commaSep(rule) {
  return optional(commaSep1(rule));
}
