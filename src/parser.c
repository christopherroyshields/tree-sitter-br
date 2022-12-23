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
#define STATE_COUNT 262
#define LARGE_STATE_COUNT 50
#define SYMBOL_COUNT 219
#define ALIAS_COUNT 0
#define TOKEN_COUNT 173
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 7

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
  anon_sym_AMP_AMP = 21,
  anon_sym_PIPE_PIPE = 22,
  anon_sym_GT_GT = 23,
  anon_sym_LT_LT = 24,
  anon_sym_PLUS = 25,
  anon_sym_DASH = 26,
  anon_sym_SLASH = 27,
  anon_sym_PERCENT = 28,
  anon_sym_STAR_STAR = 29,
  anon_sym_LT = 30,
  anon_sym_LT_EQ = 31,
  anon_sym_EQ_EQ = 32,
  anon_sym_TILDE_EQ = 33,
  anon_sym_GT_EQ = 34,
  anon_sym_GT = 35,
  anon_sym_TILDE = 36,
  aux_sym_unary_expression_token1 = 37,
  aux_sym_system_function_token1 = 38,
  aux_sym_system_function_token2 = 39,
  aux_sym_system_function_token3 = 40,
  aux_sym_system_function_token4 = 41,
  aux_sym_system_function_token5 = 42,
  aux_sym_system_function_token6 = 43,
  aux_sym_system_function_token7 = 44,
  aux_sym_system_function_token8 = 45,
  aux_sym_system_function_token9 = 46,
  aux_sym_system_function_token10 = 47,
  aux_sym_system_function_token11 = 48,
  aux_sym_system_function_token12 = 49,
  aux_sym_system_function_token13 = 50,
  aux_sym_system_function_token14 = 51,
  aux_sym_system_function_token15 = 52,
  aux_sym_system_function_token16 = 53,
  aux_sym_system_function_token17 = 54,
  aux_sym_system_function_token18 = 55,
  aux_sym_system_function_token19 = 56,
  aux_sym_system_function_token20 = 57,
  aux_sym_system_function_token21 = 58,
  aux_sym_system_function_token22 = 59,
  aux_sym_system_function_token23 = 60,
  aux_sym_system_function_token24 = 61,
  aux_sym_system_function_token25 = 62,
  aux_sym_system_function_token26 = 63,
  aux_sym_system_function_token27 = 64,
  aux_sym_system_function_token28 = 65,
  aux_sym_system_function_token29 = 66,
  aux_sym_system_function_token30 = 67,
  aux_sym_system_function_token31 = 68,
  aux_sym_system_function_token32 = 69,
  aux_sym_system_function_token33 = 70,
  aux_sym_system_function_token34 = 71,
  aux_sym_system_function_token35 = 72,
  aux_sym_system_function_token36 = 73,
  aux_sym_system_function_token37 = 74,
  aux_sym_system_function_token38 = 75,
  aux_sym_system_function_token39 = 76,
  aux_sym_system_function_token40 = 77,
  aux_sym_system_function_token41 = 78,
  aux_sym_system_function_token42 = 79,
  aux_sym_system_function_token43 = 80,
  aux_sym_system_function_token44 = 81,
  aux_sym_system_function_token45 = 82,
  aux_sym_system_function_token46 = 83,
  aux_sym_system_function_token47 = 84,
  aux_sym_system_function_token48 = 85,
  aux_sym_system_function_token49 = 86,
  aux_sym_system_function_token50 = 87,
  aux_sym_system_function_token51 = 88,
  aux_sym_system_function_token52 = 89,
  aux_sym_system_function_token53 = 90,
  aux_sym_system_function_token54 = 91,
  aux_sym_system_function_token55 = 92,
  aux_sym_system_function_token56 = 93,
  aux_sym_system_function_token57 = 94,
  aux_sym_system_function_token58 = 95,
  aux_sym_system_function_token59 = 96,
  aux_sym_system_function_token60 = 97,
  aux_sym_system_function_token61 = 98,
  aux_sym_system_function_token62 = 99,
  aux_sym_system_function_token63 = 100,
  aux_sym_system_function_token64 = 101,
  aux_sym_system_function_token65 = 102,
  aux_sym_system_function_token66 = 103,
  aux_sym_system_function_token67 = 104,
  aux_sym_system_function_token68 = 105,
  aux_sym_system_function_token69 = 106,
  aux_sym_system_function_token70 = 107,
  aux_sym_system_function_token71 = 108,
  aux_sym_system_function_token72 = 109,
  aux_sym_system_function_token73 = 110,
  aux_sym_system_function_token74 = 111,
  aux_sym_system_function_token75 = 112,
  aux_sym_system_function_token76 = 113,
  aux_sym_system_function_token77 = 114,
  aux_sym_system_function_token78 = 115,
  aux_sym_system_function_token79 = 116,
  aux_sym_system_function_token80 = 117,
  aux_sym_system_function_token81 = 118,
  aux_sym_system_function_token82 = 119,
  aux_sym_system_function_token83 = 120,
  aux_sym_system_function_token84 = 121,
  aux_sym_system_function_token85 = 122,
  aux_sym_system_function_token86 = 123,
  aux_sym_system_function_token87 = 124,
  aux_sym_system_function_token88 = 125,
  aux_sym_system_function_token89 = 126,
  aux_sym_system_function_token90 = 127,
  aux_sym_system_function_token91 = 128,
  aux_sym_system_function_token92 = 129,
  aux_sym_system_function_token93 = 130,
  aux_sym_system_function_token94 = 131,
  aux_sym_system_function_token95 = 132,
  aux_sym_system_function_token96 = 133,
  aux_sym_system_function_token97 = 134,
  aux_sym_system_function_token98 = 135,
  aux_sym_system_function_token99 = 136,
  aux_sym_system_function_token100 = 137,
  aux_sym_system_function_token101 = 138,
  aux_sym_system_function_token102 = 139,
  aux_sym_system_function_token103 = 140,
  aux_sym_system_function_token104 = 141,
  aux_sym_system_function_token105 = 142,
  aux_sym_system_function_token106 = 143,
  aux_sym_system_function_token107 = 144,
  aux_sym_system_function_token108 = 145,
  aux_sym_system_function_token109 = 146,
  aux_sym_system_function_token110 = 147,
  aux_sym_system_function_token111 = 148,
  aux_sym_system_function_token112 = 149,
  aux_sym_system_function_token113 = 150,
  aux_sym_system_function_token114 = 151,
  sym__string_function_identifier = 152,
  sym__numeric_function_identifier = 153,
  anon_sym_BQUOTE = 154,
  anon_sym_BQUOTE_BQUOTE = 155,
  sym__template_chars = 156,
  anon_sym_LBRACE_LBRACE = 157,
  anon_sym_RBRACE_RBRACE = 158,
  anon_sym_DQUOTE = 159,
  aux_sym_string_token1 = 160,
  anon_sym_SQUOTE = 161,
  aux_sym_string_token2 = 162,
  anon_sym_COLON_EQ = 163,
  anon_sym_PLUS_EQ = 164,
  anon_sym_DASH_EQ = 165,
  anon_sym_STAR_EQ = 166,
  anon_sym_SLASH_EQ = 167,
  sym_stringidentifier = 168,
  sym_numberidentifier = 169,
  sym__mat = 170,
  aux_sym_number_token1 = 171,
  anon_sym_DOT = 172,
  sym_source_file = 173,
  sym_line = 174,
  sym__single_line_statement = 175,
  sym__multi_line_statement = 176,
  sym_statement = 177,
  sym__definition = 178,
  sym_function_definition = 179,
  sym_string_function_definition = 180,
  sym_numeric_function_definition = 181,
  sym_function_length = 182,
  sym_parameter_list = 183,
  sym_parameter = 184,
  sym_let_statement = 185,
  sym_print_statement = 186,
  sym__expression = 187,
  sym_binary_expression = 188,
  sym_unary_expression = 189,
  sym_primary_expression = 190,
  sym_call_expression = 191,
  sym_system_function = 192,
  sym_user_function = 193,
  sym_arguments = 194,
  sym_template_string = 195,
  sym_template_substitution = 196,
  sym_string = 197,
  sym_parenthesized_expression = 198,
  sym_assignment_expression = 199,
  sym_forced_assignment_expression = 200,
  sym__reference = 201,
  sym_numberelement = 202,
  sym_stringelement = 203,
  sym_stringarray = 204,
  sym_dimension = 205,
  sym_stringreference = 206,
  sym_numberreference = 207,
  sym_range = 208,
  sym_numberarray = 209,
  sym_number = 210,
  aux_sym_source_file_repeat1 = 211,
  aux_sym__multi_line_statement_repeat1 = 212,
  aux_sym_print_statement_repeat1 = 213,
  aux_sym_arguments_repeat1 = 214,
  aux_sym_template_string_repeat1 = 215,
  aux_sym_stringelement_repeat1 = 216,
  aux_sym_stringarray_repeat1 = 217,
  aux_sym_dimension_repeat1 = 218,
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
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_TILDE_EQ] = "~=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_GT] = ">",
  [anon_sym_TILDE] = "~",
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
  [sym_binary_expression] = "binary_expression",
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
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_TILDE_EQ] = anon_sym_TILDE_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_TILDE] = anon_sym_TILDE,
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
  [sym_binary_expression] = sym_binary_expression,
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
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
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
  [sym_binary_expression] = {
    .visible = true,
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
  [5] = {.index = 6, .length = 3},
  [6] = {.index = 9, .length = 2},
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
    {field_operator, 1},
    {field_right, 2},
  [9] =
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
      if (eof) ADVANCE(45);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '"') ADVANCE(292);
      if (lookahead == '%') ADVANCE(80);
      if (lookahead == '&') ADVANCE(61);
      if (lookahead == '\'') ADVANCE(294);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(59);
      if (lookahead == '*') ADVANCE(56);
      if (lookahead == '+') ADVANCE(76);
      if (lookahead == ',') ADVANCE(69);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == '.') ADVANCE(919);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == ';') ADVANCE(70);
      if (lookahead == '<') ADVANCE(82);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '>') ADVANCE(87);
      if (lookahead == 'D') ADVANCE(621);
      if (lookahead == 'F') ADVANCE(714);
      if (lookahead == '`') ADVANCE(285);
      if (lookahead == 'd') ADVANCE(609);
      if (lookahead == 'f') ADVANCE(618);
      if (lookahead == '{') ADVANCE(27);
      if (lookahead == '|') ADVANCE(28);
      if (lookahead == '}') ADVANCE(29);
      if (lookahead == '~') ADVANCE(89);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(639);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(685);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(671);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(765);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(672);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(766);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(740);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(673);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(622);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(674);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(818);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(713);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(675);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(676);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(623);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(670);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(624);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(640);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(741);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(918);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(46);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(292);
      if (lookahead == '\'') ADVANCE(294);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == '+') ADVANCE(75);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == '`') ADVANCE(284);
      if (lookahead == '~') ADVANCE(88);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(360);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(404);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(392);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(342);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(487);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(436);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(393);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(488);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(462);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(406);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(343);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(394);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(540);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(435);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(395);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(396);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(344);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(391);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(345);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(361);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(463);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(918);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(293);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(295);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(2);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == 'd') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == 'e') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == 'e') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == 'f') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == 'n') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == 'n') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(85);
      END_STATE();
    case 22:
      if (lookahead == '`') ADVANCE(285);
      if (lookahead == '{') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead != 0) ADVANCE(287);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(24);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(36);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(50);
      END_STATE();
    case 26:
      if (lookahead == 'f') ADVANCE(620);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 27:
      if (lookahead == '{') ADVANCE(290);
      END_STATE();
    case 28:
      if (lookahead == '|') ADVANCE(72);
      END_STATE();
    case 29:
      if (lookahead == '}') ADVANCE(291);
      END_STATE();
    case 30:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      END_STATE();
    case 31:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(35)
      END_STATE();
    case 36:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 37:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 39:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 40:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(62);
      END_STATE();
    case 41:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(66);
      END_STATE();
    case 42:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(49);
      END_STATE();
    case 43:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 44:
      if (eof) ADVANCE(45);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '%') ADVANCE(80);
      if (lookahead == '&') ADVANCE(61);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(59);
      if (lookahead == '*') ADVANCE(56);
      if (lookahead == '+') ADVANCE(76);
      if (lookahead == ',') ADVANCE(69);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == '.') ADVANCE(919);
      if (lookahead == '/') ADVANCE(79);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == ';') ADVANCE(70);
      if (lookahead == '<') ADVANCE(82);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '>') ADVANCE(87);
      if (lookahead == 'd') ADVANCE(9);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == '|') ADVANCE(28);
      if (lookahead == '}') ADVANCE(29);
      if (lookahead == '~') ADVANCE(21);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(14);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym__multi_line_statement_token1);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(296);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_line_number);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_label);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == ':') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(84);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_fnend);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_fnend);
      if (lookahead == ':') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(81);
      if (lookahead == '=') ADVANCE(299);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_numeric_function_name);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(71);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_let_statement_token1);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_let_statement_token1);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_let_statement_token1);
      if (lookahead == ':') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_let_statement_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_print_statement_token1);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_print_statement_token1);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_print_statement_token1);
      if (lookahead == ':') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(297);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(298);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(300);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(74);
      if (lookahead == '=') ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(86);
      if (lookahead == '>') ADVANCE(73);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=') ADVANCE(85);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_unary_expression_token1);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_unary_expression_token1);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_unary_expression_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_system_function_token1);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_system_function_token1);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_system_function_token2);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_system_function_token2);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_system_function_token3);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_system_function_token3);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_system_function_token4);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_system_function_token4);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_system_function_token5);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_system_function_token5);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_system_function_token6);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_system_function_token6);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_system_function_token7);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_system_function_token7);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_system_function_token8);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_system_function_token8);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_system_function_token9);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_system_function_token9);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_system_function_token10);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_system_function_token10);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_system_function_token11);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_system_function_token11);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_system_function_token12);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_system_function_token12);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_system_function_token13);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_system_function_token13);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_system_function_token14);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_system_function_token14);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_system_function_token15);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_system_function_token15);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_system_function_token16);
      if (lookahead == '$') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_system_function_token16);
      if (lookahead == '$') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_system_function_token17);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_system_function_token17);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_system_function_token18);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_system_function_token18);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_system_function_token19);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_system_function_token19);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_system_function_token20);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_system_function_token20);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_system_function_token21);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_system_function_token21);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_system_function_token22);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_system_function_token22);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_system_function_token23);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(867);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_system_function_token23);
      if (lookahead == '$') ADVANCE(252);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_system_function_token24);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_system_function_token24);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_system_function_token25);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_system_function_token25);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_system_function_token26);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_system_function_token26);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_system_function_token27);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_system_function_token27);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_system_function_token28);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_system_function_token28);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_system_function_token29);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_system_function_token29);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_system_function_token30);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_system_function_token30);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_system_function_token31);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_system_function_token31);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_system_function_token32);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_system_function_token32);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_system_function_token33);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_system_function_token33);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_system_function_token34);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_system_function_token34);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_system_function_token35);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_system_function_token35);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_system_function_token36);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_system_function_token36);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_system_function_token37);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_system_function_token37);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_system_function_token38);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_system_function_token38);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_system_function_token39);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_system_function_token39);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_system_function_token40);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_system_function_token40);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_system_function_token41);
      if (lookahead == '$') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_system_function_token41);
      if (lookahead == '$') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_system_function_token42);
      if (lookahead == '$') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_system_function_token42);
      if (lookahead == '$') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_system_function_token43);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_system_function_token43);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_system_function_token44);
      if (lookahead == '$') ADVANCE(262);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_system_function_token44);
      if (lookahead == '$') ADVANCE(262);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_system_function_token45);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_system_function_token45);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_system_function_token46);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_system_function_token46);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_system_function_token47);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_system_function_token47);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_system_function_token48);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_system_function_token48);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_system_function_token49);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_system_function_token49);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_system_function_token50);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_system_function_token50);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_system_function_token51);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_system_function_token51);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_system_function_token52);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(887);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_system_function_token52);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_system_function_token53);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_system_function_token53);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_system_function_token54);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_system_function_token54);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_system_function_token55);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_system_function_token55);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_system_function_token56);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_system_function_token56);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_system_function_token57);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_system_function_token57);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_system_function_token58);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_system_function_token58);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_system_function_token59);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_system_function_token59);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_system_function_token60);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_system_function_token60);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_system_function_token61);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_system_function_token61);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_system_function_token62);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_system_function_token62);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_system_function_token63);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_system_function_token63);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_system_function_token64);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_system_function_token64);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_system_function_token65);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_system_function_token65);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_system_function_token66);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_system_function_token66);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_system_function_token67);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_system_function_token67);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_system_function_token68);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_system_function_token68);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_system_function_token69);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_system_function_token69);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_system_function_token70);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_system_function_token70);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_system_function_token71);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_system_function_token71);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_system_function_token72);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_system_function_token72);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_system_function_token73);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_system_function_token73);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_system_function_token74);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_system_function_token74);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_system_function_token75);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_system_function_token75);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_system_function_token76);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_system_function_token77);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_system_function_token78);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_system_function_token79);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_system_function_token80);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_system_function_token81);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_system_function_token82);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_system_function_token83);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_system_function_token84);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_system_function_token85);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_system_function_token86);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_system_function_token87);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_system_function_token88);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_system_function_token89);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_system_function_token90);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_system_function_token91);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_system_function_token92);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_system_function_token93);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_system_function_token94);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_system_function_token95);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_system_function_token96);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_system_function_token97);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_system_function_token98);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_system_function_token99);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_system_function_token100);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_system_function_token101);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_system_function_token102);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_system_function_token103);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_system_function_token104);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_system_function_token105);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_system_function_token106);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_system_function_token107);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_system_function_token108);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_system_function_token109);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_system_function_token110);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_system_function_token111);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_system_function_token112);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_system_function_token113);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_system_function_token114);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__string_function_identifier);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__numeric_function_identifier);
      if (lookahead == '$') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '`') ADVANCE(286);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__template_chars);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__template_chars);
      if (lookahead == '{') ADVANCE(290);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__template_chars);
      if (lookahead == '{') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(287);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_stringidentifier);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(271);
      if (lookahead == '2') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(272);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == '2') ADVANCE(564);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == '_') ADVANCE(426);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == '_') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == '_') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == '_') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == '_') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(577);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(364);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(569);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(493);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(378);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(362);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(482);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(456);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(388);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(555);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(376);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(529);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(232);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(588);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(204);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(513);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(466);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(515);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(509);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(346);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(433);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(514);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(468);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(445);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(552);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(401);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(511);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(437);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(434);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(548);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(438);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(519);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(537);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(377);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(571);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(385);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(595);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(572);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(366);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(494);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(380);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(590);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(355);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(541);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(495);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(496);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(414);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(533);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(370);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(531);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(464);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(492);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(503);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(429);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(350);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(405);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(538);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(507);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(148);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(196);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(557);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(467);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(397);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(605);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(144);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(563);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(506);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(518);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(525);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(240);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(491);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(556);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(398);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(375);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(532);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(425);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(471);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(379);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(440);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(562);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(477);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(336);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(106);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(399);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(524);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(573);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(604);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(283);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__mat);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == '2') ADVANCE(842);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'E') ADVANCE(643);
      if (lookahead == 'e') ADVANCE(617);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(856);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == '_') ADVANCE(704);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == '_') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == '_') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == '_') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == '_') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'd') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'e') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'f') ADVANCE(51);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(866);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'n') ADVANCE(616);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(744);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(677);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(143);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'n') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'n') ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(856);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(643);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(848);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(770);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(657);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(641);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(760);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(726);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(734);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(667);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(833);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(663);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(807);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(231);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(866);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(748);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(203);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(791);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(745);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(793);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(787);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(625);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(722);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(711);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(893);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(899);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(792);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(746);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(723);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(830);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(885);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(875);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(891);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(681);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(900);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(907);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(715);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(712);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(826);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(716);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(797);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(814);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(656);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(847);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(666);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(769);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(782);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(707);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(629);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(684);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(816);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(873);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(849);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(645);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(771);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(659);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(868);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(634);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(819);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(772);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(773);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(693);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(810);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(649);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(811);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(878);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(742);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(877);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(879);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(689);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(829);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(897);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(906);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(912);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(914);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(916);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(917);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(147);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(195);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(835);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(721);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(744);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(677);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(143);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(841);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(779);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(795);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(803);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(886);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(239);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(768);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(834);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(678);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(696);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(892);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(895);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(898);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(902);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(910);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(915);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(697);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(654);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(809);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(717);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(703);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(159);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(869);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(852);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(911);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(913);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(870);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(872);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(876);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(776);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(864);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(749);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(884);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(658);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(718);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(840);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(611);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(823);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(757);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(881);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(725);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(105);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(608);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(679);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(903);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(904);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(908);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(909);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(802);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(851);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(271);
      if (lookahead == '2') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(272);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(882);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(918);
      END_STATE();
    case 919:
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
  [1] = {.lex_state = 44},
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
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 44},
  [51] = {.lex_state = 44},
  [52] = {.lex_state = 44},
  [53] = {.lex_state = 44},
  [54] = {.lex_state = 44},
  [55] = {.lex_state = 44},
  [56] = {.lex_state = 44},
  [57] = {.lex_state = 44},
  [58] = {.lex_state = 44},
  [59] = {.lex_state = 44},
  [60] = {.lex_state = 44},
  [61] = {.lex_state = 44},
  [62] = {.lex_state = 44},
  [63] = {.lex_state = 44},
  [64] = {.lex_state = 44},
  [65] = {.lex_state = 44},
  [66] = {.lex_state = 44},
  [67] = {.lex_state = 44},
  [68] = {.lex_state = 44},
  [69] = {.lex_state = 44},
  [70] = {.lex_state = 44},
  [71] = {.lex_state = 44},
  [72] = {.lex_state = 44},
  [73] = {.lex_state = 44},
  [74] = {.lex_state = 44},
  [75] = {.lex_state = 44},
  [76] = {.lex_state = 44},
  [77] = {.lex_state = 44},
  [78] = {.lex_state = 44},
  [79] = {.lex_state = 44},
  [80] = {.lex_state = 44},
  [81] = {.lex_state = 44},
  [82] = {.lex_state = 44},
  [83] = {.lex_state = 44},
  [84] = {.lex_state = 44},
  [85] = {.lex_state = 44},
  [86] = {.lex_state = 44},
  [87] = {.lex_state = 44},
  [88] = {.lex_state = 44},
  [89] = {.lex_state = 44},
  [90] = {.lex_state = 44},
  [91] = {.lex_state = 44},
  [92] = {.lex_state = 44},
  [93] = {.lex_state = 44},
  [94] = {.lex_state = 44},
  [95] = {.lex_state = 44},
  [96] = {.lex_state = 44},
  [97] = {.lex_state = 44},
  [98] = {.lex_state = 44},
  [99] = {.lex_state = 44},
  [100] = {.lex_state = 44},
  [101] = {.lex_state = 44},
  [102] = {.lex_state = 44},
  [103] = {.lex_state = 44},
  [104] = {.lex_state = 44},
  [105] = {.lex_state = 44},
  [106] = {.lex_state = 44},
  [107] = {.lex_state = 44},
  [108] = {.lex_state = 44},
  [109] = {.lex_state = 44},
  [110] = {.lex_state = 44},
  [111] = {.lex_state = 44},
  [112] = {.lex_state = 44},
  [113] = {.lex_state = 44},
  [114] = {.lex_state = 44},
  [115] = {.lex_state = 44},
  [116] = {.lex_state = 44},
  [117] = {.lex_state = 44},
  [118] = {.lex_state = 44},
  [119] = {.lex_state = 44},
  [120] = {.lex_state = 44},
  [121] = {.lex_state = 44},
  [122] = {.lex_state = 44},
  [123] = {.lex_state = 44},
  [124] = {.lex_state = 44},
  [125] = {.lex_state = 44},
  [126] = {.lex_state = 44},
  [127] = {.lex_state = 44},
  [128] = {.lex_state = 44},
  [129] = {.lex_state = 44},
  [130] = {.lex_state = 44},
  [131] = {.lex_state = 44},
  [132] = {.lex_state = 44},
  [133] = {.lex_state = 44},
  [134] = {.lex_state = 44},
  [135] = {.lex_state = 44},
  [136] = {.lex_state = 44},
  [137] = {.lex_state = 44},
  [138] = {.lex_state = 44},
  [139] = {.lex_state = 44},
  [140] = {.lex_state = 44},
  [141] = {.lex_state = 44},
  [142] = {.lex_state = 44},
  [143] = {.lex_state = 44},
  [144] = {.lex_state = 44},
  [145] = {.lex_state = 44},
  [146] = {.lex_state = 44},
  [147] = {.lex_state = 44},
  [148] = {.lex_state = 44},
  [149] = {.lex_state = 44},
  [150] = {.lex_state = 44},
  [151] = {.lex_state = 44},
  [152] = {.lex_state = 44},
  [153] = {.lex_state = 44},
  [154] = {.lex_state = 44},
  [155] = {.lex_state = 44},
  [156] = {.lex_state = 44},
  [157] = {.lex_state = 44},
  [158] = {.lex_state = 44},
  [159] = {.lex_state = 44},
  [160] = {.lex_state = 44},
  [161] = {.lex_state = 44},
  [162] = {.lex_state = 44},
  [163] = {.lex_state = 44},
  [164] = {.lex_state = 44},
  [165] = {.lex_state = 44},
  [166] = {.lex_state = 44},
  [167] = {.lex_state = 44},
  [168] = {.lex_state = 44},
  [169] = {.lex_state = 44},
  [170] = {.lex_state = 44},
  [171] = {.lex_state = 44},
  [172] = {.lex_state = 44},
  [173] = {.lex_state = 44},
  [174] = {.lex_state = 44},
  [175] = {.lex_state = 23},
  [176] = {.lex_state = 23},
  [177] = {.lex_state = 23},
  [178] = {.lex_state = 23},
  [179] = {.lex_state = 44},
  [180] = {.lex_state = 44},
  [181] = {.lex_state = 44},
  [182] = {.lex_state = 44},
  [183] = {.lex_state = 44},
  [184] = {.lex_state = 44},
  [185] = {.lex_state = 44},
  [186] = {.lex_state = 44},
  [187] = {.lex_state = 44},
  [188] = {.lex_state = 44},
  [189] = {.lex_state = 44},
  [190] = {.lex_state = 44},
  [191] = {.lex_state = 44},
  [192] = {.lex_state = 44},
  [193] = {.lex_state = 44},
  [194] = {.lex_state = 44},
  [195] = {.lex_state = 44},
  [196] = {.lex_state = 44},
  [197] = {.lex_state = 44},
  [198] = {.lex_state = 22},
  [199] = {.lex_state = 44},
  [200] = {.lex_state = 22},
  [201] = {.lex_state = 22},
  [202] = {.lex_state = 22},
  [203] = {.lex_state = 44},
  [204] = {.lex_state = 44},
  [205] = {.lex_state = 44},
  [206] = {.lex_state = 44},
  [207] = {.lex_state = 44},
  [208] = {.lex_state = 22},
  [209] = {.lex_state = 44},
  [210] = {.lex_state = 44},
  [211] = {.lex_state = 44},
  [212] = {.lex_state = 26},
  [213] = {.lex_state = 26},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 22},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 5},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 43},
  [236] = {.lex_state = 43},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 5},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 35},
  [254] = {.lex_state = 35},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 293},
  [257] = {.lex_state = 295},
  [258] = {.lex_state = 35},
  [259] = {.lex_state = 35},
  [260] = {.lex_state = 295},
  [261] = {.lex_state = 293},
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
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_TILDE_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
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
    [sym_source_file] = STATE(255),
    [sym_line] = STATE(167),
    [sym__single_line_statement] = STATE(204),
    [sym__multi_line_statement] = STATE(204),
    [sym_statement] = STATE(179),
    [sym__definition] = STATE(204),
    [sym_function_definition] = STATE(204),
    [sym_let_statement] = STATE(185),
    [sym_print_statement] = STATE(185),
    [aux_sym_source_file_repeat1] = STATE(167),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_line_number] = ACTIONS(5),
    [sym_label] = ACTIONS(7),
    [anon_sym_def] = ACTIONS(9),
    [aux_sym_let_statement_token1] = ACTIONS(11),
    [aux_sym_print_statement_token1] = ACTIONS(13),
  },
  [2] = {
    [sym__expression] = STATE(144),
    [sym_binary_expression] = STATE(144),
    [sym_unary_expression] = STATE(144),
    [sym_primary_expression] = STATE(144),
    [sym_call_expression] = STATE(105),
    [sym_system_function] = STATE(104),
    [sym_user_function] = STATE(104),
    [sym_template_string] = STATE(105),
    [sym_string] = STATE(105),
    [sym_parenthesized_expression] = STATE(105),
    [sym_assignment_expression] = STATE(187),
    [sym_forced_assignment_expression] = STATE(144),
    [sym__reference] = STATE(88),
    [sym_numberelement] = STATE(88),
    [sym_stringelement] = STATE(88),
    [sym_stringarray] = STATE(88),
    [sym_stringreference] = STATE(88),
    [sym_numberreference] = STATE(88),
    [sym_numberarray] = STATE(88),
    [sym_number] = STATE(105),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
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
    [sym__expression] = STATE(158),
    [sym_binary_expression] = STATE(158),
    [sym_unary_expression] = STATE(158),
    [sym_primary_expression] = STATE(158),
    [sym_call_expression] = STATE(105),
    [sym_system_function] = STATE(104),
    [sym_user_function] = STATE(104),
    [sym_template_string] = STATE(105),
    [sym_string] = STATE(105),
    [sym_parenthesized_expression] = STATE(105),
    [sym_forced_assignment_expression] = STATE(158),
    [sym__reference] = STATE(80),
    [sym_numberelement] = STATE(80),
    [sym_stringelement] = STATE(80),
    [sym_stringarray] = STATE(80),
    [sym_stringreference] = STATE(80),
    [sym_numberreference] = STATE(80),
    [sym_range] = STATE(225),
    [sym_numberarray] = STATE(80),
    [sym_number] = STATE(105),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
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
    [sym__expression] = STATE(158),
    [sym_binary_expression] = STATE(158),
    [sym_unary_expression] = STATE(158),
    [sym_primary_expression] = STATE(158),
    [sym_call_expression] = STATE(105),
    [sym_system_function] = STATE(104),
    [sym_user_function] = STATE(104),
    [sym_template_string] = STATE(105),
    [sym_string] = STATE(105),
    [sym_parenthesized_expression] = STATE(105),
    [sym_forced_assignment_expression] = STATE(158),
    [sym__reference] = STATE(80),
    [sym_numberelement] = STATE(80),
    [sym_stringelement] = STATE(80),
    [sym_stringarray] = STATE(80),
    [sym_stringreference] = STATE(80),
    [sym_numberreference] = STATE(80),
    [sym_range] = STATE(247),
    [sym_numberarray] = STATE(80),
    [sym_number] = STATE(105),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
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
    [sym__expression] = STATE(150),
    [sym_binary_expression] = STATE(150),
    [sym_unary_expression] = STATE(150),
    [sym_primary_expression] = STATE(150),
    [sym_call_expression] = STATE(105),
    [sym_system_function] = STATE(104),
    [sym_user_function] = STATE(104),
    [sym_template_string] = STATE(105),
    [sym_string] = STATE(105),
    [sym_parenthesized_expression] = STATE(105),
    [sym_forced_assignment_expression] = STATE(150),
    [sym__reference] = STATE(80),
    [sym_numberelement] = STATE(80),
    [sym_stringelement] = STATE(80),
    [sym_stringarray] = STATE(80),
    [sym_stringreference] = STATE(80),
    [sym_numberreference] = STATE(80),
    [sym_range] = STATE(244),
    [sym_numberarray] = STATE(80),
    [sym_number] = STATE(105),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
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
    [sym__expression] = STATE(158),
    [sym_binary_expression] = STATE(158),
    [sym_unary_expression] = STATE(158),
    [sym_primary_expression] = STATE(158),
    [sym_call_expression] = STATE(105),
    [sym_system_function] = STATE(104),
    [sym_user_function] = STATE(104),
    [sym_template_string] = STATE(105),
    [sym_string] = STATE(105),
    [sym_parenthesized_expression] = STATE(105),
    [sym_forced_assignment_expression] = STATE(158),
    [sym__reference] = STATE(80),
    [sym_numberelement] = STATE(80),
    [sym_stringelement] = STATE(80),
    [sym_stringarray] = STATE(80),
    [sym_stringreference] = STATE(80),
    [sym_numberreference] = STATE(80),
    [sym_range] = STATE(230),
    [sym_numberarray] = STATE(80),
    [sym_number] = STATE(105),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
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
    [sym__expression] = STATE(151),
    [sym_binary_expression] = STATE(151),
    [sym_unary_expression] = STATE(151),
    [sym_primary_expression] = STATE(151),
    [sym_call_expression] = STATE(105),
    [sym_system_function] = STATE(104),
    [sym_user_function] = STATE(104),
    [sym_template_string] = STATE(105),
    [sym_string] = STATE(105),
    [sym_parenthesized_expression] = STATE(105),
    [sym_forced_assignment_expression] = STATE(151),
    [sym__reference] = STATE(80),
    [sym_numberelement] = STATE(80),
    [sym_stringelement] = STATE(80),
    [sym_stringarray] = STATE(80),
    [sym_stringreference] = STATE(80),
    [sym_numberreference] = STATE(80),
    [sym_range] = STATE(247),
    [sym_numberarray] = STATE(80),
    [sym_number] = STATE(105),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
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
    [sym__expression] = STATE(158),
    [sym_binary_expression] = STATE(158),
    [sym_unary_expression] = STATE(158),
    [sym_primary_expression] = STATE(158),
    [sym_call_expression] = STATE(105),
    [sym_system_function] = STATE(104),
    [sym_user_function] = STATE(104),
    [sym_template_string] = STATE(105),
    [sym_string] = STATE(105),
    [sym_parenthesized_expression] = STATE(105),
    [sym_forced_assignment_expression] = STATE(158),
    [sym__reference] = STATE(80),
    [sym_numberelement] = STATE(80),
    [sym_stringelement] = STATE(80),
    [sym_stringarray] = STATE(80),
    [sym_stringreference] = STATE(80),
    [sym_numberreference] = STATE(80),
    [sym_range] = STATE(244),
    [sym_numberarray] = STATE(80),
    [sym_number] = STATE(105),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
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
  [9] = {
    [sym__expression] = STATE(147),
    [sym_binary_expression] = STATE(147),
    [sym_unary_expression] = STATE(147),
    [sym_primary_expression] = STATE(147),
    [sym_call_expression] = STATE(123),
    [sym_system_function] = STATE(130),
    [sym_user_function] = STATE(130),
    [sym_template_string] = STATE(123),
    [sym_string] = STATE(123),
    [sym_parenthesized_expression] = STATE(123),
    [sym_assignment_expression] = STATE(190),
    [sym_forced_assignment_expression] = STATE(147),
    [sym__reference] = STATE(92),
    [sym_numberelement] = STATE(92),
    [sym_stringelement] = STATE(92),
    [sym_stringarray] = STATE(92),
    [sym_stringreference] = STATE(92),
    [sym_numberreference] = STATE(92),
    [sym_numberarray] = STATE(92),
    [sym_number] = STATE(123),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(45),
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
  [10] = {
    [sym__expression] = STATE(158),
    [sym_binary_expression] = STATE(158),
    [sym_unary_expression] = STATE(158),
    [sym_primary_expression] = STATE(158),
    [sym_call_expression] = STATE(105),
    [sym_system_function] = STATE(104),
    [sym_user_function] = STATE(104),
    [sym_template_string] = STATE(105),
    [sym_string] = STATE(105),
    [sym_parenthesized_expression] = STATE(105),
    [sym_forced_assignment_expression] = STATE(158),
    [sym__reference] = STATE(80),
    [sym_numberelement] = STATE(80),
    [sym_stringelement] = STATE(80),
    [sym_stringarray] = STATE(80),
    [sym_stringreference] = STATE(80),
    [sym_numberreference] = STATE(80),
    [sym_range] = STATE(237),
    [sym_numberarray] = STATE(80),
    [sym_number] = STATE(105),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
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
    [sym__expression] = STATE(154),
    [sym_binary_expression] = STATE(154),
    [sym_unary_expression] = STATE(154),
    [sym_primary_expression] = STATE(154),
    [sym_call_expression] = STATE(105),
    [sym_system_function] = STATE(104),
    [sym_user_function] = STATE(104),
    [sym_template_string] = STATE(105),
    [sym_string] = STATE(105),
    [sym_parenthesized_expression] = STATE(105),
    [sym_forced_assignment_expression] = STATE(154),
    [sym__reference] = STATE(80),
    [sym_numberelement] = STATE(80),
    [sym_stringelement] = STATE(80),
    [sym_stringarray] = STATE(80),
    [sym_stringreference] = STATE(80),
    [sym_numberreference] = STATE(80),
    [sym_numberarray] = STATE(80),
    [sym_number] = STATE(105),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
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
    [sym__expression] = STATE(155),
    [sym_binary_expression] = STATE(155),
    [sym_unary_expression] = STATE(155),
    [sym_primary_expression] = STATE(155),
    [sym_call_expression] = STATE(105),
    [sym_system_function] = STATE(104),
    [sym_user_function] = STATE(104),
    [sym_template_string] = STATE(105),
    [sym_string] = STATE(105),
    [sym_parenthesized_expression] = STATE(105),
    [sym_forced_assignment_expression] = STATE(155),
    [sym__reference] = STATE(80),
    [sym_numberelement] = STATE(80),
    [sym_stringelement] = STATE(80),
    [sym_stringarray] = STATE(80),
    [sym_stringreference] = STATE(80),
    [sym_numberreference] = STATE(80),
    [sym_numberarray] = STATE(80),
    [sym_number] = STATE(105),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
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
    [sym__expression] = STATE(120),
    [sym_binary_expression] = STATE(120),
    [sym_unary_expression] = STATE(120),
    [sym_primary_expression] = STATE(120),
    [sym_call_expression] = STATE(123),
    [sym_system_function] = STATE(130),
    [sym_user_function] = STATE(130),
    [sym_template_string] = STATE(123),
    [sym_string] = STATE(123),
    [sym_parenthesized_expression] = STATE(123),
    [sym_forced_assignment_expression] = STATE(120),
    [sym__reference] = STATE(87),
    [sym_numberelement] = STATE(87),
    [sym_stringelement] = STATE(87),
    [sym_stringarray] = STATE(87),
    [sym_stringreference] = STATE(87),
    [sym_numberreference] = STATE(87),
    [sym_numberarray] = STATE(87),
    [sym_number] = STATE(123),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(45),
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
  [14] = {
    [sym__expression] = STATE(98),
    [sym_binary_expression] = STATE(98),
    [sym_unary_expression] = STATE(98),
    [sym_primary_expression] = STATE(98),
    [sym_call_expression] = STATE(105),
    [sym_system_function] = STATE(104),
    [sym_user_function] = STATE(104),
    [sym_template_string] = STATE(105),
    [sym_string] = STATE(105),
    [sym_parenthesized_expression] = STATE(105),
    [sym_forced_assignment_expression] = STATE(98),
    [sym__reference] = STATE(80),
    [sym_numberelement] = STATE(80),
    [sym_stringelement] = STATE(80),
    [sym_stringarray] = STATE(80),
    [sym_stringreference] = STATE(80),
    [sym_numberreference] = STATE(80),
    [sym_numberarray] = STATE(80),
    [sym_number] = STATE(105),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
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
    [sym__expression] = STATE(149),
    [sym_binary_expression] = STATE(149),
    [sym_unary_expression] = STATE(149),
    [sym_primary_expression] = STATE(149),
    [sym_call_expression] = STATE(105),
    [sym_system_function] = STATE(104),
    [sym_user_function] = STATE(104),
    [sym_template_string] = STATE(105),
    [sym_string] = STATE(105),
    [sym_parenthesized_expression] = STATE(105),
    [sym_forced_assignment_expression] = STATE(149),
    [sym__reference] = STATE(80),
    [sym_numberelement] = STATE(80),
    [sym_stringelement] = STATE(80),
    [sym_stringarray] = STATE(80),
    [sym_stringreference] = STATE(80),
    [sym_numberreference] = STATE(80),
    [sym_numberarray] = STATE(80),
    [sym_number] = STATE(105),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
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
    [sym__expression] = STATE(118),
    [sym_binary_expression] = STATE(118),
    [sym_unary_expression] = STATE(118),
    [sym_primary_expression] = STATE(118),
    [sym_call_expression] = STATE(105),
    [sym_system_function] = STATE(104),
    [sym_user_function] = STATE(104),
    [sym_template_string] = STATE(105),
    [sym_string] = STATE(105),
    [sym_parenthesized_expression] = STATE(105),
    [sym_forced_assignment_expression] = STATE(118),
    [sym__reference] = STATE(80),
    [sym_numberelement] = STATE(80),
    [sym_stringelement] = STATE(80),
    [sym_stringarray] = STATE(80),
    [sym_stringreference] = STATE(80),
    [sym_numberreference] = STATE(80),
    [sym_numberarray] = STATE(80),
    [sym_number] = STATE(105),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
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
  [17] = {
    [sym__expression] = STATE(125),
    [sym_binary_expression] = STATE(125),
    [sym_unary_expression] = STATE(125),
    [sym_primary_expression] = STATE(125),
    [sym_call_expression] = STATE(123),
    [sym_system_function] = STATE(130),
    [sym_user_function] = STATE(130),
    [sym_template_string] = STATE(123),
    [sym_string] = STATE(123),
    [sym_parenthesized_expression] = STATE(123),
    [sym_forced_assignment_expression] = STATE(125),
    [sym__reference] = STATE(87),
    [sym_numberelement] = STATE(87),
    [sym_stringelement] = STATE(87),
    [sym_stringarray] = STATE(87),
    [sym_stringreference] = STATE(87),
    [sym_numberreference] = STATE(87),
    [sym_numberarray] = STATE(87),
    [sym_number] = STATE(123),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(45),
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
  [18] = {
    [sym__expression] = STATE(146),
    [sym_binary_expression] = STATE(146),
    [sym_unary_expression] = STATE(146),
    [sym_primary_expression] = STATE(146),
    [sym_call_expression] = STATE(123),
    [sym_system_function] = STATE(130),
    [sym_user_function] = STATE(130),
    [sym_template_string] = STATE(123),
    [sym_string] = STATE(123),
    [sym_parenthesized_expression] = STATE(123),
    [sym_forced_assignment_expression] = STATE(146),
    [sym__reference] = STATE(87),
    [sym_numberelement] = STATE(87),
    [sym_stringelement] = STATE(87),
    [sym_stringarray] = STATE(87),
    [sym_stringreference] = STATE(87),
    [sym_numberreference] = STATE(87),
    [sym_numberarray] = STATE(87),
    [sym_number] = STATE(123),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(45),
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
    [sym__expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [sym_unary_expression] = STATE(119),
    [sym_primary_expression] = STATE(119),
    [sym_call_expression] = STATE(123),
    [sym_system_function] = STATE(130),
    [sym_user_function] = STATE(130),
    [sym_template_string] = STATE(123),
    [sym_string] = STATE(123),
    [sym_parenthesized_expression] = STATE(123),
    [sym_forced_assignment_expression] = STATE(119),
    [sym__reference] = STATE(87),
    [sym_numberelement] = STATE(87),
    [sym_stringelement] = STATE(87),
    [sym_stringarray] = STATE(87),
    [sym_stringreference] = STATE(87),
    [sym_numberreference] = STATE(87),
    [sym_numberarray] = STATE(87),
    [sym_number] = STATE(123),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(45),
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
  [20] = {
    [sym__expression] = STATE(132),
    [sym_binary_expression] = STATE(132),
    [sym_unary_expression] = STATE(132),
    [sym_primary_expression] = STATE(132),
    [sym_call_expression] = STATE(123),
    [sym_system_function] = STATE(130),
    [sym_user_function] = STATE(130),
    [sym_template_string] = STATE(123),
    [sym_string] = STATE(123),
    [sym_parenthesized_expression] = STATE(123),
    [sym_forced_assignment_expression] = STATE(132),
    [sym__reference] = STATE(87),
    [sym_numberelement] = STATE(87),
    [sym_stringelement] = STATE(87),
    [sym_stringarray] = STATE(87),
    [sym_stringreference] = STATE(87),
    [sym_numberreference] = STATE(87),
    [sym_numberarray] = STATE(87),
    [sym_number] = STATE(123),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(45),
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
  [21] = {
    [sym__expression] = STATE(141),
    [sym_binary_expression] = STATE(141),
    [sym_unary_expression] = STATE(141),
    [sym_primary_expression] = STATE(141),
    [sym_call_expression] = STATE(123),
    [sym_system_function] = STATE(130),
    [sym_user_function] = STATE(130),
    [sym_template_string] = STATE(123),
    [sym_string] = STATE(123),
    [sym_parenthesized_expression] = STATE(123),
    [sym_forced_assignment_expression] = STATE(141),
    [sym__reference] = STATE(87),
    [sym_numberelement] = STATE(87),
    [sym_stringelement] = STATE(87),
    [sym_stringarray] = STATE(87),
    [sym_stringreference] = STATE(87),
    [sym_numberreference] = STATE(87),
    [sym_numberarray] = STATE(87),
    [sym_number] = STATE(123),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(45),
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
  [22] = {
    [sym__expression] = STATE(136),
    [sym_binary_expression] = STATE(136),
    [sym_unary_expression] = STATE(136),
    [sym_primary_expression] = STATE(136),
    [sym_call_expression] = STATE(123),
    [sym_system_function] = STATE(130),
    [sym_user_function] = STATE(130),
    [sym_template_string] = STATE(123),
    [sym_string] = STATE(123),
    [sym_parenthesized_expression] = STATE(123),
    [sym_forced_assignment_expression] = STATE(136),
    [sym__reference] = STATE(87),
    [sym_numberelement] = STATE(87),
    [sym_stringelement] = STATE(87),
    [sym_stringarray] = STATE(87),
    [sym_stringreference] = STATE(87),
    [sym_numberreference] = STATE(87),
    [sym_numberarray] = STATE(87),
    [sym_number] = STATE(123),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(45),
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
  [23] = {
    [sym__expression] = STATE(137),
    [sym_binary_expression] = STATE(137),
    [sym_unary_expression] = STATE(137),
    [sym_primary_expression] = STATE(137),
    [sym_call_expression] = STATE(123),
    [sym_system_function] = STATE(130),
    [sym_user_function] = STATE(130),
    [sym_template_string] = STATE(123),
    [sym_string] = STATE(123),
    [sym_parenthesized_expression] = STATE(123),
    [sym_forced_assignment_expression] = STATE(137),
    [sym__reference] = STATE(87),
    [sym_numberelement] = STATE(87),
    [sym_stringelement] = STATE(87),
    [sym_stringarray] = STATE(87),
    [sym_stringreference] = STATE(87),
    [sym_numberreference] = STATE(87),
    [sym_numberarray] = STATE(87),
    [sym_number] = STATE(123),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(45),
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
  [24] = {
    [sym__expression] = STATE(153),
    [sym_binary_expression] = STATE(153),
    [sym_unary_expression] = STATE(153),
    [sym_primary_expression] = STATE(153),
    [sym_call_expression] = STATE(105),
    [sym_system_function] = STATE(104),
    [sym_user_function] = STATE(104),
    [sym_template_string] = STATE(105),
    [sym_string] = STATE(105),
    [sym_parenthesized_expression] = STATE(105),
    [sym_forced_assignment_expression] = STATE(153),
    [sym__reference] = STATE(80),
    [sym_numberelement] = STATE(80),
    [sym_stringelement] = STATE(80),
    [sym_stringarray] = STATE(80),
    [sym_stringreference] = STATE(80),
    [sym_numberreference] = STATE(80),
    [sym_numberarray] = STATE(80),
    [sym_number] = STATE(105),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
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
    [sym__expression] = STATE(142),
    [sym_binary_expression] = STATE(142),
    [sym_unary_expression] = STATE(142),
    [sym_primary_expression] = STATE(142),
    [sym_call_expression] = STATE(123),
    [sym_system_function] = STATE(130),
    [sym_user_function] = STATE(130),
    [sym_template_string] = STATE(123),
    [sym_string] = STATE(123),
    [sym_parenthesized_expression] = STATE(123),
    [sym_forced_assignment_expression] = STATE(142),
    [sym__reference] = STATE(87),
    [sym_numberelement] = STATE(87),
    [sym_stringelement] = STATE(87),
    [sym_stringarray] = STATE(87),
    [sym_stringreference] = STATE(87),
    [sym_numberreference] = STATE(87),
    [sym_numberarray] = STATE(87),
    [sym_number] = STATE(123),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(45),
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
  [26] = {
    [sym__expression] = STATE(131),
    [sym_binary_expression] = STATE(131),
    [sym_unary_expression] = STATE(131),
    [sym_primary_expression] = STATE(131),
    [sym_call_expression] = STATE(123),
    [sym_system_function] = STATE(130),
    [sym_user_function] = STATE(130),
    [sym_template_string] = STATE(123),
    [sym_string] = STATE(123),
    [sym_parenthesized_expression] = STATE(123),
    [sym_forced_assignment_expression] = STATE(131),
    [sym__reference] = STATE(87),
    [sym_numberelement] = STATE(87),
    [sym_stringelement] = STATE(87),
    [sym_stringarray] = STATE(87),
    [sym_stringreference] = STATE(87),
    [sym_numberreference] = STATE(87),
    [sym_numberarray] = STATE(87),
    [sym_number] = STATE(123),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(45),
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
  [27] = {
    [sym__expression] = STATE(134),
    [sym_binary_expression] = STATE(134),
    [sym_unary_expression] = STATE(134),
    [sym_primary_expression] = STATE(134),
    [sym_call_expression] = STATE(105),
    [sym_system_function] = STATE(104),
    [sym_user_function] = STATE(104),
    [sym_template_string] = STATE(105),
    [sym_string] = STATE(105),
    [sym_parenthesized_expression] = STATE(105),
    [sym_forced_assignment_expression] = STATE(134),
    [sym__reference] = STATE(80),
    [sym_numberelement] = STATE(80),
    [sym_stringelement] = STATE(80),
    [sym_stringarray] = STATE(80),
    [sym_stringreference] = STATE(80),
    [sym_numberreference] = STATE(80),
    [sym_numberarray] = STATE(80),
    [sym_number] = STATE(105),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
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
  [28] = {
    [sym__expression] = STATE(148),
    [sym_binary_expression] = STATE(148),
    [sym_unary_expression] = STATE(148),
    [sym_primary_expression] = STATE(148),
    [sym_call_expression] = STATE(123),
    [sym_system_function] = STATE(130),
    [sym_user_function] = STATE(130),
    [sym_template_string] = STATE(123),
    [sym_string] = STATE(123),
    [sym_parenthesized_expression] = STATE(123),
    [sym_forced_assignment_expression] = STATE(148),
    [sym__reference] = STATE(87),
    [sym_numberelement] = STATE(87),
    [sym_stringelement] = STATE(87),
    [sym_stringarray] = STATE(87),
    [sym_stringreference] = STATE(87),
    [sym_numberreference] = STATE(87),
    [sym_numberarray] = STATE(87),
    [sym_number] = STATE(123),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(45),
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
  [29] = {
    [sym__expression] = STATE(159),
    [sym_binary_expression] = STATE(159),
    [sym_unary_expression] = STATE(159),
    [sym_primary_expression] = STATE(159),
    [sym_call_expression] = STATE(105),
    [sym_system_function] = STATE(104),
    [sym_user_function] = STATE(104),
    [sym_template_string] = STATE(105),
    [sym_string] = STATE(105),
    [sym_parenthesized_expression] = STATE(105),
    [sym_forced_assignment_expression] = STATE(159),
    [sym__reference] = STATE(80),
    [sym_numberelement] = STATE(80),
    [sym_stringelement] = STATE(80),
    [sym_stringarray] = STATE(80),
    [sym_stringreference] = STATE(80),
    [sym_numberreference] = STATE(80),
    [sym_numberarray] = STATE(80),
    [sym_number] = STATE(105),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
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
  [30] = {
    [sym__expression] = STATE(115),
    [sym_binary_expression] = STATE(115),
    [sym_unary_expression] = STATE(115),
    [sym_primary_expression] = STATE(115),
    [sym_call_expression] = STATE(105),
    [sym_system_function] = STATE(104),
    [sym_user_function] = STATE(104),
    [sym_template_string] = STATE(105),
    [sym_string] = STATE(105),
    [sym_parenthesized_expression] = STATE(105),
    [sym_forced_assignment_expression] = STATE(115),
    [sym__reference] = STATE(80),
    [sym_numberelement] = STATE(80),
    [sym_stringelement] = STATE(80),
    [sym_stringarray] = STATE(80),
    [sym_stringreference] = STATE(80),
    [sym_numberreference] = STATE(80),
    [sym_numberarray] = STATE(80),
    [sym_number] = STATE(105),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
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
  [31] = {
    [sym__expression] = STATE(160),
    [sym_binary_expression] = STATE(160),
    [sym_unary_expression] = STATE(160),
    [sym_primary_expression] = STATE(160),
    [sym_call_expression] = STATE(105),
    [sym_system_function] = STATE(104),
    [sym_user_function] = STATE(104),
    [sym_template_string] = STATE(105),
    [sym_string] = STATE(105),
    [sym_parenthesized_expression] = STATE(105),
    [sym_forced_assignment_expression] = STATE(160),
    [sym__reference] = STATE(80),
    [sym_numberelement] = STATE(80),
    [sym_stringelement] = STATE(80),
    [sym_stringarray] = STATE(80),
    [sym_stringreference] = STATE(80),
    [sym_numberreference] = STATE(80),
    [sym_numberarray] = STATE(80),
    [sym_number] = STATE(105),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
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
  [32] = {
    [sym__expression] = STATE(143),
    [sym_binary_expression] = STATE(143),
    [sym_unary_expression] = STATE(143),
    [sym_primary_expression] = STATE(143),
    [sym_call_expression] = STATE(123),
    [sym_system_function] = STATE(130),
    [sym_user_function] = STATE(130),
    [sym_template_string] = STATE(123),
    [sym_string] = STATE(123),
    [sym_parenthesized_expression] = STATE(123),
    [sym_forced_assignment_expression] = STATE(143),
    [sym__reference] = STATE(87),
    [sym_numberelement] = STATE(87),
    [sym_stringelement] = STATE(87),
    [sym_stringarray] = STATE(87),
    [sym_stringreference] = STATE(87),
    [sym_numberreference] = STATE(87),
    [sym_numberarray] = STATE(87),
    [sym_number] = STATE(123),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(45),
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
  [33] = {
    [sym__expression] = STATE(127),
    [sym_binary_expression] = STATE(127),
    [sym_unary_expression] = STATE(127),
    [sym_primary_expression] = STATE(127),
    [sym_call_expression] = STATE(123),
    [sym_system_function] = STATE(130),
    [sym_user_function] = STATE(130),
    [sym_template_string] = STATE(123),
    [sym_string] = STATE(123),
    [sym_parenthesized_expression] = STATE(123),
    [sym_forced_assignment_expression] = STATE(127),
    [sym__reference] = STATE(87),
    [sym_numberelement] = STATE(87),
    [sym_stringelement] = STATE(87),
    [sym_stringarray] = STATE(87),
    [sym_stringreference] = STATE(87),
    [sym_numberreference] = STATE(87),
    [sym_numberarray] = STATE(87),
    [sym_number] = STATE(123),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(45),
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
  [34] = {
    [sym__expression] = STATE(112),
    [sym_binary_expression] = STATE(112),
    [sym_unary_expression] = STATE(112),
    [sym_primary_expression] = STATE(112),
    [sym_call_expression] = STATE(105),
    [sym_system_function] = STATE(104),
    [sym_user_function] = STATE(104),
    [sym_template_string] = STATE(105),
    [sym_string] = STATE(105),
    [sym_parenthesized_expression] = STATE(105),
    [sym_forced_assignment_expression] = STATE(112),
    [sym__reference] = STATE(80),
    [sym_numberelement] = STATE(80),
    [sym_stringelement] = STATE(80),
    [sym_stringarray] = STATE(80),
    [sym_stringreference] = STATE(80),
    [sym_numberreference] = STATE(80),
    [sym_numberarray] = STATE(80),
    [sym_number] = STATE(105),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
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
  [35] = {
    [sym__expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym_unary_expression] = STATE(121),
    [sym_primary_expression] = STATE(121),
    [sym_call_expression] = STATE(123),
    [sym_system_function] = STATE(130),
    [sym_user_function] = STATE(130),
    [sym_template_string] = STATE(123),
    [sym_string] = STATE(123),
    [sym_parenthesized_expression] = STATE(123),
    [sym_forced_assignment_expression] = STATE(121),
    [sym__reference] = STATE(87),
    [sym_numberelement] = STATE(87),
    [sym_stringelement] = STATE(87),
    [sym_stringarray] = STATE(87),
    [sym_stringreference] = STATE(87),
    [sym_numberreference] = STATE(87),
    [sym_numberarray] = STATE(87),
    [sym_number] = STATE(123),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(45),
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
  [36] = {
    [sym__expression] = STATE(145),
    [sym_binary_expression] = STATE(145),
    [sym_unary_expression] = STATE(145),
    [sym_primary_expression] = STATE(145),
    [sym_call_expression] = STATE(105),
    [sym_system_function] = STATE(104),
    [sym_user_function] = STATE(104),
    [sym_template_string] = STATE(105),
    [sym_string] = STATE(105),
    [sym_parenthesized_expression] = STATE(105),
    [sym_forced_assignment_expression] = STATE(145),
    [sym__reference] = STATE(80),
    [sym_numberelement] = STATE(80),
    [sym_stringelement] = STATE(80),
    [sym_stringarray] = STATE(80),
    [sym_stringreference] = STATE(80),
    [sym_numberreference] = STATE(80),
    [sym_numberarray] = STATE(80),
    [sym_number] = STATE(105),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
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
  [37] = {
    [sym__expression] = STATE(126),
    [sym_binary_expression] = STATE(126),
    [sym_unary_expression] = STATE(126),
    [sym_primary_expression] = STATE(126),
    [sym_call_expression] = STATE(123),
    [sym_system_function] = STATE(130),
    [sym_user_function] = STATE(130),
    [sym_template_string] = STATE(123),
    [sym_string] = STATE(123),
    [sym_parenthesized_expression] = STATE(123),
    [sym_forced_assignment_expression] = STATE(126),
    [sym__reference] = STATE(87),
    [sym_numberelement] = STATE(87),
    [sym_stringelement] = STATE(87),
    [sym_stringarray] = STATE(87),
    [sym_stringreference] = STATE(87),
    [sym_numberreference] = STATE(87),
    [sym_numberarray] = STATE(87),
    [sym_number] = STATE(123),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(45),
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
  [38] = {
    [sym__expression] = STATE(113),
    [sym_binary_expression] = STATE(113),
    [sym_unary_expression] = STATE(113),
    [sym_primary_expression] = STATE(113),
    [sym_call_expression] = STATE(105),
    [sym_system_function] = STATE(104),
    [sym_user_function] = STATE(104),
    [sym_template_string] = STATE(105),
    [sym_string] = STATE(105),
    [sym_parenthesized_expression] = STATE(105),
    [sym_forced_assignment_expression] = STATE(113),
    [sym__reference] = STATE(80),
    [sym_numberelement] = STATE(80),
    [sym_stringelement] = STATE(80),
    [sym_stringarray] = STATE(80),
    [sym_stringreference] = STATE(80),
    [sym_numberreference] = STATE(80),
    [sym_numberarray] = STATE(80),
    [sym_number] = STATE(105),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
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
  [39] = {
    [sym__expression] = STATE(156),
    [sym_binary_expression] = STATE(156),
    [sym_unary_expression] = STATE(156),
    [sym_primary_expression] = STATE(156),
    [sym_call_expression] = STATE(105),
    [sym_system_function] = STATE(104),
    [sym_user_function] = STATE(104),
    [sym_template_string] = STATE(105),
    [sym_string] = STATE(105),
    [sym_parenthesized_expression] = STATE(105),
    [sym_forced_assignment_expression] = STATE(156),
    [sym__reference] = STATE(80),
    [sym_numberelement] = STATE(80),
    [sym_stringelement] = STATE(80),
    [sym_stringarray] = STATE(80),
    [sym_stringreference] = STATE(80),
    [sym_numberreference] = STATE(80),
    [sym_numberarray] = STATE(80),
    [sym_number] = STATE(105),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
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
  [40] = {
    [sym__expression] = STATE(108),
    [sym_binary_expression] = STATE(108),
    [sym_unary_expression] = STATE(108),
    [sym_primary_expression] = STATE(108),
    [sym_call_expression] = STATE(105),
    [sym_system_function] = STATE(104),
    [sym_user_function] = STATE(104),
    [sym_template_string] = STATE(105),
    [sym_string] = STATE(105),
    [sym_parenthesized_expression] = STATE(105),
    [sym_forced_assignment_expression] = STATE(108),
    [sym__reference] = STATE(80),
    [sym_numberelement] = STATE(80),
    [sym_stringelement] = STATE(80),
    [sym_stringarray] = STATE(80),
    [sym_stringreference] = STATE(80),
    [sym_numberreference] = STATE(80),
    [sym_numberarray] = STATE(80),
    [sym_number] = STATE(105),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
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
  [41] = {
    [sym__expression] = STATE(157),
    [sym_binary_expression] = STATE(157),
    [sym_unary_expression] = STATE(157),
    [sym_primary_expression] = STATE(157),
    [sym_call_expression] = STATE(105),
    [sym_system_function] = STATE(104),
    [sym_user_function] = STATE(104),
    [sym_template_string] = STATE(105),
    [sym_string] = STATE(105),
    [sym_parenthesized_expression] = STATE(105),
    [sym_forced_assignment_expression] = STATE(157),
    [sym__reference] = STATE(80),
    [sym_numberelement] = STATE(80),
    [sym_stringelement] = STATE(80),
    [sym_stringarray] = STATE(80),
    [sym_stringreference] = STATE(80),
    [sym_numberreference] = STATE(80),
    [sym_numberarray] = STATE(80),
    [sym_number] = STATE(105),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
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
  [42] = {
    [sym__expression] = STATE(107),
    [sym_binary_expression] = STATE(107),
    [sym_unary_expression] = STATE(107),
    [sym_primary_expression] = STATE(107),
    [sym_call_expression] = STATE(105),
    [sym_system_function] = STATE(104),
    [sym_user_function] = STATE(104),
    [sym_template_string] = STATE(105),
    [sym_string] = STATE(105),
    [sym_parenthesized_expression] = STATE(105),
    [sym_forced_assignment_expression] = STATE(107),
    [sym__reference] = STATE(80),
    [sym_numberelement] = STATE(80),
    [sym_stringelement] = STATE(80),
    [sym_stringarray] = STATE(80),
    [sym_stringreference] = STATE(80),
    [sym_numberreference] = STATE(80),
    [sym_numberarray] = STATE(80),
    [sym_number] = STATE(105),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
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
  [43] = {
    [sym__expression] = STATE(97),
    [sym_binary_expression] = STATE(97),
    [sym_unary_expression] = STATE(97),
    [sym_primary_expression] = STATE(97),
    [sym_call_expression] = STATE(105),
    [sym_system_function] = STATE(104),
    [sym_user_function] = STATE(104),
    [sym_template_string] = STATE(105),
    [sym_string] = STATE(105),
    [sym_parenthesized_expression] = STATE(105),
    [sym_forced_assignment_expression] = STATE(97),
    [sym__reference] = STATE(80),
    [sym_numberelement] = STATE(80),
    [sym_stringelement] = STATE(80),
    [sym_stringarray] = STATE(80),
    [sym_stringreference] = STATE(80),
    [sym_numberreference] = STATE(80),
    [sym_numberarray] = STATE(80),
    [sym_number] = STATE(105),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
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
  [44] = {
    [sym__expression] = STATE(100),
    [sym_binary_expression] = STATE(100),
    [sym_unary_expression] = STATE(100),
    [sym_primary_expression] = STATE(100),
    [sym_call_expression] = STATE(105),
    [sym_system_function] = STATE(104),
    [sym_user_function] = STATE(104),
    [sym_template_string] = STATE(105),
    [sym_string] = STATE(105),
    [sym_parenthesized_expression] = STATE(105),
    [sym_forced_assignment_expression] = STATE(100),
    [sym__reference] = STATE(80),
    [sym_numberelement] = STATE(80),
    [sym_stringelement] = STATE(80),
    [sym_stringarray] = STATE(80),
    [sym_stringreference] = STATE(80),
    [sym_numberreference] = STATE(80),
    [sym_numberarray] = STATE(80),
    [sym_number] = STATE(105),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
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
  [45] = {
    [sym__expression] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_unary_expression] = STATE(161),
    [sym_primary_expression] = STATE(161),
    [sym_call_expression] = STATE(105),
    [sym_system_function] = STATE(104),
    [sym_user_function] = STATE(104),
    [sym_template_string] = STATE(105),
    [sym_string] = STATE(105),
    [sym_parenthesized_expression] = STATE(105),
    [sym_forced_assignment_expression] = STATE(161),
    [sym__reference] = STATE(80),
    [sym_numberelement] = STATE(80),
    [sym_stringelement] = STATE(80),
    [sym_stringarray] = STATE(80),
    [sym_stringreference] = STATE(80),
    [sym_numberreference] = STATE(80),
    [sym_numberarray] = STATE(80),
    [sym_number] = STATE(105),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
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
  [46] = {
    [sym__expression] = STATE(152),
    [sym_binary_expression] = STATE(152),
    [sym_unary_expression] = STATE(152),
    [sym_primary_expression] = STATE(152),
    [sym_call_expression] = STATE(105),
    [sym_system_function] = STATE(104),
    [sym_user_function] = STATE(104),
    [sym_template_string] = STATE(105),
    [sym_string] = STATE(105),
    [sym_parenthesized_expression] = STATE(105),
    [sym_forced_assignment_expression] = STATE(152),
    [sym__reference] = STATE(80),
    [sym_numberelement] = STATE(80),
    [sym_stringelement] = STATE(80),
    [sym_stringarray] = STATE(80),
    [sym_stringreference] = STATE(80),
    [sym_numberreference] = STATE(80),
    [sym_numberarray] = STATE(80),
    [sym_number] = STATE(105),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
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
  [47] = {
    [sym__expression] = STATE(101),
    [sym_binary_expression] = STATE(101),
    [sym_unary_expression] = STATE(101),
    [sym_primary_expression] = STATE(101),
    [sym_call_expression] = STATE(105),
    [sym_system_function] = STATE(104),
    [sym_user_function] = STATE(104),
    [sym_template_string] = STATE(105),
    [sym_string] = STATE(105),
    [sym_parenthesized_expression] = STATE(105),
    [sym_forced_assignment_expression] = STATE(101),
    [sym__reference] = STATE(80),
    [sym_numberelement] = STATE(80),
    [sym_stringelement] = STATE(80),
    [sym_stringarray] = STATE(80),
    [sym_stringreference] = STATE(80),
    [sym_numberreference] = STATE(80),
    [sym_numberarray] = STATE(80),
    [sym_number] = STATE(105),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
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
  [48] = {
    [sym__expression] = STATE(102),
    [sym_binary_expression] = STATE(102),
    [sym_unary_expression] = STATE(102),
    [sym_primary_expression] = STATE(102),
    [sym_call_expression] = STATE(105),
    [sym_system_function] = STATE(104),
    [sym_user_function] = STATE(104),
    [sym_template_string] = STATE(105),
    [sym_string] = STATE(105),
    [sym_parenthesized_expression] = STATE(105),
    [sym_forced_assignment_expression] = STATE(102),
    [sym__reference] = STATE(80),
    [sym_numberelement] = STATE(80),
    [sym_stringelement] = STATE(80),
    [sym_stringarray] = STATE(80),
    [sym_stringreference] = STATE(80),
    [sym_numberreference] = STATE(80),
    [sym_numberarray] = STATE(80),
    [sym_number] = STATE(105),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
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
  [49] = {
    [sym__expression] = STATE(94),
    [sym_binary_expression] = STATE(94),
    [sym_unary_expression] = STATE(94),
    [sym_primary_expression] = STATE(94),
    [sym_call_expression] = STATE(105),
    [sym_system_function] = STATE(104),
    [sym_user_function] = STATE(104),
    [sym_template_string] = STATE(105),
    [sym_string] = STATE(105),
    [sym_parenthesized_expression] = STATE(105),
    [sym_forced_assignment_expression] = STATE(94),
    [sym__reference] = STATE(80),
    [sym_numberelement] = STATE(80),
    [sym_stringelement] = STATE(80),
    [sym_stringarray] = STATE(80),
    [sym_stringreference] = STATE(80),
    [sym_numberreference] = STATE(80),
    [sym_numberarray] = STATE(80),
    [sym_number] = STATE(105),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    STATE(50), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(73), 13,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_EQ,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 22,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [47] = 4,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    STATE(52), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(80), 13,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_EQ,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(78), 22,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [94] = 4,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    STATE(50), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(86), 13,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_EQ,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(84), 22,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [141] = 4,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    STATE(69), 1,
      sym_dimension,
    ACTIONS(90), 13,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_EQ,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(88), 22,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [187] = 4,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(94), 13,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_EQ,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(92), 22,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [233] = 4,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(100), 13,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_EQ,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(98), 22,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [279] = 4,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(107), 13,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_EQ,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(105), 22,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [325] = 4,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    STATE(59), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(111), 13,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_EQ,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 22,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [371] = 4,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    STATE(56), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(115), 13,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_EQ,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 22,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [417] = 4,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(121), 13,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_EQ,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 22,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [463] = 4,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    STATE(54), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(121), 13,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_EQ,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 22,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [509] = 2,
    ACTIONS(125), 13,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_EQ,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 23,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [550] = 4,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    STATE(64), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(86), 12,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(84), 21,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [595] = 3,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 13,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_EQ,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(129), 22,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [638] = 4,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    STATE(64), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(73), 12,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 21,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [683] = 4,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    STATE(62), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(80), 12,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(78), 21,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [728] = 2,
    ACTIONS(140), 13,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_EQ,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(138), 23,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [769] = 2,
    ACTIONS(144), 13,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_EQ,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(142), 23,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [810] = 4,
    ACTIONS(146), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(100), 12,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(98), 21,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [854] = 2,
    ACTIONS(151), 13,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_EQ,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 22,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [894] = 4,
    ACTIONS(153), 1,
      anon_sym_LPAREN,
    STATE(72), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(115), 12,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 21,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [938] = 4,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    STATE(73), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(111), 12,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(109), 21,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [982] = 4,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(107), 12,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(105), 21,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [1026] = 4,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(121), 12,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 21,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [1070] = 4,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    STATE(86), 1,
      sym_dimension,
    ACTIONS(90), 12,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(88), 21,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [1114] = 4,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    STATE(78), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(121), 12,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(119), 21,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [1158] = 2,
    ACTIONS(159), 13,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_EQ,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 22,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [1198] = 2,
    ACTIONS(163), 13,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_EQ,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 22,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [1238] = 4,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(94), 12,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(92), 21,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [1282] = 3,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 12,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(129), 21,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [1323] = 3,
    ACTIONS(171), 5,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(169), 12,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(167), 17,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACE_RBRACE,
  [1364] = 2,
    ACTIONS(144), 12,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(142), 22,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [1403] = 2,
    ACTIONS(125), 12,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 22,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [1442] = 2,
    ACTIONS(140), 12,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(138), 22,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [1481] = 2,
    ACTIONS(163), 12,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 21,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [1519] = 2,
    ACTIONS(159), 12,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 21,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [1557] = 2,
    ACTIONS(151), 12,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_EQ,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 21,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [1595] = 3,
    ACTIONS(173), 5,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(169), 11,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(167), 16,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
  [1634] = 4,
    ACTIONS(175), 1,
      anon_sym_EQ,
    ACTIONS(171), 5,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(169), 12,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(167), 13,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
  [1674] = 3,
    ACTIONS(181), 1,
      anon_sym_DOT,
    ACTIONS(179), 8,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(177), 22,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACE_RBRACE,
  [1712] = 4,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    STATE(114), 1,
      sym_arguments,
    ACTIONS(185), 8,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(183), 21,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACE_RBRACE,
  [1752] = 4,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    STATE(96), 1,
      sym_arguments,
    ACTIONS(191), 8,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(189), 21,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACE_RBRACE,
  [1792] = 4,
    ACTIONS(193), 1,
      anon_sym_EQ,
    ACTIONS(173), 5,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(169), 11,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(167), 14,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
  [1832] = 2,
    ACTIONS(197), 8,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(195), 22,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACE_RBRACE,
  [1867] = 3,
    ACTIONS(203), 1,
      anon_sym_STAR_STAR,
    ACTIONS(201), 8,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(199), 20,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACE_RBRACE,
  [1903] = 2,
    ACTIONS(207), 8,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(205), 21,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACE_RBRACE,
  [1937] = 2,
    ACTIONS(211), 8,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 21,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACE_RBRACE,
  [1971] = 11,
    ACTIONS(203), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_STAR,
    ACTIONS(215), 1,
      anon_sym_AMP,
    ACTIONS(217), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(219), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(223), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(225), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(227), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(201), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(199), 10,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACE_RBRACE,
  [2023] = 2,
    ACTIONS(231), 8,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(229), 21,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACE_RBRACE,
  [2057] = 2,
    ACTIONS(235), 8,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(233), 21,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACE_RBRACE,
  [2091] = 12,
    ACTIONS(203), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_STAR,
    ACTIONS(215), 1,
      anon_sym_AMP,
    ACTIONS(237), 1,
      anon_sym_AMP_AMP,
    ACTIONS(217), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(219), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(223), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(225), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(227), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(201), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(199), 9,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACE_RBRACE,
  [2145] = 6,
    ACTIONS(203), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_STAR,
    ACTIONS(219), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(201), 7,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(199), 16,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACE_RBRACE,
  [2187] = 5,
    ACTIONS(203), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_STAR,
    ACTIONS(221), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(201), 7,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(199), 18,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACE_RBRACE,
  [2227] = 2,
    ACTIONS(241), 8,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(239), 21,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACE_RBRACE,
  [2261] = 2,
    ACTIONS(245), 8,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(243), 21,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACE_RBRACE,
  [2295] = 2,
    ACTIONS(169), 8,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(167), 21,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACE_RBRACE,
  [2329] = 2,
    ACTIONS(249), 8,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(247), 21,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACE_RBRACE,
  [2363] = 10,
    ACTIONS(203), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_STAR,
    ACTIONS(217), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(219), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(223), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(225), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(227), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(201), 5,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(199), 10,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACE_RBRACE,
  [2413] = 3,
    ACTIONS(203), 1,
      anon_sym_STAR_STAR,
    ACTIONS(201), 8,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(199), 20,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACE_RBRACE,
  [2449] = 4,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
    STATE(133), 1,
      sym_arguments,
    ACTIONS(191), 7,
      anon_sym_def,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(189), 20,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
  [2487] = 4,
    ACTIONS(251), 1,
      anon_sym_LPAREN,
    STATE(129), 1,
      sym_arguments,
    ACTIONS(185), 7,
      anon_sym_def,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(183), 20,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
  [2525] = 2,
    ACTIONS(255), 8,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(253), 21,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACE_RBRACE,
  [2559] = 13,
    ACTIONS(203), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_STAR,
    ACTIONS(215), 1,
      anon_sym_AMP,
    ACTIONS(237), 1,
      anon_sym_AMP_AMP,
    ACTIONS(261), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(217), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(219), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(223), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(225), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(227), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
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
  [2615] = 9,
    ACTIONS(203), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_STAR,
    ACTIONS(217), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(219), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(223), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(225), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(201), 5,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(199), 12,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_RBRACE_RBRACE,
  [2663] = 2,
    ACTIONS(265), 8,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(263), 21,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACE_RBRACE,
  [2697] = 7,
    ACTIONS(203), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_STAR,
    ACTIONS(217), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(219), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(201), 7,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(199), 14,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACE_RBRACE,
  [2741] = 2,
    ACTIONS(269), 8,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(267), 21,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACE_RBRACE,
  [2775] = 3,
    ACTIONS(271), 1,
      anon_sym_DOT,
    ACTIONS(179), 7,
      anon_sym_def,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(177), 20,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
  [2810] = 15,
    ACTIONS(203), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_STAR,
    ACTIONS(215), 1,
      anon_sym_AMP,
    ACTIONS(237), 1,
      anon_sym_AMP_AMP,
    ACTIONS(261), 1,
      anon_sym_PIPE_PIPE,
    STATE(172), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(217), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(219), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(223), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(225), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(227), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(277), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(273), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
    ACTIONS(275), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2869] = 15,
    ACTIONS(279), 1,
      anon_sym_STAR,
    ACTIONS(281), 1,
      anon_sym_AMP,
    ACTIONS(285), 1,
      anon_sym_AMP_AMP,
    ACTIONS(287), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(295), 1,
      anon_sym_STAR_STAR,
    STATE(171), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(283), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(289), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(291), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(293), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(297), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(299), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(301), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(275), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(273), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [2928] = 12,
    ACTIONS(279), 1,
      anon_sym_STAR,
    ACTIONS(281), 1,
      anon_sym_AMP,
    ACTIONS(285), 1,
      anon_sym_AMP_AMP,
    ACTIONS(295), 1,
      anon_sym_STAR_STAR,
    ACTIONS(289), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(291), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(293), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(297), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(299), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(301), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(201), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(199), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
  [2980] = 6,
    ACTIONS(279), 1,
      anon_sym_STAR,
    ACTIONS(295), 1,
      anon_sym_STAR_STAR,
    ACTIONS(291), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(293), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(201), 6,
      anon_sym_def,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(199), 15,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
  [3020] = 2,
    ACTIONS(207), 7,
      anon_sym_def,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(205), 20,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
  [3052] = 2,
    ACTIONS(169), 7,
      anon_sym_def,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(167), 20,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
  [3084] = 2,
    ACTIONS(255), 7,
      anon_sym_def,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(253), 20,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
  [3116] = 11,
    ACTIONS(279), 1,
      anon_sym_STAR,
    ACTIONS(281), 1,
      anon_sym_AMP,
    ACTIONS(295), 1,
      anon_sym_STAR_STAR,
    ACTIONS(289), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(291), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(293), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(297), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(299), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(301), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(201), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(199), 9,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3166] = 9,
    ACTIONS(279), 1,
      anon_sym_STAR,
    ACTIONS(295), 1,
      anon_sym_STAR_STAR,
    ACTIONS(289), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(291), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(293), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(297), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(299), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(201), 4,
      anon_sym_def,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(199), 11,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
  [3212] = 7,
    ACTIONS(279), 1,
      anon_sym_STAR,
    ACTIONS(295), 1,
      anon_sym_STAR_STAR,
    ACTIONS(289), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(291), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(293), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(201), 6,
      anon_sym_def,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(199), 13,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
  [3254] = 2,
    ACTIONS(235), 7,
      anon_sym_def,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(233), 20,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
  [3286] = 2,
    ACTIONS(265), 7,
      anon_sym_def,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(263), 20,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
  [3318] = 2,
    ACTIONS(245), 7,
      anon_sym_def,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(243), 20,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
  [3350] = 3,
    ACTIONS(295), 1,
      anon_sym_STAR_STAR,
    ACTIONS(201), 7,
      anon_sym_def,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(199), 19,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
  [3384] = 5,
    ACTIONS(279), 1,
      anon_sym_STAR,
    ACTIONS(295), 1,
      anon_sym_STAR_STAR,
    ACTIONS(293), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(201), 6,
      anon_sym_def,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(199), 17,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
  [3422] = 2,
    ACTIONS(211), 7,
      anon_sym_def,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 20,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
  [3454] = 13,
    ACTIONS(203), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_STAR,
    ACTIONS(215), 1,
      anon_sym_AMP,
    ACTIONS(237), 1,
      anon_sym_AMP_AMP,
    ACTIONS(261), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(217), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(219), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(223), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(225), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(227), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(305), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(303), 6,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [3508] = 2,
    ACTIONS(249), 7,
      anon_sym_def,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(247), 20,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
  [3540] = 13,
    ACTIONS(279), 1,
      anon_sym_STAR,
    ACTIONS(281), 1,
      anon_sym_AMP,
    ACTIONS(285), 1,
      anon_sym_AMP_AMP,
    ACTIONS(287), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(295), 1,
      anon_sym_STAR_STAR,
    ACTIONS(289), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(291), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(293), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(297), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(299), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(301), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
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
  [3594] = 13,
    ACTIONS(279), 1,
      anon_sym_STAR,
    ACTIONS(281), 1,
      anon_sym_AMP,
    ACTIONS(285), 1,
      anon_sym_AMP_AMP,
    ACTIONS(287), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(295), 1,
      anon_sym_STAR_STAR,
    ACTIONS(289), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(291), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(293), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(297), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(299), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(301), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(305), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(303), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [3648] = 2,
    ACTIONS(241), 7,
      anon_sym_def,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(239), 20,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
  [3680] = 2,
    ACTIONS(197), 7,
      anon_sym_def,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(195), 20,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
  [3712] = 2,
    ACTIONS(269), 7,
      anon_sym_def,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(267), 20,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
  [3744] = 10,
    ACTIONS(279), 1,
      anon_sym_STAR,
    ACTIONS(295), 1,
      anon_sym_STAR_STAR,
    ACTIONS(289), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(291), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(293), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(297), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(299), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(301), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(201), 4,
      anon_sym_def,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(199), 9,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [3792] = 3,
    ACTIONS(295), 1,
      anon_sym_STAR_STAR,
    ACTIONS(201), 7,
      anon_sym_def,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(199), 19,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
  [3826] = 2,
    ACTIONS(231), 7,
      anon_sym_def,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(229), 20,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_STAR_STAR,
      anon_sym_LT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
      anon_sym_GT_EQ,
  [3858] = 13,
    ACTIONS(203), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_STAR,
    ACTIONS(215), 1,
      anon_sym_AMP,
    ACTIONS(237), 1,
      anon_sym_AMP_AMP,
    ACTIONS(261), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(217), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(219), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(223), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(225), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(227), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(307), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
    ACTIONS(309), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [3910] = 13,
    ACTIONS(203), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_STAR,
    ACTIONS(215), 1,
      anon_sym_AMP,
    ACTIONS(237), 1,
      anon_sym_AMP_AMP,
    ACTIONS(261), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(217), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(219), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(223), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(225), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(227), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
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
  [3962] = 13,
    ACTIONS(279), 1,
      anon_sym_STAR,
    ACTIONS(281), 1,
      anon_sym_AMP,
    ACTIONS(285), 1,
      anon_sym_AMP_AMP,
    ACTIONS(287), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(295), 1,
      anon_sym_STAR_STAR,
    ACTIONS(289), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(291), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(293), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(297), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(299), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(301), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
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
  [4014] = 13,
    ACTIONS(279), 1,
      anon_sym_STAR,
    ACTIONS(281), 1,
      anon_sym_AMP,
    ACTIONS(285), 1,
      anon_sym_AMP_AMP,
    ACTIONS(287), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(295), 1,
      anon_sym_STAR_STAR,
    ACTIONS(289), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(291), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(293), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(297), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(299), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(301), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(309), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(307), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [4066] = 13,
    ACTIONS(279), 1,
      anon_sym_STAR,
    ACTIONS(281), 1,
      anon_sym_AMP,
    ACTIONS(285), 1,
      anon_sym_AMP_AMP,
    ACTIONS(287), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(295), 1,
      anon_sym_STAR_STAR,
    ACTIONS(289), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(291), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(293), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(297), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(299), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(301), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(315), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(317), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [4116] = 13,
    ACTIONS(203), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_STAR,
    ACTIONS(215), 1,
      anon_sym_AMP,
    ACTIONS(237), 1,
      anon_sym_AMP_AMP,
    ACTIONS(261), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(217), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(219), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(223), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(225), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(227), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(315), 2,
      sym_line_number,
      sym_label,
    ACTIONS(317), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [4166] = 15,
    ACTIONS(203), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_STAR,
    ACTIONS(215), 1,
      anon_sym_AMP,
    ACTIONS(237), 1,
      anon_sym_AMP_AMP,
    ACTIONS(261), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(319), 1,
      anon_sym_COLON,
    ACTIONS(321), 1,
      anon_sym_RPAREN,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    STATE(227), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(217), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(219), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(223), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(225), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(227), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
  [4218] = 15,
    ACTIONS(203), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_STAR,
    ACTIONS(215), 1,
      anon_sym_AMP,
    ACTIONS(237), 1,
      anon_sym_AMP_AMP,
    ACTIONS(261), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(319), 1,
      anon_sym_COLON,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    ACTIONS(325), 1,
      anon_sym_RPAREN,
    STATE(231), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(217), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(219), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(223), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(225), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(227), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
  [4270] = 14,
    ACTIONS(203), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_STAR,
    ACTIONS(215), 1,
      anon_sym_AMP,
    ACTIONS(237), 1,
      anon_sym_AMP_AMP,
    ACTIONS(261), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    STATE(228), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(217), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(219), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(223), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(225), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(227), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
  [4319] = 14,
    ACTIONS(203), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_STAR,
    ACTIONS(215), 1,
      anon_sym_AMP,
    ACTIONS(237), 1,
      anon_sym_AMP_AMP,
    ACTIONS(261), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    ACTIONS(329), 1,
      anon_sym_RPAREN,
    STATE(232), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(217), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(219), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(223), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(225), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(227), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
  [4368] = 14,
    ACTIONS(203), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_STAR,
    ACTIONS(215), 1,
      anon_sym_AMP,
    ACTIONS(237), 1,
      anon_sym_AMP_AMP,
    ACTIONS(261), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
    STATE(229), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(217), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(219), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(223), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(225), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(227), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
  [4417] = 14,
    ACTIONS(203), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_STAR,
    ACTIONS(215), 1,
      anon_sym_AMP,
    ACTIONS(237), 1,
      anon_sym_AMP_AMP,
    ACTIONS(261), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
    STATE(226), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(217), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(219), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(223), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(225), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(227), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
  [4466] = 12,
    ACTIONS(203), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_STAR,
    ACTIONS(215), 1,
      anon_sym_AMP,
    ACTIONS(237), 1,
      anon_sym_AMP_AMP,
    ACTIONS(261), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(217), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(219), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(223), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(225), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(227), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(335), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4510] = 12,
    ACTIONS(203), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_STAR,
    ACTIONS(215), 1,
      anon_sym_AMP,
    ACTIONS(237), 1,
      anon_sym_AMP_AMP,
    ACTIONS(261), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(217), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(219), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(223), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(225), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(227), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(337), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4554] = 12,
    ACTIONS(203), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_STAR,
    ACTIONS(215), 1,
      anon_sym_AMP,
    ACTIONS(237), 1,
      anon_sym_AMP_AMP,
    ACTIONS(261), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(319), 1,
      anon_sym_COLON,
    ACTIONS(217), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(219), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(223), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(225), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(227), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
  [4597] = 12,
    ACTIONS(203), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_STAR,
    ACTIONS(215), 1,
      anon_sym_AMP,
    ACTIONS(237), 1,
      anon_sym_AMP_AMP,
    ACTIONS(261), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(339), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(217), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(219), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(223), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(225), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(227), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
  [4640] = 12,
    ACTIONS(203), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_STAR,
    ACTIONS(215), 1,
      anon_sym_AMP,
    ACTIONS(237), 1,
      anon_sym_AMP_AMP,
    ACTIONS(261), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(341), 1,
      anon_sym_RPAREN,
    ACTIONS(217), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(219), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(223), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(225), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(227), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
  [4683] = 12,
    ACTIONS(203), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_STAR,
    ACTIONS(215), 1,
      anon_sym_AMP,
    ACTIONS(237), 1,
      anon_sym_AMP_AMP,
    ACTIONS(261), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(343), 1,
      anon_sym_RPAREN,
    ACTIONS(217), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(219), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(221), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(223), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(225), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(227), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
  [4726] = 11,
    ACTIONS(345), 1,
      sym_line_number,
    ACTIONS(347), 1,
      sym_label,
    ACTIONS(349), 1,
      anon_sym_def,
    ACTIONS(351), 1,
      anon_sym_EQ,
    ACTIONS(353), 1,
      anon_sym_fnend,
    ACTIONS(355), 1,
      aux_sym_let_statement_token1,
    ACTIONS(357), 1,
      aux_sym_print_statement_token1,
    STATE(183), 1,
      sym_statement,
    STATE(165), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(188), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(195), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [4765] = 11,
    ACTIONS(345), 1,
      sym_line_number,
    ACTIONS(347), 1,
      sym_label,
    ACTIONS(349), 1,
      anon_sym_def,
    ACTIONS(355), 1,
      aux_sym_let_statement_token1,
    ACTIONS(357), 1,
      aux_sym_print_statement_token1,
    ACTIONS(359), 1,
      anon_sym_EQ,
    ACTIONS(361), 1,
      anon_sym_fnend,
    STATE(183), 1,
      sym_statement,
    STATE(164), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(188), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(195), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [4804] = 10,
    ACTIONS(345), 1,
      sym_line_number,
    ACTIONS(347), 1,
      sym_label,
    ACTIONS(349), 1,
      anon_sym_def,
    ACTIONS(355), 1,
      aux_sym_let_statement_token1,
    ACTIONS(357), 1,
      aux_sym_print_statement_token1,
    ACTIONS(363), 1,
      anon_sym_fnend,
    STATE(183), 1,
      sym_statement,
    STATE(168), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(188), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(195), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [4840] = 10,
    ACTIONS(345), 1,
      sym_line_number,
    ACTIONS(347), 1,
      sym_label,
    ACTIONS(349), 1,
      anon_sym_def,
    ACTIONS(355), 1,
      aux_sym_let_statement_token1,
    ACTIONS(357), 1,
      aux_sym_print_statement_token1,
    ACTIONS(365), 1,
      anon_sym_fnend,
    STATE(183), 1,
      sym_statement,
    STATE(168), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(188), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(195), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [4876] = 10,
    ACTIONS(367), 1,
      ts_builtin_sym_end,
    ACTIONS(369), 1,
      sym_line_number,
    ACTIONS(372), 1,
      sym_label,
    ACTIONS(375), 1,
      anon_sym_def,
    ACTIONS(378), 1,
      aux_sym_let_statement_token1,
    ACTIONS(381), 1,
      aux_sym_print_statement_token1,
    STATE(179), 1,
      sym_statement,
    STATE(166), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(185), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(204), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [4912] = 10,
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
    ACTIONS(384), 1,
      ts_builtin_sym_end,
    STATE(179), 1,
      sym_statement,
    STATE(166), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(185), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(204), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [4948] = 10,
    ACTIONS(386), 1,
      sym_line_number,
    ACTIONS(389), 1,
      sym_label,
    ACTIONS(392), 1,
      anon_sym_def,
    ACTIONS(395), 1,
      anon_sym_fnend,
    ACTIONS(397), 1,
      aux_sym_let_statement_token1,
    ACTIONS(400), 1,
      aux_sym_print_statement_token1,
    STATE(183), 1,
      sym_statement,
    STATE(168), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(188), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(195), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [4984] = 7,
    ACTIONS(349), 1,
      anon_sym_def,
    ACTIONS(355), 1,
      aux_sym_let_statement_token1,
    ACTIONS(357), 1,
      aux_sym_print_statement_token1,
    ACTIONS(403), 1,
      sym_label,
    STATE(183), 1,
      sym_statement,
    STATE(188), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(209), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [5010] = 7,
    ACTIONS(9), 1,
      anon_sym_def,
    ACTIONS(11), 1,
      aux_sym_let_statement_token1,
    ACTIONS(13), 1,
      aux_sym_print_statement_token1,
    ACTIONS(405), 1,
      sym_label,
    STATE(179), 1,
      sym_statement,
    STATE(185), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(196), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [5036] = 4,
    STATE(174), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(283), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(409), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(407), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [5056] = 4,
    STATE(173), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(277), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(407), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
    ACTIONS(409), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5076] = 4,
    STATE(173), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(411), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(303), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
    ACTIONS(305), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5096] = 4,
    STATE(174), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(414), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(305), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(303), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [5116] = 6,
    ACTIONS(417), 1,
      anon_sym_def,
    ACTIONS(419), 1,
      aux_sym_let_statement_token1,
    ACTIONS(421), 1,
      aux_sym_print_statement_token1,
    STATE(183), 1,
      sym_statement,
    STATE(188), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(209), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [5139] = 6,
    ACTIONS(423), 1,
      anon_sym_def,
    ACTIONS(425), 1,
      aux_sym_let_statement_token1,
    ACTIONS(427), 1,
      aux_sym_print_statement_token1,
    STATE(179), 1,
      sym_statement,
    STATE(185), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(196), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [5162] = 6,
    ACTIONS(417), 1,
      anon_sym_def,
    ACTIONS(419), 1,
      aux_sym_let_statement_token1,
    ACTIONS(421), 1,
      aux_sym_print_statement_token1,
    STATE(183), 1,
      sym_statement,
    STATE(188), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(207), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [5185] = 6,
    ACTIONS(423), 1,
      anon_sym_def,
    ACTIONS(425), 1,
      aux_sym_let_statement_token1,
    ACTIONS(427), 1,
      aux_sym_print_statement_token1,
    STATE(179), 1,
      sym_statement,
    STATE(185), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(197), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [5208] = 4,
    STATE(181), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(431), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(429), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(433), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5226] = 4,
    STATE(182), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(435), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(437), 2,
      sym_line_number,
      sym_label,
    ACTIONS(439), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5244] = 4,
    STATE(184), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(431), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(437), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(439), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5262] = 4,
    STATE(182), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(441), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(444), 2,
      sym_line_number,
      sym_label,
    ACTIONS(446), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5280] = 4,
    STATE(180), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(429), 2,
      sym_line_number,
      sym_label,
    ACTIONS(435), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(433), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5298] = 4,
    STATE(184), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(448), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(444), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(446), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5316] = 2,
    ACTIONS(453), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(451), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [5329] = 2,
    ACTIONS(444), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
    ACTIONS(446), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5342] = 2,
    ACTIONS(307), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
    ACTIONS(309), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5355] = 2,
    ACTIONS(451), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
    ACTIONS(453), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5368] = 2,
    ACTIONS(446), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(444), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [5381] = 2,
    ACTIONS(309), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(307), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [5394] = 2,
    ACTIONS(455), 3,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
    ACTIONS(457), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5406] = 2,
    ACTIONS(459), 3,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
    ACTIONS(461), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5418] = 2,
    ACTIONS(463), 3,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
    ACTIONS(465), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5430] = 2,
    ACTIONS(467), 3,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
    ACTIONS(469), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5442] = 2,
    ACTIONS(471), 2,
      sym_line_number,
      sym_label,
    ACTIONS(473), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5453] = 2,
    ACTIONS(475), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(477), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5464] = 2,
    ACTIONS(479), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(481), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5475] = 4,
    ACTIONS(483), 1,
      anon_sym_BQUOTE,
    ACTIONS(487), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(485), 2,
      anon_sym_BQUOTE_BQUOTE,
      sym__template_chars,
    STATE(200), 2,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [5490] = 2,
    ACTIONS(315), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(317), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5501] = 4,
    ACTIONS(489), 1,
      anon_sym_BQUOTE,
    ACTIONS(494), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(491), 2,
      anon_sym_BQUOTE_BQUOTE,
      sym__template_chars,
    STATE(200), 2,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [5516] = 4,
    ACTIONS(487), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(497), 1,
      anon_sym_BQUOTE,
    ACTIONS(499), 2,
      anon_sym_BQUOTE_BQUOTE,
      sym__template_chars,
    STATE(202), 2,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [5531] = 4,
    ACTIONS(487), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(501), 1,
      anon_sym_BQUOTE,
    ACTIONS(485), 2,
      anon_sym_BQUOTE_BQUOTE,
      sym__template_chars,
    STATE(200), 2,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [5546] = 2,
    ACTIONS(503), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(505), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5557] = 2,
    ACTIONS(471), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(473), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5568] = 2,
    ACTIONS(503), 2,
      sym_line_number,
      sym_label,
    ACTIONS(505), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5579] = 2,
    ACTIONS(315), 2,
      sym_line_number,
      sym_label,
    ACTIONS(317), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5590] = 2,
    ACTIONS(479), 2,
      sym_line_number,
      sym_label,
    ACTIONS(481), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5601] = 4,
    ACTIONS(487), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(507), 1,
      anon_sym_BQUOTE,
    ACTIONS(509), 2,
      anon_sym_BQUOTE_BQUOTE,
      sym__template_chars,
    STATE(198), 2,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [5616] = 2,
    ACTIONS(475), 2,
      sym_line_number,
      sym_label,
    ACTIONS(477), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5627] = 4,
    ACTIONS(419), 1,
      aux_sym_let_statement_token1,
    ACTIONS(421), 1,
      aux_sym_print_statement_token1,
    STATE(186), 1,
      sym_statement,
    STATE(188), 2,
      sym_let_statement,
      sym_print_statement,
  [5641] = 4,
    ACTIONS(425), 1,
      aux_sym_let_statement_token1,
    ACTIONS(427), 1,
      aux_sym_print_statement_token1,
    STATE(189), 1,
      sym_statement,
    STATE(185), 2,
      sym_let_statement,
      sym_print_statement,
  [5655] = 3,
    ACTIONS(511), 1,
      sym_string_function_name,
    ACTIONS(513), 1,
      sym_numeric_function_name,
    STATE(162), 2,
      sym_string_function_definition,
      sym_numeric_function_definition,
  [5666] = 3,
    ACTIONS(511), 1,
      sym_string_function_name,
    ACTIONS(513), 1,
      sym_numeric_function_name,
    STATE(163), 2,
      sym_string_function_definition,
      sym_numeric_function_definition,
  [5677] = 4,
    ACTIONS(515), 1,
      anon_sym_STAR,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    STATE(192), 1,
      sym_parameter_list,
    STATE(234), 1,
      sym_function_length,
  [5690] = 1,
    ACTIONS(519), 4,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      sym__template_chars,
      anon_sym_LBRACE_LBRACE,
  [5697] = 4,
    ACTIONS(41), 1,
      aux_sym_number_token1,
    ACTIONS(521), 1,
      anon_sym_STAR,
    ACTIONS(523), 1,
      anon_sym_RPAREN,
    STATE(248), 1,
      sym_number,
  [5710] = 4,
    ACTIONS(41), 1,
      aux_sym_number_token1,
    ACTIONS(525), 1,
      anon_sym_STAR,
    ACTIONS(527), 1,
      anon_sym_RPAREN,
    STATE(251), 1,
      sym_number,
  [5723] = 3,
    ACTIONS(41), 1,
      aux_sym_number_token1,
    ACTIONS(529), 1,
      anon_sym_RPAREN,
    STATE(252), 1,
      sym_number,
  [5733] = 3,
    ACTIONS(41), 1,
      aux_sym_number_token1,
    ACTIONS(527), 1,
      anon_sym_RPAREN,
    STATE(251), 1,
      sym_number,
  [5743] = 3,
    ACTIONS(531), 1,
      anon_sym_RPAREN,
    ACTIONS(533), 1,
      anon_sym_COMMA,
    STATE(220), 1,
      aux_sym_dimension_repeat1,
  [5753] = 3,
    ACTIONS(536), 1,
      sym_identifier,
    ACTIONS(538), 1,
      anon_sym_AMP,
    STATE(239), 1,
      sym_parameter,
  [5763] = 3,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
    ACTIONS(540), 1,
      anon_sym_COMMA,
    STATE(222), 1,
      aux_sym_arguments_repeat1,
  [5773] = 3,
    ACTIONS(543), 1,
      anon_sym_RPAREN,
    ACTIONS(545), 1,
      anon_sym_COMMA,
    STATE(220), 1,
      aux_sym_dimension_repeat1,
  [5783] = 3,
    ACTIONS(545), 1,
      anon_sym_COMMA,
    ACTIONS(547), 1,
      anon_sym_RPAREN,
    STATE(220), 1,
      aux_sym_dimension_repeat1,
  [5793] = 3,
    ACTIONS(545), 1,
      anon_sym_COMMA,
    ACTIONS(549), 1,
      anon_sym_RPAREN,
    STATE(224), 1,
      aux_sym_dimension_repeat1,
  [5803] = 3,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    ACTIONS(551), 1,
      anon_sym_RPAREN,
    STATE(222), 1,
      aux_sym_arguments_repeat1,
  [5813] = 3,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
    STATE(222), 1,
      aux_sym_arguments_repeat1,
  [5823] = 3,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    ACTIONS(555), 1,
      anon_sym_RPAREN,
    STATE(222), 1,
      aux_sym_arguments_repeat1,
  [5833] = 3,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    ACTIONS(557), 1,
      anon_sym_RPAREN,
    STATE(222), 1,
      aux_sym_arguments_repeat1,
  [5843] = 3,
    ACTIONS(545), 1,
      anon_sym_COMMA,
    ACTIONS(559), 1,
      anon_sym_RPAREN,
    STATE(223), 1,
      aux_sym_dimension_repeat1,
  [5853] = 3,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    ACTIONS(561), 1,
      anon_sym_RPAREN,
    STATE(222), 1,
      aux_sym_arguments_repeat1,
  [5863] = 3,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    ACTIONS(563), 1,
      anon_sym_RPAREN,
    STATE(222), 1,
      aux_sym_arguments_repeat1,
  [5873] = 2,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    STATE(194), 1,
      sym_parameter_list,
  [5880] = 2,
    ACTIONS(517), 1,
      anon_sym_LPAREN,
    STATE(191), 1,
      sym_parameter_list,
  [5887] = 2,
    ACTIONS(565), 1,
      sym_stringidentifier,
    ACTIONS(567), 1,
      sym_numberidentifier,
  [5894] = 2,
    ACTIONS(569), 1,
      sym_stringidentifier,
    ACTIONS(571), 1,
      sym_numberidentifier,
  [5901] = 1,
    ACTIONS(531), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [5906] = 2,
    ACTIONS(41), 1,
      aux_sym_number_token1,
    STATE(240), 1,
      sym_number,
  [5913] = 1,
    ACTIONS(573), 1,
      anon_sym_RPAREN,
  [5917] = 1,
    ACTIONS(575), 1,
      anon_sym_LPAREN,
  [5921] = 1,
    ACTIONS(577), 1,
      anon_sym_SQUOTE,
  [5925] = 1,
    ACTIONS(579), 1,
      aux_sym_number_token1,
  [5929] = 1,
    ACTIONS(581), 1,
      aux_sym_number_token1,
  [5933] = 1,
    ACTIONS(583), 1,
      anon_sym_RPAREN,
  [5937] = 1,
    ACTIONS(585), 1,
      anon_sym_SQUOTE,
  [5941] = 1,
    ACTIONS(585), 1,
      anon_sym_DQUOTE,
  [5945] = 1,
    ACTIONS(587), 1,
      anon_sym_RPAREN,
  [5949] = 1,
    ACTIONS(527), 1,
      anon_sym_RPAREN,
  [5953] = 1,
    ACTIONS(589), 1,
      sym_identifier,
  [5957] = 1,
    ACTIONS(577), 1,
      anon_sym_DQUOTE,
  [5961] = 1,
    ACTIONS(529), 1,
      anon_sym_RPAREN,
  [5965] = 1,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
  [5969] = 1,
    ACTIONS(593), 1,
      aux_sym_let_statement_token2,
  [5973] = 1,
    ACTIONS(595), 1,
      aux_sym_let_statement_token2,
  [5977] = 1,
    ACTIONS(597), 1,
      ts_builtin_sym_end,
  [5981] = 1,
    ACTIONS(599), 1,
      aux_sym_string_token1,
  [5985] = 1,
    ACTIONS(601), 1,
      aux_sym_string_token2,
  [5989] = 1,
    ACTIONS(603), 1,
      aux_sym_let_statement_token2,
  [5993] = 1,
    ACTIONS(605), 1,
      aux_sym_let_statement_token2,
  [5997] = 1,
    ACTIONS(607), 1,
      aux_sym_string_token2,
  [6001] = 1,
    ACTIONS(609), 1,
      aux_sym_string_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(50)] = 0,
  [SMALL_STATE(51)] = 47,
  [SMALL_STATE(52)] = 94,
  [SMALL_STATE(53)] = 141,
  [SMALL_STATE(54)] = 187,
  [SMALL_STATE(55)] = 233,
  [SMALL_STATE(56)] = 279,
  [SMALL_STATE(57)] = 325,
  [SMALL_STATE(58)] = 371,
  [SMALL_STATE(59)] = 417,
  [SMALL_STATE(60)] = 463,
  [SMALL_STATE(61)] = 509,
  [SMALL_STATE(62)] = 550,
  [SMALL_STATE(63)] = 595,
  [SMALL_STATE(64)] = 638,
  [SMALL_STATE(65)] = 683,
  [SMALL_STATE(66)] = 728,
  [SMALL_STATE(67)] = 769,
  [SMALL_STATE(68)] = 810,
  [SMALL_STATE(69)] = 854,
  [SMALL_STATE(70)] = 894,
  [SMALL_STATE(71)] = 938,
  [SMALL_STATE(72)] = 982,
  [SMALL_STATE(73)] = 1026,
  [SMALL_STATE(74)] = 1070,
  [SMALL_STATE(75)] = 1114,
  [SMALL_STATE(76)] = 1158,
  [SMALL_STATE(77)] = 1198,
  [SMALL_STATE(78)] = 1238,
  [SMALL_STATE(79)] = 1282,
  [SMALL_STATE(80)] = 1323,
  [SMALL_STATE(81)] = 1364,
  [SMALL_STATE(82)] = 1403,
  [SMALL_STATE(83)] = 1442,
  [SMALL_STATE(84)] = 1481,
  [SMALL_STATE(85)] = 1519,
  [SMALL_STATE(86)] = 1557,
  [SMALL_STATE(87)] = 1595,
  [SMALL_STATE(88)] = 1634,
  [SMALL_STATE(89)] = 1674,
  [SMALL_STATE(90)] = 1712,
  [SMALL_STATE(91)] = 1752,
  [SMALL_STATE(92)] = 1792,
  [SMALL_STATE(93)] = 1832,
  [SMALL_STATE(94)] = 1867,
  [SMALL_STATE(95)] = 1903,
  [SMALL_STATE(96)] = 1937,
  [SMALL_STATE(97)] = 1971,
  [SMALL_STATE(98)] = 2023,
  [SMALL_STATE(99)] = 2057,
  [SMALL_STATE(100)] = 2091,
  [SMALL_STATE(101)] = 2145,
  [SMALL_STATE(102)] = 2187,
  [SMALL_STATE(103)] = 2227,
  [SMALL_STATE(104)] = 2261,
  [SMALL_STATE(105)] = 2295,
  [SMALL_STATE(106)] = 2329,
  [SMALL_STATE(107)] = 2363,
  [SMALL_STATE(108)] = 2413,
  [SMALL_STATE(109)] = 2449,
  [SMALL_STATE(110)] = 2487,
  [SMALL_STATE(111)] = 2525,
  [SMALL_STATE(112)] = 2559,
  [SMALL_STATE(113)] = 2615,
  [SMALL_STATE(114)] = 2663,
  [SMALL_STATE(115)] = 2697,
  [SMALL_STATE(116)] = 2741,
  [SMALL_STATE(117)] = 2775,
  [SMALL_STATE(118)] = 2810,
  [SMALL_STATE(119)] = 2869,
  [SMALL_STATE(120)] = 2928,
  [SMALL_STATE(121)] = 2980,
  [SMALL_STATE(122)] = 3020,
  [SMALL_STATE(123)] = 3052,
  [SMALL_STATE(124)] = 3084,
  [SMALL_STATE(125)] = 3116,
  [SMALL_STATE(126)] = 3166,
  [SMALL_STATE(127)] = 3212,
  [SMALL_STATE(128)] = 3254,
  [SMALL_STATE(129)] = 3286,
  [SMALL_STATE(130)] = 3318,
  [SMALL_STATE(131)] = 3350,
  [SMALL_STATE(132)] = 3384,
  [SMALL_STATE(133)] = 3422,
  [SMALL_STATE(134)] = 3454,
  [SMALL_STATE(135)] = 3508,
  [SMALL_STATE(136)] = 3540,
  [SMALL_STATE(137)] = 3594,
  [SMALL_STATE(138)] = 3648,
  [SMALL_STATE(139)] = 3680,
  [SMALL_STATE(140)] = 3712,
  [SMALL_STATE(141)] = 3744,
  [SMALL_STATE(142)] = 3792,
  [SMALL_STATE(143)] = 3826,
  [SMALL_STATE(144)] = 3858,
  [SMALL_STATE(145)] = 3910,
  [SMALL_STATE(146)] = 3962,
  [SMALL_STATE(147)] = 4014,
  [SMALL_STATE(148)] = 4066,
  [SMALL_STATE(149)] = 4116,
  [SMALL_STATE(150)] = 4166,
  [SMALL_STATE(151)] = 4218,
  [SMALL_STATE(152)] = 4270,
  [SMALL_STATE(153)] = 4319,
  [SMALL_STATE(154)] = 4368,
  [SMALL_STATE(155)] = 4417,
  [SMALL_STATE(156)] = 4466,
  [SMALL_STATE(157)] = 4510,
  [SMALL_STATE(158)] = 4554,
  [SMALL_STATE(159)] = 4597,
  [SMALL_STATE(160)] = 4640,
  [SMALL_STATE(161)] = 4683,
  [SMALL_STATE(162)] = 4726,
  [SMALL_STATE(163)] = 4765,
  [SMALL_STATE(164)] = 4804,
  [SMALL_STATE(165)] = 4840,
  [SMALL_STATE(166)] = 4876,
  [SMALL_STATE(167)] = 4912,
  [SMALL_STATE(168)] = 4948,
  [SMALL_STATE(169)] = 4984,
  [SMALL_STATE(170)] = 5010,
  [SMALL_STATE(171)] = 5036,
  [SMALL_STATE(172)] = 5056,
  [SMALL_STATE(173)] = 5076,
  [SMALL_STATE(174)] = 5096,
  [SMALL_STATE(175)] = 5116,
  [SMALL_STATE(176)] = 5139,
  [SMALL_STATE(177)] = 5162,
  [SMALL_STATE(178)] = 5185,
  [SMALL_STATE(179)] = 5208,
  [SMALL_STATE(180)] = 5226,
  [SMALL_STATE(181)] = 5244,
  [SMALL_STATE(182)] = 5262,
  [SMALL_STATE(183)] = 5280,
  [SMALL_STATE(184)] = 5298,
  [SMALL_STATE(185)] = 5316,
  [SMALL_STATE(186)] = 5329,
  [SMALL_STATE(187)] = 5342,
  [SMALL_STATE(188)] = 5355,
  [SMALL_STATE(189)] = 5368,
  [SMALL_STATE(190)] = 5381,
  [SMALL_STATE(191)] = 5394,
  [SMALL_STATE(192)] = 5406,
  [SMALL_STATE(193)] = 5418,
  [SMALL_STATE(194)] = 5430,
  [SMALL_STATE(195)] = 5442,
  [SMALL_STATE(196)] = 5453,
  [SMALL_STATE(197)] = 5464,
  [SMALL_STATE(198)] = 5475,
  [SMALL_STATE(199)] = 5490,
  [SMALL_STATE(200)] = 5501,
  [SMALL_STATE(201)] = 5516,
  [SMALL_STATE(202)] = 5531,
  [SMALL_STATE(203)] = 5546,
  [SMALL_STATE(204)] = 5557,
  [SMALL_STATE(205)] = 5568,
  [SMALL_STATE(206)] = 5579,
  [SMALL_STATE(207)] = 5590,
  [SMALL_STATE(208)] = 5601,
  [SMALL_STATE(209)] = 5616,
  [SMALL_STATE(210)] = 5627,
  [SMALL_STATE(211)] = 5641,
  [SMALL_STATE(212)] = 5655,
  [SMALL_STATE(213)] = 5666,
  [SMALL_STATE(214)] = 5677,
  [SMALL_STATE(215)] = 5690,
  [SMALL_STATE(216)] = 5697,
  [SMALL_STATE(217)] = 5710,
  [SMALL_STATE(218)] = 5723,
  [SMALL_STATE(219)] = 5733,
  [SMALL_STATE(220)] = 5743,
  [SMALL_STATE(221)] = 5753,
  [SMALL_STATE(222)] = 5763,
  [SMALL_STATE(223)] = 5773,
  [SMALL_STATE(224)] = 5783,
  [SMALL_STATE(225)] = 5793,
  [SMALL_STATE(226)] = 5803,
  [SMALL_STATE(227)] = 5813,
  [SMALL_STATE(228)] = 5823,
  [SMALL_STATE(229)] = 5833,
  [SMALL_STATE(230)] = 5843,
  [SMALL_STATE(231)] = 5853,
  [SMALL_STATE(232)] = 5863,
  [SMALL_STATE(233)] = 5873,
  [SMALL_STATE(234)] = 5880,
  [SMALL_STATE(235)] = 5887,
  [SMALL_STATE(236)] = 5894,
  [SMALL_STATE(237)] = 5901,
  [SMALL_STATE(238)] = 5906,
  [SMALL_STATE(239)] = 5913,
  [SMALL_STATE(240)] = 5917,
  [SMALL_STATE(241)] = 5921,
  [SMALL_STATE(242)] = 5925,
  [SMALL_STATE(243)] = 5929,
  [SMALL_STATE(244)] = 5933,
  [SMALL_STATE(245)] = 5937,
  [SMALL_STATE(246)] = 5941,
  [SMALL_STATE(247)] = 5945,
  [SMALL_STATE(248)] = 5949,
  [SMALL_STATE(249)] = 5953,
  [SMALL_STATE(250)] = 5957,
  [SMALL_STATE(251)] = 5961,
  [SMALL_STATE(252)] = 5965,
  [SMALL_STATE(253)] = 5969,
  [SMALL_STATE(254)] = 5973,
  [SMALL_STATE(255)] = 5977,
  [SMALL_STATE(256)] = 5981,
  [SMALL_STATE(257)] = 5985,
  [SMALL_STATE(258)] = 5989,
  [SMALL_STATE(259)] = 5993,
  [SMALL_STATE(260)] = 5997,
  [SMALL_STATE(261)] = 6001,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stringarray_repeat1, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stringarray_repeat1, 2),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringarray_repeat1, 2), SHIFT_REPEAT(3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringarray, 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringarray, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringarray, 3),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringarray, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numberarray, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numberarray, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringelement, 6),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringelement, 6),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stringelement_repeat1, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stringelement_repeat1, 2),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringelement_repeat1, 2), SHIFT_REPEAT(8),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringreference, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringreference, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringelement, 4),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringelement, 4),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringreference, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringreference, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringelement, 5),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringelement, 5),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dimension, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numberreference, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numberreference, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringarray_repeat1, 2), SHIFT_REPEAT(6),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stringelement_repeat1, 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stringelement_repeat1, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 4),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dimension, 4),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringelement_repeat1, 2), SHIFT_REPEAT(4),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numberarray, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numberarray, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numberelement, 4),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numberelement, 4),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numberelement, 5),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numberelement, 5),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_function, 1, .production_id = 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_user_function, 1, .production_id = 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_function, 1, .production_id = 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_function, 1, .production_id = 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 3),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 5),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 5),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_function, 2, .production_id = 4),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_function, 2, .production_id = 4),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 3),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_string, 3),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_string, 3),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 1),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_string, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_string, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forced_assignment_expression, 3, .production_id = 6),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_forced_assignment_expression, 3, .production_id = 6),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_function, 2, .production_id = 4),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_user_function, 2, .production_id = 4),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_statement, 3),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print_statement, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_print_statement_repeat1, 2),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_print_statement_repeat1, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 3),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 3),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3, .production_id = 6),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_expression, 3, .production_id = 6),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(170),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(176),
  [375] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(212),
  [378] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(259),
  [381] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(258),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(169),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(175),
  [392] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(213),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [397] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(253),
  [400] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(254),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_statement, 4),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print_statement, 4),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT_REPEAT(27),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT_REPEAT(23),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_line_statement, 1),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_line_statement, 1),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_line_statement, 2),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_line_statement, 2),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multi_line_statement_repeat1, 2), SHIFT_REPEAT(210),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__multi_line_statement_repeat1, 2),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__multi_line_statement_repeat1, 2),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multi_line_statement_repeat1, 2), SHIFT_REPEAT(211),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_function_definition, 3),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_function_definition, 3),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_function_definition, 2),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_function_definition, 2),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_function_definition, 2),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_function_definition, 2),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 3),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 3),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_template_string_repeat1, 2),
  [491] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_string_repeat1, 2), SHIFT_REPEAT(200),
  [494] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_string_repeat1, 2), SHIFT_REPEAT(29),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_substitution, 3),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dimension_repeat1, 2),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimension_repeat1, 2), SHIFT_REPEAT(10),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(41),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_length, 2, .production_id = 2),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [597] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
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
