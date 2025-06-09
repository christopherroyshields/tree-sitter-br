/**
 * @file Business Rules! Language Parser
 * @author Christopher Shields <christopherroyshields@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const NUM_VAR = /[a-zA-Z_]\w*/

const NUMERIC_SYSTEM_FUNCTIONS = [
  /abs/i,
  /atn/i,
  /bell/i,
  /ceil/i,
  /cmdkey/i,
  /cnt/i,
  /code/i,
  /cos/i,
  /curcol/i,
  /curfld/i,
  /curpos/i,
  /currow/i,
  /curtab/i,
  /curwindow/i,
  /date/i,
  /days/i,
  /debug_str/i,
  /err/i,
  /exists/i,
  /exp/i,
  /file/i,
  /filenum/i,
  /fkey/i,
  /fp/i,
  /freesp/i,
  /inf/i,
  /int/i,
  /ip/i,
  /kln/i,
  /kps/i,
  /krec/i,
  /len/i,
  /line/i,
  /lines/i,
  /linespp/i,
  /log/i,
  /lrec/i,
  /mat2str/i,
  /max/i,
  /min/i,
  /mod/i,
  /msg/i,
  /msgbox/i,
  /newpage/i,
  /next/i,
  /nxtcol/i,
  /nxtfld/i,
  /nxtrow/i,
  /ord/i,
  /pi/i,
  /pos/i,
  /printer_list/i,
  /procin/i,
  /rec/i,
  /rln/i,
  /rnd/i,
  /round/i,
  /serial/i,
  /setenv/i,
  /sgn/i,
  /sin/i,
  /sleep/i,
  /sqr/i,
  /srch/i,
  /str2mat/i,
  /sum/i,
  /tab/i,
  /tan/i,
  /timer/i,
  /val/i,
  /version/i
]

const UDIM = /udim/i;

const STRING_SYSTEM_FUNCTIONS = [
  /br_filename\$/i,
  /brerr\$/i,
  /cform\$/i,
  /chr\$/i,
  /cnvrt\$/i,
  /date\$/i,
  /decrypt\$/i,
  /encrypt\$/i,
  /env\$/i,
  /file\$/i,
  /help\$/i,
  /hex\$/i,
  /kstat\$/i,
  /login_name\$/i,
  /lpad\$/i,
  /ltrm\$/i,
  /lwrc\$/i,
  /max\$/i,
  /min\$/i,
  /msg\$/i,
  /os_filename\$/i,
  /pic\$/i,
  /program\$/i,
  /rpad\$/i,
  /rpt\$/i,
  /rtrm\$/i,
  /session\$/i,
  /srep\$/i,
  /str\$/i,
  /time\$/i,
  /trim\$/i,
  /unhex\$/i,
  /uprc\$/i,
  /userid\$/i,
  /variable\$/i,
  /wbplatform\$/i,
  /wbversion\$/i,
  /wsid\$/i,
  /xlate\$/i  
]

const NUMERIC_ARRAY_SYSTEM_FUNCTIONS = [
  /aidx/i,
  /didx/i,
]

const FORCED_ASSIGNMENT_OPERATORS = [
  ":=",
  "+=",
  "-=",
  "*=",
  "/=",
]

