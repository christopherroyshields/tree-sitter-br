/**
 * @file Business Rules! Language Parser
 * @author Christopher Shields <christopherroyshields@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const NUM_VAR = /[a-zA-Z_]\w*/

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
  chain: token(/[cC][hH][aA]?[iI]?[nN]?/),
  close: token(/[cC][lL][oO][sS][eE]/),
  display: token(/[dD][iI][sS][pP][lL][aA][yY]/),
  form: token(/[fF][oO][rR][mM]/),
  continue: /[cC][oO][nN][tT][iI][nN][uU][eE]/,
  data: token(/[dD][aA][tT][aA]/),
  def: token(/[dD][eE][fF]/),
  delete: token(/[dD][eE][lL][eE][tT][eE]/),
  dim: token(/[dD][iI][mM]/),
  do: token(/[dD][oO]/),
  else: token(/[eE][lL][sS][eE]/),
  if: token(/[iI][fF]/),
  end_def: token(/[eE][nN][dD][ \t]+[dD][eE][fF]/),
  end_if: token(/[eE][nN][dD][ \t]+[iI][fF]/),
  end: token(/[eE][nN][dD]/),
  execute: token(/[eE][xX][eE][cC][uU][tT][eE][ \t]/),
  exit_do: token(/[eE][xX][iI][tT][ \t]+[dD][oO]/),
  exit: token(/[eE][xX][iI][tT]/),
  fnend: token(/[fF][nN][eE][nN][dD]/),
  for: token(/[fF][oO][rR]/),
  gosub: token(/[gG][oO][sS][uU][bB]/),
  goto: token(/[gG][oO][tT][oO]/),
  print_fields: token(/[pP][rR][iI][nN][tT] [fF][iI][eE][lL][dD][sS]/),
  input: token(/[iI][nN][pP][uU][tT]/),
  rinput: token(/[rR][iI][nN][pP][uU][tT]/),
  let: token(/[lL][eE][tT]/),
  linput: token(/[lL][iI][nN][pP][uU][tT]/),
  loop: token(/[lL][oO][oO][pP]/),
  next: token(/[nN][eE][xX][tT]/),
  on: token(/[oO][nN]/),
  open: token(/[oO][pP][eE][nN]/),
  option: token(/[oO][pP][tT][iI][oO][nN]/),
  pause: token(/[pP][aA][uU][sS][eE]/),
  print: token(/[pP][rR][iI][nN][tT]/),
  randomize: token(/[rR][aA][nN][dD][oO][mM][iI][zZ][eE]/),
  read: token(/[rR][eE][aA][dD]/),
  release: token(/[Rr][Ee][Ll][Ee][Aa][Ss][Ee]/),
  rem: token(/[rR][eE][mM]/),
  reread: token(/[rR][eE][rR][eE][aA][dD]/),
  restore: token(/[rR][eE][sS][tT][oO][rR][eE]/),
  retry: token(/[rR][eE][tT][rR][yY]/),
  return: token(/[rR][eE][tT][uU][rR][nN]/),
  rewrite: token(/[rR][eE][wW][rR][iI][tT][eE]/),
  stop: token(/[sS][tT][oO][pP]/),
  trace: token(/[tT][rR][aA][cC][eE]/),
  use: token(/[uU][sS][eE]/),
  while: token(/[wW][hH][iI][lL][eE]/),
  write: token(/[wW][rR][iI][tT][eE]/),
  end_select: token(/#[eE][nN][dD][ \t]+[sS][eE][lL][eE][cC][tT]#/),
  select: token(/#[sS][eE][lL][eE][cC][tT]#/),
  case: token(/#[cC][aA][sS][eE]#/),
  case_else: token(/#[cC][aA][sS][eE][ \t]+[eE][lL][sS][eE]#/),
  library: token(/[lL][iI][bB][rR][aA][rR][yY]/),
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
  fkey: /[fF][kK][eE][yY]/,
  fnkey: /[fF][nN][kK][eE][yY]/,
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
    $._eol,
    $.comment
  ],

  extras: $ => [
    /[ \t]/,
    /!_.*\n/
  ],

  inline: $ => [
    $.int,
    $.multi_spec,
    $.function_length,
    $.field_length,
    $.fractional_length,
  ],

  rules: {
    source_file: $ => repeat($.line),

    // source_file: $ => choice($.foo),
    // foo: $ => seq(optional(seq(/\w+/,"*")),/foo/),

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
        seq(
          repeat(
            seq(
              optional($._statement),
              choice(
                $.continuation,
                $.statement_separator
              ),
            ),
          ),
          $._statement,
        ),
        $._single_line_statement,
        $.multiline_comment,
        $.doc_comment
      ),
      seq($._eol,repeat($._line_end))
    ),

    doc_comment: $ => seq(
      '/**',
      /[^*]*\*+([^/*][^*]*\*+)*/,
      '/'
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

    continuation: $ => /!:[\t ]*(\r?\n)?/,

    _statement: $ => choice(
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

    continue_statement: $ => alias(STATEMENTS.continue, "statement"),

    close_statement: $ => seq(
      alias(STATEMENTS.close,"statement"),
      // STATEMENTS.close,
      "#",
      $.numeric_expression,
      optional(seq(",",choice(
        KEYWORD.free,
        KEYWORD.drop
      ))),
      optional(seq(",",KEYWORD.release)),
      ":",
      optional(
        $.error_condition_list
      )
    ),

    data_statement: $ => seq(
      alias(STATEMENTS.data, "statement"),
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
      alias(STATEMENTS.def, "statement"),
      optional($.library_keyword),      
      choice(
        $.string_function_definition,
        $.numeric_function_definition,
      )
    ),

    library_keyword: $ => KEYWORD.library,

    library_statement: $ => seq(
      alias(STATEMENTS.library, "statement"),
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
            field("path", $.string_expression)
          ),
          seq(
            KEYWORD.nofiles,
            optional(seq(
              ",",
              field("path", $.string_expression)
            ))
          ),
          field("path", $.string_expression)
        ),
      ),
      $.library_function_list,
      optional($.error_condition_list)
    ),

    library_function_list: $ => seq(
      ":",
      optional(
        commaSep1(
          alias(choice(
            $.string_function_name,
            $.numeric_function_name,
          ), $.function_name)
        )
      )      
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

    parameter_list: $ => seq(
      '(',
      choice(
        seq(
          ";",
          commaSep1($.optional_parameter)
        ),
        seq(
          commaSep1($.required_parameter),
          optional(seq(
            ";",
            commaSep1($.optional_parameter)
          ))
        )
      ),
      ')'
    ),

    optional_parameter: $ => $.parameter,
    required_parameter: $ => $.parameter,

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

    param_substitution: $ => token(seq(
      "[[",
      /\w+/,
      "]]"
    )),

    numeric_parameter: $ => $.numberreference,

    string_parameter: $ => seq(
      alias($.string_name, $.stringreference),
      optional(seq(
        '*',
        $.int
      )
    )),

    delete_statement: $ => seq(
      alias(STATEMENTS.delete, "statement"),
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
      alias(STATEMENTS.dim, "statement"),
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
      alias(STATEMENTS.do, "statement"),
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

    error_condition: $ => token(choice(...ERROR_CONDITION)),

    line_reference: $ => /\d+/,

    chain_statement: $ => seq(
      alias(STATEMENTS.chain, "statement"),
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

    string_spec: $ => token(choice(
      /[Cc]/,
      /[Cc][Cc]/,
      /[Cc][Rr]/,
      /[Cc][Uu]/,
      /[Vv]/,
      /[Vv][Ll]/,
      /[Vv][Uu]/
    )),

    internal_spec: $ => token(choice(
      /[Bb]/,
      /[Bb][Ll]/,
      /[Bb][Hh]/,
      /[Pp][Dd]/,
      /[Zp][Dd]/
    )),

    numeric_spec: $ => token(choice(
      /[Gg]/,
      /[Gg][Zz]/,
      /[Nn]/,
      /[Nn][Zz]/,
    )),

    floating_point_spec: $ => token(choice(
      /[Dd]/,
      /[Ss]/,
      /[Ll]/,
    )),

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
      optional($.multi_spec),
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

    pos_spec: $ => token(/[Pp][Oo][Ss]/),
    pos_form_spec: $ => seq(
      $.pos_spec,
      choice(
        $.int,
        $.numberreference
      )
    ),

    skip_spec: $ => token(/[Ss][Kk][Ii][Pp]/),
    skip_form_spec: $ => seq(
      $.skip_spec,
      optional(
        choice(
          $.int,
          $.numberreference
        )
      )
    ),

    x_spec: $ => token(/[Xx]/),
    x_form_spec: $ => seq(
      $.x_spec,
      optional(
        choice(
          $.int,
          $.numberreference
        )
      )
    ),

    pic_spec: $ => token(/[pP][iI][cC]\([^)\n]*\)/),

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
      alias(NUM_VAR, $.numberidentifier),
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

    literal_string_spec: $ => token(choice(
      /"[^"\n]*"/,
      /'[^'\n]*'/,
      /`[^`\n]*`/,
    )),

    literal_string_form_spec: $ => seq(
      optional($.multi_spec),
      $.literal_string_spec
    ),

    form_statement: $ => seq(
      alias(STATEMENTS.form, "statement"),
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
      alias(STATEMENTS.else, "statement"),
      optional(
        choice(
          $.comment,
          seq(choice(...getStatements($)),optional($.comment)),
          $.if_statement,
          $.single_line_else
        )
      ),
    )),

    end_def_statement: $ => alias(STATEMENTS.end_def, "statement"),
    end_if_statement: $ =>  alias(STATEMENTS.end_if, "statement"),
    end_statement: $ => seq(alias(STATEMENTS.end, "statement"), optional($.numeric_expression)),
    execute_statement: $ => seq(
      alias(STATEMENTS.execute, "statement"),
      $.string_expression,
      optional($.error_condition_list)
    ),
    exit_do_statement: $ => alias(STATEMENTS.exit_do, "statement"),
    exit_statement: $ => seq(
      alias(STATEMENTS.exit, "statement"),
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
      choice(
        $.continuation,
        $.statement_separator
      ),
      repeat(
        seq(
          optional(choice(
            seq(
              choice(
                ...getStatements($),
              ),
              optional($.comment)
            ),
            $.comment,
          )), 
          choice(
            $.continuation,
            $.statement_separator
          ),
        )
      ),
      choice(
        seq(
          choice(
            ...getStatements($),
          ),
          optional($.comment)
        ),
        $.comment,
      ),
      // repeat1(
      //   seq(
      //     choice(
      //       $.continuation,
      //       $.statement_separator
      //     ),
      //     choice(
      //       seq(
      //         choice(
      //           ...getStatements($),
      //         ),
      //         optional($.comment)
      //       ),
      //       $.comment,
      //     )
      //   )
      // ),
      optional(choice(
        $.single_line_if_trailing_else,
        $.single_line_else_with_cont
      ))
    )),

    if_statement: $ => prec.right(seq(
      alias(STATEMENTS.if, "statement"),
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
      alias(STATEMENTS.for, "statement"),
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

    fnend_statement: $ => alias(STATEMENTS.fnend, "statement"),
    string_function_name: $ => /[fF][nN]\w+\$/i,
    numeric_function_name: $ => /[fF][nN]\w+/i,

    gosub_statement: $ => seq(
      alias(STATEMENTS.gosub, "statement"),
      choice(
        $.line_reference,
        $.label_reference
      )
    ),

    goto_statement: $ => seq(
      alias(STATEMENTS.goto, "statement"),
      choice(
        $.line_reference,
        $.label_reference
      )
    ),

    input_menu_statement: $ => seq(
      choice(
        alias(STATEMENTS.input, "statement"),
        alias(STATEMENTS.display, "statement"),
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
      alias(STATEMENTS.rinput, "statement"),
      choice(
        seq(
          optional(seq(
            $.input_wait_param,
            ":"
          )),
          $._string_reference
        ),
        seq(
          optional(seq(
            $.channel,
            optional(
              seq(
                ",",
                $.input_wait_param
              )
            ),
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
      alias(STATEMENTS.input, "statement"),
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

    linput_statement: $ => seq(
      alias(STATEMENTS.linput, "statement"),
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
      alias(STATEMENTS.loop, "statement"),
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
      field("operator", $.assignment_op),
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
          alias(token(choice(...NUMERIC_ARRAY_SYSTEM_FUNCTIONS)), $.function_name),
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
          field("operator", $.assignment_op),
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
      alias(STATEMENTS.next, "statement"),
      $.numberreference
    ),

    on_statement: $ => seq(
      alias(STATEMENTS.on, "statement"),
      choice(
        seq(
          choice(
            KEYWORD.fkey,
            KEYWORD.fnkey
          ),
          $.numeric_expression,
          choice(
            seq(
              choice(
                alias(STATEMENTS.gosub, "statement"),
                alias(STATEMENTS.goto, "statement")
              ),
              choice(
                $.line_reference,
                $.label_reference
              )
            ),
            KEYWORD.ignore,
            KEYWORD.system,
          )
        ),
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
            alias(STATEMENTS.goto, "statement"),
            alias(STATEMENTS.gosub, "statement"),
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
      alias(STATEMENTS.open, "statement"),
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
      alias(STATEMENTS.option, "statement"),
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

    pause_statement: $ => alias(STATEMENTS.pause, "statement"),

    print_statement: $ => seq(
      alias(STATEMENTS.print, "statement"),
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
      alias(STATEMENTS.read, "statement"),
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
      alias(STATEMENTS.release, "statement"),
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

    randomize_statement: $ => alias(STATEMENTS.randomize, "statement"),

    rem_statement: $ => seq(
      choice(
        alias(STATEMENTS.rem, "statement"),
        alias(STATEMENTS.use, "statement")
      ),
      optional(/[^(].*/)
    ),

    reread_statement: $ => seq(
      alias(STATEMENTS.reread, "statement"),
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
      alias(STATEMENTS.restore, "statement"),
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

    retry_statement: $ => alias(STATEMENTS.retry, "statement"),
    return_statement: $ => alias(STATEMENTS.return, "statement"),

    rewrite_statement: $ => seq(
      alias(STATEMENTS.rewrite, "statement"),
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
      alias(STATEMENTS.write, "statement"),
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
      alias(STATEMENTS.stop, "statement"),
      optional($.numeric_expression),
    ),

    trace_statement: $ => seq(
      alias(STATEMENTS.trace, "statement"),
      choice(
        KEYWORD.on,
        KEYWORD.off,
        KEYWORD.print
      )
    ),

    select_case_statement: $ => seq(
      alias(STATEMENTS.select, "statement"),
      $.expression,
      $.case_statement
    ),

    case_statement: $ => seq(
      alias(STATEMENTS.case, "statement"),
      $.expression,
      repeat(seq(
        "#",
        $.expression
      ))
    ),

    case_else_statement: $ => alias(STATEMENTS.case_else, "statement"),
    end_select_statement: $ => alias(STATEMENTS.end_select, "statement"),

    let_statement: $ => seq(
      optional(alias(STATEMENTS.let, "statement")),
      choice(
        $.string_expression,
        $.numeric_expression
      ),
      optional($.error_condition_list)
    ),

    line_number: $ => /\d{1,5}[ \t]/,
    
    label_reference: $ => /[a-zA-Z_]\w*/,

    label: $ => /[a-zA-Z_]\w*:/,

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
      field('operator', $.assignment_op),
      field('right', $.string_expression)
    )),

    concat_op: $ => "&",
    
    string_binary_expression: $ => prec.left('binary_plus', seq(
      field('left', $.string_expression),
      field('operator', $.concat_op),
      field('right', $.string_expression)
    )),

    conditional_string_binary_expression: $ => prec.left('binary_plus', seq(
      field('left', $.conditional_string_expression),
      field('operator', $.concat_op),
      field('right', $.conditional_string_expression)
    )),

    binary_relation_operator: $ => token(choice(
      '<',
      '<=',
      '=<',
      '>=',
      '=>',
      '>',
      '><',
      '<>'
    )),

    logical_and_op: $ => token(choice(
      /[aA][nN][dD][ \t]/,
      '&&'
      )),

    logical_or_op: $ => token(choice(
      /[oO][rR][ \t]/,
      '||'
      )),

    binary_shift_op: $ => token(choice(
      '>>',
      '<<'
      )),

    binary_plus_op: $ => token(choice(
      '+',
      '-'
      )),

    binary_times_op: $ => token(choice(
      '*',
      '/',
      '%'
      )),

    binary_eq_op: $ => token(choice(
      '==',
      '~=',
      )),

    binary_cond_eq_op: $ => token(choice(
      '=',
      '==',
      '~=',
      )),

    binary_exp_op: $ => token("**"),

    numeric_binary_expression: $ => choice(
      prec.left('binary_relation',seq(
        field('left', $.numeric_expression),
        field('operator', $.binary_relation_operator),
        field('right', $.numeric_expression)
      )),
      prec.left('logical_and',seq(
        field('left', $.numeric_expression),
        field('operator', $.logical_and_op),
        field('right', $.numeric_expression)
      )),
      prec.left('logical_or',seq(
        field('left', $.numeric_expression),
        field('operator',$.logical_or_op),
        field('right', $.numeric_expression)
      )),
      prec.left('binary_shift',seq(
        field('left', $.numeric_expression),
        field('operator', $.binary_shift_op),
        field('right', $.numeric_expression)
      )),
      prec.left('binary_plus',seq(
        field('left', $.numeric_expression),
        field('operator', $.binary_plus_op),
        field('right', $.numeric_expression)
      )),
      prec.left('binary_times',seq(
        field('left', $.numeric_expression),
        field('operator', $.binary_times_op),
        field('right', $.numeric_expression)
      )),
      prec.left('binary_equality',seq(
        field('left', $.numeric_expression),
        field('operator', $.binary_eq_op),
        field('right', $.numeric_expression)
      )),
      prec.right('binary_exp',seq(
        field('left', $.numeric_expression),
        field('operator', $.binary_exp_op),
        field('right', $.numeric_expression)
      )),
      prec.left('binary_relation',seq(
        field('left', $.string_expression),
        field('operator', $.binary_relation_operator),
        field('right', $.string_expression)
      )),
      prec.left('binary_equality',seq(
        field('left', $.string_expression),
        field('operator', $.binary_eq_op),
        field('right', $.string_expression)
      ))
    ),

    conditional_binary_expression: $ => choice(
      prec.left('binary_relation',seq(
        field('left', $.conditional_expression),
        field('operator', $.binary_relation_operator),
        field('right', $.conditional_expression)
      )),
      prec.left('logical_and',seq(
        field('left', $.conditional_expression),
        field('operator', $.logical_and_op),
        field('right', $.conditional_expression)
      )),
      prec.left('logical_or',seq(
        field('left', $.conditional_expression),
        field('operator',$.logical_or_op),
        field('right', $.conditional_expression)
      )),
      prec.left('binary_shift',seq(
        field('left', $.conditional_expression),
        field('operator', $.binary_shift_op),
        field('right', $.conditional_expression)
      )),
      prec.left('binary_plus',seq(
        field('left', $.conditional_expression),
        field('operator', $.binary_plus_op),
        field('right', $.conditional_expression)
      )),
      prec.left('binary_times',seq(
        field('left', $.conditional_expression),
        field('operator', $.binary_times_op),
        field('right', $.conditional_expression)
      )),
      prec.left('binary_equality',seq(
        field('left', $.conditional_expression),
        field('operator', $.binary_cond_eq_op),
        field('right', $.conditional_expression)
      )),
      prec.right('binary_exp',seq(
        field('left', $.conditional_expression),
        field('operator', $.binary_exp_op),
        field('right', $.conditional_expression)
      )),
      prec.left('binary_relation',seq(
        field('left', $.conditional_string_expression),
        field('operator', $.binary_relation_operator),
        field('right', $.conditional_string_expression)
      )),
      prec.left('binary_equality',seq(
        field('left', $.conditional_string_expression),
        field('operator', $.binary_cond_eq_op),
        field('right', $.conditional_string_expression)
      ))
    ),

    unary_operator: $ => token(choice('~', '-', '+', /[nN][oO][tT][ \t]/)),

    numeric_unary_expression: $ => prec.left('unary_void', seq(
      field("operator", $.unary_operator),
      field('argument', $.numeric_expression)
    )),

    conditional_unary_expression: $ => prec.left('unary_void', seq(
      field('operator', $.unary_operator),
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
      field("operator", $.assignment_operator),
      field('right', $.string_expression)
    )),

    numeric_system_function: $ => choice(
      seq(
        alias(/[rR][eE][mM]/, $.function_name),
        field('arguments', $.arguments)
      ),
      seq(
        alias(token(choice(...NUMERIC_SYSTEM_FUNCTIONS)), $.function_name),
        optional(field('arguments', $.arguments))
      )
    ),

    string_system_function: $ => seq(
      alias(token(choice(...STRING_SYSTEM_FUNCTIONS)), $.function_name),
      optional(field('arguments', $.arguments)),
      repeat(
        seq(
          "(",
          $.range,
          ")"
        )
      )
    ),

    assignment_operator: $ => choice($.assignment_op,$.forced_assignment_op),

    numeric_function_assignment: $ => prec.right('assign',seq(
      field('left', alias($.numeric_function_name, $.function_name)),
      field("operator", $.assignment_operator),
      field('right', $.numeric_expression)
    )),

    forced_assignment_op: $ => ":=",

    conditional_numeric_function_assignment: $ => prec.right('assign',seq(
      field('left', alias($.numeric_function_name, $.function_name)),
      field("operator", $.forced_assignment_op),
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

    argument: $ => choice(
      $.expression,
      $.param_substitution,
    ),
    
    arguments: $ => seq(
      "(",
      optional($.argument),
      repeat(seq(
        ",",
        optional($.argument)        
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

    string_array_forced_assignment_expression: $ => prec.right('assign', seq(
      field('left', $.stringarray),
      field("operator", $.forced_assignment_op),
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
      field("operator", $.forced_assignment_op),
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

    assignment_op: $ => "=",
    conditional_numeric_forced_assignment_op: $ => token(choice(...FORCED_ASSIGNMENT_OPERATORS)),
    numeric_forced_assignment_op: $ => choice($.conditional_numeric_forced_assignment_op, $.assignment_op),

    numeric_forced_assignment_expression: $ => prec.right('assign', seq(
      field('left', $._numeric_reference),
      field("operator", $.numeric_forced_assignment_op),
      field('right', $.numeric_expression)
    )),

    conditional_numeric_forced_assignment_expression: $ => prec.right('assign', seq(
      field('left', $._numeric_reference),
      field("operator", $.conditional_numeric_forced_assignment_op),
      field('right', $.numeric_expression),
    )),

    // string_forced_assignment_expression_op: $ => ":=",

    string_forced_assignment_expression: $ => prec.right('assign', seq(
      field('left', $._string_reference),
      field("operator", $.forced_assignment_op),
      field('right', $.string_expression)
    )),

    conditional_string_forced_assignment_expression: $ => prec.right('assign', seq(
      field('left', $._string_reference),
      field("operator", $.forced_assignment_op),
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
        decimal_digits,
      )

      const mod = seq(choice("+","-"),decimal_literal)

      return token(choice(
        decimal_literal,
        mod
      ))
    },

    unquoted_data: $ => /[^"'\r\n\s][^,\r\n]*/,

  }
});

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}

function commaSep(rule) {
  return optional(commaSep1(rule));
}
