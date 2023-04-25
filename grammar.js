const NUMERIC_SYSTEM_FUNCTIONS = [
  /[aA][bB][sS]/,
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
  /[vV][aA][lL]/,
  /[vV][eE][rR][sS][iI][oO][nN]/
]

const UDIM = /[uU][dD][iI][mM]/;

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

const NUMERIC_ARRAY_SYSTEM_FUNCTIONS = [
  /[aA][iI][dD][xX]/,
  /[dD][iI][dD][xX]/,
]

const FORCED_ASSIGNMENT_OPERATORS = [
  ":=",
  "+=",
  "-=",
  "*=",
  "/=",
]

const STATEMENTS = {
  chain: /[cC][hH][aA]?[iI]?[nN]?/,
  close: /[cC][lL][oO][sS][eE]/,
  display: /[dD][iI][sS][pP][lL][aA][yY]/,
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
  release: /[Rr][Ee][Ll][Ee][Aa][Ss][Ee]/,
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
  library: /[lL][iI][bB][rR][aA][rR][yY]/,
}

const KEYWORD = {
  alternate: /[aA][lL][tT][eE][rR][nN][aA][tT][eE]/,
  attr: /[aA][tT][tT][rR][ \t]/,
  base: /[bB][aA][sS][eE]/,
  border: /[bB][oO][rR][dD][eE][rR]/,
  collate: /[cC][oO][lL][lL][aA][tT][eE]/,
  data: /[dD][aA][tT][aA]/,
  display: /[dD][iI][sS][pP][lL][aA][yY]/,
  drop: /[dD][rR][oO][pP]/,
  external: /[eE][xX][tT][eE][rR][nN][aA][lL]/,
  fields: /[fF][iI][eE][lL][dD][sS][ \t]/,
  files: /[fF][iI][lL][eE][sS]/,
  first: /[fF][iI][rR][sS][tT]/,
  free: /[fF][rR][eE][eE]/,
  help: /,[ \t]*[hH][eE][lL][pP][ \t]/,
  ignore: /[iI][gG][nN][oO][rR][eE]/,
  input: /[iI][nN][pP][uU][tT]/,
  internal: /[iI][nN][tT][eE][rR][nN][aA][lL]/,
  invp: /[iI][nN][vV][pP]/,
  key: /[kK][eE][yY]/,
  keyed: /[kK][eE][yY][eE][dD]/,
  keyonly: /[kK][eE][yY][oO][nN][lL][yY]/,
  last: /[lL][aA][sS][tT]/,
  library: /[lL][iI][bB]\w*/,
  link: /[lL][iI][nN][kK]/,
  menu: /[mM][eE][nN][uU]/,
  native: /[nN][aA][tT][iI][vV][eE]/,
  next: /[nN][eE][xX][tT]/,
  nofiles: /[Nn][Oo][Ff][Ii][Ll][Ee][Ss]/,
  none: /[nN][oO][nN][eE]/,
  off: /[oO][fF][fF]/,
  on: /[oO][nN]/,
  outin: /[oO][uU][tT][iI][nN]/,
  output: /[oO][uU][tT][pP][uU][tT]/,
  pos: /[pP][oO][sS]/,
  print: /[pP][rR][iI][nN][tT]/,
  prior: /[pP][rR][iI][oO][rR]/,
  rec: /[rR][eE][cC]/,
  relative: /[rR][eE][lL][aA][tT][iI][vV][eE]/,
  release: /[rR][eE][lL][eE][aA][sS][eE]/,
  reserve: /[rR][eE][sS][eE][rR][vV][eE]/,
  retain: /[Rr][Ee][Tt][Aa][Ii][Nn]/,
  same: /[sS][aA][mM][eE]/,
  search: /[sS][eE][aA][rR][cC][hH]/,
  select: /[sS][eE][lL][eE][cC][tT]/,
  sequential: /[sS][eE][qQ][uU][eE][nN][tT][iI][aA][lL]/,
  status: /[sS][tT][aA][tT][uU][sS]/,
  step: /[sS][tT][eE][pP]/,
  system: /[sS][yY][sS][tT][eE][mM]/,
  text: /[tT][eE][xX][tT]/,
  then: /[tT][hH][eE][nN]/,
  to: /[tT][oO]/,
  until: /[uU][nN][tT][iI][lL]/,
  using: /[uU][sS][iI][nN][gG][ \t]/,
  wait: /[wW][aA][iI][tT]=/,
  while: /[wW][hH][iI][lL][eE]/,
}

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
  $.library_statement,
  $.input_menu_statement,
  $.release_statement,
  $.rinput_statement
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
    ['assign','call'],
    ['assign','logical_and'],
    ['assign','logical_or'],
    [$.mat_size, $.mat_range],
    [$.udim, $.stringreference, $.numberreference],
  ],

  externals: $ => [
    $.eol,
    $.comment
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
      repeat(
        choice(
          $.continuation,
          $.statement_separator
        ),
      ),
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
          optional($.statement),
        )
      )
    ),

    statement: $ => choice(
      $.comment,
      seq(
        choice(
          ...getStatements($)
        ),
        optional($.comment)
      ),
      $.else_statement,
      $.if_statement
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
      optional(choice(
        $.unquoted_data,
        $.string,
        $.number
      )),
      repeat(seq(
        repeat1(","),
        choice(
          $.unquoted_data,
          $.string,
          $.number
        )
      )),
      repeat(",")
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

    library_statement: $ => seq(
      STATEMENTS.library,
      optional(
        choice(
          seq(
            KEYWORD.release,
            ",",
            optional(
              seq(
                KEYWORD.nofiles,
                ","
              )
            ),
            $.string_expression
          ),
          seq(
            KEYWORD.nofiles,
            optional(seq(
              ",",
              $.string_expression
            ))
          ),
          $.string_expression
        ),
      ),
      ":",
      optional(
        commaSep1(
          alias(choice(
            $.string_function_name,
            $.numeric_function_name,
          ), $.function_name)
        )
      ),
      optional($.error_condition_list)
    ),

    string_function_definition: $ => seq(
      alias($.string_function_name, $.function_name),
      optional($.function_length),
      optional($.parameter_list),
      optional(seq(
        "=",
        $.string_expression
      ))
    ),

    numeric_function_definition: $ => seq(
      alias($.numeric_function_name, $.function_name),
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
        $.string_array_parameter,
        $.number_array_parameter,
        $.param_substitution,
      ),
    ),

    string_array_parameter: $ => alias($.string_array_name_mat, $.stringarray),
    number_array_parameter: $ => alias($.number_array_name_mat, $.numberarray),

    param_substitution: $ => seq(
      "[[",
      /\w+/,
      "]]"
    ),

    numeric_parameter: $ => $.numberreference,

    string_parameter: $ => seq(
      alias($.string_name, $.stringreference),
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
          alias($.dim_number, $.numberreference),
          alias($.dim_numeric_array, $.numberarray),
          alias($.dim_string, $.stringreference),
          alias($.dim_string_array, $.stringarray)
        )
      )
    ),

    dim_number: $ => field("name", $.numberidentifier),

    dim_numeric_array: $ => seq(
      field("name", $.numberidentifier),
      $.dim_array_size
    ),

    dim_string: $ => seq(
      field("name", $.stringidentifier),
      optional(
        seq(
          "*",
          field("length", $.int)
        )
      )
    ),

    dim_string_array: $ => seq(
      field("name", $.stringidentifier),
      $.dim_array_size,
      optional(
        seq(
          "*",
          field("length", $.int)
        )
      )
    ),

    dim_array_size: $ => seq(
      "(",
      commaSep1($.int),
      ")",
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

    error_condition_list: $ => seq(
      $.error_condition,
      choice(
        $.line_reference,
        $.label_reference
      ),
      repeat(seq(
        optional(","),
        $.error_condition,
        choice(
          $.line_reference,
          $.label_reference
        ),
      ))
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
                $.chain_var_list,
              ))
            ),
            $.chain_var_list,
          ),
        )
      )
    ),

    chain_var_list: $ => commaSep1(
      choice(
        $.numberreference,
        alias($.number_array_name_mat, $.numberarray),
        alias($.string_name, $.stringreference),
        alias($.string_array_name_mat, $.stringarray),
      )
    ),

    chain_files: $ => token(prec(1,KEYWORD.files)),

    string_spec: $ => choice(
      /[Cc]/,
      /[Cc][Cc]/,
      /[Cc][Rr]/,
      /[Cc][Uu]/,
      /[Vv]/,
      /[Vv][Ll]/,
      /[Vv][Uu]/
    ),

    internal_spec: $ => choice(
      /[Bb]/,
      /[Bb][Ll]/,
      /[Bb][Hh]/,
      /[Pp][Dd]/,
      /[Zp][Dd]/
    ),

    numeric_spec: $ => choice(
      /[Gg]/,
      /[Gg][Zz]/,
      /[Nn]/,
      /[Nn][Zz]/,
    ),

    floating_point_spec: $ => choice(
      /[Dd]/,
      /[Ss]/,
      /[Ll]/,
    ),

    string_form_spec: $ => seq(
      optional($.multi_spec),
      $.string_spec,
      optional(
        choice(
          $.int,
          $.numberreference
        )
      )
    ),

    internal_form_spec: $ => seq(
      optional($.multi_spec),
      $.internal_spec,
      optional(
        seq(
          $.field_length,
          optional($.fractional_length)
        )
      ),
    ),

    numeric_form_spec: $ => seq(
      optional($.multi_spec),
      $.numeric_spec,
      optional(
        seq(
          $.field_length,
          optional($.fractional_length)
        )
      ),
    ),

    floating_point_form_spec: $ => seq(
      $.floating_point_spec
    ),

    field_length: $ => choice(
      $.int,
      $.numberreference
    ),

    fractional_length: $ => seq(
      ".",
      choice(
        token.immediate(/\d+/),
        $.numberreference
      )
    ),

    pos_spec: $ => /[Pp][Oo][Ss]/,
    pos_form_spec: $ => seq(
      $.pos_spec,
      choice(
        $.int,
        $.numberreference
      )
    ),

    skip_spec: $ => /[Ss][Kk][Ii][Pp]/,
    skip_form_spec: $ => seq(
      $.skip_spec,
      optional(
        choice(
          $.int,
          $.numberreference
        )
      )
    ),

    x_spec: $ => /[Xx]/,
    x_form_spec: $ => seq(
      $.x_spec,
      optional(
        choice(
          $.int,
          $.numberreference
        )
      )
    ),

    pic_spec: $ => /[pP][iI][cC]\([^)\n]*\)/,
    pic_form_spec: $ => seq(
      optional($.multi_spec),
      $.pic_spec
    ),

    multi_spec: $ => seq(
      choice(
        alias($.multi_spec_var_name, $.numberreference),
        $.int
      ),
      "*"
    ),

    multi_spec_var_name: $ => field("name", choice(
      alias($.string_spec,$.numberidentifier),
      alias($.internal_spec,$.numberidentifier),
      alias($.numeric_spec,$.numberidentifier),
      alias($.floating_point_spec,$.numberidentifier),
      alias($.pos_spec,$.numberidentifier),
      alias($.skip_spec,$.numberidentifier),
      alias($.x_spec,$.numberidentifier),
      $.numberidentifier,
    )),

    spec_group: $ => seq(
      optional($.multi_spec),
      "(",
      commaSep1(
        $.form_spec
      ),
      ")"
    ),

    form_spec: $ => choice(
      $.internal_form_spec,
      $.string_form_spec,
      $.numeric_form_spec,
      $.floating_point_form_spec,
      $.skip_form_spec,
      $.pos_form_spec,
      $.x_form_spec,
      $.literal_string_form_spec,
      $.pic_form_spec
    ),

    literal_string_spec: $ => choice(
      /"[^"\n]*"/,
      /'[^'\n]*'/,
      /`[^`\n]*`/,
    ),

    literal_string_form_spec: $ => seq(
      optional($.multi_spec),
      $.literal_string_spec
    ),

    form_statement: $ => seq(
      STATEMENTS.form,
      commaSep1(
        choice(
          $.form_spec,
          $.spec_group
        )
      ),
      optional(",")
    ),

    single_line_else: $ => prec.right(seq(
      repeat1(
        seq(
          choice(
            $.continuation,
            $.statement_separator
          ),
          choice(
            ...getStatements($),
            $.if_statement
          ),
          optional($.comment)
        )
      )
    )),

    else_statement: $ => prec.right(seq(
      STATEMENTS.else,
      optional(
        choice(
          $.comment,
          seq(choice(...getStatements($)),optional($.comment)),
          $.if_statement,
          $.single_line_else
        )
      ),
    )),

    end_def_statement: $ => STATEMENTS.end_def,
    end_if_statement: $ =>  STATEMENTS.end_if,
    end_statement: $ => STATEMENTS.end,
    execute_statement: $ => seq(
      STATEMENTS.execute,
      $.string_expression,
      optional($.error_condition_list)
    ),
    exit_do_statement: $ => STATEMENTS.exit_do,
    exit_statement: $ => seq(
      STATEMENTS.exit,
      optional($.error_condition_list)
    ),

    single_line_if_trailing_else: $ => prec.right(seq(
      $.else_statement,
      optional($.comment)
    )),

    single_line_else_with_cont: $ => prec.right(seq(
      choice(
        $.continuation,
        $.statement_separator
      ),
      $.else_statement
    )),

    single_line_if: $ => prec.right(seq(
      repeat1(
        seq(
          choice(
            $.continuation,
            $.statement_separator
          ),
          choice(
            seq(
              choice(
                ...getStatements($),
              ),
              optional($.comment)
            ),
            $.comment
          )
        )
      ),
      optional(choice(
        $.single_line_if_trailing_else,
        $.single_line_else_with_cont
      ))
    )),

    if_statement: $ => prec.right(seq(
      STATEMENTS.if,
      $.conditional_expression,
      KEYWORD.then,
      optional(","),
      optional(choice(
        $.comment,
        seq(
          choice(
          ...getStatements($),
        ),optional($.comment),
          optional(choice(
            $.single_line_if,
            $.single_line_if_trailing_else,
            $.single_line_else_with_cont
          ))
        ),
        $.single_line_if,
        $.single_line_if_trailing_else,
        $.single_line_else_with_cont
      )),
    )),

    int: $ => /\d+/,

    for_statement: $ => seq(
      STATEMENTS.for,
      $.numberreference,
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

    input_menu_statement: $ => seq(
      choice(
        STATEMENTS.input,
        STATEMENTS.display,
      ),
      optional(seq(
        $.channel,
        ","
      )),
      KEYWORD.menu,
      choice(
        seq(
          ":",
          $.string_array_expression,
          ",",
          $.string_array_expression,
          ",",
          $.string_array_expression,
        ),
        seq(
          choice(
            KEYWORD.text,
            KEYWORD.data,
            KEYWORD.status,
          ),
          ":",
          $.string_array_expression,
        ),
      )
    ),

    rinput_statement: $ => seq(
      STATEMENTS.rinput,
      choice(
        seq(
          optional(seq(
            $.channel,
            ":"
          )),
          $._string_reference
        ),
        seq(
          optional(seq(
            $.channel,
            ","
          )),
          $._fields_seq,
          commaSep1(
            choice(
              $.expression,
              $.rinput_array_group
            )
          )
        )
      ),
      optional($.error_condition_list)
    ),

    rinput_array_group: $ => seq(
      "(",
      commaSep1(
        choice(
          $.stringarray,
          $.numberarray
        ),
      ),
      ")"
    ),

    input_wait_param: $=> seq(
      KEYWORD.wait,
      $.numeric_expression,
    ),

    input_statement: $ => seq(
      STATEMENTS.input,
      choice(
        seq(
          optional(seq(
            $.input_wait_param,
            ":"
          )),
          $.variable_list,
        ),
        seq(
          $.channel,
          optional(seq(
            ",",
            $.input_wait_param,
          )),
          ":",
          $.variable_list,
        ),
        seq(
          optional(seq(
            $.channel,
            ","
          )),
          $._fields_seq,
          $.variable_list,
        ),
      ),
      optional($.error_condition_list)
    ),

    variable_list: $ => commaSep1(choice(
      $._numeric_reference,
      $._string_reference,
      $.numberarray,
      $.stringarray,
      seq(
        "(",
        commaSep1(
          choice(
            $.numberarray,
            $.stringarray,
          )
        ),
        ")"
      )
    )),

    channel: $ => seq(
      "#",
      $.numeric_expression,
    ),

    _fields_seq: $ => seq(
      choice(
        KEYWORD.fields,
        KEYWORD.select
      ),
      choice(
        $.stringarray,
        $.string_expression
      ),
      optional(seq(
        ",",
        KEYWORD.attr,
        choice(
          $.string_expression,
          $.stringarray,
        )
      )),
      optional(seq(
        ",",
        KEYWORD.wait,
        $.numeric_expression
      )),
      optional($.help_parameter),
      ":",
    ),

    help_parameter: $ => seq(
      KEYWORD.help,
      choice(
        $.string_expression,
        $.stringarray
      )
    ),

    let_statement: $ => seq(
      optional(STATEMENTS.let),
      choice(
        $.string_expression,
        $.numeric_expression
      ),
      optional($.error_condition_list)
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

    mat_numeric_array_expression: $ => seq(
      alias($.numberreference, $.numberarray),
      optional(
        seq(
          "(",
          choice(
            $.mat_size,
            $.mat_range
          ),
          ")"
        )
      ),
      optional($.mat_assignment_numeric)
    ),

    mat_assignment_numeric: $ => seq(
      "=",
      choice(
        seq(
          alias($.numberreference, $.numberarray),
          optional(seq(
            "(",
            $.mat_range,
            ")"
          )),
          optional(seq(
            choice(
              "+",
              "-",
            ),
            alias($.numberreference, $.numberarray),
            optional(seq(
              "(",
              $.mat_range,
              ")"
            )),
          ))
        ),
        seq(
          "(",
          $.numeric_expression,
          ")",
          optional(
            seq(
              choice(
                "+",
                "-",
                "*",
                "/"
              ),
              alias($.numberreference, $.numberarray),
              optional(seq(
                "(",
                $.mat_range,
                ")"
              )),
            )
          )
        ),
        seq(
          alias(choice(...NUMERIC_ARRAY_SYSTEM_FUNCTIONS), $.function_name),
          "(",
          choice(
            alias($.numberreference, $.numberarray),
            alias($.string_name, $.stringarray),
          ),
          optional(seq(
            "(",
            $.mat_range,
            ")"
          )),
          ")"
        )
      )
    ),

    mat_size: $ => seq(
      commaSep1($.numeric_expression),
    ),

    // mat_range: $ => prec.right(seq(
    //   $.numeric_expression,
    //   ":",
    //   $.numeric_expression      
    // )),

    mat_string_array_expression: $ => seq(
      alias($.string_name, $.stringarray),
      optional(
        seq(
          "(",
          choice(
            $.mat_size,
            $.mat_range
          ),
          ")"
        )
      ),
      optional(
        seq(
          "=",
          choice(
            seq(
              alias($.string_name, $.stringarray),
              optional(seq(
                "(",
                $.mat_range,
                ")",
              )),
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

    mat_statement: $ => seq(
      $._mat,
      choice(
        $.mat_string_array_expression,
        $.mat_numeric_array_expression,
      )
    ),

    mat_range: $ => prec.right(seq(
      $.numeric_expression,
      optional(seq(
        ":",
      $.numeric_expression)),
    )),

    next_statement: $ => seq(
      STATEMENTS.next,
      $.numberreference
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
      optional(","),
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
          ),
          KEYWORD.retain
        )
      )
    ),

    pause_statement: $ => STATEMENTS.pause,

    print_statement: $ => seq(
      STATEMENTS.print,
      optional(choice(
        $.print_output,
        $.print_fields,
        $.print_border,
        $.print_using,
        seq(
          $.channel,
          choice(
            seq(
              ":",
              optional($.print_output)
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
      )),
      optional($.error_condition_list)
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
      optional(seq(
        /[ \t]/,
        $.string_expression
      )),
      ":",
      $.string_expression
    ),

    print_fields: $ => seq(
      KEYWORD.fields,
      choice(
        $.stringarray,
        $.string_expression
      ),
      optional(
        $.help_parameter
      ),
      ":",
      $.print_output
    ),

    print_output: $ => seq(
        repeat(choice(
          ";",
          ","
        )),
        choice(
          $.expression,
          $.array_group
        ),
        repeat(prec.right(seq(
          repeat1(choice(
            ";",
            ","
          )),
          optional(
          choice(
            $.expression,
            $.array_group
          )),
        )))
      )
    ,
    // print_output: $ => seq(
    //   repeat(choice(
    //     ";",
    //     ","
    //   )),
    //   repeat1(
    //   seq(
    //     choice(
    //       ",",
    //       ";"
    //     ),
    //     optional(choice(
    //       $.expression,
    //       $.array_group
    //     ))
    //   )
    // )),

    array_group: $ => seq(
      "(",
      choice(
        $.string_array_expression,
        $.numeric_array_expression,
        $.param_substitution,
      ),
      repeat(
        seq(
          ",",
          choice(
            $.string_array_expression,
            $.numeric_array_expression,
            $.param_substitution,
          ),
        )
      ),
      ")"
    ),

    read_statement: $ => seq(
      STATEMENTS.read,
      choice(
        $._read_variable_list,
        seq(
          $.channel,
          optional(seq(
            ",",
            $.write_using_seq
          )),
          optional(seq(
            ",",
            choice(
              $.keyonly_seq,
              $.record_locking_rule,
              seq(
                choice(
                  $.rec_pos_seq,
                  $.positional_parameter,
                ),
                optional(seq(
                  ",",
                  choice(
                    $.keyonly_seq,
                    $.record_locking_rule,
                  )
                ))
              ),
              $.link_seq,
              seq(
                $.key_search_seq,
                optional(seq(
                  ",",
                  $.record_locking_rule
                ))
              )
            )
          )),
          ":",
          optional($._read_variable_list)
        )
      ),
      optional($.error_condition_list)
    ),

    release_statement: $ => seq(
      STATEMENTS.release,
      "#",
      $.numeric_expression,
      ":"
    ),

    link_seq: $ => seq(
      KEYWORD.link,
      token.immediate("="),
      $.string_expression,
      optional(seq(
        ",",
        $.positional_parameter,
      )),
      optional(seq(
        ",",
        $.record_locking_rule,
      ))
    ),

    positional_parameter: $ => choice(
      KEYWORD.first,
      KEYWORD.last,
      KEYWORD.prior,
      KEYWORD.next,
      KEYWORD.same,
    ),

    keyonly_seq: $ => KEYWORD.keyonly,

    rec_seq: $ => seq(
      choice(
        KEYWORD.rec
      ),
      token.immediate("="), 
      $.numeric_expression
    ),

    rec_pos_seq: $ => seq(
      choice(
        KEYWORD.pos,
        KEYWORD.rec
      ),
      token.immediate("="), 
      $.numeric_expression
    ),

    key_search_seq: $ => seq(
      choice(
        KEYWORD.key,
        KEYWORD.search
      ),
      choice("=",">="), 
      $.string_expression,
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

    rem_statement: $ => choice(
      STATEMENTS.rem,
      seq(
        STATEMENTS.rem,
        /[^(].*/
      )
    ),

    reread_statement: $ => seq(
      STATEMENTS.reread,
      $.channel,
      optional(
        seq(
          ",",
          choice(
            $.record_locking_rule,
            $.reread_using,
          )
        )
      ),
      ":",
      optional($._read_variable_list),
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
          $.restore_positional_parameter,
          $.rec_pos_seq,
          $.key_search_seq
        ),
      )),
      optional(seq(
        ",",
        $.record_locking_rule
      )),
      ":",
      optional($.error_condition_list)
    ),

    _restore_record_selection: $ => choice(
      $.restore_positional_parameter,
      $.rec_pos_seq,
      $.key_search_seq
    ),

    restore_positional_parameter: $ => 
      choice(
        KEYWORD.first,
        KEYWORD.last,
        KEYWORD.prior,
        KEYWORD.next,
        KEYWORD.same,
      ),

    retry_statement: $ => STATEMENTS.retry,
    return_statement: $ => STATEMENTS.return,

    rewrite_statement: $ => seq(
      STATEMENTS.rewrite,
      $.channel,
      optional(seq(
        ",",
        $.write_using_seq,
      )),
      optional(seq(
        ",",
        choice(
          $.rec_pos_seq,
          $.key_search_seq
        )
      )),
      optional(seq(
        ",",
        $.record_locking_rule
      )),
      ":",
      commaSep1($.expression),
      optional($.error_condition_list)
    ),

    write_key_seq: $ => seq(
      KEYWORD.key,
      "=", 
      $.string_expression
    ),

    write_statement: $ => seq(
      STATEMENTS.write,
      $.channel,
      optional(seq(
        ",",
        $.write_using_seq,
      )),
      optional(seq(
        ",",
        $.rec_pos_seq,
      )),
      optional(seq(
        ",",
        $.record_locking_rule
      )),
      ":",
      commaSep1($.expression),
      optional($.error_condition_list)
    ),

    write_using_seq: $ => seq(
      KEYWORD.using,
      choice(
        $.string_expression,
        $.line_reference,
        $.label_reference,
      )
    ),

    stop_statement: $ => seq(
      STATEMENTS.stop,
      optional($.numeric_expression),
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
      "<=",
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
      $.conditional_numeric_function_assignment,
      $.conditional_numeric_forced_assignment_expression,
      $.conditional_unary_expression,
      $.conditional_binary_expression,
      $.numeric_conditional_primary_expression
    ),

    string_expression: $ => choice(
      $.string_function_assignment,
      $.string_forced_assignment_expression,
      $.string_binary_expression,
      $.string_assignment,
      $.string_primary_expression,
    ),

    conditional_string_expression: $ => choice(
      $.conditional_string_forced_assignment_expression,
      $.conditional_string_binary_expression,
      $.conditional_string_primary_expression,
    ),

    string_assignment: $ => prec.left(seq(
      field('left', $.string_expression),
      field('operator', "="),
      field('right', $.string_expression)
    )),

    string_binary_expression: $ => prec.left('binary_plus', seq(
      field('left', $.string_expression),
      field('operator', "&"),
      field('right', $.string_expression)
    )),

    conditional_string_binary_expression: $ => prec.left('binary_plus', seq(
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
        ['=<', 'binary_relation'],
        ['==', 'binary_equality'],
        ['~=', 'binary_equality'],
        ['>=', 'binary_relation'],
        ['=>', 'binary_relation'],
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
          ['=<', 'binary_relation'],
          ['==', 'binary_equality'],
          ['~=', 'binary_equality'],
          ['>=', 'binary_relation'],
          ['=>', 'binary_relation'],
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
        ['=<', 'binary_relation'],
        ['==', 'binary_equality'],
        ['=', 'binary_equality'],
        ['~=', 'binary_equality'],
        ['>=', 'binary_relation'],
        ['=>', 'binary_relation'],
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
          ['=<', 'binary_relation'],
          ['==', 'binary_equality'],
          ['=', 'binary_equality'],
          ['~=', 'binary_equality'],
          ['>=', 'binary_relation'],
          ['=>', 'binary_relation'],
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

    conditional_string_primary_expression: $ => choice(
      $.conditional_parenthesized_string_expression,
      $._string_reference,
      $.string,
      $.template_string,
      $.string_call_expression
    ),

    numeric_call_expression: $ => choice(
      $.numeric_system_function,
      $.numeric_user_function,
      alias($.udim, $.numeric_system_function),
    ),

    udim: $ => seq(
      alias(UDIM, $.function_name),
      "(",
      choice(
        $.string_array_expression,
        alias($.string_name, $.stringarray),
        $.numeric_array_expression,
        alias($.numberreference, $.numberarray),
      ),
      optional(seq(
        ",",
        $.numeric_expression
      )),
      ")",
    ),

    string_call_expression: $ => choice(
      $.string_system_function,
      $.string_user_function
    ),

    string_function_assignment: $ => prec.right('assign',seq(
      field('left', alias($.string_function_name, $.function_name)),
      choice("=",":="),
      field('right', $.string_expression)
    )),

    numeric_system_function: $ => choice(
      seq(
        alias(/[rR][eE][mM]/, $.function_name),
        field('arguments', $.arguments)
      ),
      seq(
        alias(choice(...NUMERIC_SYSTEM_FUNCTIONS), $.function_name),
        optional(field('arguments', $.arguments))
      )
    ),

    string_system_function: $ => seq(
      alias(choice(...STRING_SYSTEM_FUNCTIONS), $.function_name),
      optional(field('arguments', $.arguments)),
      repeat(
        seq(
          "(",
          $.range,
          ")"
        )
      )
    ),

    numeric_function_assignment: $ => prec.right('assign',seq(
      field('left', alias($.numeric_function_name, $.function_name)),
      choice("=",":="),
      field('right', $.numeric_expression)
    )),

    conditional_numeric_function_assignment: $ => prec.right('assign',seq(
      field('left', alias($.numeric_function_name, $.function_name)),
      ":=",
      field('right', $.numeric_expression)
    )),

    numeric_user_function: $ => prec.left('call',seq(
      alias($.numeric_function_name, $.function_name),
      optional(field('arguments', $.arguments))
    )),

    string_user_function: $ => prec.left('call', seq(
      alias($.string_function_name, $.function_name),
      optional(field('arguments', $.arguments)),
      repeat(
        seq(
          "(",
          $.range,
          ")"
        )
      )
    )),

    arguments: $ => seq(
      "(",
      commaSep1(choice(
        $.expression,
        $.param_substitution,
      )),
      ")"
    ),

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
      choice(
        $.string_expression,
        $.numeric_expression,
      ),
      '}}'
    ),

    string: $ => choice(
      seq(
        '"',
        token.immediate(repeat(choice(
          /[^"\r\n]/,
          "\"\""
        ))),
        '"',
        repeat(seq(
          "(",
          $.range,
          ")"
        ))
      ),
      seq(
        "'",
        token.immediate(repeat(choice(
          /[^'\r\n]/,
          "''"
        ))),
        "'",
        repeat(seq(
          "(",
          $.range,
          ")"
        ))
      ),
    ),

    parenthesized_string_expression: $ => seq(
      '(',
      $.string_expression,
      ')',
      repeat(seq(
        "(",
        $.range,
        ")"
      ))
    ),

    conditional_parenthesized_string_expression: $ => seq(
      '(',
      $.conditional_string_expression,
      ')',
      repeat(seq(
        "(",
        $.range,
        ")"
      ))
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
        $._numeric_reference
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
      choice(...FORCED_ASSIGNMENT_OPERATORS, "="),
      field('right', $.numeric_expression)
    )),

    conditional_numeric_forced_assignment_expression: $ => prec.right('assign', seq(
      field('left', $._numeric_reference),
      choice(...FORCED_ASSIGNMENT_OPERATORS),
      field('right', $.numeric_expression),
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
      alias($.stringelement, $.stringarray),
      $.stringreference,
    ),

    range: $ => seq(
      $.numeric_expression,
      ':',
      $.numeric_expression
    ),

    conditional_range: $ => seq(
      $.conditional_expression,
      ':',
      $.conditional_expression
    ),

    element_subscript: $ => seq(
      "(",
      commaSep1($.numeric_expression),
      ")"
    ),

    numberelement: $ => seq(
      alias($.numberreference, $.numberarray),
      $.element_subscript,
    ),

    stringelement: $ => seq(
      field("name", $.stringidentifier),
      $.element_subscript,
      repeat(
        seq(
          "(",
          $.range,
          ")"
        )
      )
    ),

    dimension: $ => seq(
      "(",
      commaSep1(
        $.range
      ),
      ")"
    ),

    stringreference: $ => seq(
      field("name", $.stringidentifier),
      repeat(
        seq(
          "(",
          $.range,
          ")"
        )
      )
    ),

    string_array_name_mat: $ => seq(
      $._mat,
      field('name', $.stringidentifier),
    ),
    
    number_array_name_mat: $ => seq(
      $._mat,
      field('name', $.numberidentifier),
    ),

    string_name: $ => field("name", $.stringidentifier),

    numberreference: $ => field("name", $.numberidentifier),

    stringidentifier: $ => /[a-zA-Z_]\w*\$/,

    stringarray: $ => seq(
      $._mat,
      field("name", $.stringidentifier),
      repeat($.dimension)
    ),

    numberarray: $ => seq(
      $._mat,
      field("name", $.numberidentifier),
      optional($.dimension)
    ),

    _numberidentifier: $ => token(prec(-1,/[a-zA-Z_]\w*/)),
    numberidentifier: $ => token(prec(-1,/[a-zA-Z_]\w*/)),

    _mat: $ => /[mM][aA][tT][ \t]/,

    identifier: $ => /\w+\$?/,
    
    number: $ => {
      const decimal_digits = /\d+/
      const signed_integer = seq(optional(choice('-', '+')), decimal_digits)
      const exponent_part = seq(choice('e', 'E'), signed_integer)

      const decimal_literal = choice(
        seq(decimal_digits, '.', optional(decimal_digits), optional(exponent_part)),
        seq('.', decimal_digits, optional(exponent_part)),
        seq(decimal_digits, exponent_part),
        seq(decimal_digits),
      )

      const mod = seq(choice("+","-"),decimal_literal)

      return token(choice(
        decimal_literal,
        mod
      ))
    },

    unquoted_data: $ => /[^"'\n\s][^,\n]*/,

  }
});

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}

function commaSep(rule) {
  return optional(commaSep1(rule));
}