const STATEMENTS = {
  chain: token(/cha?i?n?/i),
  close: token(/close/i),
  display: token(/display/i),
  form: token(/form/i),
  continue: /continue/i,
  data: token(/data/i),
  def: token(/def/i),
  delete: token(/delete/i),
  dim: token(/dim/i),
  do: token(/do/i),
  else: token(/else/i),
  if: token(/if/i),
  end_def: token(/end[ \t]+def/i),
  end_if: token(/end[ \t]+if/i),
  end: token(/end/i),
  execute: token(/execute[ \t]/i),
  exit_do: token(/exit[ \t]+do/i),
  exit: token(/exit/i),
  fnend: token(/fnend/i),
  for: token(/for/i),
  gosub: token(/gosub/i),
  goto: token(/goto/i),
  print_fields: token(/print fields/i),
  input: token(/input/i),
  rinput: token(/rinput/i),
  let: token(/let/i),
  linput: token(/linput/i),
  loop: token(/loop/i),
  next: token(/next/i),
  on: token(/on/i),
  open: token(/open/i),
  option: token(/option/i),
  pause: token(/pause/i),
  print: token(/print/i),
  randomize: token(/randomize/i),
  read: token(/read/i),
  release: token(/release/i),
  rem: token(/rem/i),
  reread: token(/reread/i),
  restore: token(/restore/i),
  retry: token(/retry/i),
  return: token(/return/i),
  rewrite: token(/rewrite/i),
  stop: token(/stop/i),
  trace: token(/trace/i),
  use: token(/use/i),
  while: token(/while/i),
  write: token(/write/i),
  end_select: token(/#end[ \t]+select#/i),
  select: token(/#select#/i),
  case: token(/#case#/i),
  case_else: token(/#case[ \t]+else#/i),
  library: token(/library/i),
}

const ERROR_CONDITION = [
  /attn/i,
  /conv/i,
  /eof/i,
  /error/i,
  /help/i,
  /ioerr/i,
  /locked/i,
  /oflow/i,
  /pageoflow/i,
  /soflow/i,
  /timeout/i,
  /zdiv/i,
  /norec/i,
  /nokey/i
]

const FNKEY = /fnkey/i

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
    // [$.mat_size, $.mat_range],
    [$.udim, $.stringreference, $.numberreference],
  ],

  externals: $ => [
    $._eol,
    $.comment
  ],

  extras: $ => [
    " ",
    "\t",
    /!_.*\n/
  ],

  inline: $ => [
    $.internal_form_spec,
    $.string_form_spec,
    $.numeric_form_spec,
    $.floating_point_form_spec,
    $.skip_form_spec,
    $.pos_form_spec,
    $.x_form_spec,
    $.literal_string_form_spec,
    $.pic_form_spec
  ],

  rules: {
    source_file: $ => seq(
      optional(seq($._eol,repeat($._line_end))), // skip whitespace
      repeat($.line)
    ),

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
      "#",
      $.numeric_expression,
      optional(seq(",",choice(
        keyword("free"),
        keyword("drop")
      ))),
      optional(seq(",",keyword("release"))),
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

    library_keyword: $ => alias(/lib\w*/i,"keyword"),

    library_statement: $ => seq(
      alias(STATEMENTS.library, "statement"),
      optional(
        choice(
          seq(
            keyword("release"),
            ",",
            optional(
              seq(
                keyword("nofiles"),
                ","
              )
            ),
            field("path", $.string_expression)
          ),
          seq(
            keyword("nofiles"),
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
        field("operator", $.assignment_op),
        $.string_expression
      ))
    ),

    numeric_function_definition: $ => seq(
      alias($.numeric_function_name, $.function_name),
      optional($.parameter_list),
      optional(seq(
        field("operator", $.assignment_op),
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
              keyword("rec"),
              token.immediate("="),
              $.numeric_expression
            ),
            seq(
              keyword("key"),
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
          keyword("while"),
          keyword("until")
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
              alias(token(prec(1,/files/i)),"keyword"),
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

    string_spec: $ => alias(token(choice(
      /c/i,
      /cc/i,
      /cr/i,
      /cu/i,
      /v/i,
      /vl/i,
      /vu/i
    )), "keyword"),

    internal_spec: $ => alias(token(choice(
      /b/i,
      /bl/i,
      /bh/i,
      /pd/i,
      /zd/i
    )), "keyword"),

    numeric_spec: $ => alias(token(choice(
      /g/i,
      /gz/i,
      /n/i,
      /nz/i,
    )),"keyword"),

    floating_point_spec: $ => alias(token(choice(
      /d/i,
      /s/i,
      /l/i,
    )),"keyword"),

    string_form_spec: $ => seq(
      optional($.multi_spec),
      $.string_spec,
      optional(
        seq(
          /[ \t]+/,
          choice(
            $.int,
            $.numberreference
          )
        ),
      )
    ),

    internal_form_spec: $ => seq(
      optional($.multi_spec),
      $.internal_spec,
      optional(
        seq(
          /[ \t]+/,
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
          /[ \t]+/,
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
        alias(token.immediate(/\d+/), $.int),
        $.numberreference
      )
    ),

    pos_spec: $ => keyword("pos"),
    pos_form_spec: $ => seq(
      $.pos_spec,
      /[ \t]+/,
      choice(
        $.int,
        $.numberreference
      )
    ),

    skip_spec: $ => keyword("skip"),
    skip_form_spec: $ => seq(
      $.skip_spec,
      optional(
        seq(
        /[ \t]+/,
        choice(
          $.int,
          $.numberreference
        ))
      )
    ),

    x_spec: $ => token(/x/i),
    x_form_spec: $ => seq(
      $.x_spec,
      optional(
        seq(
          /[ \t]+/,
          choice(
            $.int,
            $.numberreference
          )
        )
      )
    ),

    pic_spec: $ => seq(
      keyword(/pic/i),
      token.immediate("("),
      token(/[^)\r\n]*/),
      ")",
    ),

    pic_form_spec: $ => seq(
      optional($.multi_spec),
      $.pic_spec
    ),

    multi_spec: $ => seq(
      choice(
        alias($.multi_spec_var_name, $.numberreference),
        $.int
      ),
      field("operator", alias("*", $._))
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

    literal_string_spec: $ => alias(token(choice(
      /"[^"\n]*"/,
      /'[^'\n]*'/,
      /`[^`\n]*`/,
    )),$.string),

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
      optional(choice(
        $.single_line_if_trailing_else,
        $.single_line_else_with_cont
      ))
    )),

    if_statement: $ => prec.right(seq(
      alias(STATEMENTS.if, "statement"),
      $.conditional_expression,
      keyword("then"),
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
      keyword("to"),
      $.numeric_expression,
      optional(seq(
        keyword("step"),
        $.numeric_expression
      ))
    ),

    fnend_statement: $ => alias(STATEMENTS.fnend, "statement"),
    string_function_name: $ => /fn\w+\$/i,
    numeric_function_name: $ => /fn\w+/i,

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
      keyword("menu"),
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
            keyword("text"),
            keyword("data"),
            keyword("status"),
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
      keyword("wait"),
      field("operator", alias(token.immediate("="), $.assignment_op)),
      $.numeric_expression,
    ),

    input_statement: $ => seq(
      alias(STATEMENTS.input, "statement"),
      choice(
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
        seq(
          optional(seq(
            $.input_wait_param,
            ":"
          )),
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
        keyword("fields"),
        keyword("select")
      ),
      choice(
        $.stringarray,
        $.string_expression
      ),
      optional(seq(
        ",",
        keyword("attr"),
        token.immediate(/[ \t]/),
        choice(
          $.string_expression,
          $.stringarray,
        )
      )),
      optional(seq(
        ",",
        $.input_wait_param,
      )),
      optional($.help_parameter),
      ":",
    ),

    help_parameter: $ => seq(
      ",",
      keyword("help"),
      choice(
        $.string_expression,
        $.stringarray
      )
    ),

    _keyword_wait: $ => seq(
      keyword("wait"),
      field("operator", $.assignment_op),
    ),

    linput_statement: $ => seq(
      alias(STATEMENTS.linput, "statement"),
      choice(
        $._string_reference,
        seq(
          $.input_wait_param,
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
              $.input_wait_param,
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
            keyword("while"),
            keyword("until"),
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

    mat_range: $ => seq(
      $.numeric_expression,
      ":",
      $.numeric_expression
    ),

    next_statement: $ => seq(
      alias(STATEMENTS.next, "statement"),
      $.numberreference
    ),

    on_statement: $ => seq(
      alias(STATEMENTS.on, "statement"),
      choice(
        seq(
          alias(token(/fkey[ \t]+/i), "keyword"),
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
              ),
            ),
            keyword("ignore"),
            keyword("system"),
          ),
          optional(
            seq(
              keyword("none"),
              choice(
                $.line_reference,
                $.label_reference
              )              
            )
          ),
          optional($.error_condition_list)
        ),
        seq(
          $.error_condition,
          choice(
            $.goto_statement,
            $.gosub_statement,
            keyword("ignore"),
            keyword("system"),
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
              keyword("none"),
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

    open_statement: $ => seq(
      alias(STATEMENTS.open, "statement"),
      $.channel,
      ":",
      $.string_expression,
      ",",
      choice(
        seq(
          keyword("display"),
          ",",
          choice(
            keyword("input"),
            keyword("output"),
            keyword("outin"),
          )
        ),
        seq(
          keyword("external"),
          ",",
          choice(
            keyword("input"),
            keyword("output"),
            keyword("outin"),
          ),
          optional(seq(
            ",",
            choice(
              keyword("sequential"),
              keyword("relative")
            )
          ))
        ),
        seq(
          keyword("internal"),
          ",",
          choice(
            keyword("input"),
            keyword("output"),
            keyword("outin"),
          ),
          optional(seq(
            ",",
            choice(
              keyword("sequential"),
              keyword("relative"),
              keyword("keyed"),
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
          keyword("invp"),
          seq(
            keyword("base"),
            choice("0","1")
          ),
          seq(
            keyword("collate"),
            choice(
              keyword("alternate"),
              keyword("native"),
            )
          ),
          keyword("retain")
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
      keyword("using"),
      token.immediate(/[ \t]/),
      choice(
        $.string_expression,
        $.line_reference,
        $.label_reference
      ),
      ":",
      $.print_output
    ),

    print_border: $ => seq(
      keyword("border"),
      optional(seq(
        /[ \t]/,
        $.string_expression
      )),
      ":",
      $.string_expression
    ),

    print_fields: $ => seq(
      keyword("fields"),
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
      keyword("link"),
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
      keyword("first"),
      keyword("last"),
      keyword("prior"),
      keyword("next"),
      keyword("same"),
    ),

    keyonly_seq: $ => keyword("keyonly"),

    rec_pos_seq: $ => seq(
      choice(
        keyword("pos"),
        keyword("rec")
      ),
      field("operator", alias(token.immediate("="),$.assignment_op)), 
      $.numeric_expression
    ),

    key_search_seq: $ => seq(
      choice(
        keyword("key"),
        keyword("search")
      ),
      field("operator", alias(token.immediate(choice("=",">=")), $.search_op)), 
      $.string_expression,
    ),

    record_locking_rule: $ => choice(
      keyword("release"),
      keyword("reserve"),
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
      keyword("using"),
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
        keyword("first"),
        keyword("last"),
        keyword("prior"),
        keyword("next"),
        keyword("same"),
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
      keyword("key"),
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
      keyword("using"),
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
        keyword("on"),
        keyword("off"),
        keyword("print")
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
      /and[ \t]/i,
      '&&'
      )),

    logical_or_op: $ => token(choice(
      /or[ \t]/i,
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

    unary_operator: $ => token(choice('~', '-', '+', /not[ \t]/i)),

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
        alias(/rem/i, $.function_name),
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

    _mat: $ => /mat[ \t]/i,

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

function keyword(keyword) {
  return alias(new RegExp(keyword, "i"), "keyword")
}

