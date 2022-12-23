#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 222
#define LARGE_STATE_COUNT 32
#define SYMBOL_COUNT 205
#define ALIAS_COUNT 0
#define TOKEN_COUNT 160
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 6

enum {
  sym_identifier = 1,
  aux_sym__multi_line_statement_token1 = 2,
  anon_sym_COLON = 3,
  sym_line_number = 4,
  sym_label = 5,
  anon_sym_def = 6,
  anon_sym_EQ = 7,
  anon_sym_fnend = 8,
  anon_sym_STAR = 9,
  sym_string_function_name = 10,
  sym_numeric_function_name = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  anon_sym_AMP = 14,
  anon_sym_bool = 15,
  aux_sym_let_statement_token1 = 16,
  aux_sym_let_statement_token2 = 17,
  aux_sym_print_statement_token1 = 18,
  anon_sym_COMMA = 19,
  anon_sym_SEMI = 20,
  anon_sym_TILDE = 21,
  anon_sym_DASH = 22,
  anon_sym_PLUS = 23,
  aux_sym_unary_expression_token1 = 24,
  aux_sym_system_function_token1 = 25,
  aux_sym_system_function_token2 = 26,
  aux_sym_system_function_token3 = 27,
  aux_sym_system_function_token4 = 28,
  aux_sym_system_function_token5 = 29,
  aux_sym_system_function_token6 = 30,
  aux_sym_system_function_token7 = 31,
  aux_sym_system_function_token8 = 32,
  aux_sym_system_function_token9 = 33,
  aux_sym_system_function_token10 = 34,
  aux_sym_system_function_token11 = 35,
  aux_sym_system_function_token12 = 36,
  aux_sym_system_function_token13 = 37,
  aux_sym_system_function_token14 = 38,
  aux_sym_system_function_token15 = 39,
  aux_sym_system_function_token16 = 40,
  aux_sym_system_function_token17 = 41,
  aux_sym_system_function_token18 = 42,
  aux_sym_system_function_token19 = 43,
  aux_sym_system_function_token20 = 44,
  aux_sym_system_function_token21 = 45,
  aux_sym_system_function_token22 = 46,
  aux_sym_system_function_token23 = 47,
  aux_sym_system_function_token24 = 48,
  aux_sym_system_function_token25 = 49,
  aux_sym_system_function_token26 = 50,
  aux_sym_system_function_token27 = 51,
  aux_sym_system_function_token28 = 52,
  aux_sym_system_function_token29 = 53,
  aux_sym_system_function_token30 = 54,
  aux_sym_system_function_token31 = 55,
  aux_sym_system_function_token32 = 56,
  aux_sym_system_function_token33 = 57,
  aux_sym_system_function_token34 = 58,
  aux_sym_system_function_token35 = 59,
  aux_sym_system_function_token36 = 60,
  aux_sym_system_function_token37 = 61,
  aux_sym_system_function_token38 = 62,
  aux_sym_system_function_token39 = 63,
  aux_sym_system_function_token40 = 64,
  aux_sym_system_function_token41 = 65,
  aux_sym_system_function_token42 = 66,
  aux_sym_system_function_token43 = 67,
  aux_sym_system_function_token44 = 68,
  aux_sym_system_function_token45 = 69,
  aux_sym_system_function_token46 = 70,
  aux_sym_system_function_token47 = 71,
  aux_sym_system_function_token48 = 72,
  aux_sym_system_function_token49 = 73,
  aux_sym_system_function_token50 = 74,
  aux_sym_system_function_token51 = 75,
  aux_sym_system_function_token52 = 76,
  aux_sym_system_function_token53 = 77,
  aux_sym_system_function_token54 = 78,
  aux_sym_system_function_token55 = 79,
  aux_sym_system_function_token56 = 80,
  aux_sym_system_function_token57 = 81,
  aux_sym_system_function_token58 = 82,
  aux_sym_system_function_token59 = 83,
  aux_sym_system_function_token60 = 84,
  aux_sym_system_function_token61 = 85,
  aux_sym_system_function_token62 = 86,
  aux_sym_system_function_token63 = 87,
  aux_sym_system_function_token64 = 88,
  aux_sym_system_function_token65 = 89,
  aux_sym_system_function_token66 = 90,
  aux_sym_system_function_token67 = 91,
  aux_sym_system_function_token68 = 92,
  aux_sym_system_function_token69 = 93,
  aux_sym_system_function_token70 = 94,
  aux_sym_system_function_token71 = 95,
  aux_sym_system_function_token72 = 96,
  aux_sym_system_function_token73 = 97,
  aux_sym_system_function_token74 = 98,
  aux_sym_system_function_token75 = 99,
  aux_sym_system_function_token76 = 100,
  aux_sym_system_function_token77 = 101,
  aux_sym_system_function_token78 = 102,
  aux_sym_system_function_token79 = 103,
  aux_sym_system_function_token80 = 104,
  aux_sym_system_function_token81 = 105,
  aux_sym_system_function_token82 = 106,
  aux_sym_system_function_token83 = 107,
  aux_sym_system_function_token84 = 108,
  aux_sym_system_function_token85 = 109,
  aux_sym_system_function_token86 = 110,
  aux_sym_system_function_token87 = 111,
  aux_sym_system_function_token88 = 112,
  aux_sym_system_function_token89 = 113,
  aux_sym_system_function_token90 = 114,
  aux_sym_system_function_token91 = 115,
  aux_sym_system_function_token92 = 116,
  aux_sym_system_function_token93 = 117,
  aux_sym_system_function_token94 = 118,
  aux_sym_system_function_token95 = 119,
  aux_sym_system_function_token96 = 120,
  aux_sym_system_function_token97 = 121,
  aux_sym_system_function_token98 = 122,
  aux_sym_system_function_token99 = 123,
  aux_sym_system_function_token100 = 124,
  aux_sym_system_function_token101 = 125,
  aux_sym_system_function_token102 = 126,
  aux_sym_system_function_token103 = 127,
  aux_sym_system_function_token104 = 128,
  aux_sym_system_function_token105 = 129,
  aux_sym_system_function_token106 = 130,
  aux_sym_system_function_token107 = 131,
  aux_sym_system_function_token108 = 132,
  aux_sym_system_function_token109 = 133,
  aux_sym_system_function_token110 = 134,
  aux_sym_system_function_token111 = 135,
  aux_sym_system_function_token112 = 136,
  aux_sym_system_function_token113 = 137,
  aux_sym_system_function_token114 = 138,
  sym__string_function_identifier = 139,
  sym__numeric_function_identifier = 140,
  anon_sym_BQUOTE = 141,
  anon_sym_BQUOTE_BQUOTE = 142,
  sym__template_chars = 143,
  anon_sym_LBRACE_LBRACE = 144,
  anon_sym_RBRACE_RBRACE = 145,
  anon_sym_DQUOTE = 146,
  aux_sym_string_token1 = 147,
  anon_sym_SQUOTE = 148,
  aux_sym_string_token2 = 149,
  anon_sym_COLON_EQ = 150,
  anon_sym_PLUS_EQ = 151,
  anon_sym_DASH_EQ = 152,
  anon_sym_STAR_EQ = 153,
  anon_sym_SLASH_EQ = 154,
  sym_stringidentifier = 155,
  sym_numberidentifier = 156,
  sym__mat = 157,
  aux_sym_number_token1 = 158,
  anon_sym_DOT = 159,
  sym_source_file = 160,
  sym_line = 161,
  sym__single_line_statement = 162,
  sym__multi_line_statement = 163,
  sym_statement = 164,
  sym__definition = 165,
  sym_function_definition = 166,
  sym_string_function_definition = 167,
  sym_numeric_function_definition = 168,
  sym_function_length = 169,
  sym_parameter_list = 170,
  sym_parameter = 171,
  sym_let_statement = 172,
  sym_print_statement = 173,
  sym__expression = 174,
  sym_unary_expression = 175,
  sym_primary_expression = 176,
  sym_call_expression = 177,
  sym_system_function = 178,
  sym_user_function = 179,
  sym_arguments = 180,
  sym_template_string = 181,
  sym_template_substitution = 182,
  sym_string = 183,
  sym_parenthesized_expression = 184,
  sym_assignment_expression = 185,
  sym_forced_assignment_expression = 186,
  sym__reference = 187,
  sym_numberelement = 188,
  sym_stringelement = 189,
  sym_stringarray = 190,
  sym_dimension = 191,
  sym_stringreference = 192,
  sym_numberreference = 193,
  sym_range = 194,
  sym_numberarray = 195,
  sym_number = 196,
  aux_sym_source_file_repeat1 = 197,
  aux_sym__multi_line_statement_repeat1 = 198,
  aux_sym_print_statement_repeat1 = 199,
  aux_sym_arguments_repeat1 = 200,
  aux_sym_template_string_repeat1 = 201,
  aux_sym_stringelement_repeat1 = 202,
  aux_sym_stringarray_repeat1 = 203,
  aux_sym_dimension_repeat1 = 204,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [aux_sym__multi_line_statement_token1] = "_multi_line_statement_token1",
  [anon_sym_COLON] = ":",
  [sym_line_number] = "line_number",
  [sym_label] = "label",
  [anon_sym_def] = "def",
  [anon_sym_EQ] = "=",
  [anon_sym_fnend] = "fnend",
  [anon_sym_STAR] = "*",
  [sym_string_function_name] = "string_function_name",
  [sym_numeric_function_name] = "numeric_function_name",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_AMP] = "&",
  [anon_sym_bool] = "bool",
  [aux_sym_let_statement_token1] = "let_statement_token1",
  [aux_sym_let_statement_token2] = "let_statement_token2",
  [aux_sym_print_statement_token1] = "print_statement_token1",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_TILDE] = "~",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [aux_sym_unary_expression_token1] = "unary_expression_token1",
  [aux_sym_system_function_token1] = "system_function_token1",
  [aux_sym_system_function_token2] = "system_function_token2",
  [aux_sym_system_function_token3] = "system_function_token3",
  [aux_sym_system_function_token4] = "system_function_token4",
  [aux_sym_system_function_token5] = "system_function_token5",
  [aux_sym_system_function_token6] = "system_function_token6",
  [aux_sym_system_function_token7] = "system_function_token7",
  [aux_sym_system_function_token8] = "system_function_token8",
  [aux_sym_system_function_token9] = "system_function_token9",
  [aux_sym_system_function_token10] = "system_function_token10",
  [aux_sym_system_function_token11] = "system_function_token11",
  [aux_sym_system_function_token12] = "system_function_token12",
  [aux_sym_system_function_token13] = "system_function_token13",
  [aux_sym_system_function_token14] = "system_function_token14",
  [aux_sym_system_function_token15] = "system_function_token15",
  [aux_sym_system_function_token16] = "system_function_token16",
  [aux_sym_system_function_token17] = "system_function_token17",
  [aux_sym_system_function_token18] = "system_function_token18",
  [aux_sym_system_function_token19] = "system_function_token19",
  [aux_sym_system_function_token20] = "system_function_token20",
  [aux_sym_system_function_token21] = "system_function_token21",
  [aux_sym_system_function_token22] = "system_function_token22",
  [aux_sym_system_function_token23] = "system_function_token23",
  [aux_sym_system_function_token24] = "system_function_token24",
  [aux_sym_system_function_token25] = "system_function_token25",
  [aux_sym_system_function_token26] = "system_function_token26",
  [aux_sym_system_function_token27] = "system_function_token27",
  [aux_sym_system_function_token28] = "system_function_token28",
  [aux_sym_system_function_token29] = "system_function_token29",
  [aux_sym_system_function_token30] = "system_function_token30",
  [aux_sym_system_function_token31] = "system_function_token31",
  [aux_sym_system_function_token32] = "system_function_token32",
  [aux_sym_system_function_token33] = "system_function_token33",
  [aux_sym_system_function_token34] = "system_function_token34",
  [aux_sym_system_function_token35] = "system_function_token35",
  [aux_sym_system_function_token36] = "system_function_token36",
  [aux_sym_system_function_token37] = "system_function_token37",
  [aux_sym_system_function_token38] = "system_function_token38",
  [aux_sym_system_function_token39] = "system_function_token39",
  [aux_sym_system_function_token40] = "system_function_token40",
  [aux_sym_system_function_token41] = "system_function_token41",
  [aux_sym_system_function_token42] = "system_function_token42",
  [aux_sym_system_function_token43] = "system_function_token43",
  [aux_sym_system_function_token44] = "system_function_token44",
  [aux_sym_system_function_token45] = "system_function_token45",
  [aux_sym_system_function_token46] = "system_function_token46",
  [aux_sym_system_function_token47] = "system_function_token47",
  [aux_sym_system_function_token48] = "system_function_token48",
  [aux_sym_system_function_token49] = "system_function_token49",
  [aux_sym_system_function_token50] = "system_function_token50",
  [aux_sym_system_function_token51] = "system_function_token51",
  [aux_sym_system_function_token52] = "system_function_token52",
  [aux_sym_system_function_token53] = "system_function_token53",
  [aux_sym_system_function_token54] = "system_function_token54",
  [aux_sym_system_function_token55] = "system_function_token55",
  [aux_sym_system_function_token56] = "system_function_token56",
  [aux_sym_system_function_token57] = "system_function_token57",
  [aux_sym_system_function_token58] = "system_function_token58",
  [aux_sym_system_function_token59] = "system_function_token59",
  [aux_sym_system_function_token60] = "system_function_token60",
  [aux_sym_system_function_token61] = "system_function_token61",
  [aux_sym_system_function_token62] = "system_function_token62",
  [aux_sym_system_function_token63] = "system_function_token63",
  [aux_sym_system_function_token64] = "system_function_token64",
  [aux_sym_system_function_token65] = "system_function_token65",
  [aux_sym_system_function_token66] = "system_function_token66",
  [aux_sym_system_function_token67] = "system_function_token67",
  [aux_sym_system_function_token68] = "system_function_token68",
  [aux_sym_system_function_token69] = "system_function_token69",
  [aux_sym_system_function_token70] = "system_function_token70",
  [aux_sym_system_function_token71] = "system_function_token71",
  [aux_sym_system_function_token72] = "system_function_token72",
  [aux_sym_system_function_token73] = "system_function_token73",
  [aux_sym_system_function_token74] = "system_function_token74",
  [aux_sym_system_function_token75] = "system_function_token75",
  [aux_sym_system_function_token76] = "system_function_token76",
  [aux_sym_system_function_token77] = "system_function_token77",
  [aux_sym_system_function_token78] = "system_function_token78",
  [aux_sym_system_function_token79] = "system_function_token79",
  [aux_sym_system_function_token80] = "system_function_token80",
  [aux_sym_system_function_token81] = "system_function_token81",
  [aux_sym_system_function_token82] = "system_function_token82",
  [aux_sym_system_function_token83] = "system_function_token83",
  [aux_sym_system_function_token84] = "system_function_token84",
  [aux_sym_system_function_token85] = "system_function_token85",
  [aux_sym_system_function_token86] = "system_function_token86",
  [aux_sym_system_function_token87] = "system_function_token87",
  [aux_sym_system_function_token88] = "system_function_token88",
  [aux_sym_system_function_token89] = "system_function_token89",
  [aux_sym_system_function_token90] = "system_function_token90",
  [aux_sym_system_function_token91] = "system_function_token91",
  [aux_sym_system_function_token92] = "system_function_token92",
  [aux_sym_system_function_token93] = "system_function_token93",
  [aux_sym_system_function_token94] = "system_function_token94",
  [aux_sym_system_function_token95] = "system_function_token95",
  [aux_sym_system_function_token96] = "system_function_token96",
  [aux_sym_system_function_token97] = "system_function_token97",
  [aux_sym_system_function_token98] = "system_function_token98",
  [aux_sym_system_function_token99] = "system_function_token99",
  [aux_sym_system_function_token100] = "system_function_token100",
  [aux_sym_system_function_token101] = "system_function_token101",
  [aux_sym_system_function_token102] = "system_function_token102",
  [aux_sym_system_function_token103] = "system_function_token103",
  [aux_sym_system_function_token104] = "system_function_token104",
  [aux_sym_system_function_token105] = "system_function_token105",
  [aux_sym_system_function_token106] = "system_function_token106",
  [aux_sym_system_function_token107] = "system_function_token107",
  [aux_sym_system_function_token108] = "system_function_token108",
  [aux_sym_system_function_token109] = "system_function_token109",
  [aux_sym_system_function_token110] = "system_function_token110",
  [aux_sym_system_function_token111] = "system_function_token111",
  [aux_sym_system_function_token112] = "system_function_token112",
  [aux_sym_system_function_token113] = "system_function_token113",
  [aux_sym_system_function_token114] = "system_function_token114",
  [sym__string_function_identifier] = "_string_function_identifier",
  [sym__numeric_function_identifier] = "_numeric_function_identifier",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_BQUOTE_BQUOTE] = "``",
  [sym__template_chars] = "_template_chars",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [sym_stringidentifier] = "stringidentifier",
  [sym_numberidentifier] = "numberidentifier",
  [sym__mat] = "_mat",
  [aux_sym_number_token1] = "number_token1",
  [anon_sym_DOT] = ".",
  [sym_source_file] = "source_file",
  [sym_line] = "line",
  [sym__single_line_statement] = "_single_line_statement",
  [sym__multi_line_statement] = "_multi_line_statement",
  [sym_statement] = "statement",
  [sym__definition] = "_definition",
  [sym_function_definition] = "function_definition",
  [sym_string_function_definition] = "string_function_definition",
  [sym_numeric_function_definition] = "numeric_function_definition",
  [sym_function_length] = "function_length",
  [sym_parameter_list] = "parameter_list",
  [sym_parameter] = "parameter",
  [sym_let_statement] = "let_statement",
  [sym_print_statement] = "print_statement",
  [sym__expression] = "_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_primary_expression] = "primary_expression",
  [sym_call_expression] = "call_expression",
  [sym_system_function] = "system_function",
  [sym_user_function] = "user_function",
  [sym_arguments] = "arguments",
  [sym_template_string] = "template_string",
  [sym_template_substitution] = "template_substitution",
  [sym_string] = "string",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_assignment_expression] = "assignment_expression",
  [sym_forced_assignment_expression] = "forced_assignment_expression",
  [sym__reference] = "_reference",
  [sym_numberelement] = "numberelement",
  [sym_stringelement] = "stringelement",
  [sym_stringarray] = "stringarray",
  [sym_dimension] = "dimension",
  [sym_stringreference] = "stringreference",
  [sym_numberreference] = "numberreference",
  [sym_range] = "range",
  [sym_numberarray] = "numberarray",
  [sym_number] = "number",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__multi_line_statement_repeat1] = "_multi_line_statement_repeat1",
  [aux_sym_print_statement_repeat1] = "print_statement_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_template_string_repeat1] = "template_string_repeat1",
  [aux_sym_stringelement_repeat1] = "stringelement_repeat1",
  [aux_sym_stringarray_repeat1] = "stringarray_repeat1",
  [aux_sym_dimension_repeat1] = "dimension_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [aux_sym__multi_line_statement_token1] = aux_sym__multi_line_statement_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_line_number] = sym_line_number,
  [sym_label] = sym_label,
  [anon_sym_def] = anon_sym_def,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_fnend] = anon_sym_fnend,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym_string_function_name] = sym_string_function_name,
  [sym_numeric_function_name] = sym_numeric_function_name,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_bool] = anon_sym_bool,
  [aux_sym_let_statement_token1] = aux_sym_let_statement_token1,
  [aux_sym_let_statement_token2] = aux_sym_let_statement_token2,
  [aux_sym_print_statement_token1] = aux_sym_print_statement_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [aux_sym_unary_expression_token1] = aux_sym_unary_expression_token1,
  [aux_sym_system_function_token1] = aux_sym_system_function_token1,
  [aux_sym_system_function_token2] = aux_sym_system_function_token2,
  [aux_sym_system_function_token3] = aux_sym_system_function_token3,
  [aux_sym_system_function_token4] = aux_sym_system_function_token4,
  [aux_sym_system_function_token5] = aux_sym_system_function_token5,
  [aux_sym_system_function_token6] = aux_sym_system_function_token6,
  [aux_sym_system_function_token7] = aux_sym_system_function_token7,
  [aux_sym_system_function_token8] = aux_sym_system_function_token8,
  [aux_sym_system_function_token9] = aux_sym_system_function_token9,
  [aux_sym_system_function_token10] = aux_sym_system_function_token10,
  [aux_sym_system_function_token11] = aux_sym_system_function_token11,
  [aux_sym_system_function_token12] = aux_sym_system_function_token12,
  [aux_sym_system_function_token13] = aux_sym_system_function_token13,
  [aux_sym_system_function_token14] = aux_sym_system_function_token14,
  [aux_sym_system_function_token15] = aux_sym_system_function_token15,
  [aux_sym_system_function_token16] = aux_sym_system_function_token16,
  [aux_sym_system_function_token17] = aux_sym_system_function_token17,
  [aux_sym_system_function_token18] = aux_sym_system_function_token18,
  [aux_sym_system_function_token19] = aux_sym_system_function_token19,
  [aux_sym_system_function_token20] = aux_sym_system_function_token20,
  [aux_sym_system_function_token21] = aux_sym_system_function_token21,
  [aux_sym_system_function_token22] = aux_sym_system_function_token22,
  [aux_sym_system_function_token23] = aux_sym_system_function_token23,
  [aux_sym_system_function_token24] = aux_sym_system_function_token24,
  [aux_sym_system_function_token25] = aux_sym_system_function_token25,
  [aux_sym_system_function_token26] = aux_sym_system_function_token26,
  [aux_sym_system_function_token27] = aux_sym_system_function_token27,
  [aux_sym_system_function_token28] = aux_sym_system_function_token28,
  [aux_sym_system_function_token29] = aux_sym_system_function_token29,
  [aux_sym_system_function_token30] = aux_sym_system_function_token30,
  [aux_sym_system_function_token31] = aux_sym_system_function_token31,
  [aux_sym_system_function_token32] = aux_sym_system_function_token32,
  [aux_sym_system_function_token33] = aux_sym_system_function_token33,
  [aux_sym_system_function_token34] = aux_sym_system_function_token34,
  [aux_sym_system_function_token35] = aux_sym_system_function_token35,
  [aux_sym_system_function_token36] = aux_sym_system_function_token36,
  [aux_sym_system_function_token37] = aux_sym_system_function_token37,
  [aux_sym_system_function_token38] = aux_sym_system_function_token38,
  [aux_sym_system_function_token39] = aux_sym_system_function_token39,
  [aux_sym_system_function_token40] = aux_sym_system_function_token40,
  [aux_sym_system_function_token41] = aux_sym_system_function_token41,
  [aux_sym_system_function_token42] = aux_sym_system_function_token42,
  [aux_sym_system_function_token43] = aux_sym_system_function_token43,
  [aux_sym_system_function_token44] = aux_sym_system_function_token44,
  [aux_sym_system_function_token45] = aux_sym_system_function_token45,
  [aux_sym_system_function_token46] = aux_sym_system_function_token46,
  [aux_sym_system_function_token47] = aux_sym_system_function_token47,
  [aux_sym_system_function_token48] = aux_sym_system_function_token48,
  [aux_sym_system_function_token49] = aux_sym_system_function_token49,
  [aux_sym_system_function_token50] = aux_sym_system_function_token50,
  [aux_sym_system_function_token51] = aux_sym_system_function_token51,
  [aux_sym_system_function_token52] = aux_sym_system_function_token52,
  [aux_sym_system_function_token53] = aux_sym_system_function_token53,
  [aux_sym_system_function_token54] = aux_sym_system_function_token54,
  [aux_sym_system_function_token55] = aux_sym_system_function_token55,
  [aux_sym_system_function_token56] = aux_sym_system_function_token56,
  [aux_sym_system_function_token57] = aux_sym_system_function_token57,
  [aux_sym_system_function_token58] = aux_sym_system_function_token58,
  [aux_sym_system_function_token59] = aux_sym_system_function_token59,
  [aux_sym_system_function_token60] = aux_sym_system_function_token60,
  [aux_sym_system_function_token61] = aux_sym_system_function_token61,
  [aux_sym_system_function_token62] = aux_sym_system_function_token62,
  [aux_sym_system_function_token63] = aux_sym_system_function_token63,
  [aux_sym_system_function_token64] = aux_sym_system_function_token64,
  [aux_sym_system_function_token65] = aux_sym_system_function_token65,
  [aux_sym_system_function_token66] = aux_sym_system_function_token66,
  [aux_sym_system_function_token67] = aux_sym_system_function_token67,
  [aux_sym_system_function_token68] = aux_sym_system_function_token68,
  [aux_sym_system_function_token69] = aux_sym_system_function_token69,
  [aux_sym_system_function_token70] = aux_sym_system_function_token70,
  [aux_sym_system_function_token71] = aux_sym_system_function_token71,
  [aux_sym_system_function_token72] = aux_sym_system_function_token72,
  [aux_sym_system_function_token73] = aux_sym_system_function_token73,
  [aux_sym_system_function_token74] = aux_sym_system_function_token74,
  [aux_sym_system_function_token75] = aux_sym_system_function_token75,
  [aux_sym_system_function_token76] = aux_sym_system_function_token76,
  [aux_sym_system_function_token77] = aux_sym_system_function_token77,
  [aux_sym_system_function_token78] = aux_sym_system_function_token78,
  [aux_sym_system_function_token79] = aux_sym_system_function_token79,
  [aux_sym_system_function_token80] = aux_sym_system_function_token80,
  [aux_sym_system_function_token81] = aux_sym_system_function_token81,
  [aux_sym_system_function_token82] = aux_sym_system_function_token82,
  [aux_sym_system_function_token83] = aux_sym_system_function_token83,
  [aux_sym_system_function_token84] = aux_sym_system_function_token84,
  [aux_sym_system_function_token85] = aux_sym_system_function_token85,
  [aux_sym_system_function_token86] = aux_sym_system_function_token86,
  [aux_sym_system_function_token87] = aux_sym_system_function_token87,
  [aux_sym_system_function_token88] = aux_sym_system_function_token88,
  [aux_sym_system_function_token89] = aux_sym_system_function_token89,
  [aux_sym_system_function_token90] = aux_sym_system_function_token90,
  [aux_sym_system_function_token91] = aux_sym_system_function_token91,
  [aux_sym_system_function_token92] = aux_sym_system_function_token92,
  [aux_sym_system_function_token93] = aux_sym_system_function_token93,
  [aux_sym_system_function_token94] = aux_sym_system_function_token94,
  [aux_sym_system_function_token95] = aux_sym_system_function_token95,
  [aux_sym_system_function_token96] = aux_sym_system_function_token96,
  [aux_sym_system_function_token97] = aux_sym_system_function_token97,
  [aux_sym_system_function_token98] = aux_sym_system_function_token98,
  [aux_sym_system_function_token99] = aux_sym_system_function_token99,
  [aux_sym_system_function_token100] = aux_sym_system_function_token100,
  [aux_sym_system_function_token101] = aux_sym_system_function_token101,
  [aux_sym_system_function_token102] = aux_sym_system_function_token102,
  [aux_sym_system_function_token103] = aux_sym_system_function_token103,
  [aux_sym_system_function_token104] = aux_sym_system_function_token104,
  [aux_sym_system_function_token105] = aux_sym_system_function_token105,
  [aux_sym_system_function_token106] = aux_sym_system_function_token106,
  [aux_sym_system_function_token107] = aux_sym_system_function_token107,
  [aux_sym_system_function_token108] = aux_sym_system_function_token108,
  [aux_sym_system_function_token109] = aux_sym_system_function_token109,
  [aux_sym_system_function_token110] = aux_sym_system_function_token110,
  [aux_sym_system_function_token111] = aux_sym_system_function_token111,
  [aux_sym_system_function_token112] = aux_sym_system_function_token112,
  [aux_sym_system_function_token113] = aux_sym_system_function_token113,
  [aux_sym_system_function_token114] = aux_sym_system_function_token114,
  [sym__string_function_identifier] = sym__string_function_identifier,
  [sym__numeric_function_identifier] = sym__numeric_function_identifier,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_BQUOTE_BQUOTE] = anon_sym_BQUOTE_BQUOTE,
  [sym__template_chars] = sym__template_chars,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [sym_stringidentifier] = sym_stringidentifier,
  [sym_numberidentifier] = sym_numberidentifier,
  [sym__mat] = sym__mat,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_source_file] = sym_source_file,
  [sym_line] = sym_line,
  [sym__single_line_statement] = sym__single_line_statement,
  [sym__multi_line_statement] = sym__multi_line_statement,
  [sym_statement] = sym_statement,
  [sym__definition] = sym__definition,
  [sym_function_definition] = sym_function_definition,
  [sym_string_function_definition] = sym_string_function_definition,
  [sym_numeric_function_definition] = sym_numeric_function_definition,
  [sym_function_length] = sym_function_length,
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameter] = sym_parameter,
  [sym_let_statement] = sym_let_statement,
  [sym_print_statement] = sym_print_statement,
  [sym__expression] = sym__expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_primary_expression] = sym_primary_expression,
  [sym_call_expression] = sym_call_expression,
  [sym_system_function] = sym_system_function,
  [sym_user_function] = sym_user_function,
  [sym_arguments] = sym_arguments,
  [sym_template_string] = sym_template_string,
  [sym_template_substitution] = sym_template_substitution,
  [sym_string] = sym_string,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_assignment_expression] = sym_assignment_expression,
  [sym_forced_assignment_expression] = sym_forced_assignment_expression,
  [sym__reference] = sym__reference,
  [sym_numberelement] = sym_numberelement,
  [sym_stringelement] = sym_stringelement,
  [sym_stringarray] = sym_stringarray,
  [sym_dimension] = sym_dimension,
  [sym_stringreference] = sym_stringreference,
  [sym_numberreference] = sym_numberreference,
  [sym_range] = sym_range,
  [sym_numberarray] = sym_numberarray,
  [sym_number] = sym_number,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__multi_line_statement_repeat1] = aux_sym__multi_line_statement_repeat1,
  [aux_sym_print_statement_repeat1] = aux_sym_print_statement_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_template_string_repeat1] = aux_sym_template_string_repeat1,
  [aux_sym_stringelement_repeat1] = aux_sym_stringelement_repeat1,
  [aux_sym_stringarray_repeat1] = aux_sym_stringarray_repeat1,
  [aux_sym_dimension_repeat1] = aux_sym_dimension_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__multi_line_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_line_number] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_def] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fnend] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym_string_function_name] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_function_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_let_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_let_statement_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_print_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_unary_expression_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token14] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token15] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token16] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token17] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token18] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token19] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token20] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token21] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token22] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token23] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token24] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token25] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token26] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token27] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token28] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token29] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token30] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token31] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token32] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token33] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token34] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token35] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token36] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token37] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token38] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token39] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token40] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token41] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token42] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token43] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token44] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token45] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token46] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token47] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token48] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token49] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token50] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token51] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token52] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token53] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token54] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token55] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token56] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token57] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token58] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token59] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token60] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token61] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token62] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token63] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token64] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token65] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token66] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token67] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token68] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token69] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token70] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token71] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token72] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token73] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token74] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token75] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token76] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token77] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token78] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token79] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token80] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token81] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token82] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token83] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token84] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token85] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token86] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token87] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token88] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token89] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token90] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token91] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token92] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token93] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token94] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token95] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token96] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token97] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token98] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token99] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token100] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token101] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token102] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token103] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token104] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token105] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token106] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token107] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token108] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token109] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token110] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token111] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token112] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token113] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_system_function_token114] = {
    .visible = false,
    .named = false,
  },
  [sym__string_function_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__numeric_function_identifier] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__template_chars] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_stringidentifier] = {
    .visible = true,
    .named = true,
  },
  [sym_numberidentifier] = {
    .visible = true,
    .named = true,
  },
  [sym__mat] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_line] = {
    .visible = true,
    .named = true,
  },
  [sym__single_line_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__multi_line_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_string_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function_length] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_let_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_print_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_primary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_system_function] = {
    .visible = true,
    .named = true,
  },
  [sym_user_function] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_template_string] = {
    .visible = true,
    .named = true,
  },
  [sym_template_substitution] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_forced_assignment_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__reference] = {
    .visible = false,
    .named = true,
  },
  [sym_numberelement] = {
    .visible = true,
    .named = true,
  },
  [sym_stringelement] = {
    .visible = true,
    .named = true,
  },
  [sym_stringarray] = {
    .visible = true,
    .named = true,
  },
  [sym_dimension] = {
    .visible = true,
    .named = true,
  },
  [sym_stringreference] = {
    .visible = true,
    .named = true,
  },
  [sym_numberreference] = {
    .visible = true,
    .named = true,
  },
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [sym_numberarray] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__multi_line_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_print_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_template_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stringelement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stringarray_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dimension_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_argument = 1,
  field_arguments = 2,
  field_function = 3,
  field_left = 4,
  field_length = 5,
  field_operator = 6,
  field_right = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_argument] = "argument",
  [field_arguments] = "arguments",
  [field_function] = "function",
  [field_left] = "left",
  [field_length] = "length",
  [field_operator] = "operator",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_function, 0},
  [1] =
    {field_length, 1},
  [2] =
    {field_argument, 1},
    {field_operator, 0},
  [4] =
    {field_arguments, 1},
    {field_function, 0},
  [6] =
    {field_left, 0},
    {field_right, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(47);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '"') ADVANCE(280);
      if (lookahead == '&') ADVANCE(63);
      if (lookahead == '\'') ADVANCE(282);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '*') ADVANCE(59);
      if (lookahead == '+') ADVANCE(77);
      if (lookahead == ',') ADVANCE(71);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '.') ADVANCE(907);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == ';') ADVANCE(72);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead == 'D') ADVANCE(609);
      if (lookahead == 'F') ADVANCE(702);
      if (lookahead == '`') ADVANCE(273);
      if (lookahead == 'd') ADVANCE(597);
      if (lookahead == 'f') ADVANCE(606);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == '~') ADVANCE(73);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(627);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(673);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(659);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(753);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(660);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(754);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(728);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(661);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(610);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(662);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(806);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(701);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(663);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(664);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(611);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(658);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(612);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(628);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(729);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(906);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(48);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(48);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(280);
      if (lookahead == '\'') ADVANCE(282);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '*') ADVANCE(58);
      if (lookahead == '+') ADVANCE(76);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '`') ADVANCE(272);
      if (lookahead == '~') ADVANCE(73);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(348);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(392);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(380);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(330);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(475);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(424);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(381);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(476);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(450);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(394);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(331);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(382);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(528);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(423);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(383);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(384);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(332);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(379);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(333);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(349);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(451);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(906);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(281);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(283);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(2);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == 'd') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == 'e') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == 'e') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == 'f') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == 'n') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(287);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(285);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(286);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(288);
      END_STATE();
    case 25:
      if (lookahead == '`') ADVANCE(273);
      if (lookahead == '{') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(277);
      if (lookahead != 0) ADVANCE(275);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(27);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(33);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == 'f') ADVANCE(52);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(608);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 30:
      if (lookahead == '{') ADVANCE(278);
      END_STATE();
    case 31:
      if (lookahead == '}') ADVANCE(279);
      END_STATE();
    case 32:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(32)
      END_STATE();
    case 33:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 34:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 36:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 37:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(64);
      END_STATE();
    case 38:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(68);
      END_STATE();
    case 39:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      END_STATE();
    case 40:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 41:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 42:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 43:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 44:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(51);
      END_STATE();
    case 45:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 46:
      if (eof) ADVANCE(47);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '+') ADVANCE(22);
      if (lookahead == ',') ADVANCE(71);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '.') ADVANCE(907);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == ';') ADVANCE(72);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead == 'd') ADVANCE(9);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(14);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(46)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym__multi_line_statement_token1);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(284);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_line_number);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_label);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_fnend);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_fnend);
      if (lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(287);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_numeric_function_name);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_let_statement_token1);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_let_statement_token1);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_let_statement_token1);
      if (lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_let_statement_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_print_statement_token1);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_print_statement_token1);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_print_statement_token1);
      if (lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(286);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(285);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_unary_expression_token1);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_unary_expression_token1);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_unary_expression_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_system_function_token1);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_system_function_token1);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_system_function_token2);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_system_function_token2);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_system_function_token3);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_system_function_token3);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_system_function_token4);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_system_function_token4);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_system_function_token5);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_system_function_token5);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_system_function_token6);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_system_function_token6);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_system_function_token7);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_system_function_token7);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_system_function_token8);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_system_function_token8);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_system_function_token9);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_system_function_token9);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_system_function_token10);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_system_function_token10);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_system_function_token11);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_system_function_token11);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_system_function_token12);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_system_function_token12);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_system_function_token13);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_system_function_token13);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_system_function_token14);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_system_function_token14);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_system_function_token15);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_system_function_token15);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_system_function_token16);
      if (lookahead == '$') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_system_function_token16);
      if (lookahead == '$') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_system_function_token17);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_system_function_token17);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_system_function_token18);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_system_function_token18);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_system_function_token19);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_system_function_token19);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_system_function_token20);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_system_function_token20);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_system_function_token21);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_system_function_token21);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_system_function_token22);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_system_function_token22);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_system_function_token23);
      if (lookahead == '$') ADVANCE(240);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_system_function_token23);
      if (lookahead == '$') ADVANCE(240);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_system_function_token24);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_system_function_token24);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_system_function_token25);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_system_function_token25);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_system_function_token26);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_system_function_token26);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_system_function_token27);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_system_function_token27);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_system_function_token28);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_system_function_token28);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_system_function_token29);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_system_function_token29);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_system_function_token30);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_system_function_token30);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_system_function_token31);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_system_function_token31);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_system_function_token32);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_system_function_token32);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_system_function_token33);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_system_function_token33);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_system_function_token34);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_system_function_token34);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_system_function_token35);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_system_function_token35);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_system_function_token36);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_system_function_token36);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_system_function_token37);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_system_function_token37);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_system_function_token38);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(765);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_system_function_token38);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_system_function_token39);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_system_function_token39);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_system_function_token40);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_system_function_token40);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_system_function_token41);
      if (lookahead == '$') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_system_function_token41);
      if (lookahead == '$') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_system_function_token42);
      if (lookahead == '$') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_system_function_token42);
      if (lookahead == '$') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_system_function_token43);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_system_function_token43);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_system_function_token44);
      if (lookahead == '$') ADVANCE(250);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_system_function_token44);
      if (lookahead == '$') ADVANCE(250);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_system_function_token45);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_system_function_token45);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_system_function_token46);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_system_function_token46);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_system_function_token47);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_system_function_token47);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_system_function_token48);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_system_function_token48);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_system_function_token49);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_system_function_token49);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_system_function_token50);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_system_function_token50);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_system_function_token51);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_system_function_token51);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_system_function_token52);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(875);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_system_function_token52);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_system_function_token53);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_system_function_token53);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_system_function_token54);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_system_function_token54);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_system_function_token55);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_system_function_token55);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_system_function_token56);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_system_function_token56);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_system_function_token57);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_system_function_token57);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_system_function_token58);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_system_function_token58);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_system_function_token59);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_system_function_token59);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_system_function_token60);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_system_function_token60);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_system_function_token61);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_system_function_token61);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_system_function_token62);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_system_function_token62);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_system_function_token63);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_system_function_token63);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_system_function_token64);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_system_function_token64);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_system_function_token65);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_system_function_token65);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_system_function_token66);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_system_function_token66);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_system_function_token67);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_system_function_token67);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_system_function_token68);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_system_function_token68);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_system_function_token69);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_system_function_token69);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_system_function_token70);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_system_function_token70);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_system_function_token71);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_system_function_token71);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_system_function_token72);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_system_function_token72);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_system_function_token73);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_system_function_token73);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_system_function_token74);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_system_function_token74);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_system_function_token75);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_system_function_token75);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_system_function_token76);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_system_function_token77);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_system_function_token78);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_system_function_token79);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_system_function_token80);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_system_function_token81);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_system_function_token82);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_system_function_token83);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_system_function_token84);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_system_function_token85);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_system_function_token86);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_system_function_token87);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_system_function_token88);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_system_function_token89);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_system_function_token90);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_system_function_token91);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_system_function_token92);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_system_function_token93);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_system_function_token94);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_system_function_token95);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_system_function_token96);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_system_function_token97);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_system_function_token98);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_system_function_token99);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_system_function_token100);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_system_function_token101);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_system_function_token102);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_system_function_token103);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_system_function_token104);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_system_function_token105);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_system_function_token106);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_system_function_token107);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_system_function_token108);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_system_function_token109);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_system_function_token110);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_system_function_token111);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_system_function_token112);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_system_function_token113);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_system_function_token114);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__string_function_identifier);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__numeric_function_identifier);
      if (lookahead == '$') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '`') ADVANCE(274);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__template_chars);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__template_chars);
      if (lookahead == '{') ADVANCE(278);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__template_chars);
      if (lookahead == '{') ADVANCE(276);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(275);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_stringidentifier);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(259);
      if (lookahead == '2') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == '2') ADVANCE(552);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == '_') ADVANCE(414);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == '_') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == '_') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == '_') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == '_') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(565);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(352);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(557);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(481);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(366);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(350);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(470);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(444);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(376);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(543);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(364);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(517);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(220);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(576);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(192);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(501);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(454);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(503);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(497);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(334);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(421);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(502);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(456);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(433);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(540);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(389);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(425);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(422);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(536);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(426);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(507);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(525);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(365);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(559);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(373);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(583);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(560);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(354);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(482);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(368);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(578);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(343);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(529);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(483);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(484);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(402);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(521);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(358);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(519);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(452);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(480);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(491);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(417);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(338);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(393);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(526);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(136);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(184);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(545);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(455);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(385);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(593);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(132);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(551);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(494);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(513);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(228);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(479);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(544);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(386);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(363);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(520);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(413);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(459);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(367);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(428);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(550);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(324);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(94);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(387);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(512);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(515);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(592);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__mat);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == '2') ADVANCE(830);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'E') ADVANCE(631);
      if (lookahead == 'e') ADVANCE(605);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(844);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == '_') ADVANCE(692);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == '_') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == '_') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == '_') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == '_') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'd') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'e') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'f') ADVANCE(53);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(854);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'n') ADVANCE(604);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(732);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(665);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(131);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'n') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'n') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(844);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(631);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(836);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(758);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(645);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(629);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(748);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(722);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(655);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(876);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(821);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(651);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(795);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(715);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(219);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(854);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(191);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(779);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(733);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(781);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(775);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(613);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(699);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(881);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(887);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(780);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(734);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(711);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(818);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(873);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(879);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(669);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(882);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(895);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(703);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(700);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(814);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(704);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(785);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(802);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(644);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(835);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(654);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(757);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(770);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(695);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(617);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(672);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(804);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(861);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(837);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(633);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(759);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(647);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(856);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(622);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(807);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(760);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(761);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(681);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(798);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(637);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(799);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(730);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(867);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(787);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(885);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(900);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(902);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(904);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(135);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(183);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(823);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(732);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(665);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(131);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(829);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(782);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(767);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(791);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(227);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(707);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(756);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(822);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(666);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(723);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(886);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(898);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(903);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(642);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(797);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(691);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(147);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(840);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(899);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(864);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(878);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(884);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(851);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(852);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(737);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(877);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(872);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(868);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(646);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(706);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(828);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(849);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(869);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(842);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(93);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(596);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(667);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(891);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(892);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(897);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(790);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(893);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(259);
      if (lookahead == '2') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(260);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(870);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(906);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'b') ADVANCE(1);
      if (lookahead == 'f') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'o') ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == 'n') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(5);
      END_STATE();
    case 4:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == '$') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_string_function_name);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 46},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 46},
  [33] = {.lex_state = 46},
  [34] = {.lex_state = 46},
  [35] = {.lex_state = 46},
  [36] = {.lex_state = 46},
  [37] = {.lex_state = 46},
  [38] = {.lex_state = 46},
  [39] = {.lex_state = 46},
  [40] = {.lex_state = 46},
  [41] = {.lex_state = 46},
  [42] = {.lex_state = 46},
  [43] = {.lex_state = 46},
  [44] = {.lex_state = 46},
  [45] = {.lex_state = 46},
  [46] = {.lex_state = 46},
  [47] = {.lex_state = 46},
  [48] = {.lex_state = 46},
  [49] = {.lex_state = 46},
  [50] = {.lex_state = 46},
  [51] = {.lex_state = 46},
  [52] = {.lex_state = 46},
  [53] = {.lex_state = 46},
  [54] = {.lex_state = 46},
  [55] = {.lex_state = 46},
  [56] = {.lex_state = 46},
  [57] = {.lex_state = 46},
  [58] = {.lex_state = 46},
  [59] = {.lex_state = 46},
  [60] = {.lex_state = 46},
  [61] = {.lex_state = 46},
  [62] = {.lex_state = 46},
  [63] = {.lex_state = 46},
  [64] = {.lex_state = 46},
  [65] = {.lex_state = 46},
  [66] = {.lex_state = 46},
  [67] = {.lex_state = 46},
  [68] = {.lex_state = 46},
  [69] = {.lex_state = 46},
  [70] = {.lex_state = 46},
  [71] = {.lex_state = 46},
  [72] = {.lex_state = 46},
  [73] = {.lex_state = 46},
  [74] = {.lex_state = 46},
  [75] = {.lex_state = 46},
  [76] = {.lex_state = 46},
  [77] = {.lex_state = 46},
  [78] = {.lex_state = 46},
  [79] = {.lex_state = 46},
  [80] = {.lex_state = 46},
  [81] = {.lex_state = 46},
  [82] = {.lex_state = 46},
  [83] = {.lex_state = 46},
  [84] = {.lex_state = 46},
  [85] = {.lex_state = 46},
  [86] = {.lex_state = 46},
  [87] = {.lex_state = 46},
  [88] = {.lex_state = 46},
  [89] = {.lex_state = 46},
  [90] = {.lex_state = 46},
  [91] = {.lex_state = 46},
  [92] = {.lex_state = 46},
  [93] = {.lex_state = 46},
  [94] = {.lex_state = 46},
  [95] = {.lex_state = 46},
  [96] = {.lex_state = 46},
  [97] = {.lex_state = 46},
  [98] = {.lex_state = 46},
  [99] = {.lex_state = 46},
  [100] = {.lex_state = 46},
  [101] = {.lex_state = 46},
  [102] = {.lex_state = 46},
  [103] = {.lex_state = 46},
  [104] = {.lex_state = 46},
  [105] = {.lex_state = 46},
  [106] = {.lex_state = 46},
  [107] = {.lex_state = 46},
  [108] = {.lex_state = 46},
  [109] = {.lex_state = 46},
  [110] = {.lex_state = 26},
  [111] = {.lex_state = 46},
  [112] = {.lex_state = 26},
  [113] = {.lex_state = 46},
  [114] = {.lex_state = 46},
  [115] = {.lex_state = 46},
  [116] = {.lex_state = 46},
  [117] = {.lex_state = 46},
  [118] = {.lex_state = 46},
  [119] = {.lex_state = 26},
  [120] = {.lex_state = 46},
  [121] = {.lex_state = 46},
  [122] = {.lex_state = 26},
  [123] = {.lex_state = 46},
  [124] = {.lex_state = 46},
  [125] = {.lex_state = 46},
  [126] = {.lex_state = 46},
  [127] = {.lex_state = 46},
  [128] = {.lex_state = 46},
  [129] = {.lex_state = 46},
  [130] = {.lex_state = 46},
  [131] = {.lex_state = 46},
  [132] = {.lex_state = 46},
  [133] = {.lex_state = 46},
  [134] = {.lex_state = 46},
  [135] = {.lex_state = 46},
  [136] = {.lex_state = 46},
  [137] = {.lex_state = 46},
  [138] = {.lex_state = 46},
  [139] = {.lex_state = 46},
  [140] = {.lex_state = 46},
  [141] = {.lex_state = 46},
  [142] = {.lex_state = 46},
  [143] = {.lex_state = 46},
  [144] = {.lex_state = 25},
  [145] = {.lex_state = 46},
  [146] = {.lex_state = 46},
  [147] = {.lex_state = 46},
  [148] = {.lex_state = 25},
  [149] = {.lex_state = 25},
  [150] = {.lex_state = 46},
  [151] = {.lex_state = 46},
  [152] = {.lex_state = 46},
  [153] = {.lex_state = 46},
  [154] = {.lex_state = 46},
  [155] = {.lex_state = 25},
  [156] = {.lex_state = 25},
  [157] = {.lex_state = 46},
  [158] = {.lex_state = 46},
  [159] = {.lex_state = 46},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 25},
  [163] = {.lex_state = 3},
  [164] = {.lex_state = 29},
  [165] = {.lex_state = 29},
  [166] = {.lex_state = 3},
  [167] = {.lex_state = 3},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 5},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 45},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 45},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 5},
  [196] = {.lex_state = 283},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 281},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 32},
  [214] = {.lex_state = 32},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 281},
  [217] = {.lex_state = 283},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 32},
  [221] = {.lex_state = 32},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [aux_sym__multi_line_statement_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_fnend] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym_string_function_name] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [aux_sym_let_statement_token1] = ACTIONS(1),
    [aux_sym_print_statement_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [aux_sym_unary_expression_token1] = ACTIONS(1),
    [aux_sym_system_function_token1] = ACTIONS(1),
    [aux_sym_system_function_token2] = ACTIONS(1),
    [aux_sym_system_function_token3] = ACTIONS(1),
    [aux_sym_system_function_token4] = ACTIONS(1),
    [aux_sym_system_function_token5] = ACTIONS(1),
    [aux_sym_system_function_token6] = ACTIONS(1),
    [aux_sym_system_function_token7] = ACTIONS(1),
    [aux_sym_system_function_token8] = ACTIONS(1),
    [aux_sym_system_function_token9] = ACTIONS(1),
    [aux_sym_system_function_token10] = ACTIONS(1),
    [aux_sym_system_function_token11] = ACTIONS(1),
    [aux_sym_system_function_token12] = ACTIONS(1),
    [aux_sym_system_function_token13] = ACTIONS(1),
    [aux_sym_system_function_token14] = ACTIONS(1),
    [aux_sym_system_function_token15] = ACTIONS(1),
    [aux_sym_system_function_token16] = ACTIONS(1),
    [aux_sym_system_function_token17] = ACTIONS(1),
    [aux_sym_system_function_token18] = ACTIONS(1),
    [aux_sym_system_function_token19] = ACTIONS(1),
    [aux_sym_system_function_token20] = ACTIONS(1),
    [aux_sym_system_function_token21] = ACTIONS(1),
    [aux_sym_system_function_token22] = ACTIONS(1),
    [aux_sym_system_function_token23] = ACTIONS(1),
    [aux_sym_system_function_token24] = ACTIONS(1),
    [aux_sym_system_function_token25] = ACTIONS(1),
    [aux_sym_system_function_token26] = ACTIONS(1),
    [aux_sym_system_function_token27] = ACTIONS(1),
    [aux_sym_system_function_token28] = ACTIONS(1),
    [aux_sym_system_function_token29] = ACTIONS(1),
    [aux_sym_system_function_token30] = ACTIONS(1),
    [aux_sym_system_function_token31] = ACTIONS(1),
    [aux_sym_system_function_token32] = ACTIONS(1),
    [aux_sym_system_function_token33] = ACTIONS(1),
    [aux_sym_system_function_token34] = ACTIONS(1),
    [aux_sym_system_function_token35] = ACTIONS(1),
    [aux_sym_system_function_token36] = ACTIONS(1),
    [aux_sym_system_function_token37] = ACTIONS(1),
    [aux_sym_system_function_token38] = ACTIONS(1),
    [aux_sym_system_function_token39] = ACTIONS(1),
    [aux_sym_system_function_token40] = ACTIONS(1),
    [aux_sym_system_function_token41] = ACTIONS(1),
    [aux_sym_system_function_token42] = ACTIONS(1),
    [aux_sym_system_function_token43] = ACTIONS(1),
    [aux_sym_system_function_token44] = ACTIONS(1),
    [aux_sym_system_function_token45] = ACTIONS(1),
    [aux_sym_system_function_token46] = ACTIONS(1),
    [aux_sym_system_function_token47] = ACTIONS(1),
    [aux_sym_system_function_token48] = ACTIONS(1),
    [aux_sym_system_function_token49] = ACTIONS(1),
    [aux_sym_system_function_token50] = ACTIONS(1),
    [aux_sym_system_function_token51] = ACTIONS(1),
    [aux_sym_system_function_token52] = ACTIONS(1),
    [aux_sym_system_function_token53] = ACTIONS(1),
    [aux_sym_system_function_token54] = ACTIONS(1),
    [aux_sym_system_function_token55] = ACTIONS(1),
    [aux_sym_system_function_token56] = ACTIONS(1),
    [aux_sym_system_function_token57] = ACTIONS(1),
    [aux_sym_system_function_token58] = ACTIONS(1),
    [aux_sym_system_function_token59] = ACTIONS(1),
    [aux_sym_system_function_token60] = ACTIONS(1),
    [aux_sym_system_function_token61] = ACTIONS(1),
    [aux_sym_system_function_token62] = ACTIONS(1),
    [aux_sym_system_function_token63] = ACTIONS(1),
    [aux_sym_system_function_token64] = ACTIONS(1),
    [aux_sym_system_function_token65] = ACTIONS(1),
    [aux_sym_system_function_token66] = ACTIONS(1),
    [aux_sym_system_function_token67] = ACTIONS(1),
    [aux_sym_system_function_token68] = ACTIONS(1),
    [aux_sym_system_function_token69] = ACTIONS(1),
    [aux_sym_system_function_token70] = ACTIONS(1),
    [aux_sym_system_function_token71] = ACTIONS(1),
    [aux_sym_system_function_token72] = ACTIONS(1),
    [aux_sym_system_function_token73] = ACTIONS(1),
    [aux_sym_system_function_token74] = ACTIONS(1),
    [aux_sym_system_function_token75] = ACTIONS(1),
    [aux_sym_system_function_token76] = ACTIONS(1),
    [aux_sym_system_function_token77] = ACTIONS(1),
    [aux_sym_system_function_token78] = ACTIONS(1),
    [aux_sym_system_function_token79] = ACTIONS(1),
    [aux_sym_system_function_token80] = ACTIONS(1),
    [aux_sym_system_function_token81] = ACTIONS(1),
    [aux_sym_system_function_token82] = ACTIONS(1),
    [aux_sym_system_function_token83] = ACTIONS(1),
    [aux_sym_system_function_token84] = ACTIONS(1),
    [aux_sym_system_function_token85] = ACTIONS(1),
    [aux_sym_system_function_token86] = ACTIONS(1),
    [aux_sym_system_function_token87] = ACTIONS(1),
    [aux_sym_system_function_token88] = ACTIONS(1),
    [aux_sym_system_function_token89] = ACTIONS(1),
    [aux_sym_system_function_token90] = ACTIONS(1),
    [aux_sym_system_function_token91] = ACTIONS(1),
    [aux_sym_system_function_token92] = ACTIONS(1),
    [aux_sym_system_function_token93] = ACTIONS(1),
    [aux_sym_system_function_token94] = ACTIONS(1),
    [aux_sym_system_function_token95] = ACTIONS(1),
    [aux_sym_system_function_token96] = ACTIONS(1),
    [aux_sym_system_function_token97] = ACTIONS(1),
    [aux_sym_system_function_token98] = ACTIONS(1),
    [aux_sym_system_function_token99] = ACTIONS(1),
    [aux_sym_system_function_token100] = ACTIONS(1),
    [aux_sym_system_function_token101] = ACTIONS(1),
    [aux_sym_system_function_token102] = ACTIONS(1),
    [aux_sym_system_function_token103] = ACTIONS(1),
    [aux_sym_system_function_token104] = ACTIONS(1),
    [aux_sym_system_function_token105] = ACTIONS(1),
    [aux_sym_system_function_token106] = ACTIONS(1),
    [aux_sym_system_function_token107] = ACTIONS(1),
    [aux_sym_system_function_token108] = ACTIONS(1),
    [aux_sym_system_function_token109] = ACTIONS(1),
    [aux_sym_system_function_token110] = ACTIONS(1),
    [aux_sym_system_function_token111] = ACTIONS(1),
    [aux_sym_system_function_token112] = ACTIONS(1),
    [aux_sym_system_function_token113] = ACTIONS(1),
    [aux_sym_system_function_token114] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE_BQUOTE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [sym__mat] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(219),
    [sym_line] = STATE(73),
    [sym__single_line_statement] = STATE(145),
    [sym__multi_line_statement] = STATE(145),
    [sym_statement] = STATE(127),
    [sym__definition] = STATE(145),
    [sym_function_definition] = STATE(145),
    [sym_let_statement] = STATE(135),
    [sym_print_statement] = STATE(135),
    [aux_sym_source_file_repeat1] = STATE(73),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_line_number] = ACTIONS(5),
    [sym_label] = ACTIONS(7),
    [anon_sym_def] = ACTIONS(9),
    [aux_sym_let_statement_token1] = ACTIONS(11),
    [aux_sym_print_statement_token1] = ACTIONS(13),
  },
  [2] = {
    [sym__expression] = STATE(218),
    [sym_unary_expression] = STATE(218),
    [sym_primary_expression] = STATE(218),
    [sym_call_expression] = STATE(95),
    [sym_system_function] = STATE(85),
    [sym_user_function] = STATE(85),
    [sym_template_string] = STATE(95),
    [sym_string] = STATE(95),
    [sym_parenthesized_expression] = STATE(95),
    [sym_forced_assignment_expression] = STATE(218),
    [sym__reference] = STATE(63),
    [sym_numberelement] = STATE(63),
    [sym_stringelement] = STATE(63),
    [sym_stringarray] = STATE(63),
    [sym_stringreference] = STATE(63),
    [sym_numberreference] = STATE(63),
    [sym_range] = STATE(204),
    [sym_numberarray] = STATE(63),
    [sym_number] = STATE(95),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(17),
    [aux_sym_unary_expression_token1] = ACTIONS(19),
    [aux_sym_system_function_token1] = ACTIONS(21),
    [aux_sym_system_function_token2] = ACTIONS(21),
    [aux_sym_system_function_token3] = ACTIONS(21),
    [aux_sym_system_function_token4] = ACTIONS(21),
    [aux_sym_system_function_token5] = ACTIONS(21),
    [aux_sym_system_function_token6] = ACTIONS(21),
    [aux_sym_system_function_token7] = ACTIONS(21),
    [aux_sym_system_function_token8] = ACTIONS(21),
    [aux_sym_system_function_token9] = ACTIONS(21),
    [aux_sym_system_function_token10] = ACTIONS(21),
    [aux_sym_system_function_token11] = ACTIONS(21),
    [aux_sym_system_function_token12] = ACTIONS(21),
    [aux_sym_system_function_token13] = ACTIONS(21),
    [aux_sym_system_function_token14] = ACTIONS(21),
    [aux_sym_system_function_token15] = ACTIONS(21),
    [aux_sym_system_function_token16] = ACTIONS(21),
    [aux_sym_system_function_token17] = ACTIONS(21),
    [aux_sym_system_function_token18] = ACTIONS(21),
    [aux_sym_system_function_token19] = ACTIONS(21),
    [aux_sym_system_function_token20] = ACTIONS(21),
    [aux_sym_system_function_token21] = ACTIONS(21),
    [aux_sym_system_function_token22] = ACTIONS(21),
    [aux_sym_system_function_token23] = ACTIONS(21),
    [aux_sym_system_function_token24] = ACTIONS(21),
    [aux_sym_system_function_token25] = ACTIONS(21),
    [aux_sym_system_function_token26] = ACTIONS(21),
    [aux_sym_system_function_token27] = ACTIONS(21),
    [aux_sym_system_function_token28] = ACTIONS(21),
    [aux_sym_system_function_token29] = ACTIONS(21),
    [aux_sym_system_function_token30] = ACTIONS(21),
    [aux_sym_system_function_token31] = ACTIONS(21),
    [aux_sym_system_function_token32] = ACTIONS(21),
    [aux_sym_system_function_token33] = ACTIONS(21),
    [aux_sym_system_function_token34] = ACTIONS(21),
    [aux_sym_system_function_token35] = ACTIONS(21),
    [aux_sym_system_function_token36] = ACTIONS(21),
    [aux_sym_system_function_token37] = ACTIONS(21),
    [aux_sym_system_function_token38] = ACTIONS(21),
    [aux_sym_system_function_token39] = ACTIONS(21),
    [aux_sym_system_function_token40] = ACTIONS(21),
    [aux_sym_system_function_token41] = ACTIONS(21),
    [aux_sym_system_function_token42] = ACTIONS(21),
    [aux_sym_system_function_token43] = ACTIONS(21),
    [aux_sym_system_function_token44] = ACTIONS(21),
    [aux_sym_system_function_token45] = ACTIONS(21),
    [aux_sym_system_function_token46] = ACTIONS(21),
    [aux_sym_system_function_token47] = ACTIONS(21),
    [aux_sym_system_function_token48] = ACTIONS(21),
    [aux_sym_system_function_token49] = ACTIONS(21),
    [aux_sym_system_function_token50] = ACTIONS(21),
    [aux_sym_system_function_token51] = ACTIONS(21),
    [aux_sym_system_function_token52] = ACTIONS(21),
    [aux_sym_system_function_token53] = ACTIONS(21),
    [aux_sym_system_function_token54] = ACTIONS(21),
    [aux_sym_system_function_token55] = ACTIONS(21),
    [aux_sym_system_function_token56] = ACTIONS(21),
    [aux_sym_system_function_token57] = ACTIONS(21),
    [aux_sym_system_function_token58] = ACTIONS(21),
    [aux_sym_system_function_token59] = ACTIONS(21),
    [aux_sym_system_function_token60] = ACTIONS(21),
    [aux_sym_system_function_token61] = ACTIONS(21),
    [aux_sym_system_function_token62] = ACTIONS(21),
    [aux_sym_system_function_token63] = ACTIONS(21),
    [aux_sym_system_function_token64] = ACTIONS(21),
    [aux_sym_system_function_token65] = ACTIONS(21),
    [aux_sym_system_function_token66] = ACTIONS(21),
    [aux_sym_system_function_token67] = ACTIONS(21),
    [aux_sym_system_function_token68] = ACTIONS(21),
    [aux_sym_system_function_token69] = ACTIONS(21),
    [aux_sym_system_function_token70] = ACTIONS(21),
    [aux_sym_system_function_token71] = ACTIONS(21),
    [aux_sym_system_function_token72] = ACTIONS(21),
    [aux_sym_system_function_token73] = ACTIONS(21),
    [aux_sym_system_function_token74] = ACTIONS(21),
    [aux_sym_system_function_token75] = ACTIONS(21),
    [aux_sym_system_function_token76] = ACTIONS(23),
    [aux_sym_system_function_token77] = ACTIONS(23),
    [aux_sym_system_function_token78] = ACTIONS(23),
    [aux_sym_system_function_token79] = ACTIONS(23),
    [aux_sym_system_function_token80] = ACTIONS(23),
    [aux_sym_system_function_token81] = ACTIONS(23),
    [aux_sym_system_function_token82] = ACTIONS(23),
    [aux_sym_system_function_token83] = ACTIONS(23),
    [aux_sym_system_function_token84] = ACTIONS(23),
    [aux_sym_system_function_token85] = ACTIONS(23),
    [aux_sym_system_function_token86] = ACTIONS(23),
    [aux_sym_system_function_token87] = ACTIONS(23),
    [aux_sym_system_function_token88] = ACTIONS(23),
    [aux_sym_system_function_token89] = ACTIONS(23),
    [aux_sym_system_function_token90] = ACTIONS(23),
    [aux_sym_system_function_token91] = ACTIONS(23),
    [aux_sym_system_function_token92] = ACTIONS(23),
    [aux_sym_system_function_token93] = ACTIONS(23),
    [aux_sym_system_function_token94] = ACTIONS(23),
    [aux_sym_system_function_token95] = ACTIONS(23),
    [aux_sym_system_function_token96] = ACTIONS(23),
    [aux_sym_system_function_token97] = ACTIONS(23),
    [aux_sym_system_function_token98] = ACTIONS(23),
    [aux_sym_system_function_token99] = ACTIONS(23),
    [aux_sym_system_function_token100] = ACTIONS(23),
    [aux_sym_system_function_token101] = ACTIONS(23),
    [aux_sym_system_function_token102] = ACTIONS(23),
    [aux_sym_system_function_token103] = ACTIONS(23),
    [aux_sym_system_function_token104] = ACTIONS(23),
    [aux_sym_system_function_token105] = ACTIONS(23),
    [aux_sym_system_function_token106] = ACTIONS(23),
    [aux_sym_system_function_token107] = ACTIONS(23),
    [aux_sym_system_function_token108] = ACTIONS(23),
    [aux_sym_system_function_token109] = ACTIONS(23),
    [aux_sym_system_function_token110] = ACTIONS(23),
    [aux_sym_system_function_token111] = ACTIONS(23),
    [aux_sym_system_function_token112] = ACTIONS(23),
    [aux_sym_system_function_token113] = ACTIONS(23),
    [aux_sym_system_function_token114] = ACTIONS(23),
    [sym__string_function_identifier] = ACTIONS(25),
    [sym__numeric_function_identifier] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym_stringidentifier] = ACTIONS(35),
    [sym_numberidentifier] = ACTIONS(37),
    [sym__mat] = ACTIONS(39),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [3] = {
    [sym__expression] = STATE(218),
    [sym_unary_expression] = STATE(218),
    [sym_primary_expression] = STATE(218),
    [sym_call_expression] = STATE(95),
    [sym_system_function] = STATE(85),
    [sym_user_function] = STATE(85),
    [sym_template_string] = STATE(95),
    [sym_string] = STATE(95),
    [sym_parenthesized_expression] = STATE(95),
    [sym_forced_assignment_expression] = STATE(218),
    [sym__reference] = STATE(63),
    [sym_numberelement] = STATE(63),
    [sym_stringelement] = STATE(63),
    [sym_stringarray] = STATE(63),
    [sym_stringreference] = STATE(63),
    [sym_numberreference] = STATE(63),
    [sym_range] = STATE(212),
    [sym_numberarray] = STATE(63),
    [sym_number] = STATE(95),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(17),
    [aux_sym_unary_expression_token1] = ACTIONS(19),
    [aux_sym_system_function_token1] = ACTIONS(21),
    [aux_sym_system_function_token2] = ACTIONS(21),
    [aux_sym_system_function_token3] = ACTIONS(21),
    [aux_sym_system_function_token4] = ACTIONS(21),
    [aux_sym_system_function_token5] = ACTIONS(21),
    [aux_sym_system_function_token6] = ACTIONS(21),
    [aux_sym_system_function_token7] = ACTIONS(21),
    [aux_sym_system_function_token8] = ACTIONS(21),
    [aux_sym_system_function_token9] = ACTIONS(21),
    [aux_sym_system_function_token10] = ACTIONS(21),
    [aux_sym_system_function_token11] = ACTIONS(21),
    [aux_sym_system_function_token12] = ACTIONS(21),
    [aux_sym_system_function_token13] = ACTIONS(21),
    [aux_sym_system_function_token14] = ACTIONS(21),
    [aux_sym_system_function_token15] = ACTIONS(21),
    [aux_sym_system_function_token16] = ACTIONS(21),
    [aux_sym_system_function_token17] = ACTIONS(21),
    [aux_sym_system_function_token18] = ACTIONS(21),
    [aux_sym_system_function_token19] = ACTIONS(21),
    [aux_sym_system_function_token20] = ACTIONS(21),
    [aux_sym_system_function_token21] = ACTIONS(21),
    [aux_sym_system_function_token22] = ACTIONS(21),
    [aux_sym_system_function_token23] = ACTIONS(21),
    [aux_sym_system_function_token24] = ACTIONS(21),
    [aux_sym_system_function_token25] = ACTIONS(21),
    [aux_sym_system_function_token26] = ACTIONS(21),
    [aux_sym_system_function_token27] = ACTIONS(21),
    [aux_sym_system_function_token28] = ACTIONS(21),
    [aux_sym_system_function_token29] = ACTIONS(21),
    [aux_sym_system_function_token30] = ACTIONS(21),
    [aux_sym_system_function_token31] = ACTIONS(21),
    [aux_sym_system_function_token32] = ACTIONS(21),
    [aux_sym_system_function_token33] = ACTIONS(21),
    [aux_sym_system_function_token34] = ACTIONS(21),
    [aux_sym_system_function_token35] = ACTIONS(21),
    [aux_sym_system_function_token36] = ACTIONS(21),
    [aux_sym_system_function_token37] = ACTIONS(21),
    [aux_sym_system_function_token38] = ACTIONS(21),
    [aux_sym_system_function_token39] = ACTIONS(21),
    [aux_sym_system_function_token40] = ACTIONS(21),
    [aux_sym_system_function_token41] = ACTIONS(21),
    [aux_sym_system_function_token42] = ACTIONS(21),
    [aux_sym_system_function_token43] = ACTIONS(21),
    [aux_sym_system_function_token44] = ACTIONS(21),
    [aux_sym_system_function_token45] = ACTIONS(21),
    [aux_sym_system_function_token46] = ACTIONS(21),
    [aux_sym_system_function_token47] = ACTIONS(21),
    [aux_sym_system_function_token48] = ACTIONS(21),
    [aux_sym_system_function_token49] = ACTIONS(21),
    [aux_sym_system_function_token50] = ACTIONS(21),
    [aux_sym_system_function_token51] = ACTIONS(21),
    [aux_sym_system_function_token52] = ACTIONS(21),
    [aux_sym_system_function_token53] = ACTIONS(21),
    [aux_sym_system_function_token54] = ACTIONS(21),
    [aux_sym_system_function_token55] = ACTIONS(21),
    [aux_sym_system_function_token56] = ACTIONS(21),
    [aux_sym_system_function_token57] = ACTIONS(21),
    [aux_sym_system_function_token58] = ACTIONS(21),
    [aux_sym_system_function_token59] = ACTIONS(21),
    [aux_sym_system_function_token60] = ACTIONS(21),
    [aux_sym_system_function_token61] = ACTIONS(21),
    [aux_sym_system_function_token62] = ACTIONS(21),
    [aux_sym_system_function_token63] = ACTIONS(21),
    [aux_sym_system_function_token64] = ACTIONS(21),
    [aux_sym_system_function_token65] = ACTIONS(21),
    [aux_sym_system_function_token66] = ACTIONS(21),
    [aux_sym_system_function_token67] = ACTIONS(21),
    [aux_sym_system_function_token68] = ACTIONS(21),
    [aux_sym_system_function_token69] = ACTIONS(21),
    [aux_sym_system_function_token70] = ACTIONS(21),
    [aux_sym_system_function_token71] = ACTIONS(21),
    [aux_sym_system_function_token72] = ACTIONS(21),
    [aux_sym_system_function_token73] = ACTIONS(21),
    [aux_sym_system_function_token74] = ACTIONS(21),
    [aux_sym_system_function_token75] = ACTIONS(21),
    [aux_sym_system_function_token76] = ACTIONS(23),
    [aux_sym_system_function_token77] = ACTIONS(23),
    [aux_sym_system_function_token78] = ACTIONS(23),
    [aux_sym_system_function_token79] = ACTIONS(23),
    [aux_sym_system_function_token80] = ACTIONS(23),
    [aux_sym_system_function_token81] = ACTIONS(23),
    [aux_sym_system_function_token82] = ACTIONS(23),
    [aux_sym_system_function_token83] = ACTIONS(23),
    [aux_sym_system_function_token84] = ACTIONS(23),
    [aux_sym_system_function_token85] = ACTIONS(23),
    [aux_sym_system_function_token86] = ACTIONS(23),
    [aux_sym_system_function_token87] = ACTIONS(23),
    [aux_sym_system_function_token88] = ACTIONS(23),
    [aux_sym_system_function_token89] = ACTIONS(23),
    [aux_sym_system_function_token90] = ACTIONS(23),
    [aux_sym_system_function_token91] = ACTIONS(23),
    [aux_sym_system_function_token92] = ACTIONS(23),
    [aux_sym_system_function_token93] = ACTIONS(23),
    [aux_sym_system_function_token94] = ACTIONS(23),
    [aux_sym_system_function_token95] = ACTIONS(23),
    [aux_sym_system_function_token96] = ACTIONS(23),
    [aux_sym_system_function_token97] = ACTIONS(23),
    [aux_sym_system_function_token98] = ACTIONS(23),
    [aux_sym_system_function_token99] = ACTIONS(23),
    [aux_sym_system_function_token100] = ACTIONS(23),
    [aux_sym_system_function_token101] = ACTIONS(23),
    [aux_sym_system_function_token102] = ACTIONS(23),
    [aux_sym_system_function_token103] = ACTIONS(23),
    [aux_sym_system_function_token104] = ACTIONS(23),
    [aux_sym_system_function_token105] = ACTIONS(23),
    [aux_sym_system_function_token106] = ACTIONS(23),
    [aux_sym_system_function_token107] = ACTIONS(23),
    [aux_sym_system_function_token108] = ACTIONS(23),
    [aux_sym_system_function_token109] = ACTIONS(23),
    [aux_sym_system_function_token110] = ACTIONS(23),
    [aux_sym_system_function_token111] = ACTIONS(23),
    [aux_sym_system_function_token112] = ACTIONS(23),
    [aux_sym_system_function_token113] = ACTIONS(23),
    [aux_sym_system_function_token114] = ACTIONS(23),
    [sym__string_function_identifier] = ACTIONS(25),
    [sym__numeric_function_identifier] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym_stringidentifier] = ACTIONS(35),
    [sym_numberidentifier] = ACTIONS(37),
    [sym__mat] = ACTIONS(39),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [4] = {
    [sym__expression] = STATE(218),
    [sym_unary_expression] = STATE(218),
    [sym_primary_expression] = STATE(218),
    [sym_call_expression] = STATE(95),
    [sym_system_function] = STATE(85),
    [sym_user_function] = STATE(85),
    [sym_template_string] = STATE(95),
    [sym_string] = STATE(95),
    [sym_parenthesized_expression] = STATE(95),
    [sym_forced_assignment_expression] = STATE(218),
    [sym__reference] = STATE(63),
    [sym_numberelement] = STATE(63),
    [sym_stringelement] = STATE(63),
    [sym_stringarray] = STATE(63),
    [sym_stringreference] = STATE(63),
    [sym_numberreference] = STATE(63),
    [sym_range] = STATE(169),
    [sym_numberarray] = STATE(63),
    [sym_number] = STATE(95),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(17),
    [aux_sym_unary_expression_token1] = ACTIONS(19),
    [aux_sym_system_function_token1] = ACTIONS(21),
    [aux_sym_system_function_token2] = ACTIONS(21),
    [aux_sym_system_function_token3] = ACTIONS(21),
    [aux_sym_system_function_token4] = ACTIONS(21),
    [aux_sym_system_function_token5] = ACTIONS(21),
    [aux_sym_system_function_token6] = ACTIONS(21),
    [aux_sym_system_function_token7] = ACTIONS(21),
    [aux_sym_system_function_token8] = ACTIONS(21),
    [aux_sym_system_function_token9] = ACTIONS(21),
    [aux_sym_system_function_token10] = ACTIONS(21),
    [aux_sym_system_function_token11] = ACTIONS(21),
    [aux_sym_system_function_token12] = ACTIONS(21),
    [aux_sym_system_function_token13] = ACTIONS(21),
    [aux_sym_system_function_token14] = ACTIONS(21),
    [aux_sym_system_function_token15] = ACTIONS(21),
    [aux_sym_system_function_token16] = ACTIONS(21),
    [aux_sym_system_function_token17] = ACTIONS(21),
    [aux_sym_system_function_token18] = ACTIONS(21),
    [aux_sym_system_function_token19] = ACTIONS(21),
    [aux_sym_system_function_token20] = ACTIONS(21),
    [aux_sym_system_function_token21] = ACTIONS(21),
    [aux_sym_system_function_token22] = ACTIONS(21),
    [aux_sym_system_function_token23] = ACTIONS(21),
    [aux_sym_system_function_token24] = ACTIONS(21),
    [aux_sym_system_function_token25] = ACTIONS(21),
    [aux_sym_system_function_token26] = ACTIONS(21),
    [aux_sym_system_function_token27] = ACTIONS(21),
    [aux_sym_system_function_token28] = ACTIONS(21),
    [aux_sym_system_function_token29] = ACTIONS(21),
    [aux_sym_system_function_token30] = ACTIONS(21),
    [aux_sym_system_function_token31] = ACTIONS(21),
    [aux_sym_system_function_token32] = ACTIONS(21),
    [aux_sym_system_function_token33] = ACTIONS(21),
    [aux_sym_system_function_token34] = ACTIONS(21),
    [aux_sym_system_function_token35] = ACTIONS(21),
    [aux_sym_system_function_token36] = ACTIONS(21),
    [aux_sym_system_function_token37] = ACTIONS(21),
    [aux_sym_system_function_token38] = ACTIONS(21),
    [aux_sym_system_function_token39] = ACTIONS(21),
    [aux_sym_system_function_token40] = ACTIONS(21),
    [aux_sym_system_function_token41] = ACTIONS(21),
    [aux_sym_system_function_token42] = ACTIONS(21),
    [aux_sym_system_function_token43] = ACTIONS(21),
    [aux_sym_system_function_token44] = ACTIONS(21),
    [aux_sym_system_function_token45] = ACTIONS(21),
    [aux_sym_system_function_token46] = ACTIONS(21),
    [aux_sym_system_function_token47] = ACTIONS(21),
    [aux_sym_system_function_token48] = ACTIONS(21),
    [aux_sym_system_function_token49] = ACTIONS(21),
    [aux_sym_system_function_token50] = ACTIONS(21),
    [aux_sym_system_function_token51] = ACTIONS(21),
    [aux_sym_system_function_token52] = ACTIONS(21),
    [aux_sym_system_function_token53] = ACTIONS(21),
    [aux_sym_system_function_token54] = ACTIONS(21),
    [aux_sym_system_function_token55] = ACTIONS(21),
    [aux_sym_system_function_token56] = ACTIONS(21),
    [aux_sym_system_function_token57] = ACTIONS(21),
    [aux_sym_system_function_token58] = ACTIONS(21),
    [aux_sym_system_function_token59] = ACTIONS(21),
    [aux_sym_system_function_token60] = ACTIONS(21),
    [aux_sym_system_function_token61] = ACTIONS(21),
    [aux_sym_system_function_token62] = ACTIONS(21),
    [aux_sym_system_function_token63] = ACTIONS(21),
    [aux_sym_system_function_token64] = ACTIONS(21),
    [aux_sym_system_function_token65] = ACTIONS(21),
    [aux_sym_system_function_token66] = ACTIONS(21),
    [aux_sym_system_function_token67] = ACTIONS(21),
    [aux_sym_system_function_token68] = ACTIONS(21),
    [aux_sym_system_function_token69] = ACTIONS(21),
    [aux_sym_system_function_token70] = ACTIONS(21),
    [aux_sym_system_function_token71] = ACTIONS(21),
    [aux_sym_system_function_token72] = ACTIONS(21),
    [aux_sym_system_function_token73] = ACTIONS(21),
    [aux_sym_system_function_token74] = ACTIONS(21),
    [aux_sym_system_function_token75] = ACTIONS(21),
    [aux_sym_system_function_token76] = ACTIONS(23),
    [aux_sym_system_function_token77] = ACTIONS(23),
    [aux_sym_system_function_token78] = ACTIONS(23),
    [aux_sym_system_function_token79] = ACTIONS(23),
    [aux_sym_system_function_token80] = ACTIONS(23),
    [aux_sym_system_function_token81] = ACTIONS(23),
    [aux_sym_system_function_token82] = ACTIONS(23),
    [aux_sym_system_function_token83] = ACTIONS(23),
    [aux_sym_system_function_token84] = ACTIONS(23),
    [aux_sym_system_function_token85] = ACTIONS(23),
    [aux_sym_system_function_token86] = ACTIONS(23),
    [aux_sym_system_function_token87] = ACTIONS(23),
    [aux_sym_system_function_token88] = ACTIONS(23),
    [aux_sym_system_function_token89] = ACTIONS(23),
    [aux_sym_system_function_token90] = ACTIONS(23),
    [aux_sym_system_function_token91] = ACTIONS(23),
    [aux_sym_system_function_token92] = ACTIONS(23),
    [aux_sym_system_function_token93] = ACTIONS(23),
    [aux_sym_system_function_token94] = ACTIONS(23),
    [aux_sym_system_function_token95] = ACTIONS(23),
    [aux_sym_system_function_token96] = ACTIONS(23),
    [aux_sym_system_function_token97] = ACTIONS(23),
    [aux_sym_system_function_token98] = ACTIONS(23),
    [aux_sym_system_function_token99] = ACTIONS(23),
    [aux_sym_system_function_token100] = ACTIONS(23),
    [aux_sym_system_function_token101] = ACTIONS(23),
    [aux_sym_system_function_token102] = ACTIONS(23),
    [aux_sym_system_function_token103] = ACTIONS(23),
    [aux_sym_system_function_token104] = ACTIONS(23),
    [aux_sym_system_function_token105] = ACTIONS(23),
    [aux_sym_system_function_token106] = ACTIONS(23),
    [aux_sym_system_function_token107] = ACTIONS(23),
    [aux_sym_system_function_token108] = ACTIONS(23),
    [aux_sym_system_function_token109] = ACTIONS(23),
    [aux_sym_system_function_token110] = ACTIONS(23),
    [aux_sym_system_function_token111] = ACTIONS(23),
    [aux_sym_system_function_token112] = ACTIONS(23),
    [aux_sym_system_function_token113] = ACTIONS(23),
    [aux_sym_system_function_token114] = ACTIONS(23),
    [sym__string_function_identifier] = ACTIONS(25),
    [sym__numeric_function_identifier] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym_stringidentifier] = ACTIONS(35),
    [sym_numberidentifier] = ACTIONS(37),
    [sym__mat] = ACTIONS(39),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [5] = {
    [sym__expression] = STATE(218),
    [sym_unary_expression] = STATE(218),
    [sym_primary_expression] = STATE(218),
    [sym_call_expression] = STATE(95),
    [sym_system_function] = STATE(85),
    [sym_user_function] = STATE(85),
    [sym_template_string] = STATE(95),
    [sym_string] = STATE(95),
    [sym_parenthesized_expression] = STATE(95),
    [sym_forced_assignment_expression] = STATE(218),
    [sym__reference] = STATE(63),
    [sym_numberelement] = STATE(63),
    [sym_stringelement] = STATE(63),
    [sym_stringarray] = STATE(63),
    [sym_stringreference] = STATE(63),
    [sym_numberreference] = STATE(63),
    [sym_range] = STATE(184),
    [sym_numberarray] = STATE(63),
    [sym_number] = STATE(95),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(17),
    [aux_sym_unary_expression_token1] = ACTIONS(19),
    [aux_sym_system_function_token1] = ACTIONS(21),
    [aux_sym_system_function_token2] = ACTIONS(21),
    [aux_sym_system_function_token3] = ACTIONS(21),
    [aux_sym_system_function_token4] = ACTIONS(21),
    [aux_sym_system_function_token5] = ACTIONS(21),
    [aux_sym_system_function_token6] = ACTIONS(21),
    [aux_sym_system_function_token7] = ACTIONS(21),
    [aux_sym_system_function_token8] = ACTIONS(21),
    [aux_sym_system_function_token9] = ACTIONS(21),
    [aux_sym_system_function_token10] = ACTIONS(21),
    [aux_sym_system_function_token11] = ACTIONS(21),
    [aux_sym_system_function_token12] = ACTIONS(21),
    [aux_sym_system_function_token13] = ACTIONS(21),
    [aux_sym_system_function_token14] = ACTIONS(21),
    [aux_sym_system_function_token15] = ACTIONS(21),
    [aux_sym_system_function_token16] = ACTIONS(21),
    [aux_sym_system_function_token17] = ACTIONS(21),
    [aux_sym_system_function_token18] = ACTIONS(21),
    [aux_sym_system_function_token19] = ACTIONS(21),
    [aux_sym_system_function_token20] = ACTIONS(21),
    [aux_sym_system_function_token21] = ACTIONS(21),
    [aux_sym_system_function_token22] = ACTIONS(21),
    [aux_sym_system_function_token23] = ACTIONS(21),
    [aux_sym_system_function_token24] = ACTIONS(21),
    [aux_sym_system_function_token25] = ACTIONS(21),
    [aux_sym_system_function_token26] = ACTIONS(21),
    [aux_sym_system_function_token27] = ACTIONS(21),
    [aux_sym_system_function_token28] = ACTIONS(21),
    [aux_sym_system_function_token29] = ACTIONS(21),
    [aux_sym_system_function_token30] = ACTIONS(21),
    [aux_sym_system_function_token31] = ACTIONS(21),
    [aux_sym_system_function_token32] = ACTIONS(21),
    [aux_sym_system_function_token33] = ACTIONS(21),
    [aux_sym_system_function_token34] = ACTIONS(21),
    [aux_sym_system_function_token35] = ACTIONS(21),
    [aux_sym_system_function_token36] = ACTIONS(21),
    [aux_sym_system_function_token37] = ACTIONS(21),
    [aux_sym_system_function_token38] = ACTIONS(21),
    [aux_sym_system_function_token39] = ACTIONS(21),
    [aux_sym_system_function_token40] = ACTIONS(21),
    [aux_sym_system_function_token41] = ACTIONS(21),
    [aux_sym_system_function_token42] = ACTIONS(21),
    [aux_sym_system_function_token43] = ACTIONS(21),
    [aux_sym_system_function_token44] = ACTIONS(21),
    [aux_sym_system_function_token45] = ACTIONS(21),
    [aux_sym_system_function_token46] = ACTIONS(21),
    [aux_sym_system_function_token47] = ACTIONS(21),
    [aux_sym_system_function_token48] = ACTIONS(21),
    [aux_sym_system_function_token49] = ACTIONS(21),
    [aux_sym_system_function_token50] = ACTIONS(21),
    [aux_sym_system_function_token51] = ACTIONS(21),
    [aux_sym_system_function_token52] = ACTIONS(21),
    [aux_sym_system_function_token53] = ACTIONS(21),
    [aux_sym_system_function_token54] = ACTIONS(21),
    [aux_sym_system_function_token55] = ACTIONS(21),
    [aux_sym_system_function_token56] = ACTIONS(21),
    [aux_sym_system_function_token57] = ACTIONS(21),
    [aux_sym_system_function_token58] = ACTIONS(21),
    [aux_sym_system_function_token59] = ACTIONS(21),
    [aux_sym_system_function_token60] = ACTIONS(21),
    [aux_sym_system_function_token61] = ACTIONS(21),
    [aux_sym_system_function_token62] = ACTIONS(21),
    [aux_sym_system_function_token63] = ACTIONS(21),
    [aux_sym_system_function_token64] = ACTIONS(21),
    [aux_sym_system_function_token65] = ACTIONS(21),
    [aux_sym_system_function_token66] = ACTIONS(21),
    [aux_sym_system_function_token67] = ACTIONS(21),
    [aux_sym_system_function_token68] = ACTIONS(21),
    [aux_sym_system_function_token69] = ACTIONS(21),
    [aux_sym_system_function_token70] = ACTIONS(21),
    [aux_sym_system_function_token71] = ACTIONS(21),
    [aux_sym_system_function_token72] = ACTIONS(21),
    [aux_sym_system_function_token73] = ACTIONS(21),
    [aux_sym_system_function_token74] = ACTIONS(21),
    [aux_sym_system_function_token75] = ACTIONS(21),
    [aux_sym_system_function_token76] = ACTIONS(23),
    [aux_sym_system_function_token77] = ACTIONS(23),
    [aux_sym_system_function_token78] = ACTIONS(23),
    [aux_sym_system_function_token79] = ACTIONS(23),
    [aux_sym_system_function_token80] = ACTIONS(23),
    [aux_sym_system_function_token81] = ACTIONS(23),
    [aux_sym_system_function_token82] = ACTIONS(23),
    [aux_sym_system_function_token83] = ACTIONS(23),
    [aux_sym_system_function_token84] = ACTIONS(23),
    [aux_sym_system_function_token85] = ACTIONS(23),
    [aux_sym_system_function_token86] = ACTIONS(23),
    [aux_sym_system_function_token87] = ACTIONS(23),
    [aux_sym_system_function_token88] = ACTIONS(23),
    [aux_sym_system_function_token89] = ACTIONS(23),
    [aux_sym_system_function_token90] = ACTIONS(23),
    [aux_sym_system_function_token91] = ACTIONS(23),
    [aux_sym_system_function_token92] = ACTIONS(23),
    [aux_sym_system_function_token93] = ACTIONS(23),
    [aux_sym_system_function_token94] = ACTIONS(23),
    [aux_sym_system_function_token95] = ACTIONS(23),
    [aux_sym_system_function_token96] = ACTIONS(23),
    [aux_sym_system_function_token97] = ACTIONS(23),
    [aux_sym_system_function_token98] = ACTIONS(23),
    [aux_sym_system_function_token99] = ACTIONS(23),
    [aux_sym_system_function_token100] = ACTIONS(23),
    [aux_sym_system_function_token101] = ACTIONS(23),
    [aux_sym_system_function_token102] = ACTIONS(23),
    [aux_sym_system_function_token103] = ACTIONS(23),
    [aux_sym_system_function_token104] = ACTIONS(23),
    [aux_sym_system_function_token105] = ACTIONS(23),
    [aux_sym_system_function_token106] = ACTIONS(23),
    [aux_sym_system_function_token107] = ACTIONS(23),
    [aux_sym_system_function_token108] = ACTIONS(23),
    [aux_sym_system_function_token109] = ACTIONS(23),
    [aux_sym_system_function_token110] = ACTIONS(23),
    [aux_sym_system_function_token111] = ACTIONS(23),
    [aux_sym_system_function_token112] = ACTIONS(23),
    [aux_sym_system_function_token113] = ACTIONS(23),
    [aux_sym_system_function_token114] = ACTIONS(23),
    [sym__string_function_identifier] = ACTIONS(25),
    [sym__numeric_function_identifier] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym_stringidentifier] = ACTIONS(35),
    [sym_numberidentifier] = ACTIONS(37),
    [sym__mat] = ACTIONS(39),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [6] = {
    [sym__expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_primary_expression] = STATE(161),
    [sym_call_expression] = STATE(95),
    [sym_system_function] = STATE(85),
    [sym_user_function] = STATE(85),
    [sym_template_string] = STATE(95),
    [sym_string] = STATE(95),
    [sym_parenthesized_expression] = STATE(95),
    [sym_forced_assignment_expression] = STATE(161),
    [sym__reference] = STATE(63),
    [sym_numberelement] = STATE(63),
    [sym_stringelement] = STATE(63),
    [sym_stringarray] = STATE(63),
    [sym_stringreference] = STATE(63),
    [sym_numberreference] = STATE(63),
    [sym_range] = STATE(204),
    [sym_numberarray] = STATE(63),
    [sym_number] = STATE(95),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(17),
    [aux_sym_unary_expression_token1] = ACTIONS(19),
    [aux_sym_system_function_token1] = ACTIONS(21),
    [aux_sym_system_function_token2] = ACTIONS(21),
    [aux_sym_system_function_token3] = ACTIONS(21),
    [aux_sym_system_function_token4] = ACTIONS(21),
    [aux_sym_system_function_token5] = ACTIONS(21),
    [aux_sym_system_function_token6] = ACTIONS(21),
    [aux_sym_system_function_token7] = ACTIONS(21),
    [aux_sym_system_function_token8] = ACTIONS(21),
    [aux_sym_system_function_token9] = ACTIONS(21),
    [aux_sym_system_function_token10] = ACTIONS(21),
    [aux_sym_system_function_token11] = ACTIONS(21),
    [aux_sym_system_function_token12] = ACTIONS(21),
    [aux_sym_system_function_token13] = ACTIONS(21),
    [aux_sym_system_function_token14] = ACTIONS(21),
    [aux_sym_system_function_token15] = ACTIONS(21),
    [aux_sym_system_function_token16] = ACTIONS(21),
    [aux_sym_system_function_token17] = ACTIONS(21),
    [aux_sym_system_function_token18] = ACTIONS(21),
    [aux_sym_system_function_token19] = ACTIONS(21),
    [aux_sym_system_function_token20] = ACTIONS(21),
    [aux_sym_system_function_token21] = ACTIONS(21),
    [aux_sym_system_function_token22] = ACTIONS(21),
    [aux_sym_system_function_token23] = ACTIONS(21),
    [aux_sym_system_function_token24] = ACTIONS(21),
    [aux_sym_system_function_token25] = ACTIONS(21),
    [aux_sym_system_function_token26] = ACTIONS(21),
    [aux_sym_system_function_token27] = ACTIONS(21),
    [aux_sym_system_function_token28] = ACTIONS(21),
    [aux_sym_system_function_token29] = ACTIONS(21),
    [aux_sym_system_function_token30] = ACTIONS(21),
    [aux_sym_system_function_token31] = ACTIONS(21),
    [aux_sym_system_function_token32] = ACTIONS(21),
    [aux_sym_system_function_token33] = ACTIONS(21),
    [aux_sym_system_function_token34] = ACTIONS(21),
    [aux_sym_system_function_token35] = ACTIONS(21),
    [aux_sym_system_function_token36] = ACTIONS(21),
    [aux_sym_system_function_token37] = ACTIONS(21),
    [aux_sym_system_function_token38] = ACTIONS(21),
    [aux_sym_system_function_token39] = ACTIONS(21),
    [aux_sym_system_function_token40] = ACTIONS(21),
    [aux_sym_system_function_token41] = ACTIONS(21),
    [aux_sym_system_function_token42] = ACTIONS(21),
    [aux_sym_system_function_token43] = ACTIONS(21),
    [aux_sym_system_function_token44] = ACTIONS(21),
    [aux_sym_system_function_token45] = ACTIONS(21),
    [aux_sym_system_function_token46] = ACTIONS(21),
    [aux_sym_system_function_token47] = ACTIONS(21),
    [aux_sym_system_function_token48] = ACTIONS(21),
    [aux_sym_system_function_token49] = ACTIONS(21),
    [aux_sym_system_function_token50] = ACTIONS(21),
    [aux_sym_system_function_token51] = ACTIONS(21),
    [aux_sym_system_function_token52] = ACTIONS(21),
    [aux_sym_system_function_token53] = ACTIONS(21),
    [aux_sym_system_function_token54] = ACTIONS(21),
    [aux_sym_system_function_token55] = ACTIONS(21),
    [aux_sym_system_function_token56] = ACTIONS(21),
    [aux_sym_system_function_token57] = ACTIONS(21),
    [aux_sym_system_function_token58] = ACTIONS(21),
    [aux_sym_system_function_token59] = ACTIONS(21),
    [aux_sym_system_function_token60] = ACTIONS(21),
    [aux_sym_system_function_token61] = ACTIONS(21),
    [aux_sym_system_function_token62] = ACTIONS(21),
    [aux_sym_system_function_token63] = ACTIONS(21),
    [aux_sym_system_function_token64] = ACTIONS(21),
    [aux_sym_system_function_token65] = ACTIONS(21),
    [aux_sym_system_function_token66] = ACTIONS(21),
    [aux_sym_system_function_token67] = ACTIONS(21),
    [aux_sym_system_function_token68] = ACTIONS(21),
    [aux_sym_system_function_token69] = ACTIONS(21),
    [aux_sym_system_function_token70] = ACTIONS(21),
    [aux_sym_system_function_token71] = ACTIONS(21),
    [aux_sym_system_function_token72] = ACTIONS(21),
    [aux_sym_system_function_token73] = ACTIONS(21),
    [aux_sym_system_function_token74] = ACTIONS(21),
    [aux_sym_system_function_token75] = ACTIONS(21),
    [aux_sym_system_function_token76] = ACTIONS(23),
    [aux_sym_system_function_token77] = ACTIONS(23),
    [aux_sym_system_function_token78] = ACTIONS(23),
    [aux_sym_system_function_token79] = ACTIONS(23),
    [aux_sym_system_function_token80] = ACTIONS(23),
    [aux_sym_system_function_token81] = ACTIONS(23),
    [aux_sym_system_function_token82] = ACTIONS(23),
    [aux_sym_system_function_token83] = ACTIONS(23),
    [aux_sym_system_function_token84] = ACTIONS(23),
    [aux_sym_system_function_token85] = ACTIONS(23),
    [aux_sym_system_function_token86] = ACTIONS(23),
    [aux_sym_system_function_token87] = ACTIONS(23),
    [aux_sym_system_function_token88] = ACTIONS(23),
    [aux_sym_system_function_token89] = ACTIONS(23),
    [aux_sym_system_function_token90] = ACTIONS(23),
    [aux_sym_system_function_token91] = ACTIONS(23),
    [aux_sym_system_function_token92] = ACTIONS(23),
    [aux_sym_system_function_token93] = ACTIONS(23),
    [aux_sym_system_function_token94] = ACTIONS(23),
    [aux_sym_system_function_token95] = ACTIONS(23),
    [aux_sym_system_function_token96] = ACTIONS(23),
    [aux_sym_system_function_token97] = ACTIONS(23),
    [aux_sym_system_function_token98] = ACTIONS(23),
    [aux_sym_system_function_token99] = ACTIONS(23),
    [aux_sym_system_function_token100] = ACTIONS(23),
    [aux_sym_system_function_token101] = ACTIONS(23),
    [aux_sym_system_function_token102] = ACTIONS(23),
    [aux_sym_system_function_token103] = ACTIONS(23),
    [aux_sym_system_function_token104] = ACTIONS(23),
    [aux_sym_system_function_token105] = ACTIONS(23),
    [aux_sym_system_function_token106] = ACTIONS(23),
    [aux_sym_system_function_token107] = ACTIONS(23),
    [aux_sym_system_function_token108] = ACTIONS(23),
    [aux_sym_system_function_token109] = ACTIONS(23),
    [aux_sym_system_function_token110] = ACTIONS(23),
    [aux_sym_system_function_token111] = ACTIONS(23),
    [aux_sym_system_function_token112] = ACTIONS(23),
    [aux_sym_system_function_token113] = ACTIONS(23),
    [aux_sym_system_function_token114] = ACTIONS(23),
    [sym__string_function_identifier] = ACTIONS(25),
    [sym__numeric_function_identifier] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym_stringidentifier] = ACTIONS(35),
    [sym_numberidentifier] = ACTIONS(37),
    [sym__mat] = ACTIONS(39),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [7] = {
    [sym__expression] = STATE(131),
    [sym_unary_expression] = STATE(131),
    [sym_primary_expression] = STATE(131),
    [sym_call_expression] = STATE(95),
    [sym_system_function] = STATE(85),
    [sym_user_function] = STATE(85),
    [sym_template_string] = STATE(95),
    [sym_string] = STATE(95),
    [sym_parenthesized_expression] = STATE(95),
    [sym_assignment_expression] = STATE(131),
    [sym_forced_assignment_expression] = STATE(131),
    [sym__reference] = STATE(78),
    [sym_numberelement] = STATE(78),
    [sym_stringelement] = STATE(78),
    [sym_stringarray] = STATE(78),
    [sym_stringreference] = STATE(78),
    [sym_numberreference] = STATE(78),
    [sym_numberarray] = STATE(78),
    [sym_number] = STATE(95),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(17),
    [aux_sym_unary_expression_token1] = ACTIONS(19),
    [aux_sym_system_function_token1] = ACTIONS(21),
    [aux_sym_system_function_token2] = ACTIONS(21),
    [aux_sym_system_function_token3] = ACTIONS(21),
    [aux_sym_system_function_token4] = ACTIONS(21),
    [aux_sym_system_function_token5] = ACTIONS(21),
    [aux_sym_system_function_token6] = ACTIONS(21),
    [aux_sym_system_function_token7] = ACTIONS(21),
    [aux_sym_system_function_token8] = ACTIONS(21),
    [aux_sym_system_function_token9] = ACTIONS(21),
    [aux_sym_system_function_token10] = ACTIONS(21),
    [aux_sym_system_function_token11] = ACTIONS(21),
    [aux_sym_system_function_token12] = ACTIONS(21),
    [aux_sym_system_function_token13] = ACTIONS(21),
    [aux_sym_system_function_token14] = ACTIONS(21),
    [aux_sym_system_function_token15] = ACTIONS(21),
    [aux_sym_system_function_token16] = ACTIONS(21),
    [aux_sym_system_function_token17] = ACTIONS(21),
    [aux_sym_system_function_token18] = ACTIONS(21),
    [aux_sym_system_function_token19] = ACTIONS(21),
    [aux_sym_system_function_token20] = ACTIONS(21),
    [aux_sym_system_function_token21] = ACTIONS(21),
    [aux_sym_system_function_token22] = ACTIONS(21),
    [aux_sym_system_function_token23] = ACTIONS(21),
    [aux_sym_system_function_token24] = ACTIONS(21),
    [aux_sym_system_function_token25] = ACTIONS(21),
    [aux_sym_system_function_token26] = ACTIONS(21),
    [aux_sym_system_function_token27] = ACTIONS(21),
    [aux_sym_system_function_token28] = ACTIONS(21),
    [aux_sym_system_function_token29] = ACTIONS(21),
    [aux_sym_system_function_token30] = ACTIONS(21),
    [aux_sym_system_function_token31] = ACTIONS(21),
    [aux_sym_system_function_token32] = ACTIONS(21),
    [aux_sym_system_function_token33] = ACTIONS(21),
    [aux_sym_system_function_token34] = ACTIONS(21),
    [aux_sym_system_function_token35] = ACTIONS(21),
    [aux_sym_system_function_token36] = ACTIONS(21),
    [aux_sym_system_function_token37] = ACTIONS(21),
    [aux_sym_system_function_token38] = ACTIONS(21),
    [aux_sym_system_function_token39] = ACTIONS(21),
    [aux_sym_system_function_token40] = ACTIONS(21),
    [aux_sym_system_function_token41] = ACTIONS(21),
    [aux_sym_system_function_token42] = ACTIONS(21),
    [aux_sym_system_function_token43] = ACTIONS(21),
    [aux_sym_system_function_token44] = ACTIONS(21),
    [aux_sym_system_function_token45] = ACTIONS(21),
    [aux_sym_system_function_token46] = ACTIONS(21),
    [aux_sym_system_function_token47] = ACTIONS(21),
    [aux_sym_system_function_token48] = ACTIONS(21),
    [aux_sym_system_function_token49] = ACTIONS(21),
    [aux_sym_system_function_token50] = ACTIONS(21),
    [aux_sym_system_function_token51] = ACTIONS(21),
    [aux_sym_system_function_token52] = ACTIONS(21),
    [aux_sym_system_function_token53] = ACTIONS(21),
    [aux_sym_system_function_token54] = ACTIONS(21),
    [aux_sym_system_function_token55] = ACTIONS(21),
    [aux_sym_system_function_token56] = ACTIONS(21),
    [aux_sym_system_function_token57] = ACTIONS(21),
    [aux_sym_system_function_token58] = ACTIONS(21),
    [aux_sym_system_function_token59] = ACTIONS(21),
    [aux_sym_system_function_token60] = ACTIONS(21),
    [aux_sym_system_function_token61] = ACTIONS(21),
    [aux_sym_system_function_token62] = ACTIONS(21),
    [aux_sym_system_function_token63] = ACTIONS(21),
    [aux_sym_system_function_token64] = ACTIONS(21),
    [aux_sym_system_function_token65] = ACTIONS(21),
    [aux_sym_system_function_token66] = ACTIONS(21),
    [aux_sym_system_function_token67] = ACTIONS(21),
    [aux_sym_system_function_token68] = ACTIONS(21),
    [aux_sym_system_function_token69] = ACTIONS(21),
    [aux_sym_system_function_token70] = ACTIONS(21),
    [aux_sym_system_function_token71] = ACTIONS(21),
    [aux_sym_system_function_token72] = ACTIONS(21),
    [aux_sym_system_function_token73] = ACTIONS(21),
    [aux_sym_system_function_token74] = ACTIONS(21),
    [aux_sym_system_function_token75] = ACTIONS(21),
    [aux_sym_system_function_token76] = ACTIONS(23),
    [aux_sym_system_function_token77] = ACTIONS(23),
    [aux_sym_system_function_token78] = ACTIONS(23),
    [aux_sym_system_function_token79] = ACTIONS(23),
    [aux_sym_system_function_token80] = ACTIONS(23),
    [aux_sym_system_function_token81] = ACTIONS(23),
    [aux_sym_system_function_token82] = ACTIONS(23),
    [aux_sym_system_function_token83] = ACTIONS(23),
    [aux_sym_system_function_token84] = ACTIONS(23),
    [aux_sym_system_function_token85] = ACTIONS(23),
    [aux_sym_system_function_token86] = ACTIONS(23),
    [aux_sym_system_function_token87] = ACTIONS(23),
    [aux_sym_system_function_token88] = ACTIONS(23),
    [aux_sym_system_function_token89] = ACTIONS(23),
    [aux_sym_system_function_token90] = ACTIONS(23),
    [aux_sym_system_function_token91] = ACTIONS(23),
    [aux_sym_system_function_token92] = ACTIONS(23),
    [aux_sym_system_function_token93] = ACTIONS(23),
    [aux_sym_system_function_token94] = ACTIONS(23),
    [aux_sym_system_function_token95] = ACTIONS(23),
    [aux_sym_system_function_token96] = ACTIONS(23),
    [aux_sym_system_function_token97] = ACTIONS(23),
    [aux_sym_system_function_token98] = ACTIONS(23),
    [aux_sym_system_function_token99] = ACTIONS(23),
    [aux_sym_system_function_token100] = ACTIONS(23),
    [aux_sym_system_function_token101] = ACTIONS(23),
    [aux_sym_system_function_token102] = ACTIONS(23),
    [aux_sym_system_function_token103] = ACTIONS(23),
    [aux_sym_system_function_token104] = ACTIONS(23),
    [aux_sym_system_function_token105] = ACTIONS(23),
    [aux_sym_system_function_token106] = ACTIONS(23),
    [aux_sym_system_function_token107] = ACTIONS(23),
    [aux_sym_system_function_token108] = ACTIONS(23),
    [aux_sym_system_function_token109] = ACTIONS(23),
    [aux_sym_system_function_token110] = ACTIONS(23),
    [aux_sym_system_function_token111] = ACTIONS(23),
    [aux_sym_system_function_token112] = ACTIONS(23),
    [aux_sym_system_function_token113] = ACTIONS(23),
    [aux_sym_system_function_token114] = ACTIONS(23),
    [sym__string_function_identifier] = ACTIONS(25),
    [sym__numeric_function_identifier] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym_stringidentifier] = ACTIONS(35),
    [sym_numberidentifier] = ACTIONS(37),
    [sym__mat] = ACTIONS(39),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [8] = {
    [sym__expression] = STATE(132),
    [sym_unary_expression] = STATE(132),
    [sym_primary_expression] = STATE(132),
    [sym_call_expression] = STATE(124),
    [sym_system_function] = STATE(108),
    [sym_user_function] = STATE(108),
    [sym_template_string] = STATE(124),
    [sym_string] = STATE(124),
    [sym_parenthesized_expression] = STATE(124),
    [sym_assignment_expression] = STATE(132),
    [sym_forced_assignment_expression] = STATE(132),
    [sym__reference] = STATE(79),
    [sym_numberelement] = STATE(79),
    [sym_stringelement] = STATE(79),
    [sym_stringarray] = STATE(79),
    [sym_stringreference] = STATE(79),
    [sym_numberreference] = STATE(79),
    [sym_numberarray] = STATE(79),
    [sym_number] = STATE(124),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(45),
    [aux_sym_unary_expression_token1] = ACTIONS(47),
    [aux_sym_system_function_token1] = ACTIONS(49),
    [aux_sym_system_function_token2] = ACTIONS(49),
    [aux_sym_system_function_token3] = ACTIONS(49),
    [aux_sym_system_function_token4] = ACTIONS(49),
    [aux_sym_system_function_token5] = ACTIONS(49),
    [aux_sym_system_function_token6] = ACTIONS(49),
    [aux_sym_system_function_token7] = ACTIONS(49),
    [aux_sym_system_function_token8] = ACTIONS(49),
    [aux_sym_system_function_token9] = ACTIONS(49),
    [aux_sym_system_function_token10] = ACTIONS(49),
    [aux_sym_system_function_token11] = ACTIONS(49),
    [aux_sym_system_function_token12] = ACTIONS(49),
    [aux_sym_system_function_token13] = ACTIONS(49),
    [aux_sym_system_function_token14] = ACTIONS(49),
    [aux_sym_system_function_token15] = ACTIONS(49),
    [aux_sym_system_function_token16] = ACTIONS(49),
    [aux_sym_system_function_token17] = ACTIONS(49),
    [aux_sym_system_function_token18] = ACTIONS(49),
    [aux_sym_system_function_token19] = ACTIONS(49),
    [aux_sym_system_function_token20] = ACTIONS(49),
    [aux_sym_system_function_token21] = ACTIONS(49),
    [aux_sym_system_function_token22] = ACTIONS(49),
    [aux_sym_system_function_token23] = ACTIONS(49),
    [aux_sym_system_function_token24] = ACTIONS(49),
    [aux_sym_system_function_token25] = ACTIONS(49),
    [aux_sym_system_function_token26] = ACTIONS(49),
    [aux_sym_system_function_token27] = ACTIONS(49),
    [aux_sym_system_function_token28] = ACTIONS(49),
    [aux_sym_system_function_token29] = ACTIONS(49),
    [aux_sym_system_function_token30] = ACTIONS(49),
    [aux_sym_system_function_token31] = ACTIONS(49),
    [aux_sym_system_function_token32] = ACTIONS(49),
    [aux_sym_system_function_token33] = ACTIONS(49),
    [aux_sym_system_function_token34] = ACTIONS(49),
    [aux_sym_system_function_token35] = ACTIONS(49),
    [aux_sym_system_function_token36] = ACTIONS(49),
    [aux_sym_system_function_token37] = ACTIONS(49),
    [aux_sym_system_function_token38] = ACTIONS(49),
    [aux_sym_system_function_token39] = ACTIONS(49),
    [aux_sym_system_function_token40] = ACTIONS(49),
    [aux_sym_system_function_token41] = ACTIONS(49),
    [aux_sym_system_function_token42] = ACTIONS(49),
    [aux_sym_system_function_token43] = ACTIONS(49),
    [aux_sym_system_function_token44] = ACTIONS(49),
    [aux_sym_system_function_token45] = ACTIONS(49),
    [aux_sym_system_function_token46] = ACTIONS(49),
    [aux_sym_system_function_token47] = ACTIONS(49),
    [aux_sym_system_function_token48] = ACTIONS(49),
    [aux_sym_system_function_token49] = ACTIONS(49),
    [aux_sym_system_function_token50] = ACTIONS(49),
    [aux_sym_system_function_token51] = ACTIONS(49),
    [aux_sym_system_function_token52] = ACTIONS(49),
    [aux_sym_system_function_token53] = ACTIONS(49),
    [aux_sym_system_function_token54] = ACTIONS(49),
    [aux_sym_system_function_token55] = ACTIONS(49),
    [aux_sym_system_function_token56] = ACTIONS(49),
    [aux_sym_system_function_token57] = ACTIONS(49),
    [aux_sym_system_function_token58] = ACTIONS(49),
    [aux_sym_system_function_token59] = ACTIONS(49),
    [aux_sym_system_function_token60] = ACTIONS(49),
    [aux_sym_system_function_token61] = ACTIONS(49),
    [aux_sym_system_function_token62] = ACTIONS(49),
    [aux_sym_system_function_token63] = ACTIONS(49),
    [aux_sym_system_function_token64] = ACTIONS(49),
    [aux_sym_system_function_token65] = ACTIONS(49),
    [aux_sym_system_function_token66] = ACTIONS(49),
    [aux_sym_system_function_token67] = ACTIONS(49),
    [aux_sym_system_function_token68] = ACTIONS(49),
    [aux_sym_system_function_token69] = ACTIONS(49),
    [aux_sym_system_function_token70] = ACTIONS(49),
    [aux_sym_system_function_token71] = ACTIONS(49),
    [aux_sym_system_function_token72] = ACTIONS(49),
    [aux_sym_system_function_token73] = ACTIONS(49),
    [aux_sym_system_function_token74] = ACTIONS(49),
    [aux_sym_system_function_token75] = ACTIONS(49),
    [aux_sym_system_function_token76] = ACTIONS(51),
    [aux_sym_system_function_token77] = ACTIONS(51),
    [aux_sym_system_function_token78] = ACTIONS(51),
    [aux_sym_system_function_token79] = ACTIONS(51),
    [aux_sym_system_function_token80] = ACTIONS(51),
    [aux_sym_system_function_token81] = ACTIONS(51),
    [aux_sym_system_function_token82] = ACTIONS(51),
    [aux_sym_system_function_token83] = ACTIONS(51),
    [aux_sym_system_function_token84] = ACTIONS(51),
    [aux_sym_system_function_token85] = ACTIONS(51),
    [aux_sym_system_function_token86] = ACTIONS(51),
    [aux_sym_system_function_token87] = ACTIONS(51),
    [aux_sym_system_function_token88] = ACTIONS(51),
    [aux_sym_system_function_token89] = ACTIONS(51),
    [aux_sym_system_function_token90] = ACTIONS(51),
    [aux_sym_system_function_token91] = ACTIONS(51),
    [aux_sym_system_function_token92] = ACTIONS(51),
    [aux_sym_system_function_token93] = ACTIONS(51),
    [aux_sym_system_function_token94] = ACTIONS(51),
    [aux_sym_system_function_token95] = ACTIONS(51),
    [aux_sym_system_function_token96] = ACTIONS(51),
    [aux_sym_system_function_token97] = ACTIONS(51),
    [aux_sym_system_function_token98] = ACTIONS(51),
    [aux_sym_system_function_token99] = ACTIONS(51),
    [aux_sym_system_function_token100] = ACTIONS(51),
    [aux_sym_system_function_token101] = ACTIONS(51),
    [aux_sym_system_function_token102] = ACTIONS(51),
    [aux_sym_system_function_token103] = ACTIONS(51),
    [aux_sym_system_function_token104] = ACTIONS(51),
    [aux_sym_system_function_token105] = ACTIONS(51),
    [aux_sym_system_function_token106] = ACTIONS(51),
    [aux_sym_system_function_token107] = ACTIONS(51),
    [aux_sym_system_function_token108] = ACTIONS(51),
    [aux_sym_system_function_token109] = ACTIONS(51),
    [aux_sym_system_function_token110] = ACTIONS(51),
    [aux_sym_system_function_token111] = ACTIONS(51),
    [aux_sym_system_function_token112] = ACTIONS(51),
    [aux_sym_system_function_token113] = ACTIONS(51),
    [aux_sym_system_function_token114] = ACTIONS(51),
    [sym__string_function_identifier] = ACTIONS(53),
    [sym__numeric_function_identifier] = ACTIONS(55),
    [anon_sym_BQUOTE] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [sym_stringidentifier] = ACTIONS(63),
    [sym_numberidentifier] = ACTIONS(65),
    [sym__mat] = ACTIONS(67),
    [aux_sym_number_token1] = ACTIONS(69),
  },
  [9] = {
    [sym__expression] = STATE(218),
    [sym_unary_expression] = STATE(218),
    [sym_primary_expression] = STATE(218),
    [sym_call_expression] = STATE(95),
    [sym_system_function] = STATE(85),
    [sym_user_function] = STATE(85),
    [sym_template_string] = STATE(95),
    [sym_string] = STATE(95),
    [sym_parenthesized_expression] = STATE(95),
    [sym_forced_assignment_expression] = STATE(218),
    [sym__reference] = STATE(63),
    [sym_numberelement] = STATE(63),
    [sym_stringelement] = STATE(63),
    [sym_stringarray] = STATE(63),
    [sym_stringreference] = STATE(63),
    [sym_numberreference] = STATE(63),
    [sym_range] = STATE(187),
    [sym_numberarray] = STATE(63),
    [sym_number] = STATE(95),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(17),
    [aux_sym_unary_expression_token1] = ACTIONS(19),
    [aux_sym_system_function_token1] = ACTIONS(21),
    [aux_sym_system_function_token2] = ACTIONS(21),
    [aux_sym_system_function_token3] = ACTIONS(21),
    [aux_sym_system_function_token4] = ACTIONS(21),
    [aux_sym_system_function_token5] = ACTIONS(21),
    [aux_sym_system_function_token6] = ACTIONS(21),
    [aux_sym_system_function_token7] = ACTIONS(21),
    [aux_sym_system_function_token8] = ACTIONS(21),
    [aux_sym_system_function_token9] = ACTIONS(21),
    [aux_sym_system_function_token10] = ACTIONS(21),
    [aux_sym_system_function_token11] = ACTIONS(21),
    [aux_sym_system_function_token12] = ACTIONS(21),
    [aux_sym_system_function_token13] = ACTIONS(21),
    [aux_sym_system_function_token14] = ACTIONS(21),
    [aux_sym_system_function_token15] = ACTIONS(21),
    [aux_sym_system_function_token16] = ACTIONS(21),
    [aux_sym_system_function_token17] = ACTIONS(21),
    [aux_sym_system_function_token18] = ACTIONS(21),
    [aux_sym_system_function_token19] = ACTIONS(21),
    [aux_sym_system_function_token20] = ACTIONS(21),
    [aux_sym_system_function_token21] = ACTIONS(21),
    [aux_sym_system_function_token22] = ACTIONS(21),
    [aux_sym_system_function_token23] = ACTIONS(21),
    [aux_sym_system_function_token24] = ACTIONS(21),
    [aux_sym_system_function_token25] = ACTIONS(21),
    [aux_sym_system_function_token26] = ACTIONS(21),
    [aux_sym_system_function_token27] = ACTIONS(21),
    [aux_sym_system_function_token28] = ACTIONS(21),
    [aux_sym_system_function_token29] = ACTIONS(21),
    [aux_sym_system_function_token30] = ACTIONS(21),
    [aux_sym_system_function_token31] = ACTIONS(21),
    [aux_sym_system_function_token32] = ACTIONS(21),
    [aux_sym_system_function_token33] = ACTIONS(21),
    [aux_sym_system_function_token34] = ACTIONS(21),
    [aux_sym_system_function_token35] = ACTIONS(21),
    [aux_sym_system_function_token36] = ACTIONS(21),
    [aux_sym_system_function_token37] = ACTIONS(21),
    [aux_sym_system_function_token38] = ACTIONS(21),
    [aux_sym_system_function_token39] = ACTIONS(21),
    [aux_sym_system_function_token40] = ACTIONS(21),
    [aux_sym_system_function_token41] = ACTIONS(21),
    [aux_sym_system_function_token42] = ACTIONS(21),
    [aux_sym_system_function_token43] = ACTIONS(21),
    [aux_sym_system_function_token44] = ACTIONS(21),
    [aux_sym_system_function_token45] = ACTIONS(21),
    [aux_sym_system_function_token46] = ACTIONS(21),
    [aux_sym_system_function_token47] = ACTIONS(21),
    [aux_sym_system_function_token48] = ACTIONS(21),
    [aux_sym_system_function_token49] = ACTIONS(21),
    [aux_sym_system_function_token50] = ACTIONS(21),
    [aux_sym_system_function_token51] = ACTIONS(21),
    [aux_sym_system_function_token52] = ACTIONS(21),
    [aux_sym_system_function_token53] = ACTIONS(21),
    [aux_sym_system_function_token54] = ACTIONS(21),
    [aux_sym_system_function_token55] = ACTIONS(21),
    [aux_sym_system_function_token56] = ACTIONS(21),
    [aux_sym_system_function_token57] = ACTIONS(21),
    [aux_sym_system_function_token58] = ACTIONS(21),
    [aux_sym_system_function_token59] = ACTIONS(21),
    [aux_sym_system_function_token60] = ACTIONS(21),
    [aux_sym_system_function_token61] = ACTIONS(21),
    [aux_sym_system_function_token62] = ACTIONS(21),
    [aux_sym_system_function_token63] = ACTIONS(21),
    [aux_sym_system_function_token64] = ACTIONS(21),
    [aux_sym_system_function_token65] = ACTIONS(21),
    [aux_sym_system_function_token66] = ACTIONS(21),
    [aux_sym_system_function_token67] = ACTIONS(21),
    [aux_sym_system_function_token68] = ACTIONS(21),
    [aux_sym_system_function_token69] = ACTIONS(21),
    [aux_sym_system_function_token70] = ACTIONS(21),
    [aux_sym_system_function_token71] = ACTIONS(21),
    [aux_sym_system_function_token72] = ACTIONS(21),
    [aux_sym_system_function_token73] = ACTIONS(21),
    [aux_sym_system_function_token74] = ACTIONS(21),
    [aux_sym_system_function_token75] = ACTIONS(21),
    [aux_sym_system_function_token76] = ACTIONS(23),
    [aux_sym_system_function_token77] = ACTIONS(23),
    [aux_sym_system_function_token78] = ACTIONS(23),
    [aux_sym_system_function_token79] = ACTIONS(23),
    [aux_sym_system_function_token80] = ACTIONS(23),
    [aux_sym_system_function_token81] = ACTIONS(23),
    [aux_sym_system_function_token82] = ACTIONS(23),
    [aux_sym_system_function_token83] = ACTIONS(23),
    [aux_sym_system_function_token84] = ACTIONS(23),
    [aux_sym_system_function_token85] = ACTIONS(23),
    [aux_sym_system_function_token86] = ACTIONS(23),
    [aux_sym_system_function_token87] = ACTIONS(23),
    [aux_sym_system_function_token88] = ACTIONS(23),
    [aux_sym_system_function_token89] = ACTIONS(23),
    [aux_sym_system_function_token90] = ACTIONS(23),
    [aux_sym_system_function_token91] = ACTIONS(23),
    [aux_sym_system_function_token92] = ACTIONS(23),
    [aux_sym_system_function_token93] = ACTIONS(23),
    [aux_sym_system_function_token94] = ACTIONS(23),
    [aux_sym_system_function_token95] = ACTIONS(23),
    [aux_sym_system_function_token96] = ACTIONS(23),
    [aux_sym_system_function_token97] = ACTIONS(23),
    [aux_sym_system_function_token98] = ACTIONS(23),
    [aux_sym_system_function_token99] = ACTIONS(23),
    [aux_sym_system_function_token100] = ACTIONS(23),
    [aux_sym_system_function_token101] = ACTIONS(23),
    [aux_sym_system_function_token102] = ACTIONS(23),
    [aux_sym_system_function_token103] = ACTIONS(23),
    [aux_sym_system_function_token104] = ACTIONS(23),
    [aux_sym_system_function_token105] = ACTIONS(23),
    [aux_sym_system_function_token106] = ACTIONS(23),
    [aux_sym_system_function_token107] = ACTIONS(23),
    [aux_sym_system_function_token108] = ACTIONS(23),
    [aux_sym_system_function_token109] = ACTIONS(23),
    [aux_sym_system_function_token110] = ACTIONS(23),
    [aux_sym_system_function_token111] = ACTIONS(23),
    [aux_sym_system_function_token112] = ACTIONS(23),
    [aux_sym_system_function_token113] = ACTIONS(23),
    [aux_sym_system_function_token114] = ACTIONS(23),
    [sym__string_function_identifier] = ACTIONS(25),
    [sym__numeric_function_identifier] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym_stringidentifier] = ACTIONS(35),
    [sym_numberidentifier] = ACTIONS(37),
    [sym__mat] = ACTIONS(39),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [10] = {
    [sym__expression] = STATE(160),
    [sym_unary_expression] = STATE(160),
    [sym_primary_expression] = STATE(160),
    [sym_call_expression] = STATE(95),
    [sym_system_function] = STATE(85),
    [sym_user_function] = STATE(85),
    [sym_template_string] = STATE(95),
    [sym_string] = STATE(95),
    [sym_parenthesized_expression] = STATE(95),
    [sym_forced_assignment_expression] = STATE(160),
    [sym__reference] = STATE(63),
    [sym_numberelement] = STATE(63),
    [sym_stringelement] = STATE(63),
    [sym_stringarray] = STATE(63),
    [sym_stringreference] = STATE(63),
    [sym_numberreference] = STATE(63),
    [sym_range] = STATE(212),
    [sym_numberarray] = STATE(63),
    [sym_number] = STATE(95),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(17),
    [aux_sym_unary_expression_token1] = ACTIONS(19),
    [aux_sym_system_function_token1] = ACTIONS(21),
    [aux_sym_system_function_token2] = ACTIONS(21),
    [aux_sym_system_function_token3] = ACTIONS(21),
    [aux_sym_system_function_token4] = ACTIONS(21),
    [aux_sym_system_function_token5] = ACTIONS(21),
    [aux_sym_system_function_token6] = ACTIONS(21),
    [aux_sym_system_function_token7] = ACTIONS(21),
    [aux_sym_system_function_token8] = ACTIONS(21),
    [aux_sym_system_function_token9] = ACTIONS(21),
    [aux_sym_system_function_token10] = ACTIONS(21),
    [aux_sym_system_function_token11] = ACTIONS(21),
    [aux_sym_system_function_token12] = ACTIONS(21),
    [aux_sym_system_function_token13] = ACTIONS(21),
    [aux_sym_system_function_token14] = ACTIONS(21),
    [aux_sym_system_function_token15] = ACTIONS(21),
    [aux_sym_system_function_token16] = ACTIONS(21),
    [aux_sym_system_function_token17] = ACTIONS(21),
    [aux_sym_system_function_token18] = ACTIONS(21),
    [aux_sym_system_function_token19] = ACTIONS(21),
    [aux_sym_system_function_token20] = ACTIONS(21),
    [aux_sym_system_function_token21] = ACTIONS(21),
    [aux_sym_system_function_token22] = ACTIONS(21),
    [aux_sym_system_function_token23] = ACTIONS(21),
    [aux_sym_system_function_token24] = ACTIONS(21),
    [aux_sym_system_function_token25] = ACTIONS(21),
    [aux_sym_system_function_token26] = ACTIONS(21),
    [aux_sym_system_function_token27] = ACTIONS(21),
    [aux_sym_system_function_token28] = ACTIONS(21),
    [aux_sym_system_function_token29] = ACTIONS(21),
    [aux_sym_system_function_token30] = ACTIONS(21),
    [aux_sym_system_function_token31] = ACTIONS(21),
    [aux_sym_system_function_token32] = ACTIONS(21),
    [aux_sym_system_function_token33] = ACTIONS(21),
    [aux_sym_system_function_token34] = ACTIONS(21),
    [aux_sym_system_function_token35] = ACTIONS(21),
    [aux_sym_system_function_token36] = ACTIONS(21),
    [aux_sym_system_function_token37] = ACTIONS(21),
    [aux_sym_system_function_token38] = ACTIONS(21),
    [aux_sym_system_function_token39] = ACTIONS(21),
    [aux_sym_system_function_token40] = ACTIONS(21),
    [aux_sym_system_function_token41] = ACTIONS(21),
    [aux_sym_system_function_token42] = ACTIONS(21),
    [aux_sym_system_function_token43] = ACTIONS(21),
    [aux_sym_system_function_token44] = ACTIONS(21),
    [aux_sym_system_function_token45] = ACTIONS(21),
    [aux_sym_system_function_token46] = ACTIONS(21),
    [aux_sym_system_function_token47] = ACTIONS(21),
    [aux_sym_system_function_token48] = ACTIONS(21),
    [aux_sym_system_function_token49] = ACTIONS(21),
    [aux_sym_system_function_token50] = ACTIONS(21),
    [aux_sym_system_function_token51] = ACTIONS(21),
    [aux_sym_system_function_token52] = ACTIONS(21),
    [aux_sym_system_function_token53] = ACTIONS(21),
    [aux_sym_system_function_token54] = ACTIONS(21),
    [aux_sym_system_function_token55] = ACTIONS(21),
    [aux_sym_system_function_token56] = ACTIONS(21),
    [aux_sym_system_function_token57] = ACTIONS(21),
    [aux_sym_system_function_token58] = ACTIONS(21),
    [aux_sym_system_function_token59] = ACTIONS(21),
    [aux_sym_system_function_token60] = ACTIONS(21),
    [aux_sym_system_function_token61] = ACTIONS(21),
    [aux_sym_system_function_token62] = ACTIONS(21),
    [aux_sym_system_function_token63] = ACTIONS(21),
    [aux_sym_system_function_token64] = ACTIONS(21),
    [aux_sym_system_function_token65] = ACTIONS(21),
    [aux_sym_system_function_token66] = ACTIONS(21),
    [aux_sym_system_function_token67] = ACTIONS(21),
    [aux_sym_system_function_token68] = ACTIONS(21),
    [aux_sym_system_function_token69] = ACTIONS(21),
    [aux_sym_system_function_token70] = ACTIONS(21),
    [aux_sym_system_function_token71] = ACTIONS(21),
    [aux_sym_system_function_token72] = ACTIONS(21),
    [aux_sym_system_function_token73] = ACTIONS(21),
    [aux_sym_system_function_token74] = ACTIONS(21),
    [aux_sym_system_function_token75] = ACTIONS(21),
    [aux_sym_system_function_token76] = ACTIONS(23),
    [aux_sym_system_function_token77] = ACTIONS(23),
    [aux_sym_system_function_token78] = ACTIONS(23),
    [aux_sym_system_function_token79] = ACTIONS(23),
    [aux_sym_system_function_token80] = ACTIONS(23),
    [aux_sym_system_function_token81] = ACTIONS(23),
    [aux_sym_system_function_token82] = ACTIONS(23),
    [aux_sym_system_function_token83] = ACTIONS(23),
    [aux_sym_system_function_token84] = ACTIONS(23),
    [aux_sym_system_function_token85] = ACTIONS(23),
    [aux_sym_system_function_token86] = ACTIONS(23),
    [aux_sym_system_function_token87] = ACTIONS(23),
    [aux_sym_system_function_token88] = ACTIONS(23),
    [aux_sym_system_function_token89] = ACTIONS(23),
    [aux_sym_system_function_token90] = ACTIONS(23),
    [aux_sym_system_function_token91] = ACTIONS(23),
    [aux_sym_system_function_token92] = ACTIONS(23),
    [aux_sym_system_function_token93] = ACTIONS(23),
    [aux_sym_system_function_token94] = ACTIONS(23),
    [aux_sym_system_function_token95] = ACTIONS(23),
    [aux_sym_system_function_token96] = ACTIONS(23),
    [aux_sym_system_function_token97] = ACTIONS(23),
    [aux_sym_system_function_token98] = ACTIONS(23),
    [aux_sym_system_function_token99] = ACTIONS(23),
    [aux_sym_system_function_token100] = ACTIONS(23),
    [aux_sym_system_function_token101] = ACTIONS(23),
    [aux_sym_system_function_token102] = ACTIONS(23),
    [aux_sym_system_function_token103] = ACTIONS(23),
    [aux_sym_system_function_token104] = ACTIONS(23),
    [aux_sym_system_function_token105] = ACTIONS(23),
    [aux_sym_system_function_token106] = ACTIONS(23),
    [aux_sym_system_function_token107] = ACTIONS(23),
    [aux_sym_system_function_token108] = ACTIONS(23),
    [aux_sym_system_function_token109] = ACTIONS(23),
    [aux_sym_system_function_token110] = ACTIONS(23),
    [aux_sym_system_function_token111] = ACTIONS(23),
    [aux_sym_system_function_token112] = ACTIONS(23),
    [aux_sym_system_function_token113] = ACTIONS(23),
    [aux_sym_system_function_token114] = ACTIONS(23),
    [sym__string_function_identifier] = ACTIONS(25),
    [sym__numeric_function_identifier] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym_stringidentifier] = ACTIONS(35),
    [sym_numberidentifier] = ACTIONS(37),
    [sym__mat] = ACTIONS(39),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [11] = {
    [sym__expression] = STATE(83),
    [sym_unary_expression] = STATE(83),
    [sym_primary_expression] = STATE(83),
    [sym_call_expression] = STATE(95),
    [sym_system_function] = STATE(85),
    [sym_user_function] = STATE(85),
    [sym_template_string] = STATE(95),
    [sym_string] = STATE(95),
    [sym_parenthesized_expression] = STATE(95),
    [sym_forced_assignment_expression] = STATE(83),
    [sym__reference] = STATE(63),
    [sym_numberelement] = STATE(63),
    [sym_stringelement] = STATE(63),
    [sym_stringarray] = STATE(63),
    [sym_stringreference] = STATE(63),
    [sym_numberreference] = STATE(63),
    [sym_numberarray] = STATE(63),
    [sym_number] = STATE(95),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(17),
    [aux_sym_unary_expression_token1] = ACTIONS(19),
    [aux_sym_system_function_token1] = ACTIONS(21),
    [aux_sym_system_function_token2] = ACTIONS(21),
    [aux_sym_system_function_token3] = ACTIONS(21),
    [aux_sym_system_function_token4] = ACTIONS(21),
    [aux_sym_system_function_token5] = ACTIONS(21),
    [aux_sym_system_function_token6] = ACTIONS(21),
    [aux_sym_system_function_token7] = ACTIONS(21),
    [aux_sym_system_function_token8] = ACTIONS(21),
    [aux_sym_system_function_token9] = ACTIONS(21),
    [aux_sym_system_function_token10] = ACTIONS(21),
    [aux_sym_system_function_token11] = ACTIONS(21),
    [aux_sym_system_function_token12] = ACTIONS(21),
    [aux_sym_system_function_token13] = ACTIONS(21),
    [aux_sym_system_function_token14] = ACTIONS(21),
    [aux_sym_system_function_token15] = ACTIONS(21),
    [aux_sym_system_function_token16] = ACTIONS(21),
    [aux_sym_system_function_token17] = ACTIONS(21),
    [aux_sym_system_function_token18] = ACTIONS(21),
    [aux_sym_system_function_token19] = ACTIONS(21),
    [aux_sym_system_function_token20] = ACTIONS(21),
    [aux_sym_system_function_token21] = ACTIONS(21),
    [aux_sym_system_function_token22] = ACTIONS(21),
    [aux_sym_system_function_token23] = ACTIONS(21),
    [aux_sym_system_function_token24] = ACTIONS(21),
    [aux_sym_system_function_token25] = ACTIONS(21),
    [aux_sym_system_function_token26] = ACTIONS(21),
    [aux_sym_system_function_token27] = ACTIONS(21),
    [aux_sym_system_function_token28] = ACTIONS(21),
    [aux_sym_system_function_token29] = ACTIONS(21),
    [aux_sym_system_function_token30] = ACTIONS(21),
    [aux_sym_system_function_token31] = ACTIONS(21),
    [aux_sym_system_function_token32] = ACTIONS(21),
    [aux_sym_system_function_token33] = ACTIONS(21),
    [aux_sym_system_function_token34] = ACTIONS(21),
    [aux_sym_system_function_token35] = ACTIONS(21),
    [aux_sym_system_function_token36] = ACTIONS(21),
    [aux_sym_system_function_token37] = ACTIONS(21),
    [aux_sym_system_function_token38] = ACTIONS(21),
    [aux_sym_system_function_token39] = ACTIONS(21),
    [aux_sym_system_function_token40] = ACTIONS(21),
    [aux_sym_system_function_token41] = ACTIONS(21),
    [aux_sym_system_function_token42] = ACTIONS(21),
    [aux_sym_system_function_token43] = ACTIONS(21),
    [aux_sym_system_function_token44] = ACTIONS(21),
    [aux_sym_system_function_token45] = ACTIONS(21),
    [aux_sym_system_function_token46] = ACTIONS(21),
    [aux_sym_system_function_token47] = ACTIONS(21),
    [aux_sym_system_function_token48] = ACTIONS(21),
    [aux_sym_system_function_token49] = ACTIONS(21),
    [aux_sym_system_function_token50] = ACTIONS(21),
    [aux_sym_system_function_token51] = ACTIONS(21),
    [aux_sym_system_function_token52] = ACTIONS(21),
    [aux_sym_system_function_token53] = ACTIONS(21),
    [aux_sym_system_function_token54] = ACTIONS(21),
    [aux_sym_system_function_token55] = ACTIONS(21),
    [aux_sym_system_function_token56] = ACTIONS(21),
    [aux_sym_system_function_token57] = ACTIONS(21),
    [aux_sym_system_function_token58] = ACTIONS(21),
    [aux_sym_system_function_token59] = ACTIONS(21),
    [aux_sym_system_function_token60] = ACTIONS(21),
    [aux_sym_system_function_token61] = ACTIONS(21),
    [aux_sym_system_function_token62] = ACTIONS(21),
    [aux_sym_system_function_token63] = ACTIONS(21),
    [aux_sym_system_function_token64] = ACTIONS(21),
    [aux_sym_system_function_token65] = ACTIONS(21),
    [aux_sym_system_function_token66] = ACTIONS(21),
    [aux_sym_system_function_token67] = ACTIONS(21),
    [aux_sym_system_function_token68] = ACTIONS(21),
    [aux_sym_system_function_token69] = ACTIONS(21),
    [aux_sym_system_function_token70] = ACTIONS(21),
    [aux_sym_system_function_token71] = ACTIONS(21),
    [aux_sym_system_function_token72] = ACTIONS(21),
    [aux_sym_system_function_token73] = ACTIONS(21),
    [aux_sym_system_function_token74] = ACTIONS(21),
    [aux_sym_system_function_token75] = ACTIONS(21),
    [aux_sym_system_function_token76] = ACTIONS(23),
    [aux_sym_system_function_token77] = ACTIONS(23),
    [aux_sym_system_function_token78] = ACTIONS(23),
    [aux_sym_system_function_token79] = ACTIONS(23),
    [aux_sym_system_function_token80] = ACTIONS(23),
    [aux_sym_system_function_token81] = ACTIONS(23),
    [aux_sym_system_function_token82] = ACTIONS(23),
    [aux_sym_system_function_token83] = ACTIONS(23),
    [aux_sym_system_function_token84] = ACTIONS(23),
    [aux_sym_system_function_token85] = ACTIONS(23),
    [aux_sym_system_function_token86] = ACTIONS(23),
    [aux_sym_system_function_token87] = ACTIONS(23),
    [aux_sym_system_function_token88] = ACTIONS(23),
    [aux_sym_system_function_token89] = ACTIONS(23),
    [aux_sym_system_function_token90] = ACTIONS(23),
    [aux_sym_system_function_token91] = ACTIONS(23),
    [aux_sym_system_function_token92] = ACTIONS(23),
    [aux_sym_system_function_token93] = ACTIONS(23),
    [aux_sym_system_function_token94] = ACTIONS(23),
    [aux_sym_system_function_token95] = ACTIONS(23),
    [aux_sym_system_function_token96] = ACTIONS(23),
    [aux_sym_system_function_token97] = ACTIONS(23),
    [aux_sym_system_function_token98] = ACTIONS(23),
    [aux_sym_system_function_token99] = ACTIONS(23),
    [aux_sym_system_function_token100] = ACTIONS(23),
    [aux_sym_system_function_token101] = ACTIONS(23),
    [aux_sym_system_function_token102] = ACTIONS(23),
    [aux_sym_system_function_token103] = ACTIONS(23),
    [aux_sym_system_function_token104] = ACTIONS(23),
    [aux_sym_system_function_token105] = ACTIONS(23),
    [aux_sym_system_function_token106] = ACTIONS(23),
    [aux_sym_system_function_token107] = ACTIONS(23),
    [aux_sym_system_function_token108] = ACTIONS(23),
    [aux_sym_system_function_token109] = ACTIONS(23),
    [aux_sym_system_function_token110] = ACTIONS(23),
    [aux_sym_system_function_token111] = ACTIONS(23),
    [aux_sym_system_function_token112] = ACTIONS(23),
    [aux_sym_system_function_token113] = ACTIONS(23),
    [aux_sym_system_function_token114] = ACTIONS(23),
    [sym__string_function_identifier] = ACTIONS(25),
    [sym__numeric_function_identifier] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym_stringidentifier] = ACTIONS(35),
    [sym_numberidentifier] = ACTIONS(37),
    [sym__mat] = ACTIONS(39),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [12] = {
    [sym__expression] = STATE(170),
    [sym_unary_expression] = STATE(170),
    [sym_primary_expression] = STATE(170),
    [sym_call_expression] = STATE(95),
    [sym_system_function] = STATE(85),
    [sym_user_function] = STATE(85),
    [sym_template_string] = STATE(95),
    [sym_string] = STATE(95),
    [sym_parenthesized_expression] = STATE(95),
    [sym_forced_assignment_expression] = STATE(170),
    [sym__reference] = STATE(63),
    [sym_numberelement] = STATE(63),
    [sym_stringelement] = STATE(63),
    [sym_stringarray] = STATE(63),
    [sym_stringreference] = STATE(63),
    [sym_numberreference] = STATE(63),
    [sym_numberarray] = STATE(63),
    [sym_number] = STATE(95),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(17),
    [aux_sym_unary_expression_token1] = ACTIONS(19),
    [aux_sym_system_function_token1] = ACTIONS(21),
    [aux_sym_system_function_token2] = ACTIONS(21),
    [aux_sym_system_function_token3] = ACTIONS(21),
    [aux_sym_system_function_token4] = ACTIONS(21),
    [aux_sym_system_function_token5] = ACTIONS(21),
    [aux_sym_system_function_token6] = ACTIONS(21),
    [aux_sym_system_function_token7] = ACTIONS(21),
    [aux_sym_system_function_token8] = ACTIONS(21),
    [aux_sym_system_function_token9] = ACTIONS(21),
    [aux_sym_system_function_token10] = ACTIONS(21),
    [aux_sym_system_function_token11] = ACTIONS(21),
    [aux_sym_system_function_token12] = ACTIONS(21),
    [aux_sym_system_function_token13] = ACTIONS(21),
    [aux_sym_system_function_token14] = ACTIONS(21),
    [aux_sym_system_function_token15] = ACTIONS(21),
    [aux_sym_system_function_token16] = ACTIONS(21),
    [aux_sym_system_function_token17] = ACTIONS(21),
    [aux_sym_system_function_token18] = ACTIONS(21),
    [aux_sym_system_function_token19] = ACTIONS(21),
    [aux_sym_system_function_token20] = ACTIONS(21),
    [aux_sym_system_function_token21] = ACTIONS(21),
    [aux_sym_system_function_token22] = ACTIONS(21),
    [aux_sym_system_function_token23] = ACTIONS(21),
    [aux_sym_system_function_token24] = ACTIONS(21),
    [aux_sym_system_function_token25] = ACTIONS(21),
    [aux_sym_system_function_token26] = ACTIONS(21),
    [aux_sym_system_function_token27] = ACTIONS(21),
    [aux_sym_system_function_token28] = ACTIONS(21),
    [aux_sym_system_function_token29] = ACTIONS(21),
    [aux_sym_system_function_token30] = ACTIONS(21),
    [aux_sym_system_function_token31] = ACTIONS(21),
    [aux_sym_system_function_token32] = ACTIONS(21),
    [aux_sym_system_function_token33] = ACTIONS(21),
    [aux_sym_system_function_token34] = ACTIONS(21),
    [aux_sym_system_function_token35] = ACTIONS(21),
    [aux_sym_system_function_token36] = ACTIONS(21),
    [aux_sym_system_function_token37] = ACTIONS(21),
    [aux_sym_system_function_token38] = ACTIONS(21),
    [aux_sym_system_function_token39] = ACTIONS(21),
    [aux_sym_system_function_token40] = ACTIONS(21),
    [aux_sym_system_function_token41] = ACTIONS(21),
    [aux_sym_system_function_token42] = ACTIONS(21),
    [aux_sym_system_function_token43] = ACTIONS(21),
    [aux_sym_system_function_token44] = ACTIONS(21),
    [aux_sym_system_function_token45] = ACTIONS(21),
    [aux_sym_system_function_token46] = ACTIONS(21),
    [aux_sym_system_function_token47] = ACTIONS(21),
    [aux_sym_system_function_token48] = ACTIONS(21),
    [aux_sym_system_function_token49] = ACTIONS(21),
    [aux_sym_system_function_token50] = ACTIONS(21),
    [aux_sym_system_function_token51] = ACTIONS(21),
    [aux_sym_system_function_token52] = ACTIONS(21),
    [aux_sym_system_function_token53] = ACTIONS(21),
    [aux_sym_system_function_token54] = ACTIONS(21),
    [aux_sym_system_function_token55] = ACTIONS(21),
    [aux_sym_system_function_token56] = ACTIONS(21),
    [aux_sym_system_function_token57] = ACTIONS(21),
    [aux_sym_system_function_token58] = ACTIONS(21),
    [aux_sym_system_function_token59] = ACTIONS(21),
    [aux_sym_system_function_token60] = ACTIONS(21),
    [aux_sym_system_function_token61] = ACTIONS(21),
    [aux_sym_system_function_token62] = ACTIONS(21),
    [aux_sym_system_function_token63] = ACTIONS(21),
    [aux_sym_system_function_token64] = ACTIONS(21),
    [aux_sym_system_function_token65] = ACTIONS(21),
    [aux_sym_system_function_token66] = ACTIONS(21),
    [aux_sym_system_function_token67] = ACTIONS(21),
    [aux_sym_system_function_token68] = ACTIONS(21),
    [aux_sym_system_function_token69] = ACTIONS(21),
    [aux_sym_system_function_token70] = ACTIONS(21),
    [aux_sym_system_function_token71] = ACTIONS(21),
    [aux_sym_system_function_token72] = ACTIONS(21),
    [aux_sym_system_function_token73] = ACTIONS(21),
    [aux_sym_system_function_token74] = ACTIONS(21),
    [aux_sym_system_function_token75] = ACTIONS(21),
    [aux_sym_system_function_token76] = ACTIONS(23),
    [aux_sym_system_function_token77] = ACTIONS(23),
    [aux_sym_system_function_token78] = ACTIONS(23),
    [aux_sym_system_function_token79] = ACTIONS(23),
    [aux_sym_system_function_token80] = ACTIONS(23),
    [aux_sym_system_function_token81] = ACTIONS(23),
    [aux_sym_system_function_token82] = ACTIONS(23),
    [aux_sym_system_function_token83] = ACTIONS(23),
    [aux_sym_system_function_token84] = ACTIONS(23),
    [aux_sym_system_function_token85] = ACTIONS(23),
    [aux_sym_system_function_token86] = ACTIONS(23),
    [aux_sym_system_function_token87] = ACTIONS(23),
    [aux_sym_system_function_token88] = ACTIONS(23),
    [aux_sym_system_function_token89] = ACTIONS(23),
    [aux_sym_system_function_token90] = ACTIONS(23),
    [aux_sym_system_function_token91] = ACTIONS(23),
    [aux_sym_system_function_token92] = ACTIONS(23),
    [aux_sym_system_function_token93] = ACTIONS(23),
    [aux_sym_system_function_token94] = ACTIONS(23),
    [aux_sym_system_function_token95] = ACTIONS(23),
    [aux_sym_system_function_token96] = ACTIONS(23),
    [aux_sym_system_function_token97] = ACTIONS(23),
    [aux_sym_system_function_token98] = ACTIONS(23),
    [aux_sym_system_function_token99] = ACTIONS(23),
    [aux_sym_system_function_token100] = ACTIONS(23),
    [aux_sym_system_function_token101] = ACTIONS(23),
    [aux_sym_system_function_token102] = ACTIONS(23),
    [aux_sym_system_function_token103] = ACTIONS(23),
    [aux_sym_system_function_token104] = ACTIONS(23),
    [aux_sym_system_function_token105] = ACTIONS(23),
    [aux_sym_system_function_token106] = ACTIONS(23),
    [aux_sym_system_function_token107] = ACTIONS(23),
    [aux_sym_system_function_token108] = ACTIONS(23),
    [aux_sym_system_function_token109] = ACTIONS(23),
    [aux_sym_system_function_token110] = ACTIONS(23),
    [aux_sym_system_function_token111] = ACTIONS(23),
    [aux_sym_system_function_token112] = ACTIONS(23),
    [aux_sym_system_function_token113] = ACTIONS(23),
    [aux_sym_system_function_token114] = ACTIONS(23),
    [sym__string_function_identifier] = ACTIONS(25),
    [sym__numeric_function_identifier] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym_stringidentifier] = ACTIONS(35),
    [sym_numberidentifier] = ACTIONS(37),
    [sym__mat] = ACTIONS(39),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [13] = {
    [sym__expression] = STATE(178),
    [sym_unary_expression] = STATE(178),
    [sym_primary_expression] = STATE(178),
    [sym_call_expression] = STATE(95),
    [sym_system_function] = STATE(85),
    [sym_user_function] = STATE(85),
    [sym_template_string] = STATE(95),
    [sym_string] = STATE(95),
    [sym_parenthesized_expression] = STATE(95),
    [sym_forced_assignment_expression] = STATE(178),
    [sym__reference] = STATE(63),
    [sym_numberelement] = STATE(63),
    [sym_stringelement] = STATE(63),
    [sym_stringarray] = STATE(63),
    [sym_stringreference] = STATE(63),
    [sym_numberreference] = STATE(63),
    [sym_numberarray] = STATE(63),
    [sym_number] = STATE(95),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(17),
    [aux_sym_unary_expression_token1] = ACTIONS(19),
    [aux_sym_system_function_token1] = ACTIONS(21),
    [aux_sym_system_function_token2] = ACTIONS(21),
    [aux_sym_system_function_token3] = ACTIONS(21),
    [aux_sym_system_function_token4] = ACTIONS(21),
    [aux_sym_system_function_token5] = ACTIONS(21),
    [aux_sym_system_function_token6] = ACTIONS(21),
    [aux_sym_system_function_token7] = ACTIONS(21),
    [aux_sym_system_function_token8] = ACTIONS(21),
    [aux_sym_system_function_token9] = ACTIONS(21),
    [aux_sym_system_function_token10] = ACTIONS(21),
    [aux_sym_system_function_token11] = ACTIONS(21),
    [aux_sym_system_function_token12] = ACTIONS(21),
    [aux_sym_system_function_token13] = ACTIONS(21),
    [aux_sym_system_function_token14] = ACTIONS(21),
    [aux_sym_system_function_token15] = ACTIONS(21),
    [aux_sym_system_function_token16] = ACTIONS(21),
    [aux_sym_system_function_token17] = ACTIONS(21),
    [aux_sym_system_function_token18] = ACTIONS(21),
    [aux_sym_system_function_token19] = ACTIONS(21),
    [aux_sym_system_function_token20] = ACTIONS(21),
    [aux_sym_system_function_token21] = ACTIONS(21),
    [aux_sym_system_function_token22] = ACTIONS(21),
    [aux_sym_system_function_token23] = ACTIONS(21),
    [aux_sym_system_function_token24] = ACTIONS(21),
    [aux_sym_system_function_token25] = ACTIONS(21),
    [aux_sym_system_function_token26] = ACTIONS(21),
    [aux_sym_system_function_token27] = ACTIONS(21),
    [aux_sym_system_function_token28] = ACTIONS(21),
    [aux_sym_system_function_token29] = ACTIONS(21),
    [aux_sym_system_function_token30] = ACTIONS(21),
    [aux_sym_system_function_token31] = ACTIONS(21),
    [aux_sym_system_function_token32] = ACTIONS(21),
    [aux_sym_system_function_token33] = ACTIONS(21),
    [aux_sym_system_function_token34] = ACTIONS(21),
    [aux_sym_system_function_token35] = ACTIONS(21),
    [aux_sym_system_function_token36] = ACTIONS(21),
    [aux_sym_system_function_token37] = ACTIONS(21),
    [aux_sym_system_function_token38] = ACTIONS(21),
    [aux_sym_system_function_token39] = ACTIONS(21),
    [aux_sym_system_function_token40] = ACTIONS(21),
    [aux_sym_system_function_token41] = ACTIONS(21),
    [aux_sym_system_function_token42] = ACTIONS(21),
    [aux_sym_system_function_token43] = ACTIONS(21),
    [aux_sym_system_function_token44] = ACTIONS(21),
    [aux_sym_system_function_token45] = ACTIONS(21),
    [aux_sym_system_function_token46] = ACTIONS(21),
    [aux_sym_system_function_token47] = ACTIONS(21),
    [aux_sym_system_function_token48] = ACTIONS(21),
    [aux_sym_system_function_token49] = ACTIONS(21),
    [aux_sym_system_function_token50] = ACTIONS(21),
    [aux_sym_system_function_token51] = ACTIONS(21),
    [aux_sym_system_function_token52] = ACTIONS(21),
    [aux_sym_system_function_token53] = ACTIONS(21),
    [aux_sym_system_function_token54] = ACTIONS(21),
    [aux_sym_system_function_token55] = ACTIONS(21),
    [aux_sym_system_function_token56] = ACTIONS(21),
    [aux_sym_system_function_token57] = ACTIONS(21),
    [aux_sym_system_function_token58] = ACTIONS(21),
    [aux_sym_system_function_token59] = ACTIONS(21),
    [aux_sym_system_function_token60] = ACTIONS(21),
    [aux_sym_system_function_token61] = ACTIONS(21),
    [aux_sym_system_function_token62] = ACTIONS(21),
    [aux_sym_system_function_token63] = ACTIONS(21),
    [aux_sym_system_function_token64] = ACTIONS(21),
    [aux_sym_system_function_token65] = ACTIONS(21),
    [aux_sym_system_function_token66] = ACTIONS(21),
    [aux_sym_system_function_token67] = ACTIONS(21),
    [aux_sym_system_function_token68] = ACTIONS(21),
    [aux_sym_system_function_token69] = ACTIONS(21),
    [aux_sym_system_function_token70] = ACTIONS(21),
    [aux_sym_system_function_token71] = ACTIONS(21),
    [aux_sym_system_function_token72] = ACTIONS(21),
    [aux_sym_system_function_token73] = ACTIONS(21),
    [aux_sym_system_function_token74] = ACTIONS(21),
    [aux_sym_system_function_token75] = ACTIONS(21),
    [aux_sym_system_function_token76] = ACTIONS(23),
    [aux_sym_system_function_token77] = ACTIONS(23),
    [aux_sym_system_function_token78] = ACTIONS(23),
    [aux_sym_system_function_token79] = ACTIONS(23),
    [aux_sym_system_function_token80] = ACTIONS(23),
    [aux_sym_system_function_token81] = ACTIONS(23),
    [aux_sym_system_function_token82] = ACTIONS(23),
    [aux_sym_system_function_token83] = ACTIONS(23),
    [aux_sym_system_function_token84] = ACTIONS(23),
    [aux_sym_system_function_token85] = ACTIONS(23),
    [aux_sym_system_function_token86] = ACTIONS(23),
    [aux_sym_system_function_token87] = ACTIONS(23),
    [aux_sym_system_function_token88] = ACTIONS(23),
    [aux_sym_system_function_token89] = ACTIONS(23),
    [aux_sym_system_function_token90] = ACTIONS(23),
    [aux_sym_system_function_token91] = ACTIONS(23),
    [aux_sym_system_function_token92] = ACTIONS(23),
    [aux_sym_system_function_token93] = ACTIONS(23),
    [aux_sym_system_function_token94] = ACTIONS(23),
    [aux_sym_system_function_token95] = ACTIONS(23),
    [aux_sym_system_function_token96] = ACTIONS(23),
    [aux_sym_system_function_token97] = ACTIONS(23),
    [aux_sym_system_function_token98] = ACTIONS(23),
    [aux_sym_system_function_token99] = ACTIONS(23),
    [aux_sym_system_function_token100] = ACTIONS(23),
    [aux_sym_system_function_token101] = ACTIONS(23),
    [aux_sym_system_function_token102] = ACTIONS(23),
    [aux_sym_system_function_token103] = ACTIONS(23),
    [aux_sym_system_function_token104] = ACTIONS(23),
    [aux_sym_system_function_token105] = ACTIONS(23),
    [aux_sym_system_function_token106] = ACTIONS(23),
    [aux_sym_system_function_token107] = ACTIONS(23),
    [aux_sym_system_function_token108] = ACTIONS(23),
    [aux_sym_system_function_token109] = ACTIONS(23),
    [aux_sym_system_function_token110] = ACTIONS(23),
    [aux_sym_system_function_token111] = ACTIONS(23),
    [aux_sym_system_function_token112] = ACTIONS(23),
    [aux_sym_system_function_token113] = ACTIONS(23),
    [aux_sym_system_function_token114] = ACTIONS(23),
    [sym__string_function_identifier] = ACTIONS(25),
    [sym__numeric_function_identifier] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym_stringidentifier] = ACTIONS(35),
    [sym_numberidentifier] = ACTIONS(37),
    [sym__mat] = ACTIONS(39),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [14] = {
    [sym__expression] = STATE(87),
    [sym_unary_expression] = STATE(87),
    [sym_primary_expression] = STATE(87),
    [sym_call_expression] = STATE(95),
    [sym_system_function] = STATE(85),
    [sym_user_function] = STATE(85),
    [sym_template_string] = STATE(95),
    [sym_string] = STATE(95),
    [sym_parenthesized_expression] = STATE(95),
    [sym_forced_assignment_expression] = STATE(87),
    [sym__reference] = STATE(63),
    [sym_numberelement] = STATE(63),
    [sym_stringelement] = STATE(63),
    [sym_stringarray] = STATE(63),
    [sym_stringreference] = STATE(63),
    [sym_numberreference] = STATE(63),
    [sym_numberarray] = STATE(63),
    [sym_number] = STATE(95),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(17),
    [aux_sym_unary_expression_token1] = ACTIONS(19),
    [aux_sym_system_function_token1] = ACTIONS(21),
    [aux_sym_system_function_token2] = ACTIONS(21),
    [aux_sym_system_function_token3] = ACTIONS(21),
    [aux_sym_system_function_token4] = ACTIONS(21),
    [aux_sym_system_function_token5] = ACTIONS(21),
    [aux_sym_system_function_token6] = ACTIONS(21),
    [aux_sym_system_function_token7] = ACTIONS(21),
    [aux_sym_system_function_token8] = ACTIONS(21),
    [aux_sym_system_function_token9] = ACTIONS(21),
    [aux_sym_system_function_token10] = ACTIONS(21),
    [aux_sym_system_function_token11] = ACTIONS(21),
    [aux_sym_system_function_token12] = ACTIONS(21),
    [aux_sym_system_function_token13] = ACTIONS(21),
    [aux_sym_system_function_token14] = ACTIONS(21),
    [aux_sym_system_function_token15] = ACTIONS(21),
    [aux_sym_system_function_token16] = ACTIONS(21),
    [aux_sym_system_function_token17] = ACTIONS(21),
    [aux_sym_system_function_token18] = ACTIONS(21),
    [aux_sym_system_function_token19] = ACTIONS(21),
    [aux_sym_system_function_token20] = ACTIONS(21),
    [aux_sym_system_function_token21] = ACTIONS(21),
    [aux_sym_system_function_token22] = ACTIONS(21),
    [aux_sym_system_function_token23] = ACTIONS(21),
    [aux_sym_system_function_token24] = ACTIONS(21),
    [aux_sym_system_function_token25] = ACTIONS(21),
    [aux_sym_system_function_token26] = ACTIONS(21),
    [aux_sym_system_function_token27] = ACTIONS(21),
    [aux_sym_system_function_token28] = ACTIONS(21),
    [aux_sym_system_function_token29] = ACTIONS(21),
    [aux_sym_system_function_token30] = ACTIONS(21),
    [aux_sym_system_function_token31] = ACTIONS(21),
    [aux_sym_system_function_token32] = ACTIONS(21),
    [aux_sym_system_function_token33] = ACTIONS(21),
    [aux_sym_system_function_token34] = ACTIONS(21),
    [aux_sym_system_function_token35] = ACTIONS(21),
    [aux_sym_system_function_token36] = ACTIONS(21),
    [aux_sym_system_function_token37] = ACTIONS(21),
    [aux_sym_system_function_token38] = ACTIONS(21),
    [aux_sym_system_function_token39] = ACTIONS(21),
    [aux_sym_system_function_token40] = ACTIONS(21),
    [aux_sym_system_function_token41] = ACTIONS(21),
    [aux_sym_system_function_token42] = ACTIONS(21),
    [aux_sym_system_function_token43] = ACTIONS(21),
    [aux_sym_system_function_token44] = ACTIONS(21),
    [aux_sym_system_function_token45] = ACTIONS(21),
    [aux_sym_system_function_token46] = ACTIONS(21),
    [aux_sym_system_function_token47] = ACTIONS(21),
    [aux_sym_system_function_token48] = ACTIONS(21),
    [aux_sym_system_function_token49] = ACTIONS(21),
    [aux_sym_system_function_token50] = ACTIONS(21),
    [aux_sym_system_function_token51] = ACTIONS(21),
    [aux_sym_system_function_token52] = ACTIONS(21),
    [aux_sym_system_function_token53] = ACTIONS(21),
    [aux_sym_system_function_token54] = ACTIONS(21),
    [aux_sym_system_function_token55] = ACTIONS(21),
    [aux_sym_system_function_token56] = ACTIONS(21),
    [aux_sym_system_function_token57] = ACTIONS(21),
    [aux_sym_system_function_token58] = ACTIONS(21),
    [aux_sym_system_function_token59] = ACTIONS(21),
    [aux_sym_system_function_token60] = ACTIONS(21),
    [aux_sym_system_function_token61] = ACTIONS(21),
    [aux_sym_system_function_token62] = ACTIONS(21),
    [aux_sym_system_function_token63] = ACTIONS(21),
    [aux_sym_system_function_token64] = ACTIONS(21),
    [aux_sym_system_function_token65] = ACTIONS(21),
    [aux_sym_system_function_token66] = ACTIONS(21),
    [aux_sym_system_function_token67] = ACTIONS(21),
    [aux_sym_system_function_token68] = ACTIONS(21),
    [aux_sym_system_function_token69] = ACTIONS(21),
    [aux_sym_system_function_token70] = ACTIONS(21),
    [aux_sym_system_function_token71] = ACTIONS(21),
    [aux_sym_system_function_token72] = ACTIONS(21),
    [aux_sym_system_function_token73] = ACTIONS(21),
    [aux_sym_system_function_token74] = ACTIONS(21),
    [aux_sym_system_function_token75] = ACTIONS(21),
    [aux_sym_system_function_token76] = ACTIONS(23),
    [aux_sym_system_function_token77] = ACTIONS(23),
    [aux_sym_system_function_token78] = ACTIONS(23),
    [aux_sym_system_function_token79] = ACTIONS(23),
    [aux_sym_system_function_token80] = ACTIONS(23),
    [aux_sym_system_function_token81] = ACTIONS(23),
    [aux_sym_system_function_token82] = ACTIONS(23),
    [aux_sym_system_function_token83] = ACTIONS(23),
    [aux_sym_system_function_token84] = ACTIONS(23),
    [aux_sym_system_function_token85] = ACTIONS(23),
    [aux_sym_system_function_token86] = ACTIONS(23),
    [aux_sym_system_function_token87] = ACTIONS(23),
    [aux_sym_system_function_token88] = ACTIONS(23),
    [aux_sym_system_function_token89] = ACTIONS(23),
    [aux_sym_system_function_token90] = ACTIONS(23),
    [aux_sym_system_function_token91] = ACTIONS(23),
    [aux_sym_system_function_token92] = ACTIONS(23),
    [aux_sym_system_function_token93] = ACTIONS(23),
    [aux_sym_system_function_token94] = ACTIONS(23),
    [aux_sym_system_function_token95] = ACTIONS(23),
    [aux_sym_system_function_token96] = ACTIONS(23),
    [aux_sym_system_function_token97] = ACTIONS(23),
    [aux_sym_system_function_token98] = ACTIONS(23),
    [aux_sym_system_function_token99] = ACTIONS(23),
    [aux_sym_system_function_token100] = ACTIONS(23),
    [aux_sym_system_function_token101] = ACTIONS(23),
    [aux_sym_system_function_token102] = ACTIONS(23),
    [aux_sym_system_function_token103] = ACTIONS(23),
    [aux_sym_system_function_token104] = ACTIONS(23),
    [aux_sym_system_function_token105] = ACTIONS(23),
    [aux_sym_system_function_token106] = ACTIONS(23),
    [aux_sym_system_function_token107] = ACTIONS(23),
    [aux_sym_system_function_token108] = ACTIONS(23),
    [aux_sym_system_function_token109] = ACTIONS(23),
    [aux_sym_system_function_token110] = ACTIONS(23),
    [aux_sym_system_function_token111] = ACTIONS(23),
    [aux_sym_system_function_token112] = ACTIONS(23),
    [aux_sym_system_function_token113] = ACTIONS(23),
    [aux_sym_system_function_token114] = ACTIONS(23),
    [sym__string_function_identifier] = ACTIONS(25),
    [sym__numeric_function_identifier] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym_stringidentifier] = ACTIONS(35),
    [sym_numberidentifier] = ACTIONS(37),
    [sym__mat] = ACTIONS(39),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [15] = {
    [sym__expression] = STATE(137),
    [sym_unary_expression] = STATE(137),
    [sym_primary_expression] = STATE(137),
    [sym_call_expression] = STATE(95),
    [sym_system_function] = STATE(85),
    [sym_user_function] = STATE(85),
    [sym_template_string] = STATE(95),
    [sym_string] = STATE(95),
    [sym_parenthesized_expression] = STATE(95),
    [sym_forced_assignment_expression] = STATE(137),
    [sym__reference] = STATE(63),
    [sym_numberelement] = STATE(63),
    [sym_stringelement] = STATE(63),
    [sym_stringarray] = STATE(63),
    [sym_stringreference] = STATE(63),
    [sym_numberreference] = STATE(63),
    [sym_numberarray] = STATE(63),
    [sym_number] = STATE(95),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(17),
    [aux_sym_unary_expression_token1] = ACTIONS(19),
    [aux_sym_system_function_token1] = ACTIONS(21),
    [aux_sym_system_function_token2] = ACTIONS(21),
    [aux_sym_system_function_token3] = ACTIONS(21),
    [aux_sym_system_function_token4] = ACTIONS(21),
    [aux_sym_system_function_token5] = ACTIONS(21),
    [aux_sym_system_function_token6] = ACTIONS(21),
    [aux_sym_system_function_token7] = ACTIONS(21),
    [aux_sym_system_function_token8] = ACTIONS(21),
    [aux_sym_system_function_token9] = ACTIONS(21),
    [aux_sym_system_function_token10] = ACTIONS(21),
    [aux_sym_system_function_token11] = ACTIONS(21),
    [aux_sym_system_function_token12] = ACTIONS(21),
    [aux_sym_system_function_token13] = ACTIONS(21),
    [aux_sym_system_function_token14] = ACTIONS(21),
    [aux_sym_system_function_token15] = ACTIONS(21),
    [aux_sym_system_function_token16] = ACTIONS(21),
    [aux_sym_system_function_token17] = ACTIONS(21),
    [aux_sym_system_function_token18] = ACTIONS(21),
    [aux_sym_system_function_token19] = ACTIONS(21),
    [aux_sym_system_function_token20] = ACTIONS(21),
    [aux_sym_system_function_token21] = ACTIONS(21),
    [aux_sym_system_function_token22] = ACTIONS(21),
    [aux_sym_system_function_token23] = ACTIONS(21),
    [aux_sym_system_function_token24] = ACTIONS(21),
    [aux_sym_system_function_token25] = ACTIONS(21),
    [aux_sym_system_function_token26] = ACTIONS(21),
    [aux_sym_system_function_token27] = ACTIONS(21),
    [aux_sym_system_function_token28] = ACTIONS(21),
    [aux_sym_system_function_token29] = ACTIONS(21),
    [aux_sym_system_function_token30] = ACTIONS(21),
    [aux_sym_system_function_token31] = ACTIONS(21),
    [aux_sym_system_function_token32] = ACTIONS(21),
    [aux_sym_system_function_token33] = ACTIONS(21),
    [aux_sym_system_function_token34] = ACTIONS(21),
    [aux_sym_system_function_token35] = ACTIONS(21),
    [aux_sym_system_function_token36] = ACTIONS(21),
    [aux_sym_system_function_token37] = ACTIONS(21),
    [aux_sym_system_function_token38] = ACTIONS(21),
    [aux_sym_system_function_token39] = ACTIONS(21),
    [aux_sym_system_function_token40] = ACTIONS(21),
    [aux_sym_system_function_token41] = ACTIONS(21),
    [aux_sym_system_function_token42] = ACTIONS(21),
    [aux_sym_system_function_token43] = ACTIONS(21),
    [aux_sym_system_function_token44] = ACTIONS(21),
    [aux_sym_system_function_token45] = ACTIONS(21),
    [aux_sym_system_function_token46] = ACTIONS(21),
    [aux_sym_system_function_token47] = ACTIONS(21),
    [aux_sym_system_function_token48] = ACTIONS(21),
    [aux_sym_system_function_token49] = ACTIONS(21),
    [aux_sym_system_function_token50] = ACTIONS(21),
    [aux_sym_system_function_token51] = ACTIONS(21),
    [aux_sym_system_function_token52] = ACTIONS(21),
    [aux_sym_system_function_token53] = ACTIONS(21),
    [aux_sym_system_function_token54] = ACTIONS(21),
    [aux_sym_system_function_token55] = ACTIONS(21),
    [aux_sym_system_function_token56] = ACTIONS(21),
    [aux_sym_system_function_token57] = ACTIONS(21),
    [aux_sym_system_function_token58] = ACTIONS(21),
    [aux_sym_system_function_token59] = ACTIONS(21),
    [aux_sym_system_function_token60] = ACTIONS(21),
    [aux_sym_system_function_token61] = ACTIONS(21),
    [aux_sym_system_function_token62] = ACTIONS(21),
    [aux_sym_system_function_token63] = ACTIONS(21),
    [aux_sym_system_function_token64] = ACTIONS(21),
    [aux_sym_system_function_token65] = ACTIONS(21),
    [aux_sym_system_function_token66] = ACTIONS(21),
    [aux_sym_system_function_token67] = ACTIONS(21),
    [aux_sym_system_function_token68] = ACTIONS(21),
    [aux_sym_system_function_token69] = ACTIONS(21),
    [aux_sym_system_function_token70] = ACTIONS(21),
    [aux_sym_system_function_token71] = ACTIONS(21),
    [aux_sym_system_function_token72] = ACTIONS(21),
    [aux_sym_system_function_token73] = ACTIONS(21),
    [aux_sym_system_function_token74] = ACTIONS(21),
    [aux_sym_system_function_token75] = ACTIONS(21),
    [aux_sym_system_function_token76] = ACTIONS(23),
    [aux_sym_system_function_token77] = ACTIONS(23),
    [aux_sym_system_function_token78] = ACTIONS(23),
    [aux_sym_system_function_token79] = ACTIONS(23),
    [aux_sym_system_function_token80] = ACTIONS(23),
    [aux_sym_system_function_token81] = ACTIONS(23),
    [aux_sym_system_function_token82] = ACTIONS(23),
    [aux_sym_system_function_token83] = ACTIONS(23),
    [aux_sym_system_function_token84] = ACTIONS(23),
    [aux_sym_system_function_token85] = ACTIONS(23),
    [aux_sym_system_function_token86] = ACTIONS(23),
    [aux_sym_system_function_token87] = ACTIONS(23),
    [aux_sym_system_function_token88] = ACTIONS(23),
    [aux_sym_system_function_token89] = ACTIONS(23),
    [aux_sym_system_function_token90] = ACTIONS(23),
    [aux_sym_system_function_token91] = ACTIONS(23),
    [aux_sym_system_function_token92] = ACTIONS(23),
    [aux_sym_system_function_token93] = ACTIONS(23),
    [aux_sym_system_function_token94] = ACTIONS(23),
    [aux_sym_system_function_token95] = ACTIONS(23),
    [aux_sym_system_function_token96] = ACTIONS(23),
    [aux_sym_system_function_token97] = ACTIONS(23),
    [aux_sym_system_function_token98] = ACTIONS(23),
    [aux_sym_system_function_token99] = ACTIONS(23),
    [aux_sym_system_function_token100] = ACTIONS(23),
    [aux_sym_system_function_token101] = ACTIONS(23),
    [aux_sym_system_function_token102] = ACTIONS(23),
    [aux_sym_system_function_token103] = ACTIONS(23),
    [aux_sym_system_function_token104] = ACTIONS(23),
    [aux_sym_system_function_token105] = ACTIONS(23),
    [aux_sym_system_function_token106] = ACTIONS(23),
    [aux_sym_system_function_token107] = ACTIONS(23),
    [aux_sym_system_function_token108] = ACTIONS(23),
    [aux_sym_system_function_token109] = ACTIONS(23),
    [aux_sym_system_function_token110] = ACTIONS(23),
    [aux_sym_system_function_token111] = ACTIONS(23),
    [aux_sym_system_function_token112] = ACTIONS(23),
    [aux_sym_system_function_token113] = ACTIONS(23),
    [aux_sym_system_function_token114] = ACTIONS(23),
    [sym__string_function_identifier] = ACTIONS(25),
    [sym__numeric_function_identifier] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym_stringidentifier] = ACTIONS(35),
    [sym_numberidentifier] = ACTIONS(37),
    [sym__mat] = ACTIONS(39),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [16] = {
    [sym__expression] = STATE(133),
    [sym_unary_expression] = STATE(133),
    [sym_primary_expression] = STATE(133),
    [sym_call_expression] = STATE(124),
    [sym_system_function] = STATE(108),
    [sym_user_function] = STATE(108),
    [sym_template_string] = STATE(124),
    [sym_string] = STATE(124),
    [sym_parenthesized_expression] = STATE(124),
    [sym_forced_assignment_expression] = STATE(133),
    [sym__reference] = STATE(74),
    [sym_numberelement] = STATE(74),
    [sym_stringelement] = STATE(74),
    [sym_stringarray] = STATE(74),
    [sym_stringreference] = STATE(74),
    [sym_numberreference] = STATE(74),
    [sym_numberarray] = STATE(74),
    [sym_number] = STATE(124),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(45),
    [aux_sym_unary_expression_token1] = ACTIONS(47),
    [aux_sym_system_function_token1] = ACTIONS(49),
    [aux_sym_system_function_token2] = ACTIONS(49),
    [aux_sym_system_function_token3] = ACTIONS(49),
    [aux_sym_system_function_token4] = ACTIONS(49),
    [aux_sym_system_function_token5] = ACTIONS(49),
    [aux_sym_system_function_token6] = ACTIONS(49),
    [aux_sym_system_function_token7] = ACTIONS(49),
    [aux_sym_system_function_token8] = ACTIONS(49),
    [aux_sym_system_function_token9] = ACTIONS(49),
    [aux_sym_system_function_token10] = ACTIONS(49),
    [aux_sym_system_function_token11] = ACTIONS(49),
    [aux_sym_system_function_token12] = ACTIONS(49),
    [aux_sym_system_function_token13] = ACTIONS(49),
    [aux_sym_system_function_token14] = ACTIONS(49),
    [aux_sym_system_function_token15] = ACTIONS(49),
    [aux_sym_system_function_token16] = ACTIONS(49),
    [aux_sym_system_function_token17] = ACTIONS(49),
    [aux_sym_system_function_token18] = ACTIONS(49),
    [aux_sym_system_function_token19] = ACTIONS(49),
    [aux_sym_system_function_token20] = ACTIONS(49),
    [aux_sym_system_function_token21] = ACTIONS(49),
    [aux_sym_system_function_token22] = ACTIONS(49),
    [aux_sym_system_function_token23] = ACTIONS(49),
    [aux_sym_system_function_token24] = ACTIONS(49),
    [aux_sym_system_function_token25] = ACTIONS(49),
    [aux_sym_system_function_token26] = ACTIONS(49),
    [aux_sym_system_function_token27] = ACTIONS(49),
    [aux_sym_system_function_token28] = ACTIONS(49),
    [aux_sym_system_function_token29] = ACTIONS(49),
    [aux_sym_system_function_token30] = ACTIONS(49),
    [aux_sym_system_function_token31] = ACTIONS(49),
    [aux_sym_system_function_token32] = ACTIONS(49),
    [aux_sym_system_function_token33] = ACTIONS(49),
    [aux_sym_system_function_token34] = ACTIONS(49),
    [aux_sym_system_function_token35] = ACTIONS(49),
    [aux_sym_system_function_token36] = ACTIONS(49),
    [aux_sym_system_function_token37] = ACTIONS(49),
    [aux_sym_system_function_token38] = ACTIONS(49),
    [aux_sym_system_function_token39] = ACTIONS(49),
    [aux_sym_system_function_token40] = ACTIONS(49),
    [aux_sym_system_function_token41] = ACTIONS(49),
    [aux_sym_system_function_token42] = ACTIONS(49),
    [aux_sym_system_function_token43] = ACTIONS(49),
    [aux_sym_system_function_token44] = ACTIONS(49),
    [aux_sym_system_function_token45] = ACTIONS(49),
    [aux_sym_system_function_token46] = ACTIONS(49),
    [aux_sym_system_function_token47] = ACTIONS(49),
    [aux_sym_system_function_token48] = ACTIONS(49),
    [aux_sym_system_function_token49] = ACTIONS(49),
    [aux_sym_system_function_token50] = ACTIONS(49),
    [aux_sym_system_function_token51] = ACTIONS(49),
    [aux_sym_system_function_token52] = ACTIONS(49),
    [aux_sym_system_function_token53] = ACTIONS(49),
    [aux_sym_system_function_token54] = ACTIONS(49),
    [aux_sym_system_function_token55] = ACTIONS(49),
    [aux_sym_system_function_token56] = ACTIONS(49),
    [aux_sym_system_function_token57] = ACTIONS(49),
    [aux_sym_system_function_token58] = ACTIONS(49),
    [aux_sym_system_function_token59] = ACTIONS(49),
    [aux_sym_system_function_token60] = ACTIONS(49),
    [aux_sym_system_function_token61] = ACTIONS(49),
    [aux_sym_system_function_token62] = ACTIONS(49),
    [aux_sym_system_function_token63] = ACTIONS(49),
    [aux_sym_system_function_token64] = ACTIONS(49),
    [aux_sym_system_function_token65] = ACTIONS(49),
    [aux_sym_system_function_token66] = ACTIONS(49),
    [aux_sym_system_function_token67] = ACTIONS(49),
    [aux_sym_system_function_token68] = ACTIONS(49),
    [aux_sym_system_function_token69] = ACTIONS(49),
    [aux_sym_system_function_token70] = ACTIONS(49),
    [aux_sym_system_function_token71] = ACTIONS(49),
    [aux_sym_system_function_token72] = ACTIONS(49),
    [aux_sym_system_function_token73] = ACTIONS(49),
    [aux_sym_system_function_token74] = ACTIONS(49),
    [aux_sym_system_function_token75] = ACTIONS(49),
    [aux_sym_system_function_token76] = ACTIONS(51),
    [aux_sym_system_function_token77] = ACTIONS(51),
    [aux_sym_system_function_token78] = ACTIONS(51),
    [aux_sym_system_function_token79] = ACTIONS(51),
    [aux_sym_system_function_token80] = ACTIONS(51),
    [aux_sym_system_function_token81] = ACTIONS(51),
    [aux_sym_system_function_token82] = ACTIONS(51),
    [aux_sym_system_function_token83] = ACTIONS(51),
    [aux_sym_system_function_token84] = ACTIONS(51),
    [aux_sym_system_function_token85] = ACTIONS(51),
    [aux_sym_system_function_token86] = ACTIONS(51),
    [aux_sym_system_function_token87] = ACTIONS(51),
    [aux_sym_system_function_token88] = ACTIONS(51),
    [aux_sym_system_function_token89] = ACTIONS(51),
    [aux_sym_system_function_token90] = ACTIONS(51),
    [aux_sym_system_function_token91] = ACTIONS(51),
    [aux_sym_system_function_token92] = ACTIONS(51),
    [aux_sym_system_function_token93] = ACTIONS(51),
    [aux_sym_system_function_token94] = ACTIONS(51),
    [aux_sym_system_function_token95] = ACTIONS(51),
    [aux_sym_system_function_token96] = ACTIONS(51),
    [aux_sym_system_function_token97] = ACTIONS(51),
    [aux_sym_system_function_token98] = ACTIONS(51),
    [aux_sym_system_function_token99] = ACTIONS(51),
    [aux_sym_system_function_token100] = ACTIONS(51),
    [aux_sym_system_function_token101] = ACTIONS(51),
    [aux_sym_system_function_token102] = ACTIONS(51),
    [aux_sym_system_function_token103] = ACTIONS(51),
    [aux_sym_system_function_token104] = ACTIONS(51),
    [aux_sym_system_function_token105] = ACTIONS(51),
    [aux_sym_system_function_token106] = ACTIONS(51),
    [aux_sym_system_function_token107] = ACTIONS(51),
    [aux_sym_system_function_token108] = ACTIONS(51),
    [aux_sym_system_function_token109] = ACTIONS(51),
    [aux_sym_system_function_token110] = ACTIONS(51),
    [aux_sym_system_function_token111] = ACTIONS(51),
    [aux_sym_system_function_token112] = ACTIONS(51),
    [aux_sym_system_function_token113] = ACTIONS(51),
    [aux_sym_system_function_token114] = ACTIONS(51),
    [sym__string_function_identifier] = ACTIONS(53),
    [sym__numeric_function_identifier] = ACTIONS(55),
    [anon_sym_BQUOTE] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [sym_stringidentifier] = ACTIONS(63),
    [sym_numberidentifier] = ACTIONS(65),
    [sym__mat] = ACTIONS(67),
    [aux_sym_number_token1] = ACTIONS(69),
  },
  [17] = {
    [sym__expression] = STATE(211),
    [sym_unary_expression] = STATE(211),
    [sym_primary_expression] = STATE(211),
    [sym_call_expression] = STATE(95),
    [sym_system_function] = STATE(85),
    [sym_user_function] = STATE(85),
    [sym_template_string] = STATE(95),
    [sym_string] = STATE(95),
    [sym_parenthesized_expression] = STATE(95),
    [sym_forced_assignment_expression] = STATE(211),
    [sym__reference] = STATE(63),
    [sym_numberelement] = STATE(63),
    [sym_stringelement] = STATE(63),
    [sym_stringarray] = STATE(63),
    [sym_stringreference] = STATE(63),
    [sym_numberreference] = STATE(63),
    [sym_numberarray] = STATE(63),
    [sym_number] = STATE(95),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(17),
    [aux_sym_unary_expression_token1] = ACTIONS(19),
    [aux_sym_system_function_token1] = ACTIONS(21),
    [aux_sym_system_function_token2] = ACTIONS(21),
    [aux_sym_system_function_token3] = ACTIONS(21),
    [aux_sym_system_function_token4] = ACTIONS(21),
    [aux_sym_system_function_token5] = ACTIONS(21),
    [aux_sym_system_function_token6] = ACTIONS(21),
    [aux_sym_system_function_token7] = ACTIONS(21),
    [aux_sym_system_function_token8] = ACTIONS(21),
    [aux_sym_system_function_token9] = ACTIONS(21),
    [aux_sym_system_function_token10] = ACTIONS(21),
    [aux_sym_system_function_token11] = ACTIONS(21),
    [aux_sym_system_function_token12] = ACTIONS(21),
    [aux_sym_system_function_token13] = ACTIONS(21),
    [aux_sym_system_function_token14] = ACTIONS(21),
    [aux_sym_system_function_token15] = ACTIONS(21),
    [aux_sym_system_function_token16] = ACTIONS(21),
    [aux_sym_system_function_token17] = ACTIONS(21),
    [aux_sym_system_function_token18] = ACTIONS(21),
    [aux_sym_system_function_token19] = ACTIONS(21),
    [aux_sym_system_function_token20] = ACTIONS(21),
    [aux_sym_system_function_token21] = ACTIONS(21),
    [aux_sym_system_function_token22] = ACTIONS(21),
    [aux_sym_system_function_token23] = ACTIONS(21),
    [aux_sym_system_function_token24] = ACTIONS(21),
    [aux_sym_system_function_token25] = ACTIONS(21),
    [aux_sym_system_function_token26] = ACTIONS(21),
    [aux_sym_system_function_token27] = ACTIONS(21),
    [aux_sym_system_function_token28] = ACTIONS(21),
    [aux_sym_system_function_token29] = ACTIONS(21),
    [aux_sym_system_function_token30] = ACTIONS(21),
    [aux_sym_system_function_token31] = ACTIONS(21),
    [aux_sym_system_function_token32] = ACTIONS(21),
    [aux_sym_system_function_token33] = ACTIONS(21),
    [aux_sym_system_function_token34] = ACTIONS(21),
    [aux_sym_system_function_token35] = ACTIONS(21),
    [aux_sym_system_function_token36] = ACTIONS(21),
    [aux_sym_system_function_token37] = ACTIONS(21),
    [aux_sym_system_function_token38] = ACTIONS(21),
    [aux_sym_system_function_token39] = ACTIONS(21),
    [aux_sym_system_function_token40] = ACTIONS(21),
    [aux_sym_system_function_token41] = ACTIONS(21),
    [aux_sym_system_function_token42] = ACTIONS(21),
    [aux_sym_system_function_token43] = ACTIONS(21),
    [aux_sym_system_function_token44] = ACTIONS(21),
    [aux_sym_system_function_token45] = ACTIONS(21),
    [aux_sym_system_function_token46] = ACTIONS(21),
    [aux_sym_system_function_token47] = ACTIONS(21),
    [aux_sym_system_function_token48] = ACTIONS(21),
    [aux_sym_system_function_token49] = ACTIONS(21),
    [aux_sym_system_function_token50] = ACTIONS(21),
    [aux_sym_system_function_token51] = ACTIONS(21),
    [aux_sym_system_function_token52] = ACTIONS(21),
    [aux_sym_system_function_token53] = ACTIONS(21),
    [aux_sym_system_function_token54] = ACTIONS(21),
    [aux_sym_system_function_token55] = ACTIONS(21),
    [aux_sym_system_function_token56] = ACTIONS(21),
    [aux_sym_system_function_token57] = ACTIONS(21),
    [aux_sym_system_function_token58] = ACTIONS(21),
    [aux_sym_system_function_token59] = ACTIONS(21),
    [aux_sym_system_function_token60] = ACTIONS(21),
    [aux_sym_system_function_token61] = ACTIONS(21),
    [aux_sym_system_function_token62] = ACTIONS(21),
    [aux_sym_system_function_token63] = ACTIONS(21),
    [aux_sym_system_function_token64] = ACTIONS(21),
    [aux_sym_system_function_token65] = ACTIONS(21),
    [aux_sym_system_function_token66] = ACTIONS(21),
    [aux_sym_system_function_token67] = ACTIONS(21),
    [aux_sym_system_function_token68] = ACTIONS(21),
    [aux_sym_system_function_token69] = ACTIONS(21),
    [aux_sym_system_function_token70] = ACTIONS(21),
    [aux_sym_system_function_token71] = ACTIONS(21),
    [aux_sym_system_function_token72] = ACTIONS(21),
    [aux_sym_system_function_token73] = ACTIONS(21),
    [aux_sym_system_function_token74] = ACTIONS(21),
    [aux_sym_system_function_token75] = ACTIONS(21),
    [aux_sym_system_function_token76] = ACTIONS(23),
    [aux_sym_system_function_token77] = ACTIONS(23),
    [aux_sym_system_function_token78] = ACTIONS(23),
    [aux_sym_system_function_token79] = ACTIONS(23),
    [aux_sym_system_function_token80] = ACTIONS(23),
    [aux_sym_system_function_token81] = ACTIONS(23),
    [aux_sym_system_function_token82] = ACTIONS(23),
    [aux_sym_system_function_token83] = ACTIONS(23),
    [aux_sym_system_function_token84] = ACTIONS(23),
    [aux_sym_system_function_token85] = ACTIONS(23),
    [aux_sym_system_function_token86] = ACTIONS(23),
    [aux_sym_system_function_token87] = ACTIONS(23),
    [aux_sym_system_function_token88] = ACTIONS(23),
    [aux_sym_system_function_token89] = ACTIONS(23),
    [aux_sym_system_function_token90] = ACTIONS(23),
    [aux_sym_system_function_token91] = ACTIONS(23),
    [aux_sym_system_function_token92] = ACTIONS(23),
    [aux_sym_system_function_token93] = ACTIONS(23),
    [aux_sym_system_function_token94] = ACTIONS(23),
    [aux_sym_system_function_token95] = ACTIONS(23),
    [aux_sym_system_function_token96] = ACTIONS(23),
    [aux_sym_system_function_token97] = ACTIONS(23),
    [aux_sym_system_function_token98] = ACTIONS(23),
    [aux_sym_system_function_token99] = ACTIONS(23),
    [aux_sym_system_function_token100] = ACTIONS(23),
    [aux_sym_system_function_token101] = ACTIONS(23),
    [aux_sym_system_function_token102] = ACTIONS(23),
    [aux_sym_system_function_token103] = ACTIONS(23),
    [aux_sym_system_function_token104] = ACTIONS(23),
    [aux_sym_system_function_token105] = ACTIONS(23),
    [aux_sym_system_function_token106] = ACTIONS(23),
    [aux_sym_system_function_token107] = ACTIONS(23),
    [aux_sym_system_function_token108] = ACTIONS(23),
    [aux_sym_system_function_token109] = ACTIONS(23),
    [aux_sym_system_function_token110] = ACTIONS(23),
    [aux_sym_system_function_token111] = ACTIONS(23),
    [aux_sym_system_function_token112] = ACTIONS(23),
    [aux_sym_system_function_token113] = ACTIONS(23),
    [aux_sym_system_function_token114] = ACTIONS(23),
    [sym__string_function_identifier] = ACTIONS(25),
    [sym__numeric_function_identifier] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym_stringidentifier] = ACTIONS(35),
    [sym_numberidentifier] = ACTIONS(37),
    [sym__mat] = ACTIONS(39),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [18] = {
    [sym__expression] = STATE(105),
    [sym_unary_expression] = STATE(105),
    [sym_primary_expression] = STATE(105),
    [sym_call_expression] = STATE(124),
    [sym_system_function] = STATE(108),
    [sym_user_function] = STATE(108),
    [sym_template_string] = STATE(124),
    [sym_string] = STATE(124),
    [sym_parenthesized_expression] = STATE(124),
    [sym_forced_assignment_expression] = STATE(105),
    [sym__reference] = STATE(74),
    [sym_numberelement] = STATE(74),
    [sym_stringelement] = STATE(74),
    [sym_stringarray] = STATE(74),
    [sym_stringreference] = STATE(74),
    [sym_numberreference] = STATE(74),
    [sym_numberarray] = STATE(74),
    [sym_number] = STATE(124),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(45),
    [aux_sym_unary_expression_token1] = ACTIONS(47),
    [aux_sym_system_function_token1] = ACTIONS(49),
    [aux_sym_system_function_token2] = ACTIONS(49),
    [aux_sym_system_function_token3] = ACTIONS(49),
    [aux_sym_system_function_token4] = ACTIONS(49),
    [aux_sym_system_function_token5] = ACTIONS(49),
    [aux_sym_system_function_token6] = ACTIONS(49),
    [aux_sym_system_function_token7] = ACTIONS(49),
    [aux_sym_system_function_token8] = ACTIONS(49),
    [aux_sym_system_function_token9] = ACTIONS(49),
    [aux_sym_system_function_token10] = ACTIONS(49),
    [aux_sym_system_function_token11] = ACTIONS(49),
    [aux_sym_system_function_token12] = ACTIONS(49),
    [aux_sym_system_function_token13] = ACTIONS(49),
    [aux_sym_system_function_token14] = ACTIONS(49),
    [aux_sym_system_function_token15] = ACTIONS(49),
    [aux_sym_system_function_token16] = ACTIONS(49),
    [aux_sym_system_function_token17] = ACTIONS(49),
    [aux_sym_system_function_token18] = ACTIONS(49),
    [aux_sym_system_function_token19] = ACTIONS(49),
    [aux_sym_system_function_token20] = ACTIONS(49),
    [aux_sym_system_function_token21] = ACTIONS(49),
    [aux_sym_system_function_token22] = ACTIONS(49),
    [aux_sym_system_function_token23] = ACTIONS(49),
    [aux_sym_system_function_token24] = ACTIONS(49),
    [aux_sym_system_function_token25] = ACTIONS(49),
    [aux_sym_system_function_token26] = ACTIONS(49),
    [aux_sym_system_function_token27] = ACTIONS(49),
    [aux_sym_system_function_token28] = ACTIONS(49),
    [aux_sym_system_function_token29] = ACTIONS(49),
    [aux_sym_system_function_token30] = ACTIONS(49),
    [aux_sym_system_function_token31] = ACTIONS(49),
    [aux_sym_system_function_token32] = ACTIONS(49),
    [aux_sym_system_function_token33] = ACTIONS(49),
    [aux_sym_system_function_token34] = ACTIONS(49),
    [aux_sym_system_function_token35] = ACTIONS(49),
    [aux_sym_system_function_token36] = ACTIONS(49),
    [aux_sym_system_function_token37] = ACTIONS(49),
    [aux_sym_system_function_token38] = ACTIONS(49),
    [aux_sym_system_function_token39] = ACTIONS(49),
    [aux_sym_system_function_token40] = ACTIONS(49),
    [aux_sym_system_function_token41] = ACTIONS(49),
    [aux_sym_system_function_token42] = ACTIONS(49),
    [aux_sym_system_function_token43] = ACTIONS(49),
    [aux_sym_system_function_token44] = ACTIONS(49),
    [aux_sym_system_function_token45] = ACTIONS(49),
    [aux_sym_system_function_token46] = ACTIONS(49),
    [aux_sym_system_function_token47] = ACTIONS(49),
    [aux_sym_system_function_token48] = ACTIONS(49),
    [aux_sym_system_function_token49] = ACTIONS(49),
    [aux_sym_system_function_token50] = ACTIONS(49),
    [aux_sym_system_function_token51] = ACTIONS(49),
    [aux_sym_system_function_token52] = ACTIONS(49),
    [aux_sym_system_function_token53] = ACTIONS(49),
    [aux_sym_system_function_token54] = ACTIONS(49),
    [aux_sym_system_function_token55] = ACTIONS(49),
    [aux_sym_system_function_token56] = ACTIONS(49),
    [aux_sym_system_function_token57] = ACTIONS(49),
    [aux_sym_system_function_token58] = ACTIONS(49),
    [aux_sym_system_function_token59] = ACTIONS(49),
    [aux_sym_system_function_token60] = ACTIONS(49),
    [aux_sym_system_function_token61] = ACTIONS(49),
    [aux_sym_system_function_token62] = ACTIONS(49),
    [aux_sym_system_function_token63] = ACTIONS(49),
    [aux_sym_system_function_token64] = ACTIONS(49),
    [aux_sym_system_function_token65] = ACTIONS(49),
    [aux_sym_system_function_token66] = ACTIONS(49),
    [aux_sym_system_function_token67] = ACTIONS(49),
    [aux_sym_system_function_token68] = ACTIONS(49),
    [aux_sym_system_function_token69] = ACTIONS(49),
    [aux_sym_system_function_token70] = ACTIONS(49),
    [aux_sym_system_function_token71] = ACTIONS(49),
    [aux_sym_system_function_token72] = ACTIONS(49),
    [aux_sym_system_function_token73] = ACTIONS(49),
    [aux_sym_system_function_token74] = ACTIONS(49),
    [aux_sym_system_function_token75] = ACTIONS(49),
    [aux_sym_system_function_token76] = ACTIONS(51),
    [aux_sym_system_function_token77] = ACTIONS(51),
    [aux_sym_system_function_token78] = ACTIONS(51),
    [aux_sym_system_function_token79] = ACTIONS(51),
    [aux_sym_system_function_token80] = ACTIONS(51),
    [aux_sym_system_function_token81] = ACTIONS(51),
    [aux_sym_system_function_token82] = ACTIONS(51),
    [aux_sym_system_function_token83] = ACTIONS(51),
    [aux_sym_system_function_token84] = ACTIONS(51),
    [aux_sym_system_function_token85] = ACTIONS(51),
    [aux_sym_system_function_token86] = ACTIONS(51),
    [aux_sym_system_function_token87] = ACTIONS(51),
    [aux_sym_system_function_token88] = ACTIONS(51),
    [aux_sym_system_function_token89] = ACTIONS(51),
    [aux_sym_system_function_token90] = ACTIONS(51),
    [aux_sym_system_function_token91] = ACTIONS(51),
    [aux_sym_system_function_token92] = ACTIONS(51),
    [aux_sym_system_function_token93] = ACTIONS(51),
    [aux_sym_system_function_token94] = ACTIONS(51),
    [aux_sym_system_function_token95] = ACTIONS(51),
    [aux_sym_system_function_token96] = ACTIONS(51),
    [aux_sym_system_function_token97] = ACTIONS(51),
    [aux_sym_system_function_token98] = ACTIONS(51),
    [aux_sym_system_function_token99] = ACTIONS(51),
    [aux_sym_system_function_token100] = ACTIONS(51),
    [aux_sym_system_function_token101] = ACTIONS(51),
    [aux_sym_system_function_token102] = ACTIONS(51),
    [aux_sym_system_function_token103] = ACTIONS(51),
    [aux_sym_system_function_token104] = ACTIONS(51),
    [aux_sym_system_function_token105] = ACTIONS(51),
    [aux_sym_system_function_token106] = ACTIONS(51),
    [aux_sym_system_function_token107] = ACTIONS(51),
    [aux_sym_system_function_token108] = ACTIONS(51),
    [aux_sym_system_function_token109] = ACTIONS(51),
    [aux_sym_system_function_token110] = ACTIONS(51),
    [aux_sym_system_function_token111] = ACTIONS(51),
    [aux_sym_system_function_token112] = ACTIONS(51),
    [aux_sym_system_function_token113] = ACTIONS(51),
    [aux_sym_system_function_token114] = ACTIONS(51),
    [sym__string_function_identifier] = ACTIONS(53),
    [sym__numeric_function_identifier] = ACTIONS(55),
    [anon_sym_BQUOTE] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [sym_stringidentifier] = ACTIONS(63),
    [sym_numberidentifier] = ACTIONS(65),
    [sym__mat] = ACTIONS(67),
    [aux_sym_number_token1] = ACTIONS(69),
  },
  [19] = {
    [sym__expression] = STATE(150),
    [sym_unary_expression] = STATE(150),
    [sym_primary_expression] = STATE(150),
    [sym_call_expression] = STATE(95),
    [sym_system_function] = STATE(85),
    [sym_user_function] = STATE(85),
    [sym_template_string] = STATE(95),
    [sym_string] = STATE(95),
    [sym_parenthesized_expression] = STATE(95),
    [sym_forced_assignment_expression] = STATE(150),
    [sym__reference] = STATE(63),
    [sym_numberelement] = STATE(63),
    [sym_stringelement] = STATE(63),
    [sym_stringarray] = STATE(63),
    [sym_stringreference] = STATE(63),
    [sym_numberreference] = STATE(63),
    [sym_numberarray] = STATE(63),
    [sym_number] = STATE(95),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(17),
    [aux_sym_unary_expression_token1] = ACTIONS(19),
    [aux_sym_system_function_token1] = ACTIONS(21),
    [aux_sym_system_function_token2] = ACTIONS(21),
    [aux_sym_system_function_token3] = ACTIONS(21),
    [aux_sym_system_function_token4] = ACTIONS(21),
    [aux_sym_system_function_token5] = ACTIONS(21),
    [aux_sym_system_function_token6] = ACTIONS(21),
    [aux_sym_system_function_token7] = ACTIONS(21),
    [aux_sym_system_function_token8] = ACTIONS(21),
    [aux_sym_system_function_token9] = ACTIONS(21),
    [aux_sym_system_function_token10] = ACTIONS(21),
    [aux_sym_system_function_token11] = ACTIONS(21),
    [aux_sym_system_function_token12] = ACTIONS(21),
    [aux_sym_system_function_token13] = ACTIONS(21),
    [aux_sym_system_function_token14] = ACTIONS(21),
    [aux_sym_system_function_token15] = ACTIONS(21),
    [aux_sym_system_function_token16] = ACTIONS(21),
    [aux_sym_system_function_token17] = ACTIONS(21),
    [aux_sym_system_function_token18] = ACTIONS(21),
    [aux_sym_system_function_token19] = ACTIONS(21),
    [aux_sym_system_function_token20] = ACTIONS(21),
    [aux_sym_system_function_token21] = ACTIONS(21),
    [aux_sym_system_function_token22] = ACTIONS(21),
    [aux_sym_system_function_token23] = ACTIONS(21),
    [aux_sym_system_function_token24] = ACTIONS(21),
    [aux_sym_system_function_token25] = ACTIONS(21),
    [aux_sym_system_function_token26] = ACTIONS(21),
    [aux_sym_system_function_token27] = ACTIONS(21),
    [aux_sym_system_function_token28] = ACTIONS(21),
    [aux_sym_system_function_token29] = ACTIONS(21),
    [aux_sym_system_function_token30] = ACTIONS(21),
    [aux_sym_system_function_token31] = ACTIONS(21),
    [aux_sym_system_function_token32] = ACTIONS(21),
    [aux_sym_system_function_token33] = ACTIONS(21),
    [aux_sym_system_function_token34] = ACTIONS(21),
    [aux_sym_system_function_token35] = ACTIONS(21),
    [aux_sym_system_function_token36] = ACTIONS(21),
    [aux_sym_system_function_token37] = ACTIONS(21),
    [aux_sym_system_function_token38] = ACTIONS(21),
    [aux_sym_system_function_token39] = ACTIONS(21),
    [aux_sym_system_function_token40] = ACTIONS(21),
    [aux_sym_system_function_token41] = ACTIONS(21),
    [aux_sym_system_function_token42] = ACTIONS(21),
    [aux_sym_system_function_token43] = ACTIONS(21),
    [aux_sym_system_function_token44] = ACTIONS(21),
    [aux_sym_system_function_token45] = ACTIONS(21),
    [aux_sym_system_function_token46] = ACTIONS(21),
    [aux_sym_system_function_token47] = ACTIONS(21),
    [aux_sym_system_function_token48] = ACTIONS(21),
    [aux_sym_system_function_token49] = ACTIONS(21),
    [aux_sym_system_function_token50] = ACTIONS(21),
    [aux_sym_system_function_token51] = ACTIONS(21),
    [aux_sym_system_function_token52] = ACTIONS(21),
    [aux_sym_system_function_token53] = ACTIONS(21),
    [aux_sym_system_function_token54] = ACTIONS(21),
    [aux_sym_system_function_token55] = ACTIONS(21),
    [aux_sym_system_function_token56] = ACTIONS(21),
    [aux_sym_system_function_token57] = ACTIONS(21),
    [aux_sym_system_function_token58] = ACTIONS(21),
    [aux_sym_system_function_token59] = ACTIONS(21),
    [aux_sym_system_function_token60] = ACTIONS(21),
    [aux_sym_system_function_token61] = ACTIONS(21),
    [aux_sym_system_function_token62] = ACTIONS(21),
    [aux_sym_system_function_token63] = ACTIONS(21),
    [aux_sym_system_function_token64] = ACTIONS(21),
    [aux_sym_system_function_token65] = ACTIONS(21),
    [aux_sym_system_function_token66] = ACTIONS(21),
    [aux_sym_system_function_token67] = ACTIONS(21),
    [aux_sym_system_function_token68] = ACTIONS(21),
    [aux_sym_system_function_token69] = ACTIONS(21),
    [aux_sym_system_function_token70] = ACTIONS(21),
    [aux_sym_system_function_token71] = ACTIONS(21),
    [aux_sym_system_function_token72] = ACTIONS(21),
    [aux_sym_system_function_token73] = ACTIONS(21),
    [aux_sym_system_function_token74] = ACTIONS(21),
    [aux_sym_system_function_token75] = ACTIONS(21),
    [aux_sym_system_function_token76] = ACTIONS(23),
    [aux_sym_system_function_token77] = ACTIONS(23),
    [aux_sym_system_function_token78] = ACTIONS(23),
    [aux_sym_system_function_token79] = ACTIONS(23),
    [aux_sym_system_function_token80] = ACTIONS(23),
    [aux_sym_system_function_token81] = ACTIONS(23),
    [aux_sym_system_function_token82] = ACTIONS(23),
    [aux_sym_system_function_token83] = ACTIONS(23),
    [aux_sym_system_function_token84] = ACTIONS(23),
    [aux_sym_system_function_token85] = ACTIONS(23),
    [aux_sym_system_function_token86] = ACTIONS(23),
    [aux_sym_system_function_token87] = ACTIONS(23),
    [aux_sym_system_function_token88] = ACTIONS(23),
    [aux_sym_system_function_token89] = ACTIONS(23),
    [aux_sym_system_function_token90] = ACTIONS(23),
    [aux_sym_system_function_token91] = ACTIONS(23),
    [aux_sym_system_function_token92] = ACTIONS(23),
    [aux_sym_system_function_token93] = ACTIONS(23),
    [aux_sym_system_function_token94] = ACTIONS(23),
    [aux_sym_system_function_token95] = ACTIONS(23),
    [aux_sym_system_function_token96] = ACTIONS(23),
    [aux_sym_system_function_token97] = ACTIONS(23),
    [aux_sym_system_function_token98] = ACTIONS(23),
    [aux_sym_system_function_token99] = ACTIONS(23),
    [aux_sym_system_function_token100] = ACTIONS(23),
    [aux_sym_system_function_token101] = ACTIONS(23),
    [aux_sym_system_function_token102] = ACTIONS(23),
    [aux_sym_system_function_token103] = ACTIONS(23),
    [aux_sym_system_function_token104] = ACTIONS(23),
    [aux_sym_system_function_token105] = ACTIONS(23),
    [aux_sym_system_function_token106] = ACTIONS(23),
    [aux_sym_system_function_token107] = ACTIONS(23),
    [aux_sym_system_function_token108] = ACTIONS(23),
    [aux_sym_system_function_token109] = ACTIONS(23),
    [aux_sym_system_function_token110] = ACTIONS(23),
    [aux_sym_system_function_token111] = ACTIONS(23),
    [aux_sym_system_function_token112] = ACTIONS(23),
    [aux_sym_system_function_token113] = ACTIONS(23),
    [aux_sym_system_function_token114] = ACTIONS(23),
    [sym__string_function_identifier] = ACTIONS(25),
    [sym__numeric_function_identifier] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym_stringidentifier] = ACTIONS(35),
    [sym_numberidentifier] = ACTIONS(37),
    [sym__mat] = ACTIONS(39),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [20] = {
    [sym__expression] = STATE(190),
    [sym_unary_expression] = STATE(190),
    [sym_primary_expression] = STATE(190),
    [sym_call_expression] = STATE(95),
    [sym_system_function] = STATE(85),
    [sym_user_function] = STATE(85),
    [sym_template_string] = STATE(95),
    [sym_string] = STATE(95),
    [sym_parenthesized_expression] = STATE(95),
    [sym_forced_assignment_expression] = STATE(190),
    [sym__reference] = STATE(63),
    [sym_numberelement] = STATE(63),
    [sym_stringelement] = STATE(63),
    [sym_stringarray] = STATE(63),
    [sym_stringreference] = STATE(63),
    [sym_numberreference] = STATE(63),
    [sym_numberarray] = STATE(63),
    [sym_number] = STATE(95),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(17),
    [aux_sym_unary_expression_token1] = ACTIONS(19),
    [aux_sym_system_function_token1] = ACTIONS(21),
    [aux_sym_system_function_token2] = ACTIONS(21),
    [aux_sym_system_function_token3] = ACTIONS(21),
    [aux_sym_system_function_token4] = ACTIONS(21),
    [aux_sym_system_function_token5] = ACTIONS(21),
    [aux_sym_system_function_token6] = ACTIONS(21),
    [aux_sym_system_function_token7] = ACTIONS(21),
    [aux_sym_system_function_token8] = ACTIONS(21),
    [aux_sym_system_function_token9] = ACTIONS(21),
    [aux_sym_system_function_token10] = ACTIONS(21),
    [aux_sym_system_function_token11] = ACTIONS(21),
    [aux_sym_system_function_token12] = ACTIONS(21),
    [aux_sym_system_function_token13] = ACTIONS(21),
    [aux_sym_system_function_token14] = ACTIONS(21),
    [aux_sym_system_function_token15] = ACTIONS(21),
    [aux_sym_system_function_token16] = ACTIONS(21),
    [aux_sym_system_function_token17] = ACTIONS(21),
    [aux_sym_system_function_token18] = ACTIONS(21),
    [aux_sym_system_function_token19] = ACTIONS(21),
    [aux_sym_system_function_token20] = ACTIONS(21),
    [aux_sym_system_function_token21] = ACTIONS(21),
    [aux_sym_system_function_token22] = ACTIONS(21),
    [aux_sym_system_function_token23] = ACTIONS(21),
    [aux_sym_system_function_token24] = ACTIONS(21),
    [aux_sym_system_function_token25] = ACTIONS(21),
    [aux_sym_system_function_token26] = ACTIONS(21),
    [aux_sym_system_function_token27] = ACTIONS(21),
    [aux_sym_system_function_token28] = ACTIONS(21),
    [aux_sym_system_function_token29] = ACTIONS(21),
    [aux_sym_system_function_token30] = ACTIONS(21),
    [aux_sym_system_function_token31] = ACTIONS(21),
    [aux_sym_system_function_token32] = ACTIONS(21),
    [aux_sym_system_function_token33] = ACTIONS(21),
    [aux_sym_system_function_token34] = ACTIONS(21),
    [aux_sym_system_function_token35] = ACTIONS(21),
    [aux_sym_system_function_token36] = ACTIONS(21),
    [aux_sym_system_function_token37] = ACTIONS(21),
    [aux_sym_system_function_token38] = ACTIONS(21),
    [aux_sym_system_function_token39] = ACTIONS(21),
    [aux_sym_system_function_token40] = ACTIONS(21),
    [aux_sym_system_function_token41] = ACTIONS(21),
    [aux_sym_system_function_token42] = ACTIONS(21),
    [aux_sym_system_function_token43] = ACTIONS(21),
    [aux_sym_system_function_token44] = ACTIONS(21),
    [aux_sym_system_function_token45] = ACTIONS(21),
    [aux_sym_system_function_token46] = ACTIONS(21),
    [aux_sym_system_function_token47] = ACTIONS(21),
    [aux_sym_system_function_token48] = ACTIONS(21),
    [aux_sym_system_function_token49] = ACTIONS(21),
    [aux_sym_system_function_token50] = ACTIONS(21),
    [aux_sym_system_function_token51] = ACTIONS(21),
    [aux_sym_system_function_token52] = ACTIONS(21),
    [aux_sym_system_function_token53] = ACTIONS(21),
    [aux_sym_system_function_token54] = ACTIONS(21),
    [aux_sym_system_function_token55] = ACTIONS(21),
    [aux_sym_system_function_token56] = ACTIONS(21),
    [aux_sym_system_function_token57] = ACTIONS(21),
    [aux_sym_system_function_token58] = ACTIONS(21),
    [aux_sym_system_function_token59] = ACTIONS(21),
    [aux_sym_system_function_token60] = ACTIONS(21),
    [aux_sym_system_function_token61] = ACTIONS(21),
    [aux_sym_system_function_token62] = ACTIONS(21),
    [aux_sym_system_function_token63] = ACTIONS(21),
    [aux_sym_system_function_token64] = ACTIONS(21),
    [aux_sym_system_function_token65] = ACTIONS(21),
    [aux_sym_system_function_token66] = ACTIONS(21),
    [aux_sym_system_function_token67] = ACTIONS(21),
    [aux_sym_system_function_token68] = ACTIONS(21),
    [aux_sym_system_function_token69] = ACTIONS(21),
    [aux_sym_system_function_token70] = ACTIONS(21),
    [aux_sym_system_function_token71] = ACTIONS(21),
    [aux_sym_system_function_token72] = ACTIONS(21),
    [aux_sym_system_function_token73] = ACTIONS(21),
    [aux_sym_system_function_token74] = ACTIONS(21),
    [aux_sym_system_function_token75] = ACTIONS(21),
    [aux_sym_system_function_token76] = ACTIONS(23),
    [aux_sym_system_function_token77] = ACTIONS(23),
    [aux_sym_system_function_token78] = ACTIONS(23),
    [aux_sym_system_function_token79] = ACTIONS(23),
    [aux_sym_system_function_token80] = ACTIONS(23),
    [aux_sym_system_function_token81] = ACTIONS(23),
    [aux_sym_system_function_token82] = ACTIONS(23),
    [aux_sym_system_function_token83] = ACTIONS(23),
    [aux_sym_system_function_token84] = ACTIONS(23),
    [aux_sym_system_function_token85] = ACTIONS(23),
    [aux_sym_system_function_token86] = ACTIONS(23),
    [aux_sym_system_function_token87] = ACTIONS(23),
    [aux_sym_system_function_token88] = ACTIONS(23),
    [aux_sym_system_function_token89] = ACTIONS(23),
    [aux_sym_system_function_token90] = ACTIONS(23),
    [aux_sym_system_function_token91] = ACTIONS(23),
    [aux_sym_system_function_token92] = ACTIONS(23),
    [aux_sym_system_function_token93] = ACTIONS(23),
    [aux_sym_system_function_token94] = ACTIONS(23),
    [aux_sym_system_function_token95] = ACTIONS(23),
    [aux_sym_system_function_token96] = ACTIONS(23),
    [aux_sym_system_function_token97] = ACTIONS(23),
    [aux_sym_system_function_token98] = ACTIONS(23),
    [aux_sym_system_function_token99] = ACTIONS(23),
    [aux_sym_system_function_token100] = ACTIONS(23),
    [aux_sym_system_function_token101] = ACTIONS(23),
    [aux_sym_system_function_token102] = ACTIONS(23),
    [aux_sym_system_function_token103] = ACTIONS(23),
    [aux_sym_system_function_token104] = ACTIONS(23),
    [aux_sym_system_function_token105] = ACTIONS(23),
    [aux_sym_system_function_token106] = ACTIONS(23),
    [aux_sym_system_function_token107] = ACTIONS(23),
    [aux_sym_system_function_token108] = ACTIONS(23),
    [aux_sym_system_function_token109] = ACTIONS(23),
    [aux_sym_system_function_token110] = ACTIONS(23),
    [aux_sym_system_function_token111] = ACTIONS(23),
    [aux_sym_system_function_token112] = ACTIONS(23),
    [aux_sym_system_function_token113] = ACTIONS(23),
    [aux_sym_system_function_token114] = ACTIONS(23),
    [sym__string_function_identifier] = ACTIONS(25),
    [sym__numeric_function_identifier] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym_stringidentifier] = ACTIONS(35),
    [sym_numberidentifier] = ACTIONS(37),
    [sym__mat] = ACTIONS(39),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [21] = {
    [sym__expression] = STATE(118),
    [sym_unary_expression] = STATE(118),
    [sym_primary_expression] = STATE(118),
    [sym_call_expression] = STATE(95),
    [sym_system_function] = STATE(85),
    [sym_user_function] = STATE(85),
    [sym_template_string] = STATE(95),
    [sym_string] = STATE(95),
    [sym_parenthesized_expression] = STATE(95),
    [sym_forced_assignment_expression] = STATE(118),
    [sym__reference] = STATE(63),
    [sym_numberelement] = STATE(63),
    [sym_stringelement] = STATE(63),
    [sym_stringarray] = STATE(63),
    [sym_stringreference] = STATE(63),
    [sym_numberreference] = STATE(63),
    [sym_numberarray] = STATE(63),
    [sym_number] = STATE(95),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(17),
    [aux_sym_unary_expression_token1] = ACTIONS(19),
    [aux_sym_system_function_token1] = ACTIONS(21),
    [aux_sym_system_function_token2] = ACTIONS(21),
    [aux_sym_system_function_token3] = ACTIONS(21),
    [aux_sym_system_function_token4] = ACTIONS(21),
    [aux_sym_system_function_token5] = ACTIONS(21),
    [aux_sym_system_function_token6] = ACTIONS(21),
    [aux_sym_system_function_token7] = ACTIONS(21),
    [aux_sym_system_function_token8] = ACTIONS(21),
    [aux_sym_system_function_token9] = ACTIONS(21),
    [aux_sym_system_function_token10] = ACTIONS(21),
    [aux_sym_system_function_token11] = ACTIONS(21),
    [aux_sym_system_function_token12] = ACTIONS(21),
    [aux_sym_system_function_token13] = ACTIONS(21),
    [aux_sym_system_function_token14] = ACTIONS(21),
    [aux_sym_system_function_token15] = ACTIONS(21),
    [aux_sym_system_function_token16] = ACTIONS(21),
    [aux_sym_system_function_token17] = ACTIONS(21),
    [aux_sym_system_function_token18] = ACTIONS(21),
    [aux_sym_system_function_token19] = ACTIONS(21),
    [aux_sym_system_function_token20] = ACTIONS(21),
    [aux_sym_system_function_token21] = ACTIONS(21),
    [aux_sym_system_function_token22] = ACTIONS(21),
    [aux_sym_system_function_token23] = ACTIONS(21),
    [aux_sym_system_function_token24] = ACTIONS(21),
    [aux_sym_system_function_token25] = ACTIONS(21),
    [aux_sym_system_function_token26] = ACTIONS(21),
    [aux_sym_system_function_token27] = ACTIONS(21),
    [aux_sym_system_function_token28] = ACTIONS(21),
    [aux_sym_system_function_token29] = ACTIONS(21),
    [aux_sym_system_function_token30] = ACTIONS(21),
    [aux_sym_system_function_token31] = ACTIONS(21),
    [aux_sym_system_function_token32] = ACTIONS(21),
    [aux_sym_system_function_token33] = ACTIONS(21),
    [aux_sym_system_function_token34] = ACTIONS(21),
    [aux_sym_system_function_token35] = ACTIONS(21),
    [aux_sym_system_function_token36] = ACTIONS(21),
    [aux_sym_system_function_token37] = ACTIONS(21),
    [aux_sym_system_function_token38] = ACTIONS(21),
    [aux_sym_system_function_token39] = ACTIONS(21),
    [aux_sym_system_function_token40] = ACTIONS(21),
    [aux_sym_system_function_token41] = ACTIONS(21),
    [aux_sym_system_function_token42] = ACTIONS(21),
    [aux_sym_system_function_token43] = ACTIONS(21),
    [aux_sym_system_function_token44] = ACTIONS(21),
    [aux_sym_system_function_token45] = ACTIONS(21),
    [aux_sym_system_function_token46] = ACTIONS(21),
    [aux_sym_system_function_token47] = ACTIONS(21),
    [aux_sym_system_function_token48] = ACTIONS(21),
    [aux_sym_system_function_token49] = ACTIONS(21),
    [aux_sym_system_function_token50] = ACTIONS(21),
    [aux_sym_system_function_token51] = ACTIONS(21),
    [aux_sym_system_function_token52] = ACTIONS(21),
    [aux_sym_system_function_token53] = ACTIONS(21),
    [aux_sym_system_function_token54] = ACTIONS(21),
    [aux_sym_system_function_token55] = ACTIONS(21),
    [aux_sym_system_function_token56] = ACTIONS(21),
    [aux_sym_system_function_token57] = ACTIONS(21),
    [aux_sym_system_function_token58] = ACTIONS(21),
    [aux_sym_system_function_token59] = ACTIONS(21),
    [aux_sym_system_function_token60] = ACTIONS(21),
    [aux_sym_system_function_token61] = ACTIONS(21),
    [aux_sym_system_function_token62] = ACTIONS(21),
    [aux_sym_system_function_token63] = ACTIONS(21),
    [aux_sym_system_function_token64] = ACTIONS(21),
    [aux_sym_system_function_token65] = ACTIONS(21),
    [aux_sym_system_function_token66] = ACTIONS(21),
    [aux_sym_system_function_token67] = ACTIONS(21),
    [aux_sym_system_function_token68] = ACTIONS(21),
    [aux_sym_system_function_token69] = ACTIONS(21),
    [aux_sym_system_function_token70] = ACTIONS(21),
    [aux_sym_system_function_token71] = ACTIONS(21),
    [aux_sym_system_function_token72] = ACTIONS(21),
    [aux_sym_system_function_token73] = ACTIONS(21),
    [aux_sym_system_function_token74] = ACTIONS(21),
    [aux_sym_system_function_token75] = ACTIONS(21),
    [aux_sym_system_function_token76] = ACTIONS(23),
    [aux_sym_system_function_token77] = ACTIONS(23),
    [aux_sym_system_function_token78] = ACTIONS(23),
    [aux_sym_system_function_token79] = ACTIONS(23),
    [aux_sym_system_function_token80] = ACTIONS(23),
    [aux_sym_system_function_token81] = ACTIONS(23),
    [aux_sym_system_function_token82] = ACTIONS(23),
    [aux_sym_system_function_token83] = ACTIONS(23),
    [aux_sym_system_function_token84] = ACTIONS(23),
    [aux_sym_system_function_token85] = ACTIONS(23),
    [aux_sym_system_function_token86] = ACTIONS(23),
    [aux_sym_system_function_token87] = ACTIONS(23),
    [aux_sym_system_function_token88] = ACTIONS(23),
    [aux_sym_system_function_token89] = ACTIONS(23),
    [aux_sym_system_function_token90] = ACTIONS(23),
    [aux_sym_system_function_token91] = ACTIONS(23),
    [aux_sym_system_function_token92] = ACTIONS(23),
    [aux_sym_system_function_token93] = ACTIONS(23),
    [aux_sym_system_function_token94] = ACTIONS(23),
    [aux_sym_system_function_token95] = ACTIONS(23),
    [aux_sym_system_function_token96] = ACTIONS(23),
    [aux_sym_system_function_token97] = ACTIONS(23),
    [aux_sym_system_function_token98] = ACTIONS(23),
    [aux_sym_system_function_token99] = ACTIONS(23),
    [aux_sym_system_function_token100] = ACTIONS(23),
    [aux_sym_system_function_token101] = ACTIONS(23),
    [aux_sym_system_function_token102] = ACTIONS(23),
    [aux_sym_system_function_token103] = ACTIONS(23),
    [aux_sym_system_function_token104] = ACTIONS(23),
    [aux_sym_system_function_token105] = ACTIONS(23),
    [aux_sym_system_function_token106] = ACTIONS(23),
    [aux_sym_system_function_token107] = ACTIONS(23),
    [aux_sym_system_function_token108] = ACTIONS(23),
    [aux_sym_system_function_token109] = ACTIONS(23),
    [aux_sym_system_function_token110] = ACTIONS(23),
    [aux_sym_system_function_token111] = ACTIONS(23),
    [aux_sym_system_function_token112] = ACTIONS(23),
    [aux_sym_system_function_token113] = ACTIONS(23),
    [aux_sym_system_function_token114] = ACTIONS(23),
    [sym__string_function_identifier] = ACTIONS(25),
    [sym__numeric_function_identifier] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym_stringidentifier] = ACTIONS(35),
    [sym_numberidentifier] = ACTIONS(37),
    [sym__mat] = ACTIONS(39),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [22] = {
    [sym__expression] = STATE(98),
    [sym_unary_expression] = STATE(98),
    [sym_primary_expression] = STATE(98),
    [sym_call_expression] = STATE(95),
    [sym_system_function] = STATE(85),
    [sym_user_function] = STATE(85),
    [sym_template_string] = STATE(95),
    [sym_string] = STATE(95),
    [sym_parenthesized_expression] = STATE(95),
    [sym_forced_assignment_expression] = STATE(98),
    [sym__reference] = STATE(63),
    [sym_numberelement] = STATE(63),
    [sym_stringelement] = STATE(63),
    [sym_stringarray] = STATE(63),
    [sym_stringreference] = STATE(63),
    [sym_numberreference] = STATE(63),
    [sym_numberarray] = STATE(63),
    [sym_number] = STATE(95),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(17),
    [aux_sym_unary_expression_token1] = ACTIONS(19),
    [aux_sym_system_function_token1] = ACTIONS(21),
    [aux_sym_system_function_token2] = ACTIONS(21),
    [aux_sym_system_function_token3] = ACTIONS(21),
    [aux_sym_system_function_token4] = ACTIONS(21),
    [aux_sym_system_function_token5] = ACTIONS(21),
    [aux_sym_system_function_token6] = ACTIONS(21),
    [aux_sym_system_function_token7] = ACTIONS(21),
    [aux_sym_system_function_token8] = ACTIONS(21),
    [aux_sym_system_function_token9] = ACTIONS(21),
    [aux_sym_system_function_token10] = ACTIONS(21),
    [aux_sym_system_function_token11] = ACTIONS(21),
    [aux_sym_system_function_token12] = ACTIONS(21),
    [aux_sym_system_function_token13] = ACTIONS(21),
    [aux_sym_system_function_token14] = ACTIONS(21),
    [aux_sym_system_function_token15] = ACTIONS(21),
    [aux_sym_system_function_token16] = ACTIONS(21),
    [aux_sym_system_function_token17] = ACTIONS(21),
    [aux_sym_system_function_token18] = ACTIONS(21),
    [aux_sym_system_function_token19] = ACTIONS(21),
    [aux_sym_system_function_token20] = ACTIONS(21),
    [aux_sym_system_function_token21] = ACTIONS(21),
    [aux_sym_system_function_token22] = ACTIONS(21),
    [aux_sym_system_function_token23] = ACTIONS(21),
    [aux_sym_system_function_token24] = ACTIONS(21),
    [aux_sym_system_function_token25] = ACTIONS(21),
    [aux_sym_system_function_token26] = ACTIONS(21),
    [aux_sym_system_function_token27] = ACTIONS(21),
    [aux_sym_system_function_token28] = ACTIONS(21),
    [aux_sym_system_function_token29] = ACTIONS(21),
    [aux_sym_system_function_token30] = ACTIONS(21),
    [aux_sym_system_function_token31] = ACTIONS(21),
    [aux_sym_system_function_token32] = ACTIONS(21),
    [aux_sym_system_function_token33] = ACTIONS(21),
    [aux_sym_system_function_token34] = ACTIONS(21),
    [aux_sym_system_function_token35] = ACTIONS(21),
    [aux_sym_system_function_token36] = ACTIONS(21),
    [aux_sym_system_function_token37] = ACTIONS(21),
    [aux_sym_system_function_token38] = ACTIONS(21),
    [aux_sym_system_function_token39] = ACTIONS(21),
    [aux_sym_system_function_token40] = ACTIONS(21),
    [aux_sym_system_function_token41] = ACTIONS(21),
    [aux_sym_system_function_token42] = ACTIONS(21),
    [aux_sym_system_function_token43] = ACTIONS(21),
    [aux_sym_system_function_token44] = ACTIONS(21),
    [aux_sym_system_function_token45] = ACTIONS(21),
    [aux_sym_system_function_token46] = ACTIONS(21),
    [aux_sym_system_function_token47] = ACTIONS(21),
    [aux_sym_system_function_token48] = ACTIONS(21),
    [aux_sym_system_function_token49] = ACTIONS(21),
    [aux_sym_system_function_token50] = ACTIONS(21),
    [aux_sym_system_function_token51] = ACTIONS(21),
    [aux_sym_system_function_token52] = ACTIONS(21),
    [aux_sym_system_function_token53] = ACTIONS(21),
    [aux_sym_system_function_token54] = ACTIONS(21),
    [aux_sym_system_function_token55] = ACTIONS(21),
    [aux_sym_system_function_token56] = ACTIONS(21),
    [aux_sym_system_function_token57] = ACTIONS(21),
    [aux_sym_system_function_token58] = ACTIONS(21),
    [aux_sym_system_function_token59] = ACTIONS(21),
    [aux_sym_system_function_token60] = ACTIONS(21),
    [aux_sym_system_function_token61] = ACTIONS(21),
    [aux_sym_system_function_token62] = ACTIONS(21),
    [aux_sym_system_function_token63] = ACTIONS(21),
    [aux_sym_system_function_token64] = ACTIONS(21),
    [aux_sym_system_function_token65] = ACTIONS(21),
    [aux_sym_system_function_token66] = ACTIONS(21),
    [aux_sym_system_function_token67] = ACTIONS(21),
    [aux_sym_system_function_token68] = ACTIONS(21),
    [aux_sym_system_function_token69] = ACTIONS(21),
    [aux_sym_system_function_token70] = ACTIONS(21),
    [aux_sym_system_function_token71] = ACTIONS(21),
    [aux_sym_system_function_token72] = ACTIONS(21),
    [aux_sym_system_function_token73] = ACTIONS(21),
    [aux_sym_system_function_token74] = ACTIONS(21),
    [aux_sym_system_function_token75] = ACTIONS(21),
    [aux_sym_system_function_token76] = ACTIONS(23),
    [aux_sym_system_function_token77] = ACTIONS(23),
    [aux_sym_system_function_token78] = ACTIONS(23),
    [aux_sym_system_function_token79] = ACTIONS(23),
    [aux_sym_system_function_token80] = ACTIONS(23),
    [aux_sym_system_function_token81] = ACTIONS(23),
    [aux_sym_system_function_token82] = ACTIONS(23),
    [aux_sym_system_function_token83] = ACTIONS(23),
    [aux_sym_system_function_token84] = ACTIONS(23),
    [aux_sym_system_function_token85] = ACTIONS(23),
    [aux_sym_system_function_token86] = ACTIONS(23),
    [aux_sym_system_function_token87] = ACTIONS(23),
    [aux_sym_system_function_token88] = ACTIONS(23),
    [aux_sym_system_function_token89] = ACTIONS(23),
    [aux_sym_system_function_token90] = ACTIONS(23),
    [aux_sym_system_function_token91] = ACTIONS(23),
    [aux_sym_system_function_token92] = ACTIONS(23),
    [aux_sym_system_function_token93] = ACTIONS(23),
    [aux_sym_system_function_token94] = ACTIONS(23),
    [aux_sym_system_function_token95] = ACTIONS(23),
    [aux_sym_system_function_token96] = ACTIONS(23),
    [aux_sym_system_function_token97] = ACTIONS(23),
    [aux_sym_system_function_token98] = ACTIONS(23),
    [aux_sym_system_function_token99] = ACTIONS(23),
    [aux_sym_system_function_token100] = ACTIONS(23),
    [aux_sym_system_function_token101] = ACTIONS(23),
    [aux_sym_system_function_token102] = ACTIONS(23),
    [aux_sym_system_function_token103] = ACTIONS(23),
    [aux_sym_system_function_token104] = ACTIONS(23),
    [aux_sym_system_function_token105] = ACTIONS(23),
    [aux_sym_system_function_token106] = ACTIONS(23),
    [aux_sym_system_function_token107] = ACTIONS(23),
    [aux_sym_system_function_token108] = ACTIONS(23),
    [aux_sym_system_function_token109] = ACTIONS(23),
    [aux_sym_system_function_token110] = ACTIONS(23),
    [aux_sym_system_function_token111] = ACTIONS(23),
    [aux_sym_system_function_token112] = ACTIONS(23),
    [aux_sym_system_function_token113] = ACTIONS(23),
    [aux_sym_system_function_token114] = ACTIONS(23),
    [sym__string_function_identifier] = ACTIONS(25),
    [sym__numeric_function_identifier] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym_stringidentifier] = ACTIONS(35),
    [sym_numberidentifier] = ACTIONS(37),
    [sym__mat] = ACTIONS(39),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [23] = {
    [sym__expression] = STATE(197),
    [sym_unary_expression] = STATE(197),
    [sym_primary_expression] = STATE(197),
    [sym_call_expression] = STATE(95),
    [sym_system_function] = STATE(85),
    [sym_user_function] = STATE(85),
    [sym_template_string] = STATE(95),
    [sym_string] = STATE(95),
    [sym_parenthesized_expression] = STATE(95),
    [sym_forced_assignment_expression] = STATE(197),
    [sym__reference] = STATE(63),
    [sym_numberelement] = STATE(63),
    [sym_stringelement] = STATE(63),
    [sym_stringarray] = STATE(63),
    [sym_stringreference] = STATE(63),
    [sym_numberreference] = STATE(63),
    [sym_numberarray] = STATE(63),
    [sym_number] = STATE(95),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(17),
    [aux_sym_unary_expression_token1] = ACTIONS(19),
    [aux_sym_system_function_token1] = ACTIONS(21),
    [aux_sym_system_function_token2] = ACTIONS(21),
    [aux_sym_system_function_token3] = ACTIONS(21),
    [aux_sym_system_function_token4] = ACTIONS(21),
    [aux_sym_system_function_token5] = ACTIONS(21),
    [aux_sym_system_function_token6] = ACTIONS(21),
    [aux_sym_system_function_token7] = ACTIONS(21),
    [aux_sym_system_function_token8] = ACTIONS(21),
    [aux_sym_system_function_token9] = ACTIONS(21),
    [aux_sym_system_function_token10] = ACTIONS(21),
    [aux_sym_system_function_token11] = ACTIONS(21),
    [aux_sym_system_function_token12] = ACTIONS(21),
    [aux_sym_system_function_token13] = ACTIONS(21),
    [aux_sym_system_function_token14] = ACTIONS(21),
    [aux_sym_system_function_token15] = ACTIONS(21),
    [aux_sym_system_function_token16] = ACTIONS(21),
    [aux_sym_system_function_token17] = ACTIONS(21),
    [aux_sym_system_function_token18] = ACTIONS(21),
    [aux_sym_system_function_token19] = ACTIONS(21),
    [aux_sym_system_function_token20] = ACTIONS(21),
    [aux_sym_system_function_token21] = ACTIONS(21),
    [aux_sym_system_function_token22] = ACTIONS(21),
    [aux_sym_system_function_token23] = ACTIONS(21),
    [aux_sym_system_function_token24] = ACTIONS(21),
    [aux_sym_system_function_token25] = ACTIONS(21),
    [aux_sym_system_function_token26] = ACTIONS(21),
    [aux_sym_system_function_token27] = ACTIONS(21),
    [aux_sym_system_function_token28] = ACTIONS(21),
    [aux_sym_system_function_token29] = ACTIONS(21),
    [aux_sym_system_function_token30] = ACTIONS(21),
    [aux_sym_system_function_token31] = ACTIONS(21),
    [aux_sym_system_function_token32] = ACTIONS(21),
    [aux_sym_system_function_token33] = ACTIONS(21),
    [aux_sym_system_function_token34] = ACTIONS(21),
    [aux_sym_system_function_token35] = ACTIONS(21),
    [aux_sym_system_function_token36] = ACTIONS(21),
    [aux_sym_system_function_token37] = ACTIONS(21),
    [aux_sym_system_function_token38] = ACTIONS(21),
    [aux_sym_system_function_token39] = ACTIONS(21),
    [aux_sym_system_function_token40] = ACTIONS(21),
    [aux_sym_system_function_token41] = ACTIONS(21),
    [aux_sym_system_function_token42] = ACTIONS(21),
    [aux_sym_system_function_token43] = ACTIONS(21),
    [aux_sym_system_function_token44] = ACTIONS(21),
    [aux_sym_system_function_token45] = ACTIONS(21),
    [aux_sym_system_function_token46] = ACTIONS(21),
    [aux_sym_system_function_token47] = ACTIONS(21),
    [aux_sym_system_function_token48] = ACTIONS(21),
    [aux_sym_system_function_token49] = ACTIONS(21),
    [aux_sym_system_function_token50] = ACTIONS(21),
    [aux_sym_system_function_token51] = ACTIONS(21),
    [aux_sym_system_function_token52] = ACTIONS(21),
    [aux_sym_system_function_token53] = ACTIONS(21),
    [aux_sym_system_function_token54] = ACTIONS(21),
    [aux_sym_system_function_token55] = ACTIONS(21),
    [aux_sym_system_function_token56] = ACTIONS(21),
    [aux_sym_system_function_token57] = ACTIONS(21),
    [aux_sym_system_function_token58] = ACTIONS(21),
    [aux_sym_system_function_token59] = ACTIONS(21),
    [aux_sym_system_function_token60] = ACTIONS(21),
    [aux_sym_system_function_token61] = ACTIONS(21),
    [aux_sym_system_function_token62] = ACTIONS(21),
    [aux_sym_system_function_token63] = ACTIONS(21),
    [aux_sym_system_function_token64] = ACTIONS(21),
    [aux_sym_system_function_token65] = ACTIONS(21),
    [aux_sym_system_function_token66] = ACTIONS(21),
    [aux_sym_system_function_token67] = ACTIONS(21),
    [aux_sym_system_function_token68] = ACTIONS(21),
    [aux_sym_system_function_token69] = ACTIONS(21),
    [aux_sym_system_function_token70] = ACTIONS(21),
    [aux_sym_system_function_token71] = ACTIONS(21),
    [aux_sym_system_function_token72] = ACTIONS(21),
    [aux_sym_system_function_token73] = ACTIONS(21),
    [aux_sym_system_function_token74] = ACTIONS(21),
    [aux_sym_system_function_token75] = ACTIONS(21),
    [aux_sym_system_function_token76] = ACTIONS(23),
    [aux_sym_system_function_token77] = ACTIONS(23),
    [aux_sym_system_function_token78] = ACTIONS(23),
    [aux_sym_system_function_token79] = ACTIONS(23),
    [aux_sym_system_function_token80] = ACTIONS(23),
    [aux_sym_system_function_token81] = ACTIONS(23),
    [aux_sym_system_function_token82] = ACTIONS(23),
    [aux_sym_system_function_token83] = ACTIONS(23),
    [aux_sym_system_function_token84] = ACTIONS(23),
    [aux_sym_system_function_token85] = ACTIONS(23),
    [aux_sym_system_function_token86] = ACTIONS(23),
    [aux_sym_system_function_token87] = ACTIONS(23),
    [aux_sym_system_function_token88] = ACTIONS(23),
    [aux_sym_system_function_token89] = ACTIONS(23),
    [aux_sym_system_function_token90] = ACTIONS(23),
    [aux_sym_system_function_token91] = ACTIONS(23),
    [aux_sym_system_function_token92] = ACTIONS(23),
    [aux_sym_system_function_token93] = ACTIONS(23),
    [aux_sym_system_function_token94] = ACTIONS(23),
    [aux_sym_system_function_token95] = ACTIONS(23),
    [aux_sym_system_function_token96] = ACTIONS(23),
    [aux_sym_system_function_token97] = ACTIONS(23),
    [aux_sym_system_function_token98] = ACTIONS(23),
    [aux_sym_system_function_token99] = ACTIONS(23),
    [aux_sym_system_function_token100] = ACTIONS(23),
    [aux_sym_system_function_token101] = ACTIONS(23),
    [aux_sym_system_function_token102] = ACTIONS(23),
    [aux_sym_system_function_token103] = ACTIONS(23),
    [aux_sym_system_function_token104] = ACTIONS(23),
    [aux_sym_system_function_token105] = ACTIONS(23),
    [aux_sym_system_function_token106] = ACTIONS(23),
    [aux_sym_system_function_token107] = ACTIONS(23),
    [aux_sym_system_function_token108] = ACTIONS(23),
    [aux_sym_system_function_token109] = ACTIONS(23),
    [aux_sym_system_function_token110] = ACTIONS(23),
    [aux_sym_system_function_token111] = ACTIONS(23),
    [aux_sym_system_function_token112] = ACTIONS(23),
    [aux_sym_system_function_token113] = ACTIONS(23),
    [aux_sym_system_function_token114] = ACTIONS(23),
    [sym__string_function_identifier] = ACTIONS(25),
    [sym__numeric_function_identifier] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym_stringidentifier] = ACTIONS(35),
    [sym_numberidentifier] = ACTIONS(37),
    [sym__mat] = ACTIONS(39),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [24] = {
    [sym__expression] = STATE(189),
    [sym_unary_expression] = STATE(189),
    [sym_primary_expression] = STATE(189),
    [sym_call_expression] = STATE(95),
    [sym_system_function] = STATE(85),
    [sym_user_function] = STATE(85),
    [sym_template_string] = STATE(95),
    [sym_string] = STATE(95),
    [sym_parenthesized_expression] = STATE(95),
    [sym_forced_assignment_expression] = STATE(189),
    [sym__reference] = STATE(63),
    [sym_numberelement] = STATE(63),
    [sym_stringelement] = STATE(63),
    [sym_stringarray] = STATE(63),
    [sym_stringreference] = STATE(63),
    [sym_numberreference] = STATE(63),
    [sym_numberarray] = STATE(63),
    [sym_number] = STATE(95),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(17),
    [aux_sym_unary_expression_token1] = ACTIONS(19),
    [aux_sym_system_function_token1] = ACTIONS(21),
    [aux_sym_system_function_token2] = ACTIONS(21),
    [aux_sym_system_function_token3] = ACTIONS(21),
    [aux_sym_system_function_token4] = ACTIONS(21),
    [aux_sym_system_function_token5] = ACTIONS(21),
    [aux_sym_system_function_token6] = ACTIONS(21),
    [aux_sym_system_function_token7] = ACTIONS(21),
    [aux_sym_system_function_token8] = ACTIONS(21),
    [aux_sym_system_function_token9] = ACTIONS(21),
    [aux_sym_system_function_token10] = ACTIONS(21),
    [aux_sym_system_function_token11] = ACTIONS(21),
    [aux_sym_system_function_token12] = ACTIONS(21),
    [aux_sym_system_function_token13] = ACTIONS(21),
    [aux_sym_system_function_token14] = ACTIONS(21),
    [aux_sym_system_function_token15] = ACTIONS(21),
    [aux_sym_system_function_token16] = ACTIONS(21),
    [aux_sym_system_function_token17] = ACTIONS(21),
    [aux_sym_system_function_token18] = ACTIONS(21),
    [aux_sym_system_function_token19] = ACTIONS(21),
    [aux_sym_system_function_token20] = ACTIONS(21),
    [aux_sym_system_function_token21] = ACTIONS(21),
    [aux_sym_system_function_token22] = ACTIONS(21),
    [aux_sym_system_function_token23] = ACTIONS(21),
    [aux_sym_system_function_token24] = ACTIONS(21),
    [aux_sym_system_function_token25] = ACTIONS(21),
    [aux_sym_system_function_token26] = ACTIONS(21),
    [aux_sym_system_function_token27] = ACTIONS(21),
    [aux_sym_system_function_token28] = ACTIONS(21),
    [aux_sym_system_function_token29] = ACTIONS(21),
    [aux_sym_system_function_token30] = ACTIONS(21),
    [aux_sym_system_function_token31] = ACTIONS(21),
    [aux_sym_system_function_token32] = ACTIONS(21),
    [aux_sym_system_function_token33] = ACTIONS(21),
    [aux_sym_system_function_token34] = ACTIONS(21),
    [aux_sym_system_function_token35] = ACTIONS(21),
    [aux_sym_system_function_token36] = ACTIONS(21),
    [aux_sym_system_function_token37] = ACTIONS(21),
    [aux_sym_system_function_token38] = ACTIONS(21),
    [aux_sym_system_function_token39] = ACTIONS(21),
    [aux_sym_system_function_token40] = ACTIONS(21),
    [aux_sym_system_function_token41] = ACTIONS(21),
    [aux_sym_system_function_token42] = ACTIONS(21),
    [aux_sym_system_function_token43] = ACTIONS(21),
    [aux_sym_system_function_token44] = ACTIONS(21),
    [aux_sym_system_function_token45] = ACTIONS(21),
    [aux_sym_system_function_token46] = ACTIONS(21),
    [aux_sym_system_function_token47] = ACTIONS(21),
    [aux_sym_system_function_token48] = ACTIONS(21),
    [aux_sym_system_function_token49] = ACTIONS(21),
    [aux_sym_system_function_token50] = ACTIONS(21),
    [aux_sym_system_function_token51] = ACTIONS(21),
    [aux_sym_system_function_token52] = ACTIONS(21),
    [aux_sym_system_function_token53] = ACTIONS(21),
    [aux_sym_system_function_token54] = ACTIONS(21),
    [aux_sym_system_function_token55] = ACTIONS(21),
    [aux_sym_system_function_token56] = ACTIONS(21),
    [aux_sym_system_function_token57] = ACTIONS(21),
    [aux_sym_system_function_token58] = ACTIONS(21),
    [aux_sym_system_function_token59] = ACTIONS(21),
    [aux_sym_system_function_token60] = ACTIONS(21),
    [aux_sym_system_function_token61] = ACTIONS(21),
    [aux_sym_system_function_token62] = ACTIONS(21),
    [aux_sym_system_function_token63] = ACTIONS(21),
    [aux_sym_system_function_token64] = ACTIONS(21),
    [aux_sym_system_function_token65] = ACTIONS(21),
    [aux_sym_system_function_token66] = ACTIONS(21),
    [aux_sym_system_function_token67] = ACTIONS(21),
    [aux_sym_system_function_token68] = ACTIONS(21),
    [aux_sym_system_function_token69] = ACTIONS(21),
    [aux_sym_system_function_token70] = ACTIONS(21),
    [aux_sym_system_function_token71] = ACTIONS(21),
    [aux_sym_system_function_token72] = ACTIONS(21),
    [aux_sym_system_function_token73] = ACTIONS(21),
    [aux_sym_system_function_token74] = ACTIONS(21),
    [aux_sym_system_function_token75] = ACTIONS(21),
    [aux_sym_system_function_token76] = ACTIONS(23),
    [aux_sym_system_function_token77] = ACTIONS(23),
    [aux_sym_system_function_token78] = ACTIONS(23),
    [aux_sym_system_function_token79] = ACTIONS(23),
    [aux_sym_system_function_token80] = ACTIONS(23),
    [aux_sym_system_function_token81] = ACTIONS(23),
    [aux_sym_system_function_token82] = ACTIONS(23),
    [aux_sym_system_function_token83] = ACTIONS(23),
    [aux_sym_system_function_token84] = ACTIONS(23),
    [aux_sym_system_function_token85] = ACTIONS(23),
    [aux_sym_system_function_token86] = ACTIONS(23),
    [aux_sym_system_function_token87] = ACTIONS(23),
    [aux_sym_system_function_token88] = ACTIONS(23),
    [aux_sym_system_function_token89] = ACTIONS(23),
    [aux_sym_system_function_token90] = ACTIONS(23),
    [aux_sym_system_function_token91] = ACTIONS(23),
    [aux_sym_system_function_token92] = ACTIONS(23),
    [aux_sym_system_function_token93] = ACTIONS(23),
    [aux_sym_system_function_token94] = ACTIONS(23),
    [aux_sym_system_function_token95] = ACTIONS(23),
    [aux_sym_system_function_token96] = ACTIONS(23),
    [aux_sym_system_function_token97] = ACTIONS(23),
    [aux_sym_system_function_token98] = ACTIONS(23),
    [aux_sym_system_function_token99] = ACTIONS(23),
    [aux_sym_system_function_token100] = ACTIONS(23),
    [aux_sym_system_function_token101] = ACTIONS(23),
    [aux_sym_system_function_token102] = ACTIONS(23),
    [aux_sym_system_function_token103] = ACTIONS(23),
    [aux_sym_system_function_token104] = ACTIONS(23),
    [aux_sym_system_function_token105] = ACTIONS(23),
    [aux_sym_system_function_token106] = ACTIONS(23),
    [aux_sym_system_function_token107] = ACTIONS(23),
    [aux_sym_system_function_token108] = ACTIONS(23),
    [aux_sym_system_function_token109] = ACTIONS(23),
    [aux_sym_system_function_token110] = ACTIONS(23),
    [aux_sym_system_function_token111] = ACTIONS(23),
    [aux_sym_system_function_token112] = ACTIONS(23),
    [aux_sym_system_function_token113] = ACTIONS(23),
    [aux_sym_system_function_token114] = ACTIONS(23),
    [sym__string_function_identifier] = ACTIONS(25),
    [sym__numeric_function_identifier] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym_stringidentifier] = ACTIONS(35),
    [sym_numberidentifier] = ACTIONS(37),
    [sym__mat] = ACTIONS(39),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [25] = {
    [sym__expression] = STATE(168),
    [sym_unary_expression] = STATE(168),
    [sym_primary_expression] = STATE(168),
    [sym_call_expression] = STATE(95),
    [sym_system_function] = STATE(85),
    [sym_user_function] = STATE(85),
    [sym_template_string] = STATE(95),
    [sym_string] = STATE(95),
    [sym_parenthesized_expression] = STATE(95),
    [sym_forced_assignment_expression] = STATE(168),
    [sym__reference] = STATE(63),
    [sym_numberelement] = STATE(63),
    [sym_stringelement] = STATE(63),
    [sym_stringarray] = STATE(63),
    [sym_stringreference] = STATE(63),
    [sym_numberreference] = STATE(63),
    [sym_numberarray] = STATE(63),
    [sym_number] = STATE(95),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(17),
    [aux_sym_unary_expression_token1] = ACTIONS(19),
    [aux_sym_system_function_token1] = ACTIONS(21),
    [aux_sym_system_function_token2] = ACTIONS(21),
    [aux_sym_system_function_token3] = ACTIONS(21),
    [aux_sym_system_function_token4] = ACTIONS(21),
    [aux_sym_system_function_token5] = ACTIONS(21),
    [aux_sym_system_function_token6] = ACTIONS(21),
    [aux_sym_system_function_token7] = ACTIONS(21),
    [aux_sym_system_function_token8] = ACTIONS(21),
    [aux_sym_system_function_token9] = ACTIONS(21),
    [aux_sym_system_function_token10] = ACTIONS(21),
    [aux_sym_system_function_token11] = ACTIONS(21),
    [aux_sym_system_function_token12] = ACTIONS(21),
    [aux_sym_system_function_token13] = ACTIONS(21),
    [aux_sym_system_function_token14] = ACTIONS(21),
    [aux_sym_system_function_token15] = ACTIONS(21),
    [aux_sym_system_function_token16] = ACTIONS(21),
    [aux_sym_system_function_token17] = ACTIONS(21),
    [aux_sym_system_function_token18] = ACTIONS(21),
    [aux_sym_system_function_token19] = ACTIONS(21),
    [aux_sym_system_function_token20] = ACTIONS(21),
    [aux_sym_system_function_token21] = ACTIONS(21),
    [aux_sym_system_function_token22] = ACTIONS(21),
    [aux_sym_system_function_token23] = ACTIONS(21),
    [aux_sym_system_function_token24] = ACTIONS(21),
    [aux_sym_system_function_token25] = ACTIONS(21),
    [aux_sym_system_function_token26] = ACTIONS(21),
    [aux_sym_system_function_token27] = ACTIONS(21),
    [aux_sym_system_function_token28] = ACTIONS(21),
    [aux_sym_system_function_token29] = ACTIONS(21),
    [aux_sym_system_function_token30] = ACTIONS(21),
    [aux_sym_system_function_token31] = ACTIONS(21),
    [aux_sym_system_function_token32] = ACTIONS(21),
    [aux_sym_system_function_token33] = ACTIONS(21),
    [aux_sym_system_function_token34] = ACTIONS(21),
    [aux_sym_system_function_token35] = ACTIONS(21),
    [aux_sym_system_function_token36] = ACTIONS(21),
    [aux_sym_system_function_token37] = ACTIONS(21),
    [aux_sym_system_function_token38] = ACTIONS(21),
    [aux_sym_system_function_token39] = ACTIONS(21),
    [aux_sym_system_function_token40] = ACTIONS(21),
    [aux_sym_system_function_token41] = ACTIONS(21),
    [aux_sym_system_function_token42] = ACTIONS(21),
    [aux_sym_system_function_token43] = ACTIONS(21),
    [aux_sym_system_function_token44] = ACTIONS(21),
    [aux_sym_system_function_token45] = ACTIONS(21),
    [aux_sym_system_function_token46] = ACTIONS(21),
    [aux_sym_system_function_token47] = ACTIONS(21),
    [aux_sym_system_function_token48] = ACTIONS(21),
    [aux_sym_system_function_token49] = ACTIONS(21),
    [aux_sym_system_function_token50] = ACTIONS(21),
    [aux_sym_system_function_token51] = ACTIONS(21),
    [aux_sym_system_function_token52] = ACTIONS(21),
    [aux_sym_system_function_token53] = ACTIONS(21),
    [aux_sym_system_function_token54] = ACTIONS(21),
    [aux_sym_system_function_token55] = ACTIONS(21),
    [aux_sym_system_function_token56] = ACTIONS(21),
    [aux_sym_system_function_token57] = ACTIONS(21),
    [aux_sym_system_function_token58] = ACTIONS(21),
    [aux_sym_system_function_token59] = ACTIONS(21),
    [aux_sym_system_function_token60] = ACTIONS(21),
    [aux_sym_system_function_token61] = ACTIONS(21),
    [aux_sym_system_function_token62] = ACTIONS(21),
    [aux_sym_system_function_token63] = ACTIONS(21),
    [aux_sym_system_function_token64] = ACTIONS(21),
    [aux_sym_system_function_token65] = ACTIONS(21),
    [aux_sym_system_function_token66] = ACTIONS(21),
    [aux_sym_system_function_token67] = ACTIONS(21),
    [aux_sym_system_function_token68] = ACTIONS(21),
    [aux_sym_system_function_token69] = ACTIONS(21),
    [aux_sym_system_function_token70] = ACTIONS(21),
    [aux_sym_system_function_token71] = ACTIONS(21),
    [aux_sym_system_function_token72] = ACTIONS(21),
    [aux_sym_system_function_token73] = ACTIONS(21),
    [aux_sym_system_function_token74] = ACTIONS(21),
    [aux_sym_system_function_token75] = ACTIONS(21),
    [aux_sym_system_function_token76] = ACTIONS(23),
    [aux_sym_system_function_token77] = ACTIONS(23),
    [aux_sym_system_function_token78] = ACTIONS(23),
    [aux_sym_system_function_token79] = ACTIONS(23),
    [aux_sym_system_function_token80] = ACTIONS(23),
    [aux_sym_system_function_token81] = ACTIONS(23),
    [aux_sym_system_function_token82] = ACTIONS(23),
    [aux_sym_system_function_token83] = ACTIONS(23),
    [aux_sym_system_function_token84] = ACTIONS(23),
    [aux_sym_system_function_token85] = ACTIONS(23),
    [aux_sym_system_function_token86] = ACTIONS(23),
    [aux_sym_system_function_token87] = ACTIONS(23),
    [aux_sym_system_function_token88] = ACTIONS(23),
    [aux_sym_system_function_token89] = ACTIONS(23),
    [aux_sym_system_function_token90] = ACTIONS(23),
    [aux_sym_system_function_token91] = ACTIONS(23),
    [aux_sym_system_function_token92] = ACTIONS(23),
    [aux_sym_system_function_token93] = ACTIONS(23),
    [aux_sym_system_function_token94] = ACTIONS(23),
    [aux_sym_system_function_token95] = ACTIONS(23),
    [aux_sym_system_function_token96] = ACTIONS(23),
    [aux_sym_system_function_token97] = ACTIONS(23),
    [aux_sym_system_function_token98] = ACTIONS(23),
    [aux_sym_system_function_token99] = ACTIONS(23),
    [aux_sym_system_function_token100] = ACTIONS(23),
    [aux_sym_system_function_token101] = ACTIONS(23),
    [aux_sym_system_function_token102] = ACTIONS(23),
    [aux_sym_system_function_token103] = ACTIONS(23),
    [aux_sym_system_function_token104] = ACTIONS(23),
    [aux_sym_system_function_token105] = ACTIONS(23),
    [aux_sym_system_function_token106] = ACTIONS(23),
    [aux_sym_system_function_token107] = ACTIONS(23),
    [aux_sym_system_function_token108] = ACTIONS(23),
    [aux_sym_system_function_token109] = ACTIONS(23),
    [aux_sym_system_function_token110] = ACTIONS(23),
    [aux_sym_system_function_token111] = ACTIONS(23),
    [aux_sym_system_function_token112] = ACTIONS(23),
    [aux_sym_system_function_token113] = ACTIONS(23),
    [aux_sym_system_function_token114] = ACTIONS(23),
    [sym__string_function_identifier] = ACTIONS(25),
    [sym__numeric_function_identifier] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym_stringidentifier] = ACTIONS(35),
    [sym_numberidentifier] = ACTIONS(37),
    [sym__mat] = ACTIONS(39),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [26] = {
    [sym__expression] = STATE(176),
    [sym_unary_expression] = STATE(176),
    [sym_primary_expression] = STATE(176),
    [sym_call_expression] = STATE(95),
    [sym_system_function] = STATE(85),
    [sym_user_function] = STATE(85),
    [sym_template_string] = STATE(95),
    [sym_string] = STATE(95),
    [sym_parenthesized_expression] = STATE(95),
    [sym_forced_assignment_expression] = STATE(176),
    [sym__reference] = STATE(63),
    [sym_numberelement] = STATE(63),
    [sym_stringelement] = STATE(63),
    [sym_stringarray] = STATE(63),
    [sym_stringreference] = STATE(63),
    [sym_numberreference] = STATE(63),
    [sym_numberarray] = STATE(63),
    [sym_number] = STATE(95),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(17),
    [aux_sym_unary_expression_token1] = ACTIONS(19),
    [aux_sym_system_function_token1] = ACTIONS(21),
    [aux_sym_system_function_token2] = ACTIONS(21),
    [aux_sym_system_function_token3] = ACTIONS(21),
    [aux_sym_system_function_token4] = ACTIONS(21),
    [aux_sym_system_function_token5] = ACTIONS(21),
    [aux_sym_system_function_token6] = ACTIONS(21),
    [aux_sym_system_function_token7] = ACTIONS(21),
    [aux_sym_system_function_token8] = ACTIONS(21),
    [aux_sym_system_function_token9] = ACTIONS(21),
    [aux_sym_system_function_token10] = ACTIONS(21),
    [aux_sym_system_function_token11] = ACTIONS(21),
    [aux_sym_system_function_token12] = ACTIONS(21),
    [aux_sym_system_function_token13] = ACTIONS(21),
    [aux_sym_system_function_token14] = ACTIONS(21),
    [aux_sym_system_function_token15] = ACTIONS(21),
    [aux_sym_system_function_token16] = ACTIONS(21),
    [aux_sym_system_function_token17] = ACTIONS(21),
    [aux_sym_system_function_token18] = ACTIONS(21),
    [aux_sym_system_function_token19] = ACTIONS(21),
    [aux_sym_system_function_token20] = ACTIONS(21),
    [aux_sym_system_function_token21] = ACTIONS(21),
    [aux_sym_system_function_token22] = ACTIONS(21),
    [aux_sym_system_function_token23] = ACTIONS(21),
    [aux_sym_system_function_token24] = ACTIONS(21),
    [aux_sym_system_function_token25] = ACTIONS(21),
    [aux_sym_system_function_token26] = ACTIONS(21),
    [aux_sym_system_function_token27] = ACTIONS(21),
    [aux_sym_system_function_token28] = ACTIONS(21),
    [aux_sym_system_function_token29] = ACTIONS(21),
    [aux_sym_system_function_token30] = ACTIONS(21),
    [aux_sym_system_function_token31] = ACTIONS(21),
    [aux_sym_system_function_token32] = ACTIONS(21),
    [aux_sym_system_function_token33] = ACTIONS(21),
    [aux_sym_system_function_token34] = ACTIONS(21),
    [aux_sym_system_function_token35] = ACTIONS(21),
    [aux_sym_system_function_token36] = ACTIONS(21),
    [aux_sym_system_function_token37] = ACTIONS(21),
    [aux_sym_system_function_token38] = ACTIONS(21),
    [aux_sym_system_function_token39] = ACTIONS(21),
    [aux_sym_system_function_token40] = ACTIONS(21),
    [aux_sym_system_function_token41] = ACTIONS(21),
    [aux_sym_system_function_token42] = ACTIONS(21),
    [aux_sym_system_function_token43] = ACTIONS(21),
    [aux_sym_system_function_token44] = ACTIONS(21),
    [aux_sym_system_function_token45] = ACTIONS(21),
    [aux_sym_system_function_token46] = ACTIONS(21),
    [aux_sym_system_function_token47] = ACTIONS(21),
    [aux_sym_system_function_token48] = ACTIONS(21),
    [aux_sym_system_function_token49] = ACTIONS(21),
    [aux_sym_system_function_token50] = ACTIONS(21),
    [aux_sym_system_function_token51] = ACTIONS(21),
    [aux_sym_system_function_token52] = ACTIONS(21),
    [aux_sym_system_function_token53] = ACTIONS(21),
    [aux_sym_system_function_token54] = ACTIONS(21),
    [aux_sym_system_function_token55] = ACTIONS(21),
    [aux_sym_system_function_token56] = ACTIONS(21),
    [aux_sym_system_function_token57] = ACTIONS(21),
    [aux_sym_system_function_token58] = ACTIONS(21),
    [aux_sym_system_function_token59] = ACTIONS(21),
    [aux_sym_system_function_token60] = ACTIONS(21),
    [aux_sym_system_function_token61] = ACTIONS(21),
    [aux_sym_system_function_token62] = ACTIONS(21),
    [aux_sym_system_function_token63] = ACTIONS(21),
    [aux_sym_system_function_token64] = ACTIONS(21),
    [aux_sym_system_function_token65] = ACTIONS(21),
    [aux_sym_system_function_token66] = ACTIONS(21),
    [aux_sym_system_function_token67] = ACTIONS(21),
    [aux_sym_system_function_token68] = ACTIONS(21),
    [aux_sym_system_function_token69] = ACTIONS(21),
    [aux_sym_system_function_token70] = ACTIONS(21),
    [aux_sym_system_function_token71] = ACTIONS(21),
    [aux_sym_system_function_token72] = ACTIONS(21),
    [aux_sym_system_function_token73] = ACTIONS(21),
    [aux_sym_system_function_token74] = ACTIONS(21),
    [aux_sym_system_function_token75] = ACTIONS(21),
    [aux_sym_system_function_token76] = ACTIONS(23),
    [aux_sym_system_function_token77] = ACTIONS(23),
    [aux_sym_system_function_token78] = ACTIONS(23),
    [aux_sym_system_function_token79] = ACTIONS(23),
    [aux_sym_system_function_token80] = ACTIONS(23),
    [aux_sym_system_function_token81] = ACTIONS(23),
    [aux_sym_system_function_token82] = ACTIONS(23),
    [aux_sym_system_function_token83] = ACTIONS(23),
    [aux_sym_system_function_token84] = ACTIONS(23),
    [aux_sym_system_function_token85] = ACTIONS(23),
    [aux_sym_system_function_token86] = ACTIONS(23),
    [aux_sym_system_function_token87] = ACTIONS(23),
    [aux_sym_system_function_token88] = ACTIONS(23),
    [aux_sym_system_function_token89] = ACTIONS(23),
    [aux_sym_system_function_token90] = ACTIONS(23),
    [aux_sym_system_function_token91] = ACTIONS(23),
    [aux_sym_system_function_token92] = ACTIONS(23),
    [aux_sym_system_function_token93] = ACTIONS(23),
    [aux_sym_system_function_token94] = ACTIONS(23),
    [aux_sym_system_function_token95] = ACTIONS(23),
    [aux_sym_system_function_token96] = ACTIONS(23),
    [aux_sym_system_function_token97] = ACTIONS(23),
    [aux_sym_system_function_token98] = ACTIONS(23),
    [aux_sym_system_function_token99] = ACTIONS(23),
    [aux_sym_system_function_token100] = ACTIONS(23),
    [aux_sym_system_function_token101] = ACTIONS(23),
    [aux_sym_system_function_token102] = ACTIONS(23),
    [aux_sym_system_function_token103] = ACTIONS(23),
    [aux_sym_system_function_token104] = ACTIONS(23),
    [aux_sym_system_function_token105] = ACTIONS(23),
    [aux_sym_system_function_token106] = ACTIONS(23),
    [aux_sym_system_function_token107] = ACTIONS(23),
    [aux_sym_system_function_token108] = ACTIONS(23),
    [aux_sym_system_function_token109] = ACTIONS(23),
    [aux_sym_system_function_token110] = ACTIONS(23),
    [aux_sym_system_function_token111] = ACTIONS(23),
    [aux_sym_system_function_token112] = ACTIONS(23),
    [aux_sym_system_function_token113] = ACTIONS(23),
    [aux_sym_system_function_token114] = ACTIONS(23),
    [sym__string_function_identifier] = ACTIONS(25),
    [sym__numeric_function_identifier] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym_stringidentifier] = ACTIONS(35),
    [sym_numberidentifier] = ACTIONS(37),
    [sym__mat] = ACTIONS(39),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [27] = {
    [sym__expression] = STATE(143),
    [sym_unary_expression] = STATE(143),
    [sym_primary_expression] = STATE(143),
    [sym_call_expression] = STATE(124),
    [sym_system_function] = STATE(108),
    [sym_user_function] = STATE(108),
    [sym_template_string] = STATE(124),
    [sym_string] = STATE(124),
    [sym_parenthesized_expression] = STATE(124),
    [sym_forced_assignment_expression] = STATE(143),
    [sym__reference] = STATE(74),
    [sym_numberelement] = STATE(74),
    [sym_stringelement] = STATE(74),
    [sym_stringarray] = STATE(74),
    [sym_stringreference] = STATE(74),
    [sym_numberreference] = STATE(74),
    [sym_numberarray] = STATE(74),
    [sym_number] = STATE(124),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(45),
    [aux_sym_unary_expression_token1] = ACTIONS(47),
    [aux_sym_system_function_token1] = ACTIONS(49),
    [aux_sym_system_function_token2] = ACTIONS(49),
    [aux_sym_system_function_token3] = ACTIONS(49),
    [aux_sym_system_function_token4] = ACTIONS(49),
    [aux_sym_system_function_token5] = ACTIONS(49),
    [aux_sym_system_function_token6] = ACTIONS(49),
    [aux_sym_system_function_token7] = ACTIONS(49),
    [aux_sym_system_function_token8] = ACTIONS(49),
    [aux_sym_system_function_token9] = ACTIONS(49),
    [aux_sym_system_function_token10] = ACTIONS(49),
    [aux_sym_system_function_token11] = ACTIONS(49),
    [aux_sym_system_function_token12] = ACTIONS(49),
    [aux_sym_system_function_token13] = ACTIONS(49),
    [aux_sym_system_function_token14] = ACTIONS(49),
    [aux_sym_system_function_token15] = ACTIONS(49),
    [aux_sym_system_function_token16] = ACTIONS(49),
    [aux_sym_system_function_token17] = ACTIONS(49),
    [aux_sym_system_function_token18] = ACTIONS(49),
    [aux_sym_system_function_token19] = ACTIONS(49),
    [aux_sym_system_function_token20] = ACTIONS(49),
    [aux_sym_system_function_token21] = ACTIONS(49),
    [aux_sym_system_function_token22] = ACTIONS(49),
    [aux_sym_system_function_token23] = ACTIONS(49),
    [aux_sym_system_function_token24] = ACTIONS(49),
    [aux_sym_system_function_token25] = ACTIONS(49),
    [aux_sym_system_function_token26] = ACTIONS(49),
    [aux_sym_system_function_token27] = ACTIONS(49),
    [aux_sym_system_function_token28] = ACTIONS(49),
    [aux_sym_system_function_token29] = ACTIONS(49),
    [aux_sym_system_function_token30] = ACTIONS(49),
    [aux_sym_system_function_token31] = ACTIONS(49),
    [aux_sym_system_function_token32] = ACTIONS(49),
    [aux_sym_system_function_token33] = ACTIONS(49),
    [aux_sym_system_function_token34] = ACTIONS(49),
    [aux_sym_system_function_token35] = ACTIONS(49),
    [aux_sym_system_function_token36] = ACTIONS(49),
    [aux_sym_system_function_token37] = ACTIONS(49),
    [aux_sym_system_function_token38] = ACTIONS(49),
    [aux_sym_system_function_token39] = ACTIONS(49),
    [aux_sym_system_function_token40] = ACTIONS(49),
    [aux_sym_system_function_token41] = ACTIONS(49),
    [aux_sym_system_function_token42] = ACTIONS(49),
    [aux_sym_system_function_token43] = ACTIONS(49),
    [aux_sym_system_function_token44] = ACTIONS(49),
    [aux_sym_system_function_token45] = ACTIONS(49),
    [aux_sym_system_function_token46] = ACTIONS(49),
    [aux_sym_system_function_token47] = ACTIONS(49),
    [aux_sym_system_function_token48] = ACTIONS(49),
    [aux_sym_system_function_token49] = ACTIONS(49),
    [aux_sym_system_function_token50] = ACTIONS(49),
    [aux_sym_system_function_token51] = ACTIONS(49),
    [aux_sym_system_function_token52] = ACTIONS(49),
    [aux_sym_system_function_token53] = ACTIONS(49),
    [aux_sym_system_function_token54] = ACTIONS(49),
    [aux_sym_system_function_token55] = ACTIONS(49),
    [aux_sym_system_function_token56] = ACTIONS(49),
    [aux_sym_system_function_token57] = ACTIONS(49),
    [aux_sym_system_function_token58] = ACTIONS(49),
    [aux_sym_system_function_token59] = ACTIONS(49),
    [aux_sym_system_function_token60] = ACTIONS(49),
    [aux_sym_system_function_token61] = ACTIONS(49),
    [aux_sym_system_function_token62] = ACTIONS(49),
    [aux_sym_system_function_token63] = ACTIONS(49),
    [aux_sym_system_function_token64] = ACTIONS(49),
    [aux_sym_system_function_token65] = ACTIONS(49),
    [aux_sym_system_function_token66] = ACTIONS(49),
    [aux_sym_system_function_token67] = ACTIONS(49),
    [aux_sym_system_function_token68] = ACTIONS(49),
    [aux_sym_system_function_token69] = ACTIONS(49),
    [aux_sym_system_function_token70] = ACTIONS(49),
    [aux_sym_system_function_token71] = ACTIONS(49),
    [aux_sym_system_function_token72] = ACTIONS(49),
    [aux_sym_system_function_token73] = ACTIONS(49),
    [aux_sym_system_function_token74] = ACTIONS(49),
    [aux_sym_system_function_token75] = ACTIONS(49),
    [aux_sym_system_function_token76] = ACTIONS(51),
    [aux_sym_system_function_token77] = ACTIONS(51),
    [aux_sym_system_function_token78] = ACTIONS(51),
    [aux_sym_system_function_token79] = ACTIONS(51),
    [aux_sym_system_function_token80] = ACTIONS(51),
    [aux_sym_system_function_token81] = ACTIONS(51),
    [aux_sym_system_function_token82] = ACTIONS(51),
    [aux_sym_system_function_token83] = ACTIONS(51),
    [aux_sym_system_function_token84] = ACTIONS(51),
    [aux_sym_system_function_token85] = ACTIONS(51),
    [aux_sym_system_function_token86] = ACTIONS(51),
    [aux_sym_system_function_token87] = ACTIONS(51),
    [aux_sym_system_function_token88] = ACTIONS(51),
    [aux_sym_system_function_token89] = ACTIONS(51),
    [aux_sym_system_function_token90] = ACTIONS(51),
    [aux_sym_system_function_token91] = ACTIONS(51),
    [aux_sym_system_function_token92] = ACTIONS(51),
    [aux_sym_system_function_token93] = ACTIONS(51),
    [aux_sym_system_function_token94] = ACTIONS(51),
    [aux_sym_system_function_token95] = ACTIONS(51),
    [aux_sym_system_function_token96] = ACTIONS(51),
    [aux_sym_system_function_token97] = ACTIONS(51),
    [aux_sym_system_function_token98] = ACTIONS(51),
    [aux_sym_system_function_token99] = ACTIONS(51),
    [aux_sym_system_function_token100] = ACTIONS(51),
    [aux_sym_system_function_token101] = ACTIONS(51),
    [aux_sym_system_function_token102] = ACTIONS(51),
    [aux_sym_system_function_token103] = ACTIONS(51),
    [aux_sym_system_function_token104] = ACTIONS(51),
    [aux_sym_system_function_token105] = ACTIONS(51),
    [aux_sym_system_function_token106] = ACTIONS(51),
    [aux_sym_system_function_token107] = ACTIONS(51),
    [aux_sym_system_function_token108] = ACTIONS(51),
    [aux_sym_system_function_token109] = ACTIONS(51),
    [aux_sym_system_function_token110] = ACTIONS(51),
    [aux_sym_system_function_token111] = ACTIONS(51),
    [aux_sym_system_function_token112] = ACTIONS(51),
    [aux_sym_system_function_token113] = ACTIONS(51),
    [aux_sym_system_function_token114] = ACTIONS(51),
    [sym__string_function_identifier] = ACTIONS(53),
    [sym__numeric_function_identifier] = ACTIONS(55),
    [anon_sym_BQUOTE] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [sym_stringidentifier] = ACTIONS(63),
    [sym_numberidentifier] = ACTIONS(65),
    [sym__mat] = ACTIONS(67),
    [aux_sym_number_token1] = ACTIONS(69),
  },
  [28] = {
    [sym__expression] = STATE(206),
    [sym_unary_expression] = STATE(206),
    [sym_primary_expression] = STATE(206),
    [sym_call_expression] = STATE(95),
    [sym_system_function] = STATE(85),
    [sym_user_function] = STATE(85),
    [sym_template_string] = STATE(95),
    [sym_string] = STATE(95),
    [sym_parenthesized_expression] = STATE(95),
    [sym_forced_assignment_expression] = STATE(206),
    [sym__reference] = STATE(63),
    [sym_numberelement] = STATE(63),
    [sym_stringelement] = STATE(63),
    [sym_stringarray] = STATE(63),
    [sym_stringreference] = STATE(63),
    [sym_numberreference] = STATE(63),
    [sym_numberarray] = STATE(63),
    [sym_number] = STATE(95),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_TILDE] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(17),
    [aux_sym_unary_expression_token1] = ACTIONS(19),
    [aux_sym_system_function_token1] = ACTIONS(21),
    [aux_sym_system_function_token2] = ACTIONS(21),
    [aux_sym_system_function_token3] = ACTIONS(21),
    [aux_sym_system_function_token4] = ACTIONS(21),
    [aux_sym_system_function_token5] = ACTIONS(21),
    [aux_sym_system_function_token6] = ACTIONS(21),
    [aux_sym_system_function_token7] = ACTIONS(21),
    [aux_sym_system_function_token8] = ACTIONS(21),
    [aux_sym_system_function_token9] = ACTIONS(21),
    [aux_sym_system_function_token10] = ACTIONS(21),
    [aux_sym_system_function_token11] = ACTIONS(21),
    [aux_sym_system_function_token12] = ACTIONS(21),
    [aux_sym_system_function_token13] = ACTIONS(21),
    [aux_sym_system_function_token14] = ACTIONS(21),
    [aux_sym_system_function_token15] = ACTIONS(21),
    [aux_sym_system_function_token16] = ACTIONS(21),
    [aux_sym_system_function_token17] = ACTIONS(21),
    [aux_sym_system_function_token18] = ACTIONS(21),
    [aux_sym_system_function_token19] = ACTIONS(21),
    [aux_sym_system_function_token20] = ACTIONS(21),
    [aux_sym_system_function_token21] = ACTIONS(21),
    [aux_sym_system_function_token22] = ACTIONS(21),
    [aux_sym_system_function_token23] = ACTIONS(21),
    [aux_sym_system_function_token24] = ACTIONS(21),
    [aux_sym_system_function_token25] = ACTIONS(21),
    [aux_sym_system_function_token26] = ACTIONS(21),
    [aux_sym_system_function_token27] = ACTIONS(21),
    [aux_sym_system_function_token28] = ACTIONS(21),
    [aux_sym_system_function_token29] = ACTIONS(21),
    [aux_sym_system_function_token30] = ACTIONS(21),
    [aux_sym_system_function_token31] = ACTIONS(21),
    [aux_sym_system_function_token32] = ACTIONS(21),
    [aux_sym_system_function_token33] = ACTIONS(21),
    [aux_sym_system_function_token34] = ACTIONS(21),
    [aux_sym_system_function_token35] = ACTIONS(21),
    [aux_sym_system_function_token36] = ACTIONS(21),
    [aux_sym_system_function_token37] = ACTIONS(21),
    [aux_sym_system_function_token38] = ACTIONS(21),
    [aux_sym_system_function_token39] = ACTIONS(21),
    [aux_sym_system_function_token40] = ACTIONS(21),
    [aux_sym_system_function_token41] = ACTIONS(21),
    [aux_sym_system_function_token42] = ACTIONS(21),
    [aux_sym_system_function_token43] = ACTIONS(21),
    [aux_sym_system_function_token44] = ACTIONS(21),
    [aux_sym_system_function_token45] = ACTIONS(21),
    [aux_sym_system_function_token46] = ACTIONS(21),
    [aux_sym_system_function_token47] = ACTIONS(21),
    [aux_sym_system_function_token48] = ACTIONS(21),
    [aux_sym_system_function_token49] = ACTIONS(21),
    [aux_sym_system_function_token50] = ACTIONS(21),
    [aux_sym_system_function_token51] = ACTIONS(21),
    [aux_sym_system_function_token52] = ACTIONS(21),
    [aux_sym_system_function_token53] = ACTIONS(21),
    [aux_sym_system_function_token54] = ACTIONS(21),
    [aux_sym_system_function_token55] = ACTIONS(21),
    [aux_sym_system_function_token56] = ACTIONS(21),
    [aux_sym_system_function_token57] = ACTIONS(21),
    [aux_sym_system_function_token58] = ACTIONS(21),
    [aux_sym_system_function_token59] = ACTIONS(21),
    [aux_sym_system_function_token60] = ACTIONS(21),
    [aux_sym_system_function_token61] = ACTIONS(21),
    [aux_sym_system_function_token62] = ACTIONS(21),
    [aux_sym_system_function_token63] = ACTIONS(21),
    [aux_sym_system_function_token64] = ACTIONS(21),
    [aux_sym_system_function_token65] = ACTIONS(21),
    [aux_sym_system_function_token66] = ACTIONS(21),
    [aux_sym_system_function_token67] = ACTIONS(21),
    [aux_sym_system_function_token68] = ACTIONS(21),
    [aux_sym_system_function_token69] = ACTIONS(21),
    [aux_sym_system_function_token70] = ACTIONS(21),
    [aux_sym_system_function_token71] = ACTIONS(21),
    [aux_sym_system_function_token72] = ACTIONS(21),
    [aux_sym_system_function_token73] = ACTIONS(21),
    [aux_sym_system_function_token74] = ACTIONS(21),
    [aux_sym_system_function_token75] = ACTIONS(21),
    [aux_sym_system_function_token76] = ACTIONS(23),
    [aux_sym_system_function_token77] = ACTIONS(23),
    [aux_sym_system_function_token78] = ACTIONS(23),
    [aux_sym_system_function_token79] = ACTIONS(23),
    [aux_sym_system_function_token80] = ACTIONS(23),
    [aux_sym_system_function_token81] = ACTIONS(23),
    [aux_sym_system_function_token82] = ACTIONS(23),
    [aux_sym_system_function_token83] = ACTIONS(23),
    [aux_sym_system_function_token84] = ACTIONS(23),
    [aux_sym_system_function_token85] = ACTIONS(23),
    [aux_sym_system_function_token86] = ACTIONS(23),
    [aux_sym_system_function_token87] = ACTIONS(23),
    [aux_sym_system_function_token88] = ACTIONS(23),
    [aux_sym_system_function_token89] = ACTIONS(23),
    [aux_sym_system_function_token90] = ACTIONS(23),
    [aux_sym_system_function_token91] = ACTIONS(23),
    [aux_sym_system_function_token92] = ACTIONS(23),
    [aux_sym_system_function_token93] = ACTIONS(23),
    [aux_sym_system_function_token94] = ACTIONS(23),
    [aux_sym_system_function_token95] = ACTIONS(23),
    [aux_sym_system_function_token96] = ACTIONS(23),
    [aux_sym_system_function_token97] = ACTIONS(23),
    [aux_sym_system_function_token98] = ACTIONS(23),
    [aux_sym_system_function_token99] = ACTIONS(23),
    [aux_sym_system_function_token100] = ACTIONS(23),
    [aux_sym_system_function_token101] = ACTIONS(23),
    [aux_sym_system_function_token102] = ACTIONS(23),
    [aux_sym_system_function_token103] = ACTIONS(23),
    [aux_sym_system_function_token104] = ACTIONS(23),
    [aux_sym_system_function_token105] = ACTIONS(23),
    [aux_sym_system_function_token106] = ACTIONS(23),
    [aux_sym_system_function_token107] = ACTIONS(23),
    [aux_sym_system_function_token108] = ACTIONS(23),
    [aux_sym_system_function_token109] = ACTIONS(23),
    [aux_sym_system_function_token110] = ACTIONS(23),
    [aux_sym_system_function_token111] = ACTIONS(23),
    [aux_sym_system_function_token112] = ACTIONS(23),
    [aux_sym_system_function_token113] = ACTIONS(23),
    [aux_sym_system_function_token114] = ACTIONS(23),
    [sym__string_function_identifier] = ACTIONS(25),
    [sym__numeric_function_identifier] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [sym_stringidentifier] = ACTIONS(35),
    [sym_numberidentifier] = ACTIONS(37),
    [sym__mat] = ACTIONS(39),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [29] = {
    [sym__expression] = STATE(115),
    [sym_unary_expression] = STATE(115),
    [sym_primary_expression] = STATE(115),
    [sym_call_expression] = STATE(124),
    [sym_system_function] = STATE(108),
    [sym_user_function] = STATE(108),
    [sym_template_string] = STATE(124),
    [sym_string] = STATE(124),
    [sym_parenthesized_expression] = STATE(124),
    [sym_forced_assignment_expression] = STATE(115),
    [sym__reference] = STATE(74),
    [sym_numberelement] = STATE(74),
    [sym_stringelement] = STATE(74),
    [sym_stringarray] = STATE(74),
    [sym_stringreference] = STATE(74),
    [sym_numberreference] = STATE(74),
    [sym_numberarray] = STATE(74),
    [sym_number] = STATE(124),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(45),
    [aux_sym_unary_expression_token1] = ACTIONS(47),
    [aux_sym_system_function_token1] = ACTIONS(49),
    [aux_sym_system_function_token2] = ACTIONS(49),
    [aux_sym_system_function_token3] = ACTIONS(49),
    [aux_sym_system_function_token4] = ACTIONS(49),
    [aux_sym_system_function_token5] = ACTIONS(49),
    [aux_sym_system_function_token6] = ACTIONS(49),
    [aux_sym_system_function_token7] = ACTIONS(49),
    [aux_sym_system_function_token8] = ACTIONS(49),
    [aux_sym_system_function_token9] = ACTIONS(49),
    [aux_sym_system_function_token10] = ACTIONS(49),
    [aux_sym_system_function_token11] = ACTIONS(49),
    [aux_sym_system_function_token12] = ACTIONS(49),
    [aux_sym_system_function_token13] = ACTIONS(49),
    [aux_sym_system_function_token14] = ACTIONS(49),
    [aux_sym_system_function_token15] = ACTIONS(49),
    [aux_sym_system_function_token16] = ACTIONS(49),
    [aux_sym_system_function_token17] = ACTIONS(49),
    [aux_sym_system_function_token18] = ACTIONS(49),
    [aux_sym_system_function_token19] = ACTIONS(49),
    [aux_sym_system_function_token20] = ACTIONS(49),
    [aux_sym_system_function_token21] = ACTIONS(49),
    [aux_sym_system_function_token22] = ACTIONS(49),
    [aux_sym_system_function_token23] = ACTIONS(49),
    [aux_sym_system_function_token24] = ACTIONS(49),
    [aux_sym_system_function_token25] = ACTIONS(49),
    [aux_sym_system_function_token26] = ACTIONS(49),
    [aux_sym_system_function_token27] = ACTIONS(49),
    [aux_sym_system_function_token28] = ACTIONS(49),
    [aux_sym_system_function_token29] = ACTIONS(49),
    [aux_sym_system_function_token30] = ACTIONS(49),
    [aux_sym_system_function_token31] = ACTIONS(49),
    [aux_sym_system_function_token32] = ACTIONS(49),
    [aux_sym_system_function_token33] = ACTIONS(49),
    [aux_sym_system_function_token34] = ACTIONS(49),
    [aux_sym_system_function_token35] = ACTIONS(49),
    [aux_sym_system_function_token36] = ACTIONS(49),
    [aux_sym_system_function_token37] = ACTIONS(49),
    [aux_sym_system_function_token38] = ACTIONS(49),
    [aux_sym_system_function_token39] = ACTIONS(49),
    [aux_sym_system_function_token40] = ACTIONS(49),
    [aux_sym_system_function_token41] = ACTIONS(49),
    [aux_sym_system_function_token42] = ACTIONS(49),
    [aux_sym_system_function_token43] = ACTIONS(49),
    [aux_sym_system_function_token44] = ACTIONS(49),
    [aux_sym_system_function_token45] = ACTIONS(49),
    [aux_sym_system_function_token46] = ACTIONS(49),
    [aux_sym_system_function_token47] = ACTIONS(49),
    [aux_sym_system_function_token48] = ACTIONS(49),
    [aux_sym_system_function_token49] = ACTIONS(49),
    [aux_sym_system_function_token50] = ACTIONS(49),
    [aux_sym_system_function_token51] = ACTIONS(49),
    [aux_sym_system_function_token52] = ACTIONS(49),
    [aux_sym_system_function_token53] = ACTIONS(49),
    [aux_sym_system_function_token54] = ACTIONS(49),
    [aux_sym_system_function_token55] = ACTIONS(49),
    [aux_sym_system_function_token56] = ACTIONS(49),
    [aux_sym_system_function_token57] = ACTIONS(49),
    [aux_sym_system_function_token58] = ACTIONS(49),
    [aux_sym_system_function_token59] = ACTIONS(49),
    [aux_sym_system_function_token60] = ACTIONS(49),
    [aux_sym_system_function_token61] = ACTIONS(49),
    [aux_sym_system_function_token62] = ACTIONS(49),
    [aux_sym_system_function_token63] = ACTIONS(49),
    [aux_sym_system_function_token64] = ACTIONS(49),
    [aux_sym_system_function_token65] = ACTIONS(49),
    [aux_sym_system_function_token66] = ACTIONS(49),
    [aux_sym_system_function_token67] = ACTIONS(49),
    [aux_sym_system_function_token68] = ACTIONS(49),
    [aux_sym_system_function_token69] = ACTIONS(49),
    [aux_sym_system_function_token70] = ACTIONS(49),
    [aux_sym_system_function_token71] = ACTIONS(49),
    [aux_sym_system_function_token72] = ACTIONS(49),
    [aux_sym_system_function_token73] = ACTIONS(49),
    [aux_sym_system_function_token74] = ACTIONS(49),
    [aux_sym_system_function_token75] = ACTIONS(49),
    [aux_sym_system_function_token76] = ACTIONS(51),
    [aux_sym_system_function_token77] = ACTIONS(51),
    [aux_sym_system_function_token78] = ACTIONS(51),
    [aux_sym_system_function_token79] = ACTIONS(51),
    [aux_sym_system_function_token80] = ACTIONS(51),
    [aux_sym_system_function_token81] = ACTIONS(51),
    [aux_sym_system_function_token82] = ACTIONS(51),
    [aux_sym_system_function_token83] = ACTIONS(51),
    [aux_sym_system_function_token84] = ACTIONS(51),
    [aux_sym_system_function_token85] = ACTIONS(51),
    [aux_sym_system_function_token86] = ACTIONS(51),
    [aux_sym_system_function_token87] = ACTIONS(51),
    [aux_sym_system_function_token88] = ACTIONS(51),
    [aux_sym_system_function_token89] = ACTIONS(51),
    [aux_sym_system_function_token90] = ACTIONS(51),
    [aux_sym_system_function_token91] = ACTIONS(51),
    [aux_sym_system_function_token92] = ACTIONS(51),
    [aux_sym_system_function_token93] = ACTIONS(51),
    [aux_sym_system_function_token94] = ACTIONS(51),
    [aux_sym_system_function_token95] = ACTIONS(51),
    [aux_sym_system_function_token96] = ACTIONS(51),
    [aux_sym_system_function_token97] = ACTIONS(51),
    [aux_sym_system_function_token98] = ACTIONS(51),
    [aux_sym_system_function_token99] = ACTIONS(51),
    [aux_sym_system_function_token100] = ACTIONS(51),
    [aux_sym_system_function_token101] = ACTIONS(51),
    [aux_sym_system_function_token102] = ACTIONS(51),
    [aux_sym_system_function_token103] = ACTIONS(51),
    [aux_sym_system_function_token104] = ACTIONS(51),
    [aux_sym_system_function_token105] = ACTIONS(51),
    [aux_sym_system_function_token106] = ACTIONS(51),
    [aux_sym_system_function_token107] = ACTIONS(51),
    [aux_sym_system_function_token108] = ACTIONS(51),
    [aux_sym_system_function_token109] = ACTIONS(51),
    [aux_sym_system_function_token110] = ACTIONS(51),
    [aux_sym_system_function_token111] = ACTIONS(51),
    [aux_sym_system_function_token112] = ACTIONS(51),
    [aux_sym_system_function_token113] = ACTIONS(51),
    [aux_sym_system_function_token114] = ACTIONS(51),
    [sym__string_function_identifier] = ACTIONS(53),
    [sym__numeric_function_identifier] = ACTIONS(55),
    [anon_sym_BQUOTE] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [sym_stringidentifier] = ACTIONS(63),
    [sym_numberidentifier] = ACTIONS(65),
    [sym__mat] = ACTIONS(67),
    [aux_sym_number_token1] = ACTIONS(69),
  },
  [30] = {
    [sym__expression] = STATE(117),
    [sym_unary_expression] = STATE(117),
    [sym_primary_expression] = STATE(117),
    [sym_call_expression] = STATE(124),
    [sym_system_function] = STATE(108),
    [sym_user_function] = STATE(108),
    [sym_template_string] = STATE(124),
    [sym_string] = STATE(124),
    [sym_parenthesized_expression] = STATE(124),
    [sym_forced_assignment_expression] = STATE(117),
    [sym__reference] = STATE(74),
    [sym_numberelement] = STATE(74),
    [sym_stringelement] = STATE(74),
    [sym_stringarray] = STATE(74),
    [sym_stringreference] = STATE(74),
    [sym_numberreference] = STATE(74),
    [sym_numberarray] = STATE(74),
    [sym_number] = STATE(124),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(45),
    [aux_sym_unary_expression_token1] = ACTIONS(47),
    [aux_sym_system_function_token1] = ACTIONS(49),
    [aux_sym_system_function_token2] = ACTIONS(49),
    [aux_sym_system_function_token3] = ACTIONS(49),
    [aux_sym_system_function_token4] = ACTIONS(49),
    [aux_sym_system_function_token5] = ACTIONS(49),
    [aux_sym_system_function_token6] = ACTIONS(49),
    [aux_sym_system_function_token7] = ACTIONS(49),
    [aux_sym_system_function_token8] = ACTIONS(49),
    [aux_sym_system_function_token9] = ACTIONS(49),
    [aux_sym_system_function_token10] = ACTIONS(49),
    [aux_sym_system_function_token11] = ACTIONS(49),
    [aux_sym_system_function_token12] = ACTIONS(49),
    [aux_sym_system_function_token13] = ACTIONS(49),
    [aux_sym_system_function_token14] = ACTIONS(49),
    [aux_sym_system_function_token15] = ACTIONS(49),
    [aux_sym_system_function_token16] = ACTIONS(49),
    [aux_sym_system_function_token17] = ACTIONS(49),
    [aux_sym_system_function_token18] = ACTIONS(49),
    [aux_sym_system_function_token19] = ACTIONS(49),
    [aux_sym_system_function_token20] = ACTIONS(49),
    [aux_sym_system_function_token21] = ACTIONS(49),
    [aux_sym_system_function_token22] = ACTIONS(49),
    [aux_sym_system_function_token23] = ACTIONS(49),
    [aux_sym_system_function_token24] = ACTIONS(49),
    [aux_sym_system_function_token25] = ACTIONS(49),
    [aux_sym_system_function_token26] = ACTIONS(49),
    [aux_sym_system_function_token27] = ACTIONS(49),
    [aux_sym_system_function_token28] = ACTIONS(49),
    [aux_sym_system_function_token29] = ACTIONS(49),
    [aux_sym_system_function_token30] = ACTIONS(49),
    [aux_sym_system_function_token31] = ACTIONS(49),
    [aux_sym_system_function_token32] = ACTIONS(49),
    [aux_sym_system_function_token33] = ACTIONS(49),
    [aux_sym_system_function_token34] = ACTIONS(49),
    [aux_sym_system_function_token35] = ACTIONS(49),
    [aux_sym_system_function_token36] = ACTIONS(49),
    [aux_sym_system_function_token37] = ACTIONS(49),
    [aux_sym_system_function_token38] = ACTIONS(49),
    [aux_sym_system_function_token39] = ACTIONS(49),
    [aux_sym_system_function_token40] = ACTIONS(49),
    [aux_sym_system_function_token41] = ACTIONS(49),
    [aux_sym_system_function_token42] = ACTIONS(49),
    [aux_sym_system_function_token43] = ACTIONS(49),
    [aux_sym_system_function_token44] = ACTIONS(49),
    [aux_sym_system_function_token45] = ACTIONS(49),
    [aux_sym_system_function_token46] = ACTIONS(49),
    [aux_sym_system_function_token47] = ACTIONS(49),
    [aux_sym_system_function_token48] = ACTIONS(49),
    [aux_sym_system_function_token49] = ACTIONS(49),
    [aux_sym_system_function_token50] = ACTIONS(49),
    [aux_sym_system_function_token51] = ACTIONS(49),
    [aux_sym_system_function_token52] = ACTIONS(49),
    [aux_sym_system_function_token53] = ACTIONS(49),
    [aux_sym_system_function_token54] = ACTIONS(49),
    [aux_sym_system_function_token55] = ACTIONS(49),
    [aux_sym_system_function_token56] = ACTIONS(49),
    [aux_sym_system_function_token57] = ACTIONS(49),
    [aux_sym_system_function_token58] = ACTIONS(49),
    [aux_sym_system_function_token59] = ACTIONS(49),
    [aux_sym_system_function_token60] = ACTIONS(49),
    [aux_sym_system_function_token61] = ACTIONS(49),
    [aux_sym_system_function_token62] = ACTIONS(49),
    [aux_sym_system_function_token63] = ACTIONS(49),
    [aux_sym_system_function_token64] = ACTIONS(49),
    [aux_sym_system_function_token65] = ACTIONS(49),
    [aux_sym_system_function_token66] = ACTIONS(49),
    [aux_sym_system_function_token67] = ACTIONS(49),
    [aux_sym_system_function_token68] = ACTIONS(49),
    [aux_sym_system_function_token69] = ACTIONS(49),
    [aux_sym_system_function_token70] = ACTIONS(49),
    [aux_sym_system_function_token71] = ACTIONS(49),
    [aux_sym_system_function_token72] = ACTIONS(49),
    [aux_sym_system_function_token73] = ACTIONS(49),
    [aux_sym_system_function_token74] = ACTIONS(49),
    [aux_sym_system_function_token75] = ACTIONS(49),
    [aux_sym_system_function_token76] = ACTIONS(51),
    [aux_sym_system_function_token77] = ACTIONS(51),
    [aux_sym_system_function_token78] = ACTIONS(51),
    [aux_sym_system_function_token79] = ACTIONS(51),
    [aux_sym_system_function_token80] = ACTIONS(51),
    [aux_sym_system_function_token81] = ACTIONS(51),
    [aux_sym_system_function_token82] = ACTIONS(51),
    [aux_sym_system_function_token83] = ACTIONS(51),
    [aux_sym_system_function_token84] = ACTIONS(51),
    [aux_sym_system_function_token85] = ACTIONS(51),
    [aux_sym_system_function_token86] = ACTIONS(51),
    [aux_sym_system_function_token87] = ACTIONS(51),
    [aux_sym_system_function_token88] = ACTIONS(51),
    [aux_sym_system_function_token89] = ACTIONS(51),
    [aux_sym_system_function_token90] = ACTIONS(51),
    [aux_sym_system_function_token91] = ACTIONS(51),
    [aux_sym_system_function_token92] = ACTIONS(51),
    [aux_sym_system_function_token93] = ACTIONS(51),
    [aux_sym_system_function_token94] = ACTIONS(51),
    [aux_sym_system_function_token95] = ACTIONS(51),
    [aux_sym_system_function_token96] = ACTIONS(51),
    [aux_sym_system_function_token97] = ACTIONS(51),
    [aux_sym_system_function_token98] = ACTIONS(51),
    [aux_sym_system_function_token99] = ACTIONS(51),
    [aux_sym_system_function_token100] = ACTIONS(51),
    [aux_sym_system_function_token101] = ACTIONS(51),
    [aux_sym_system_function_token102] = ACTIONS(51),
    [aux_sym_system_function_token103] = ACTIONS(51),
    [aux_sym_system_function_token104] = ACTIONS(51),
    [aux_sym_system_function_token105] = ACTIONS(51),
    [aux_sym_system_function_token106] = ACTIONS(51),
    [aux_sym_system_function_token107] = ACTIONS(51),
    [aux_sym_system_function_token108] = ACTIONS(51),
    [aux_sym_system_function_token109] = ACTIONS(51),
    [aux_sym_system_function_token110] = ACTIONS(51),
    [aux_sym_system_function_token111] = ACTIONS(51),
    [aux_sym_system_function_token112] = ACTIONS(51),
    [aux_sym_system_function_token113] = ACTIONS(51),
    [aux_sym_system_function_token114] = ACTIONS(51),
    [sym__string_function_identifier] = ACTIONS(53),
    [sym__numeric_function_identifier] = ACTIONS(55),
    [anon_sym_BQUOTE] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [sym_stringidentifier] = ACTIONS(63),
    [sym_numberidentifier] = ACTIONS(65),
    [sym__mat] = ACTIONS(67),
    [aux_sym_number_token1] = ACTIONS(69),
  },
  [31] = {
    [sym__expression] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_primary_expression] = STATE(121),
    [sym_call_expression] = STATE(124),
    [sym_system_function] = STATE(108),
    [sym_user_function] = STATE(108),
    [sym_template_string] = STATE(124),
    [sym_string] = STATE(124),
    [sym_parenthesized_expression] = STATE(124),
    [sym_forced_assignment_expression] = STATE(121),
    [sym__reference] = STATE(74),
    [sym_numberelement] = STATE(74),
    [sym_stringelement] = STATE(74),
    [sym_stringarray] = STATE(74),
    [sym_stringreference] = STATE(74),
    [sym_numberreference] = STATE(74),
    [sym_numberarray] = STATE(74),
    [sym_number] = STATE(124),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_TILDE] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_PLUS] = ACTIONS(45),
    [aux_sym_unary_expression_token1] = ACTIONS(47),
    [aux_sym_system_function_token1] = ACTIONS(49),
    [aux_sym_system_function_token2] = ACTIONS(49),
    [aux_sym_system_function_token3] = ACTIONS(49),
    [aux_sym_system_function_token4] = ACTIONS(49),
    [aux_sym_system_function_token5] = ACTIONS(49),
    [aux_sym_system_function_token6] = ACTIONS(49),
    [aux_sym_system_function_token7] = ACTIONS(49),
    [aux_sym_system_function_token8] = ACTIONS(49),
    [aux_sym_system_function_token9] = ACTIONS(49),
    [aux_sym_system_function_token10] = ACTIONS(49),
    [aux_sym_system_function_token11] = ACTIONS(49),
    [aux_sym_system_function_token12] = ACTIONS(49),
    [aux_sym_system_function_token13] = ACTIONS(49),
    [aux_sym_system_function_token14] = ACTIONS(49),
    [aux_sym_system_function_token15] = ACTIONS(49),
    [aux_sym_system_function_token16] = ACTIONS(49),
    [aux_sym_system_function_token17] = ACTIONS(49),
    [aux_sym_system_function_token18] = ACTIONS(49),
    [aux_sym_system_function_token19] = ACTIONS(49),
    [aux_sym_system_function_token20] = ACTIONS(49),
    [aux_sym_system_function_token21] = ACTIONS(49),
    [aux_sym_system_function_token22] = ACTIONS(49),
    [aux_sym_system_function_token23] = ACTIONS(49),
    [aux_sym_system_function_token24] = ACTIONS(49),
    [aux_sym_system_function_token25] = ACTIONS(49),
    [aux_sym_system_function_token26] = ACTIONS(49),
    [aux_sym_system_function_token27] = ACTIONS(49),
    [aux_sym_system_function_token28] = ACTIONS(49),
    [aux_sym_system_function_token29] = ACTIONS(49),
    [aux_sym_system_function_token30] = ACTIONS(49),
    [aux_sym_system_function_token31] = ACTIONS(49),
    [aux_sym_system_function_token32] = ACTIONS(49),
    [aux_sym_system_function_token33] = ACTIONS(49),
    [aux_sym_system_function_token34] = ACTIONS(49),
    [aux_sym_system_function_token35] = ACTIONS(49),
    [aux_sym_system_function_token36] = ACTIONS(49),
    [aux_sym_system_function_token37] = ACTIONS(49),
    [aux_sym_system_function_token38] = ACTIONS(49),
    [aux_sym_system_function_token39] = ACTIONS(49),
    [aux_sym_system_function_token40] = ACTIONS(49),
    [aux_sym_system_function_token41] = ACTIONS(49),
    [aux_sym_system_function_token42] = ACTIONS(49),
    [aux_sym_system_function_token43] = ACTIONS(49),
    [aux_sym_system_function_token44] = ACTIONS(49),
    [aux_sym_system_function_token45] = ACTIONS(49),
    [aux_sym_system_function_token46] = ACTIONS(49),
    [aux_sym_system_function_token47] = ACTIONS(49),
    [aux_sym_system_function_token48] = ACTIONS(49),
    [aux_sym_system_function_token49] = ACTIONS(49),
    [aux_sym_system_function_token50] = ACTIONS(49),
    [aux_sym_system_function_token51] = ACTIONS(49),
    [aux_sym_system_function_token52] = ACTIONS(49),
    [aux_sym_system_function_token53] = ACTIONS(49),
    [aux_sym_system_function_token54] = ACTIONS(49),
    [aux_sym_system_function_token55] = ACTIONS(49),
    [aux_sym_system_function_token56] = ACTIONS(49),
    [aux_sym_system_function_token57] = ACTIONS(49),
    [aux_sym_system_function_token58] = ACTIONS(49),
    [aux_sym_system_function_token59] = ACTIONS(49),
    [aux_sym_system_function_token60] = ACTIONS(49),
    [aux_sym_system_function_token61] = ACTIONS(49),
    [aux_sym_system_function_token62] = ACTIONS(49),
    [aux_sym_system_function_token63] = ACTIONS(49),
    [aux_sym_system_function_token64] = ACTIONS(49),
    [aux_sym_system_function_token65] = ACTIONS(49),
    [aux_sym_system_function_token66] = ACTIONS(49),
    [aux_sym_system_function_token67] = ACTIONS(49),
    [aux_sym_system_function_token68] = ACTIONS(49),
    [aux_sym_system_function_token69] = ACTIONS(49),
    [aux_sym_system_function_token70] = ACTIONS(49),
    [aux_sym_system_function_token71] = ACTIONS(49),
    [aux_sym_system_function_token72] = ACTIONS(49),
    [aux_sym_system_function_token73] = ACTIONS(49),
    [aux_sym_system_function_token74] = ACTIONS(49),
    [aux_sym_system_function_token75] = ACTIONS(49),
    [aux_sym_system_function_token76] = ACTIONS(51),
    [aux_sym_system_function_token77] = ACTIONS(51),
    [aux_sym_system_function_token78] = ACTIONS(51),
    [aux_sym_system_function_token79] = ACTIONS(51),
    [aux_sym_system_function_token80] = ACTIONS(51),
    [aux_sym_system_function_token81] = ACTIONS(51),
    [aux_sym_system_function_token82] = ACTIONS(51),
    [aux_sym_system_function_token83] = ACTIONS(51),
    [aux_sym_system_function_token84] = ACTIONS(51),
    [aux_sym_system_function_token85] = ACTIONS(51),
    [aux_sym_system_function_token86] = ACTIONS(51),
    [aux_sym_system_function_token87] = ACTIONS(51),
    [aux_sym_system_function_token88] = ACTIONS(51),
    [aux_sym_system_function_token89] = ACTIONS(51),
    [aux_sym_system_function_token90] = ACTIONS(51),
    [aux_sym_system_function_token91] = ACTIONS(51),
    [aux_sym_system_function_token92] = ACTIONS(51),
    [aux_sym_system_function_token93] = ACTIONS(51),
    [aux_sym_system_function_token94] = ACTIONS(51),
    [aux_sym_system_function_token95] = ACTIONS(51),
    [aux_sym_system_function_token96] = ACTIONS(51),
    [aux_sym_system_function_token97] = ACTIONS(51),
    [aux_sym_system_function_token98] = ACTIONS(51),
    [aux_sym_system_function_token99] = ACTIONS(51),
    [aux_sym_system_function_token100] = ACTIONS(51),
    [aux_sym_system_function_token101] = ACTIONS(51),
    [aux_sym_system_function_token102] = ACTIONS(51),
    [aux_sym_system_function_token103] = ACTIONS(51),
    [aux_sym_system_function_token104] = ACTIONS(51),
    [aux_sym_system_function_token105] = ACTIONS(51),
    [aux_sym_system_function_token106] = ACTIONS(51),
    [aux_sym_system_function_token107] = ACTIONS(51),
    [aux_sym_system_function_token108] = ACTIONS(51),
    [aux_sym_system_function_token109] = ACTIONS(51),
    [aux_sym_system_function_token110] = ACTIONS(51),
    [aux_sym_system_function_token111] = ACTIONS(51),
    [aux_sym_system_function_token112] = ACTIONS(51),
    [aux_sym_system_function_token113] = ACTIONS(51),
    [aux_sym_system_function_token114] = ACTIONS(51),
    [sym__string_function_identifier] = ACTIONS(53),
    [sym__numeric_function_identifier] = ACTIONS(55),
    [anon_sym_BQUOTE] = ACTIONS(57),
    [anon_sym_DQUOTE] = ACTIONS(59),
    [anon_sym_SQUOTE] = ACTIONS(61),
    [sym_stringidentifier] = ACTIONS(63),
    [sym_numberidentifier] = ACTIONS(65),
    [sym__mat] = ACTIONS(67),
    [aux_sym_number_token1] = ACTIONS(69),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    STATE(33), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(73), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(71), 13,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [30] = 4,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    STATE(34), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(79), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(77), 13,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [60] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    STATE(34), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(83), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(81), 13,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [90] = 4,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(90), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(88), 13,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [119] = 4,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(97), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(95), 13,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [148] = 4,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(103), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(101), 13,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [177] = 4,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    STATE(54), 1,
      sym_dimension,
    ACTIONS(107), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(105), 13,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [206] = 4,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(111), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(109), 13,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [235] = 4,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(111), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(109), 13,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [264] = 4,
    ACTIONS(99), 1,
      anon_sym_LPAREN,
    STATE(40), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(115), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(113), 13,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [293] = 4,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    STATE(37), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(119), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(117), 13,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [322] = 4,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    STATE(48), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(79), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(77), 12,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [350] = 2,
    ACTIONS(127), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(125), 14,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [374] = 4,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    STATE(43), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(73), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(71), 12,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [402] = 2,
    ACTIONS(131), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(129), 14,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [426] = 3,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(133), 13,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [452] = 4,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    STATE(48), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(83), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(81), 12,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [480] = 2,
    ACTIONS(144), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(142), 14,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [504] = 4,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    STATE(69), 1,
      sym_dimension,
    ACTIONS(107), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(105), 12,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [531] = 2,
    ACTIONS(148), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(146), 13,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [554] = 4,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(115), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(113), 12,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [581] = 4,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    STATE(53), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(90), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(88), 12,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [608] = 2,
    ACTIONS(157), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(155), 13,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [631] = 4,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    STATE(53), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(111), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(109), 12,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [658] = 4,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    STATE(57), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(111), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(109), 12,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [685] = 4,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    STATE(53), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(97), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(95), 12,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [712] = 2,
    ACTIONS(161), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(159), 13,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [735] = 4,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    STATE(60), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(119), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(117), 12,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [762] = 4,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    STATE(53), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(103), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(101), 12,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [789] = 2,
    ACTIONS(127), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(125), 13,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [811] = 3,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(135), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(133), 12,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [835] = 3,
    ACTIONS(169), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(171), 5,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(167), 7,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
  [859] = 2,
    ACTIONS(144), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(142), 13,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [881] = 2,
    ACTIONS(131), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(129), 13,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [903] = 2,
    ACTIONS(161), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(159), 12,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [924] = 11,
    ACTIONS(173), 1,
      sym_line_number,
    ACTIONS(175), 1,
      sym_label,
    ACTIONS(177), 1,
      anon_sym_def,
    ACTIONS(179), 1,
      anon_sym_EQ,
    ACTIONS(181), 1,
      anon_sym_fnend,
    ACTIONS(183), 1,
      aux_sym_let_statement_token1,
    ACTIONS(185), 1,
      aux_sym_print_statement_token1,
    STATE(126), 1,
      sym_statement,
    STATE(71), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(134), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(151), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [963] = 2,
    ACTIONS(148), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(146), 12,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [984] = 2,
    ACTIONS(157), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(155), 12,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [1005] = 11,
    ACTIONS(173), 1,
      sym_line_number,
    ACTIONS(175), 1,
      sym_label,
    ACTIONS(177), 1,
      anon_sym_def,
    ACTIONS(183), 1,
      aux_sym_let_statement_token1,
    ACTIONS(185), 1,
      aux_sym_print_statement_token1,
    ACTIONS(187), 1,
      anon_sym_EQ,
    ACTIONS(189), 1,
      anon_sym_fnend,
    STATE(126), 1,
      sym_statement,
    STATE(76), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(134), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(151), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [1044] = 10,
    ACTIONS(173), 1,
      sym_line_number,
    ACTIONS(175), 1,
      sym_label,
    ACTIONS(177), 1,
      anon_sym_def,
    ACTIONS(183), 1,
      aux_sym_let_statement_token1,
    ACTIONS(185), 1,
      aux_sym_print_statement_token1,
    ACTIONS(191), 1,
      anon_sym_fnend,
    STATE(126), 1,
      sym_statement,
    STATE(75), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(134), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(151), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [1080] = 10,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    ACTIONS(195), 1,
      sym_line_number,
    ACTIONS(198), 1,
      sym_label,
    ACTIONS(201), 1,
      anon_sym_def,
    ACTIONS(204), 1,
      aux_sym_let_statement_token1,
    ACTIONS(207), 1,
      aux_sym_print_statement_token1,
    STATE(127), 1,
      sym_statement,
    STATE(72), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(135), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(145), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [1116] = 10,
    ACTIONS(5), 1,
      sym_line_number,
    ACTIONS(7), 1,
      sym_label,
    ACTIONS(9), 1,
      anon_sym_def,
    ACTIONS(11), 1,
      aux_sym_let_statement_token1,
    ACTIONS(13), 1,
      aux_sym_print_statement_token1,
    ACTIONS(210), 1,
      ts_builtin_sym_end,
    STATE(127), 1,
      sym_statement,
    STATE(72), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(135), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(145), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [1152] = 3,
    ACTIONS(169), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(212), 5,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(167), 6,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1174] = 10,
    ACTIONS(214), 1,
      sym_line_number,
    ACTIONS(217), 1,
      sym_label,
    ACTIONS(220), 1,
      anon_sym_def,
    ACTIONS(223), 1,
      anon_sym_fnend,
    ACTIONS(225), 1,
      aux_sym_let_statement_token1,
    ACTIONS(228), 1,
      aux_sym_print_statement_token1,
    STATE(126), 1,
      sym_statement,
    STATE(75), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(134), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(151), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [1210] = 10,
    ACTIONS(173), 1,
      sym_line_number,
    ACTIONS(175), 1,
      sym_label,
    ACTIONS(177), 1,
      anon_sym_def,
    ACTIONS(183), 1,
      aux_sym_let_statement_token1,
    ACTIONS(185), 1,
      aux_sym_print_statement_token1,
    ACTIONS(231), 1,
      anon_sym_fnend,
    STATE(126), 1,
      sym_statement,
    STATE(75), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(134), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(151), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [1246] = 4,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    STATE(89), 1,
      sym_arguments,
    ACTIONS(235), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(233), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
  [1269] = 4,
    ACTIONS(239), 1,
      anon_sym_EQ,
    ACTIONS(167), 3,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
    ACTIONS(169), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(171), 5,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [1292] = 4,
    ACTIONS(241), 1,
      anon_sym_EQ,
    ACTIONS(167), 4,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
    ACTIONS(169), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(212), 5,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [1315] = 4,
    ACTIONS(237), 1,
      anon_sym_LPAREN,
    STATE(84), 1,
      sym_arguments,
    ACTIONS(245), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(243), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
  [1338] = 3,
    ACTIONS(251), 1,
      anon_sym_DOT,
    ACTIONS(249), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(247), 9,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
  [1359] = 2,
    ACTIONS(255), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(253), 9,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
  [1377] = 2,
    ACTIONS(259), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(257), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
  [1394] = 2,
    ACTIONS(263), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(261), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
  [1411] = 2,
    ACTIONS(267), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(265), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
  [1428] = 4,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    STATE(107), 1,
      sym_arguments,
    ACTIONS(245), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(243), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1449] = 2,
    ACTIONS(273), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(271), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
  [1466] = 2,
    ACTIONS(277), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(275), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
  [1483] = 2,
    ACTIONS(281), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(279), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
  [1500] = 2,
    ACTIONS(285), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(283), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
  [1517] = 4,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    STATE(123), 1,
      sym_arguments,
    ACTIONS(235), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(233), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1538] = 2,
    ACTIONS(289), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(287), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
  [1555] = 2,
    ACTIONS(293), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(291), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
  [1572] = 2,
    ACTIONS(297), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(295), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
  [1589] = 2,
    ACTIONS(169), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(167), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
  [1606] = 2,
    ACTIONS(301), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(299), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
  [1623] = 7,
    ACTIONS(177), 1,
      anon_sym_def,
    ACTIONS(183), 1,
      aux_sym_let_statement_token1,
    ACTIONS(185), 1,
      aux_sym_print_statement_token1,
    ACTIONS(303), 1,
      sym_label,
    STATE(126), 1,
      sym_statement,
    STATE(134), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(153), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [1649] = 4,
    STATE(103), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(309), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(305), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
    ACTIONS(307), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [1669] = 4,
    STATE(99), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(315), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(313), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(311), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [1689] = 7,
    ACTIONS(9), 1,
      anon_sym_def,
    ACTIONS(11), 1,
      aux_sym_let_statement_token1,
    ACTIONS(13), 1,
      aux_sym_print_statement_token1,
    ACTIONS(318), 1,
      sym_label,
    STATE(127), 1,
      sym_statement,
    STATE(135), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(157), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [1715] = 3,
    ACTIONS(320), 1,
      anon_sym_DOT,
    ACTIONS(249), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(247), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1733] = 4,
    STATE(99), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(326), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(324), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(322), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [1753] = 4,
    STATE(104), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(309), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(322), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
    ACTIONS(324), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [1773] = 4,
    STATE(104), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(328), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(311), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
    ACTIONS(313), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [1793] = 4,
    STATE(102), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(326), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(307), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(305), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [1813] = 2,
    ACTIONS(277), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(275), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1828] = 2,
    ACTIONS(263), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(261), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1843] = 2,
    ACTIONS(267), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(265), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1858] = 2,
    ACTIONS(297), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(295), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1873] = 6,
    ACTIONS(331), 1,
      anon_sym_def,
    ACTIONS(333), 1,
      aux_sym_let_statement_token1,
    ACTIONS(335), 1,
      aux_sym_print_statement_token1,
    STATE(126), 1,
      sym_statement,
    STATE(134), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(153), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [1896] = 2,
    ACTIONS(285), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(283), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1911] = 6,
    ACTIONS(337), 1,
      anon_sym_def,
    ACTIONS(339), 1,
      aux_sym_let_statement_token1,
    ACTIONS(341), 1,
      aux_sym_print_statement_token1,
    STATE(127), 1,
      sym_statement,
    STATE(135), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(152), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [1934] = 2,
    ACTIONS(289), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(287), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1949] = 2,
    ACTIONS(293), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(291), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1964] = 2,
    ACTIONS(273), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(271), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1979] = 2,
    ACTIONS(301), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(299), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1994] = 2,
    ACTIONS(313), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(311), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2009] = 2,
    ACTIONS(313), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(311), 6,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2024] = 6,
    ACTIONS(337), 1,
      anon_sym_def,
    ACTIONS(339), 1,
      aux_sym_let_statement_token1,
    ACTIONS(341), 1,
      aux_sym_print_statement_token1,
    STATE(127), 1,
      sym_statement,
    STATE(135), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(157), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [2047] = 2,
    ACTIONS(255), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(253), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2062] = 2,
    ACTIONS(259), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(257), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2077] = 6,
    ACTIONS(331), 1,
      anon_sym_def,
    ACTIONS(333), 1,
      aux_sym_let_statement_token1,
    ACTIONS(335), 1,
      aux_sym_print_statement_token1,
    STATE(126), 1,
      sym_statement,
    STATE(134), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(146), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [2100] = 2,
    ACTIONS(281), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(279), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2115] = 2,
    ACTIONS(169), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(167), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2130] = 4,
    STATE(129), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(343), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(345), 2,
      sym_line_number,
      sym_label,
    ACTIONS(347), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2148] = 4,
    STATE(125), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(343), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(349), 2,
      sym_line_number,
      sym_label,
    ACTIONS(351), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2166] = 4,
    STATE(128), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(353), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(349), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(351), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2184] = 4,
    STATE(130), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(353), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(345), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(347), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2202] = 4,
    STATE(129), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(355), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(358), 2,
      sym_line_number,
      sym_label,
    ACTIONS(360), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2220] = 4,
    STATE(130), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(362), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(358), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(360), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2238] = 2,
    ACTIONS(365), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
    ACTIONS(367), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2251] = 2,
    ACTIONS(367), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(365), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [2264] = 2,
    ACTIONS(371), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(369), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [2277] = 2,
    ACTIONS(373), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
    ACTIONS(375), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2290] = 2,
    ACTIONS(375), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(373), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [2303] = 2,
    ACTIONS(358), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
    ACTIONS(360), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2316] = 2,
    ACTIONS(369), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
    ACTIONS(371), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2329] = 2,
    ACTIONS(360), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(358), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [2342] = 2,
    ACTIONS(377), 3,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
    ACTIONS(379), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2354] = 2,
    ACTIONS(381), 3,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
    ACTIONS(383), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2366] = 2,
    ACTIONS(385), 3,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
    ACTIONS(387), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2378] = 2,
    ACTIONS(389), 3,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
    ACTIONS(391), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2390] = 2,
    ACTIONS(393), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(395), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2401] = 4,
    ACTIONS(397), 1,
      anon_sym_BQUOTE,
    ACTIONS(402), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(399), 2,
      anon_sym_BQUOTE_BQUOTE,
      sym__template_chars,
    STATE(144), 2,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [2416] = 2,
    ACTIONS(405), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(407), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2427] = 2,
    ACTIONS(409), 2,
      sym_line_number,
      sym_label,
    ACTIONS(411), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2438] = 2,
    ACTIONS(413), 2,
      sym_line_number,
      sym_label,
    ACTIONS(415), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2449] = 4,
    ACTIONS(417), 1,
      anon_sym_BQUOTE,
    ACTIONS(421), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(419), 2,
      anon_sym_BQUOTE_BQUOTE,
      sym__template_chars,
    STATE(144), 2,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [2464] = 4,
    ACTIONS(421), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(423), 1,
      anon_sym_BQUOTE,
    ACTIONS(425), 2,
      anon_sym_BQUOTE_BQUOTE,
      sym__template_chars,
    STATE(148), 2,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [2479] = 2,
    ACTIONS(393), 2,
      sym_line_number,
      sym_label,
    ACTIONS(395), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2490] = 2,
    ACTIONS(405), 2,
      sym_line_number,
      sym_label,
    ACTIONS(407), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2501] = 2,
    ACTIONS(409), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(411), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2512] = 2,
    ACTIONS(427), 2,
      sym_line_number,
      sym_label,
    ACTIONS(429), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2523] = 2,
    ACTIONS(413), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(415), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2534] = 4,
    ACTIONS(421), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(431), 1,
      anon_sym_BQUOTE,
    ACTIONS(433), 2,
      anon_sym_BQUOTE_BQUOTE,
      sym__template_chars,
    STATE(156), 2,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [2549] = 4,
    ACTIONS(421), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(435), 1,
      anon_sym_BQUOTE,
    ACTIONS(419), 2,
      anon_sym_BQUOTE_BQUOTE,
      sym__template_chars,
    STATE(144), 2,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [2564] = 2,
    ACTIONS(427), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(429), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2575] = 4,
    ACTIONS(339), 1,
      aux_sym_let_statement_token1,
    ACTIONS(341), 1,
      aux_sym_print_statement_token1,
    STATE(138), 1,
      sym_statement,
    STATE(135), 2,
      sym_let_statement,
      sym_print_statement,
  [2589] = 4,
    ACTIONS(333), 1,
      aux_sym_let_statement_token1,
    ACTIONS(335), 1,
      aux_sym_print_statement_token1,
    STATE(136), 1,
      sym_statement,
    STATE(134), 2,
      sym_let_statement,
      sym_print_statement,
  [2603] = 4,
    ACTIONS(437), 1,
      anon_sym_COLON,
    ACTIONS(439), 1,
      anon_sym_RPAREN,
    ACTIONS(441), 1,
      anon_sym_COMMA,
    STATE(177), 1,
      aux_sym_arguments_repeat1,
  [2616] = 4,
    ACTIONS(437), 1,
      anon_sym_COLON,
    ACTIONS(441), 1,
      anon_sym_COMMA,
    ACTIONS(443), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      aux_sym_arguments_repeat1,
  [2629] = 1,
    ACTIONS(445), 4,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      sym__template_chars,
      anon_sym_LBRACE_LBRACE,
  [2636] = 4,
    ACTIONS(41), 1,
      aux_sym_number_token1,
    ACTIONS(447), 1,
      anon_sym_STAR,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
    STATE(210), 1,
      sym_number,
  [2649] = 3,
    ACTIONS(451), 1,
      sym_string_function_name,
    ACTIONS(453), 1,
      sym_numeric_function_name,
    STATE(67), 2,
      sym_string_function_definition,
      sym_numeric_function_definition,
  [2660] = 3,
    ACTIONS(451), 1,
      sym_string_function_name,
    ACTIONS(453), 1,
      sym_numeric_function_name,
    STATE(70), 2,
      sym_string_function_definition,
      sym_numeric_function_definition,
  [2671] = 4,
    ACTIONS(455), 1,
      anon_sym_STAR,
    ACTIONS(457), 1,
      anon_sym_LPAREN,
    STATE(142), 1,
      sym_parameter_list,
    STATE(194), 1,
      sym_function_length,
  [2684] = 4,
    ACTIONS(41), 1,
      aux_sym_number_token1,
    ACTIONS(459), 1,
      anon_sym_STAR,
    ACTIONS(461), 1,
      anon_sym_RPAREN,
    STATE(215), 1,
      sym_number,
  [2697] = 3,
    ACTIONS(441), 1,
      anon_sym_COMMA,
    ACTIONS(463), 1,
      anon_sym_RPAREN,
    STATE(175), 1,
      aux_sym_arguments_repeat1,
  [2707] = 3,
    ACTIONS(465), 1,
      anon_sym_RPAREN,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    STATE(173), 1,
      aux_sym_dimension_repeat1,
  [2717] = 3,
    ACTIONS(441), 1,
      anon_sym_COMMA,
    ACTIONS(469), 1,
      anon_sym_RPAREN,
    STATE(180), 1,
      aux_sym_arguments_repeat1,
  [2727] = 3,
    ACTIONS(441), 1,
      anon_sym_COMMA,
    ACTIONS(471), 1,
      anon_sym_RPAREN,
    STATE(182), 1,
      aux_sym_arguments_repeat1,
  [2737] = 3,
    ACTIONS(41), 1,
      aux_sym_number_token1,
    ACTIONS(461), 1,
      anon_sym_RPAREN,
    STATE(215), 1,
      sym_number,
  [2747] = 3,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    ACTIONS(473), 1,
      anon_sym_RPAREN,
    STATE(185), 1,
      aux_sym_dimension_repeat1,
  [2757] = 3,
    ACTIONS(441), 1,
      anon_sym_COMMA,
    ACTIONS(475), 1,
      anon_sym_RPAREN,
    STATE(182), 1,
      aux_sym_arguments_repeat1,
  [2767] = 3,
    ACTIONS(441), 1,
      anon_sym_COMMA,
    ACTIONS(477), 1,
      anon_sym_RPAREN,
    STATE(182), 1,
      aux_sym_arguments_repeat1,
  [2777] = 3,
    ACTIONS(441), 1,
      anon_sym_COMMA,
    ACTIONS(479), 1,
      anon_sym_RPAREN,
    STATE(171), 1,
      aux_sym_arguments_repeat1,
  [2787] = 3,
    ACTIONS(441), 1,
      anon_sym_COMMA,
    ACTIONS(481), 1,
      anon_sym_RPAREN,
    STATE(182), 1,
      aux_sym_arguments_repeat1,
  [2797] = 3,
    ACTIONS(441), 1,
      anon_sym_COMMA,
    ACTIONS(483), 1,
      anon_sym_RPAREN,
    STATE(183), 1,
      aux_sym_arguments_repeat1,
  [2807] = 3,
    ACTIONS(41), 1,
      aux_sym_number_token1,
    ACTIONS(485), 1,
      anon_sym_RPAREN,
    STATE(203), 1,
      sym_number,
  [2817] = 3,
    ACTIONS(441), 1,
      anon_sym_COMMA,
    ACTIONS(487), 1,
      anon_sym_RPAREN,
    STATE(182), 1,
      aux_sym_arguments_repeat1,
  [2827] = 3,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    ACTIONS(489), 1,
      anon_sym_RPAREN,
    STATE(185), 1,
      aux_sym_dimension_repeat1,
  [2837] = 3,
    ACTIONS(491), 1,
      anon_sym_RPAREN,
    ACTIONS(493), 1,
      anon_sym_COMMA,
    STATE(182), 1,
      aux_sym_arguments_repeat1,
  [2847] = 3,
    ACTIONS(441), 1,
      anon_sym_COMMA,
    ACTIONS(496), 1,
      anon_sym_RPAREN,
    STATE(182), 1,
      aux_sym_arguments_repeat1,
  [2857] = 3,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    ACTIONS(498), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      aux_sym_dimension_repeat1,
  [2867] = 3,
    ACTIONS(500), 1,
      anon_sym_RPAREN,
    ACTIONS(502), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      aux_sym_dimension_repeat1,
  [2877] = 3,
    ACTIONS(505), 1,
      sym_identifier,
    ACTIONS(507), 1,
      anon_sym_AMP,
    STATE(205), 1,
      sym_parameter,
  [2887] = 1,
    ACTIONS(500), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2892] = 2,
    ACTIONS(509), 1,
      sym_stringidentifier,
    ACTIONS(511), 1,
      sym_numberidentifier,
  [2899] = 1,
    ACTIONS(491), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2904] = 1,
    ACTIONS(513), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2909] = 2,
    ACTIONS(457), 1,
      anon_sym_LPAREN,
    STATE(141), 1,
      sym_parameter_list,
  [2916] = 2,
    ACTIONS(41), 1,
      aux_sym_number_token1,
    STATE(202), 1,
      sym_number,
  [2923] = 2,
    ACTIONS(515), 1,
      sym_stringidentifier,
    ACTIONS(517), 1,
      sym_numberidentifier,
  [2930] = 2,
    ACTIONS(457), 1,
      anon_sym_LPAREN,
    STATE(140), 1,
      sym_parameter_list,
  [2937] = 1,
    ACTIONS(519), 1,
      sym_identifier,
  [2941] = 1,
    ACTIONS(521), 1,
      aux_sym_string_token2,
  [2945] = 1,
    ACTIONS(523), 1,
      anon_sym_RPAREN,
  [2949] = 1,
    ACTIONS(525), 1,
      aux_sym_string_token1,
  [2953] = 1,
    ACTIONS(527), 1,
      anon_sym_DQUOTE,
  [2957] = 1,
    ACTIONS(527), 1,
      anon_sym_SQUOTE,
  [2961] = 1,
    ACTIONS(529), 1,
      aux_sym_number_token1,
  [2965] = 1,
    ACTIONS(531), 1,
      anon_sym_LPAREN,
  [2969] = 1,
    ACTIONS(533), 1,
      anon_sym_RPAREN,
  [2973] = 1,
    ACTIONS(535), 1,
      anon_sym_RPAREN,
  [2977] = 1,
    ACTIONS(537), 1,
      anon_sym_RPAREN,
  [2981] = 1,
    ACTIONS(539), 1,
      anon_sym_RPAREN,
  [2985] = 1,
    ACTIONS(541), 1,
      anon_sym_DQUOTE,
  [2989] = 1,
    ACTIONS(541), 1,
      anon_sym_SQUOTE,
  [2993] = 1,
    ACTIONS(543), 1,
      aux_sym_number_token1,
  [2997] = 1,
    ACTIONS(461), 1,
      anon_sym_RPAREN,
  [3001] = 1,
    ACTIONS(545), 1,
      anon_sym_RBRACE_RBRACE,
  [3005] = 1,
    ACTIONS(547), 1,
      anon_sym_RPAREN,
  [3009] = 1,
    ACTIONS(549), 1,
      aux_sym_let_statement_token2,
  [3013] = 1,
    ACTIONS(551), 1,
      aux_sym_let_statement_token2,
  [3017] = 1,
    ACTIONS(485), 1,
      anon_sym_RPAREN,
  [3021] = 1,
    ACTIONS(553), 1,
      aux_sym_string_token1,
  [3025] = 1,
    ACTIONS(555), 1,
      aux_sym_string_token2,
  [3029] = 1,
    ACTIONS(437), 1,
      anon_sym_COLON,
  [3033] = 1,
    ACTIONS(557), 1,
      ts_builtin_sym_end,
  [3037] = 1,
    ACTIONS(559), 1,
      aux_sym_let_statement_token2,
  [3041] = 1,
    ACTIONS(561), 1,
      aux_sym_let_statement_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(32)] = 0,
  [SMALL_STATE(33)] = 30,
  [SMALL_STATE(34)] = 60,
  [SMALL_STATE(35)] = 90,
  [SMALL_STATE(36)] = 119,
  [SMALL_STATE(37)] = 148,
  [SMALL_STATE(38)] = 177,
  [SMALL_STATE(39)] = 206,
  [SMALL_STATE(40)] = 235,
  [SMALL_STATE(41)] = 264,
  [SMALL_STATE(42)] = 293,
  [SMALL_STATE(43)] = 322,
  [SMALL_STATE(44)] = 350,
  [SMALL_STATE(45)] = 374,
  [SMALL_STATE(46)] = 402,
  [SMALL_STATE(47)] = 426,
  [SMALL_STATE(48)] = 452,
  [SMALL_STATE(49)] = 480,
  [SMALL_STATE(50)] = 504,
  [SMALL_STATE(51)] = 531,
  [SMALL_STATE(52)] = 554,
  [SMALL_STATE(53)] = 581,
  [SMALL_STATE(54)] = 608,
  [SMALL_STATE(55)] = 631,
  [SMALL_STATE(56)] = 658,
  [SMALL_STATE(57)] = 685,
  [SMALL_STATE(58)] = 712,
  [SMALL_STATE(59)] = 735,
  [SMALL_STATE(60)] = 762,
  [SMALL_STATE(61)] = 789,
  [SMALL_STATE(62)] = 811,
  [SMALL_STATE(63)] = 835,
  [SMALL_STATE(64)] = 859,
  [SMALL_STATE(65)] = 881,
  [SMALL_STATE(66)] = 903,
  [SMALL_STATE(67)] = 924,
  [SMALL_STATE(68)] = 963,
  [SMALL_STATE(69)] = 984,
  [SMALL_STATE(70)] = 1005,
  [SMALL_STATE(71)] = 1044,
  [SMALL_STATE(72)] = 1080,
  [SMALL_STATE(73)] = 1116,
  [SMALL_STATE(74)] = 1152,
  [SMALL_STATE(75)] = 1174,
  [SMALL_STATE(76)] = 1210,
  [SMALL_STATE(77)] = 1246,
  [SMALL_STATE(78)] = 1269,
  [SMALL_STATE(79)] = 1292,
  [SMALL_STATE(80)] = 1315,
  [SMALL_STATE(81)] = 1338,
  [SMALL_STATE(82)] = 1359,
  [SMALL_STATE(83)] = 1377,
  [SMALL_STATE(84)] = 1394,
  [SMALL_STATE(85)] = 1411,
  [SMALL_STATE(86)] = 1428,
  [SMALL_STATE(87)] = 1449,
  [SMALL_STATE(88)] = 1466,
  [SMALL_STATE(89)] = 1483,
  [SMALL_STATE(90)] = 1500,
  [SMALL_STATE(91)] = 1517,
  [SMALL_STATE(92)] = 1538,
  [SMALL_STATE(93)] = 1555,
  [SMALL_STATE(94)] = 1572,
  [SMALL_STATE(95)] = 1589,
  [SMALL_STATE(96)] = 1606,
  [SMALL_STATE(97)] = 1623,
  [SMALL_STATE(98)] = 1649,
  [SMALL_STATE(99)] = 1669,
  [SMALL_STATE(100)] = 1689,
  [SMALL_STATE(101)] = 1715,
  [SMALL_STATE(102)] = 1733,
  [SMALL_STATE(103)] = 1753,
  [SMALL_STATE(104)] = 1773,
  [SMALL_STATE(105)] = 1793,
  [SMALL_STATE(106)] = 1813,
  [SMALL_STATE(107)] = 1828,
  [SMALL_STATE(108)] = 1843,
  [SMALL_STATE(109)] = 1858,
  [SMALL_STATE(110)] = 1873,
  [SMALL_STATE(111)] = 1896,
  [SMALL_STATE(112)] = 1911,
  [SMALL_STATE(113)] = 1934,
  [SMALL_STATE(114)] = 1949,
  [SMALL_STATE(115)] = 1964,
  [SMALL_STATE(116)] = 1979,
  [SMALL_STATE(117)] = 1994,
  [SMALL_STATE(118)] = 2009,
  [SMALL_STATE(119)] = 2024,
  [SMALL_STATE(120)] = 2047,
  [SMALL_STATE(121)] = 2062,
  [SMALL_STATE(122)] = 2077,
  [SMALL_STATE(123)] = 2100,
  [SMALL_STATE(124)] = 2115,
  [SMALL_STATE(125)] = 2130,
  [SMALL_STATE(126)] = 2148,
  [SMALL_STATE(127)] = 2166,
  [SMALL_STATE(128)] = 2184,
  [SMALL_STATE(129)] = 2202,
  [SMALL_STATE(130)] = 2220,
  [SMALL_STATE(131)] = 2238,
  [SMALL_STATE(132)] = 2251,
  [SMALL_STATE(133)] = 2264,
  [SMALL_STATE(134)] = 2277,
  [SMALL_STATE(135)] = 2290,
  [SMALL_STATE(136)] = 2303,
  [SMALL_STATE(137)] = 2316,
  [SMALL_STATE(138)] = 2329,
  [SMALL_STATE(139)] = 2342,
  [SMALL_STATE(140)] = 2354,
  [SMALL_STATE(141)] = 2366,
  [SMALL_STATE(142)] = 2378,
  [SMALL_STATE(143)] = 2390,
  [SMALL_STATE(144)] = 2401,
  [SMALL_STATE(145)] = 2416,
  [SMALL_STATE(146)] = 2427,
  [SMALL_STATE(147)] = 2438,
  [SMALL_STATE(148)] = 2449,
  [SMALL_STATE(149)] = 2464,
  [SMALL_STATE(150)] = 2479,
  [SMALL_STATE(151)] = 2490,
  [SMALL_STATE(152)] = 2501,
  [SMALL_STATE(153)] = 2512,
  [SMALL_STATE(154)] = 2523,
  [SMALL_STATE(155)] = 2534,
  [SMALL_STATE(156)] = 2549,
  [SMALL_STATE(157)] = 2564,
  [SMALL_STATE(158)] = 2575,
  [SMALL_STATE(159)] = 2589,
  [SMALL_STATE(160)] = 2603,
  [SMALL_STATE(161)] = 2616,
  [SMALL_STATE(162)] = 2629,
  [SMALL_STATE(163)] = 2636,
  [SMALL_STATE(164)] = 2649,
  [SMALL_STATE(165)] = 2660,
  [SMALL_STATE(166)] = 2671,
  [SMALL_STATE(167)] = 2684,
  [SMALL_STATE(168)] = 2697,
  [SMALL_STATE(169)] = 2707,
  [SMALL_STATE(170)] = 2717,
  [SMALL_STATE(171)] = 2727,
  [SMALL_STATE(172)] = 2737,
  [SMALL_STATE(173)] = 2747,
  [SMALL_STATE(174)] = 2757,
  [SMALL_STATE(175)] = 2767,
  [SMALL_STATE(176)] = 2777,
  [SMALL_STATE(177)] = 2787,
  [SMALL_STATE(178)] = 2797,
  [SMALL_STATE(179)] = 2807,
  [SMALL_STATE(180)] = 2817,
  [SMALL_STATE(181)] = 2827,
  [SMALL_STATE(182)] = 2837,
  [SMALL_STATE(183)] = 2847,
  [SMALL_STATE(184)] = 2857,
  [SMALL_STATE(185)] = 2867,
  [SMALL_STATE(186)] = 2877,
  [SMALL_STATE(187)] = 2887,
  [SMALL_STATE(188)] = 2892,
  [SMALL_STATE(189)] = 2899,
  [SMALL_STATE(190)] = 2904,
  [SMALL_STATE(191)] = 2909,
  [SMALL_STATE(192)] = 2916,
  [SMALL_STATE(193)] = 2923,
  [SMALL_STATE(194)] = 2930,
  [SMALL_STATE(195)] = 2937,
  [SMALL_STATE(196)] = 2941,
  [SMALL_STATE(197)] = 2945,
  [SMALL_STATE(198)] = 2949,
  [SMALL_STATE(199)] = 2953,
  [SMALL_STATE(200)] = 2957,
  [SMALL_STATE(201)] = 2961,
  [SMALL_STATE(202)] = 2965,
  [SMALL_STATE(203)] = 2969,
  [SMALL_STATE(204)] = 2973,
  [SMALL_STATE(205)] = 2977,
  [SMALL_STATE(206)] = 2981,
  [SMALL_STATE(207)] = 2985,
  [SMALL_STATE(208)] = 2989,
  [SMALL_STATE(209)] = 2993,
  [SMALL_STATE(210)] = 2997,
  [SMALL_STATE(211)] = 3001,
  [SMALL_STATE(212)] = 3005,
  [SMALL_STATE(213)] = 3009,
  [SMALL_STATE(214)] = 3013,
  [SMALL_STATE(215)] = 3017,
  [SMALL_STATE(216)] = 3021,
  [SMALL_STATE(217)] = 3025,
  [SMALL_STATE(218)] = 3029,
  [SMALL_STATE(219)] = 3033,
  [SMALL_STATE(220)] = 3037,
  [SMALL_STATE(221)] = 3041,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringarray, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringarray, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringarray, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringarray, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stringarray_repeat1, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stringarray_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringarray_repeat1, 2), SHIFT_REPEAT(4),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stringelement_repeat1, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stringelement_repeat1, 2),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringelement_repeat1, 2), SHIFT_REPEAT(2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringelement, 6),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringelement, 6),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringreference, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringreference, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numberarray, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numberarray, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringelement, 5),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringelement, 5),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringelement, 4),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringelement, 4),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringreference, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringreference, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 4),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dimension, 4),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 3),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dimension, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numberreference, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numberreference, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringarray_repeat1, 2), SHIFT_REPEAT(5),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stringelement_repeat1, 3),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stringelement_repeat1, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numberelement, 4),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numberelement, 4),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringelement_repeat1, 2), SHIFT_REPEAT(3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numberarray, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numberarray, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numberelement, 5),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numberelement, 5),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(100),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(119),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(165),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(221),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(220),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(97),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(110),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(164),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(213),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(214),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_function, 1, .production_id = 1),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_user_function, 1, .production_id = 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_function, 1, .production_id = 1),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_function, 1, .production_id = 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 3),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forced_assignment_expression, 3, .production_id = 5),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_forced_assignment_expression, 3, .production_id = 5),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_function, 2, .production_id = 4),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_function, 2, .production_id = 4),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 1),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 3),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 3),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_function, 2, .production_id = 4),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_user_function, 2, .production_id = 4),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_string, 3),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_string, 3),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_string, 2),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_string, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_statement, 3),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print_statement, 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_print_statement_repeat1, 2),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_print_statement_repeat1, 2),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT_REPEAT(30),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_statement, 4),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print_statement, 4),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT_REPEAT(21),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_line_statement, 2),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_line_statement, 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_line_statement, 1),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_line_statement, 1),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multi_line_statement_repeat1, 2), SHIFT_REPEAT(159),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__multi_line_statement_repeat1, 2),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__multi_line_statement_repeat1, 2),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multi_line_statement_repeat1, 2), SHIFT_REPEAT(158),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 3),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 3),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3, .production_id = 5),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_expression, 3, .production_id = 5),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_function_definition, 3),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_function_definition, 3),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_function_definition, 2),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_function_definition, 2),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_function_definition, 2),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_function_definition, 2),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_template_string_repeat1, 2),
  [399] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_string_repeat1, 2), SHIFT_REPEAT(144),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_string_repeat1, 2), SHIFT_REPEAT(17),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 3),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 3),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_substitution, 3),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(24),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dimension_repeat1, 2),
  [502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimension_repeat1, 2), SHIFT_REPEAT(9),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_length, 2, .production_id = 2),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [557] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_br(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
