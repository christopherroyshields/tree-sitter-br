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
#define STATE_COUNT 333
#define LARGE_STATE_COUNT 52
#define SYMBOL_COUNT 235
#define ALIAS_COUNT 0
#define TOKEN_COUNT 173
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 8

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
  aux_sym_numeric_unary_expression_token1 = 37,
  aux_sym_numeric_system_function_token1 = 38,
  aux_sym_numeric_system_function_token2 = 39,
  aux_sym_numeric_system_function_token3 = 40,
  aux_sym_numeric_system_function_token4 = 41,
  aux_sym_numeric_system_function_token5 = 42,
  aux_sym_numeric_system_function_token6 = 43,
  aux_sym_numeric_system_function_token7 = 44,
  aux_sym_numeric_system_function_token8 = 45,
  aux_sym_numeric_system_function_token9 = 46,
  aux_sym_numeric_system_function_token10 = 47,
  aux_sym_numeric_system_function_token11 = 48,
  aux_sym_numeric_system_function_token12 = 49,
  aux_sym_numeric_system_function_token13 = 50,
  aux_sym_numeric_system_function_token14 = 51,
  aux_sym_numeric_system_function_token15 = 52,
  aux_sym_numeric_system_function_token16 = 53,
  aux_sym_numeric_system_function_token17 = 54,
  aux_sym_numeric_system_function_token18 = 55,
  aux_sym_numeric_system_function_token19 = 56,
  aux_sym_numeric_system_function_token20 = 57,
  aux_sym_numeric_system_function_token21 = 58,
  aux_sym_numeric_system_function_token22 = 59,
  aux_sym_numeric_system_function_token23 = 60,
  aux_sym_numeric_system_function_token24 = 61,
  aux_sym_numeric_system_function_token25 = 62,
  aux_sym_numeric_system_function_token26 = 63,
  aux_sym_numeric_system_function_token27 = 64,
  aux_sym_numeric_system_function_token28 = 65,
  aux_sym_numeric_system_function_token29 = 66,
  aux_sym_numeric_system_function_token30 = 67,
  aux_sym_numeric_system_function_token31 = 68,
  aux_sym_numeric_system_function_token32 = 69,
  aux_sym_numeric_system_function_token33 = 70,
  aux_sym_numeric_system_function_token34 = 71,
  aux_sym_numeric_system_function_token35 = 72,
  aux_sym_numeric_system_function_token36 = 73,
  aux_sym_numeric_system_function_token37 = 74,
  aux_sym_numeric_system_function_token38 = 75,
  aux_sym_numeric_system_function_token39 = 76,
  aux_sym_numeric_system_function_token40 = 77,
  aux_sym_numeric_system_function_token41 = 78,
  aux_sym_numeric_system_function_token42 = 79,
  aux_sym_numeric_system_function_token43 = 80,
  aux_sym_numeric_system_function_token44 = 81,
  aux_sym_numeric_system_function_token45 = 82,
  aux_sym_numeric_system_function_token46 = 83,
  aux_sym_numeric_system_function_token47 = 84,
  aux_sym_numeric_system_function_token48 = 85,
  aux_sym_numeric_system_function_token49 = 86,
  aux_sym_numeric_system_function_token50 = 87,
  aux_sym_numeric_system_function_token51 = 88,
  aux_sym_numeric_system_function_token52 = 89,
  aux_sym_numeric_system_function_token53 = 90,
  aux_sym_numeric_system_function_token54 = 91,
  aux_sym_numeric_system_function_token55 = 92,
  aux_sym_numeric_system_function_token56 = 93,
  aux_sym_numeric_system_function_token57 = 94,
  aux_sym_numeric_system_function_token58 = 95,
  aux_sym_numeric_system_function_token59 = 96,
  aux_sym_numeric_system_function_token60 = 97,
  aux_sym_numeric_system_function_token61 = 98,
  aux_sym_numeric_system_function_token62 = 99,
  aux_sym_numeric_system_function_token63 = 100,
  aux_sym_numeric_system_function_token64 = 101,
  aux_sym_numeric_system_function_token65 = 102,
  aux_sym_numeric_system_function_token66 = 103,
  aux_sym_numeric_system_function_token67 = 104,
  aux_sym_numeric_system_function_token68 = 105,
  aux_sym_numeric_system_function_token69 = 106,
  aux_sym_numeric_system_function_token70 = 107,
  aux_sym_numeric_system_function_token71 = 108,
  aux_sym_numeric_system_function_token72 = 109,
  aux_sym_numeric_system_function_token73 = 110,
  aux_sym_numeric_system_function_token74 = 111,
  aux_sym_numeric_system_function_token75 = 112,
  aux_sym_string_system_function_token1 = 113,
  aux_sym_string_system_function_token2 = 114,
  aux_sym_string_system_function_token3 = 115,
  aux_sym_string_system_function_token4 = 116,
  aux_sym_string_system_function_token5 = 117,
  aux_sym_string_system_function_token6 = 118,
  aux_sym_string_system_function_token7 = 119,
  aux_sym_string_system_function_token8 = 120,
  aux_sym_string_system_function_token9 = 121,
  aux_sym_string_system_function_token10 = 122,
  aux_sym_string_system_function_token11 = 123,
  aux_sym_string_system_function_token12 = 124,
  aux_sym_string_system_function_token13 = 125,
  aux_sym_string_system_function_token14 = 126,
  aux_sym_string_system_function_token15 = 127,
  aux_sym_string_system_function_token16 = 128,
  aux_sym_string_system_function_token17 = 129,
  aux_sym_string_system_function_token18 = 130,
  aux_sym_string_system_function_token19 = 131,
  aux_sym_string_system_function_token20 = 132,
  aux_sym_string_system_function_token21 = 133,
  aux_sym_string_system_function_token22 = 134,
  aux_sym_string_system_function_token23 = 135,
  aux_sym_string_system_function_token24 = 136,
  aux_sym_string_system_function_token25 = 137,
  aux_sym_string_system_function_token26 = 138,
  aux_sym_string_system_function_token27 = 139,
  aux_sym_string_system_function_token28 = 140,
  aux_sym_string_system_function_token29 = 141,
  aux_sym_string_system_function_token30 = 142,
  aux_sym_string_system_function_token31 = 143,
  aux_sym_string_system_function_token32 = 144,
  aux_sym_string_system_function_token33 = 145,
  aux_sym_string_system_function_token34 = 146,
  aux_sym_string_system_function_token35 = 147,
  aux_sym_string_system_function_token36 = 148,
  aux_sym_string_system_function_token37 = 149,
  aux_sym_string_system_function_token38 = 150,
  aux_sym_string_system_function_token39 = 151,
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
  sym_expression = 187,
  sym_string_array_expression = 188,
  sym_numeric_array_expression = 189,
  sym_numeric_expression = 190,
  sym_string_expression = 191,
  sym_string_binary_expression = 192,
  sym_numeric_binary_expression = 193,
  sym_numeric_unary_expression = 194,
  sym_numeric_array_primary_expression = 195,
  sym_string_array_primary_expression = 196,
  sym_numeric_primary_expression = 197,
  sym_string_primary_expression = 198,
  sym_numeric_call_expression = 199,
  sym_string_call_expression = 200,
  sym_numeric_system_function = 201,
  sym_string_system_function = 202,
  sym_numeric_user_function = 203,
  sym_string_user_function = 204,
  sym_arguments = 205,
  sym_template_string = 206,
  sym_template_substitution = 207,
  sym_string = 208,
  sym_parenthesized_expression = 209,
  sym_assignment_expression = 210,
  sym_string_array_forced_assignment_expression = 211,
  sym_numeric_array_forced_assignment_expression = 212,
  sym_numeric_forced_assignment_expression = 213,
  sym_string_forced_assignment_expression = 214,
  sym__numeric_reference = 215,
  sym__string_reference = 216,
  sym_numberelement = 217,
  sym_stringelement = 218,
  sym_stringarray = 219,
  sym_dimension = 220,
  sym_stringreference = 221,
  sym_numberreference = 222,
  sym_range = 223,
  sym_numberarray = 224,
  sym_number = 225,
  aux_sym_source_file_repeat1 = 226,
  aux_sym__multi_line_statement_repeat1 = 227,
  aux_sym_print_statement_repeat1 = 228,
  aux_sym_arguments_repeat1 = 229,
  aux_sym_template_string_repeat1 = 230,
  aux_sym_numberelement_repeat1 = 231,
  aux_sym_stringelement_repeat1 = 232,
  aux_sym_stringarray_repeat1 = 233,
  aux_sym_dimension_repeat1 = 234,
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
  [aux_sym_numeric_unary_expression_token1] = "numeric_unary_expression_token1",
  [aux_sym_numeric_system_function_token1] = "numeric_system_function_token1",
  [aux_sym_numeric_system_function_token2] = "numeric_system_function_token2",
  [aux_sym_numeric_system_function_token3] = "numeric_system_function_token3",
  [aux_sym_numeric_system_function_token4] = "numeric_system_function_token4",
  [aux_sym_numeric_system_function_token5] = "numeric_system_function_token5",
  [aux_sym_numeric_system_function_token6] = "numeric_system_function_token6",
  [aux_sym_numeric_system_function_token7] = "numeric_system_function_token7",
  [aux_sym_numeric_system_function_token8] = "numeric_system_function_token8",
  [aux_sym_numeric_system_function_token9] = "numeric_system_function_token9",
  [aux_sym_numeric_system_function_token10] = "numeric_system_function_token10",
  [aux_sym_numeric_system_function_token11] = "numeric_system_function_token11",
  [aux_sym_numeric_system_function_token12] = "numeric_system_function_token12",
  [aux_sym_numeric_system_function_token13] = "numeric_system_function_token13",
  [aux_sym_numeric_system_function_token14] = "numeric_system_function_token14",
  [aux_sym_numeric_system_function_token15] = "numeric_system_function_token15",
  [aux_sym_numeric_system_function_token16] = "numeric_system_function_token16",
  [aux_sym_numeric_system_function_token17] = "numeric_system_function_token17",
  [aux_sym_numeric_system_function_token18] = "numeric_system_function_token18",
  [aux_sym_numeric_system_function_token19] = "numeric_system_function_token19",
  [aux_sym_numeric_system_function_token20] = "numeric_system_function_token20",
  [aux_sym_numeric_system_function_token21] = "numeric_system_function_token21",
  [aux_sym_numeric_system_function_token22] = "numeric_system_function_token22",
  [aux_sym_numeric_system_function_token23] = "numeric_system_function_token23",
  [aux_sym_numeric_system_function_token24] = "numeric_system_function_token24",
  [aux_sym_numeric_system_function_token25] = "numeric_system_function_token25",
  [aux_sym_numeric_system_function_token26] = "numeric_system_function_token26",
  [aux_sym_numeric_system_function_token27] = "numeric_system_function_token27",
  [aux_sym_numeric_system_function_token28] = "numeric_system_function_token28",
  [aux_sym_numeric_system_function_token29] = "numeric_system_function_token29",
  [aux_sym_numeric_system_function_token30] = "numeric_system_function_token30",
  [aux_sym_numeric_system_function_token31] = "numeric_system_function_token31",
  [aux_sym_numeric_system_function_token32] = "numeric_system_function_token32",
  [aux_sym_numeric_system_function_token33] = "numeric_system_function_token33",
  [aux_sym_numeric_system_function_token34] = "numeric_system_function_token34",
  [aux_sym_numeric_system_function_token35] = "numeric_system_function_token35",
  [aux_sym_numeric_system_function_token36] = "numeric_system_function_token36",
  [aux_sym_numeric_system_function_token37] = "numeric_system_function_token37",
  [aux_sym_numeric_system_function_token38] = "numeric_system_function_token38",
  [aux_sym_numeric_system_function_token39] = "numeric_system_function_token39",
  [aux_sym_numeric_system_function_token40] = "numeric_system_function_token40",
  [aux_sym_numeric_system_function_token41] = "numeric_system_function_token41",
  [aux_sym_numeric_system_function_token42] = "numeric_system_function_token42",
  [aux_sym_numeric_system_function_token43] = "numeric_system_function_token43",
  [aux_sym_numeric_system_function_token44] = "numeric_system_function_token44",
  [aux_sym_numeric_system_function_token45] = "numeric_system_function_token45",
  [aux_sym_numeric_system_function_token46] = "numeric_system_function_token46",
  [aux_sym_numeric_system_function_token47] = "numeric_system_function_token47",
  [aux_sym_numeric_system_function_token48] = "numeric_system_function_token48",
  [aux_sym_numeric_system_function_token49] = "numeric_system_function_token49",
  [aux_sym_numeric_system_function_token50] = "numeric_system_function_token50",
  [aux_sym_numeric_system_function_token51] = "numeric_system_function_token51",
  [aux_sym_numeric_system_function_token52] = "numeric_system_function_token52",
  [aux_sym_numeric_system_function_token53] = "numeric_system_function_token53",
  [aux_sym_numeric_system_function_token54] = "numeric_system_function_token54",
  [aux_sym_numeric_system_function_token55] = "numeric_system_function_token55",
  [aux_sym_numeric_system_function_token56] = "numeric_system_function_token56",
  [aux_sym_numeric_system_function_token57] = "numeric_system_function_token57",
  [aux_sym_numeric_system_function_token58] = "numeric_system_function_token58",
  [aux_sym_numeric_system_function_token59] = "numeric_system_function_token59",
  [aux_sym_numeric_system_function_token60] = "numeric_system_function_token60",
  [aux_sym_numeric_system_function_token61] = "numeric_system_function_token61",
  [aux_sym_numeric_system_function_token62] = "numeric_system_function_token62",
  [aux_sym_numeric_system_function_token63] = "numeric_system_function_token63",
  [aux_sym_numeric_system_function_token64] = "numeric_system_function_token64",
  [aux_sym_numeric_system_function_token65] = "numeric_system_function_token65",
  [aux_sym_numeric_system_function_token66] = "numeric_system_function_token66",
  [aux_sym_numeric_system_function_token67] = "numeric_system_function_token67",
  [aux_sym_numeric_system_function_token68] = "numeric_system_function_token68",
  [aux_sym_numeric_system_function_token69] = "numeric_system_function_token69",
  [aux_sym_numeric_system_function_token70] = "numeric_system_function_token70",
  [aux_sym_numeric_system_function_token71] = "numeric_system_function_token71",
  [aux_sym_numeric_system_function_token72] = "numeric_system_function_token72",
  [aux_sym_numeric_system_function_token73] = "numeric_system_function_token73",
  [aux_sym_numeric_system_function_token74] = "numeric_system_function_token74",
  [aux_sym_numeric_system_function_token75] = "numeric_system_function_token75",
  [aux_sym_string_system_function_token1] = "string_system_function_token1",
  [aux_sym_string_system_function_token2] = "string_system_function_token2",
  [aux_sym_string_system_function_token3] = "string_system_function_token3",
  [aux_sym_string_system_function_token4] = "string_system_function_token4",
  [aux_sym_string_system_function_token5] = "string_system_function_token5",
  [aux_sym_string_system_function_token6] = "string_system_function_token6",
  [aux_sym_string_system_function_token7] = "string_system_function_token7",
  [aux_sym_string_system_function_token8] = "string_system_function_token8",
  [aux_sym_string_system_function_token9] = "string_system_function_token9",
  [aux_sym_string_system_function_token10] = "string_system_function_token10",
  [aux_sym_string_system_function_token11] = "string_system_function_token11",
  [aux_sym_string_system_function_token12] = "string_system_function_token12",
  [aux_sym_string_system_function_token13] = "string_system_function_token13",
  [aux_sym_string_system_function_token14] = "string_system_function_token14",
  [aux_sym_string_system_function_token15] = "string_system_function_token15",
  [aux_sym_string_system_function_token16] = "string_system_function_token16",
  [aux_sym_string_system_function_token17] = "string_system_function_token17",
  [aux_sym_string_system_function_token18] = "string_system_function_token18",
  [aux_sym_string_system_function_token19] = "string_system_function_token19",
  [aux_sym_string_system_function_token20] = "string_system_function_token20",
  [aux_sym_string_system_function_token21] = "string_system_function_token21",
  [aux_sym_string_system_function_token22] = "string_system_function_token22",
  [aux_sym_string_system_function_token23] = "string_system_function_token23",
  [aux_sym_string_system_function_token24] = "string_system_function_token24",
  [aux_sym_string_system_function_token25] = "string_system_function_token25",
  [aux_sym_string_system_function_token26] = "string_system_function_token26",
  [aux_sym_string_system_function_token27] = "string_system_function_token27",
  [aux_sym_string_system_function_token28] = "string_system_function_token28",
  [aux_sym_string_system_function_token29] = "string_system_function_token29",
  [aux_sym_string_system_function_token30] = "string_system_function_token30",
  [aux_sym_string_system_function_token31] = "string_system_function_token31",
  [aux_sym_string_system_function_token32] = "string_system_function_token32",
  [aux_sym_string_system_function_token33] = "string_system_function_token33",
  [aux_sym_string_system_function_token34] = "string_system_function_token34",
  [aux_sym_string_system_function_token35] = "string_system_function_token35",
  [aux_sym_string_system_function_token36] = "string_system_function_token36",
  [aux_sym_string_system_function_token37] = "string_system_function_token37",
  [aux_sym_string_system_function_token38] = "string_system_function_token38",
  [aux_sym_string_system_function_token39] = "string_system_function_token39",
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
  [sym_expression] = "expression",
  [sym_string_array_expression] = "string_array_expression",
  [sym_numeric_array_expression] = "numeric_array_expression",
  [sym_numeric_expression] = "numeric_expression",
  [sym_string_expression] = "string_expression",
  [sym_string_binary_expression] = "string_binary_expression",
  [sym_numeric_binary_expression] = "numeric_binary_expression",
  [sym_numeric_unary_expression] = "numeric_unary_expression",
  [sym_numeric_array_primary_expression] = "numeric_array_primary_expression",
  [sym_string_array_primary_expression] = "string_array_primary_expression",
  [sym_numeric_primary_expression] = "numeric_primary_expression",
  [sym_string_primary_expression] = "string_primary_expression",
  [sym_numeric_call_expression] = "numeric_call_expression",
  [sym_string_call_expression] = "string_call_expression",
  [sym_numeric_system_function] = "numeric_system_function",
  [sym_string_system_function] = "string_system_function",
  [sym_numeric_user_function] = "numeric_user_function",
  [sym_string_user_function] = "string_user_function",
  [sym_arguments] = "arguments",
  [sym_template_string] = "template_string",
  [sym_template_substitution] = "template_substitution",
  [sym_string] = "string",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_assignment_expression] = "assignment_expression",
  [sym_string_array_forced_assignment_expression] = "string_array_forced_assignment_expression",
  [sym_numeric_array_forced_assignment_expression] = "numeric_array_forced_assignment_expression",
  [sym_numeric_forced_assignment_expression] = "numeric_forced_assignment_expression",
  [sym_string_forced_assignment_expression] = "string_forced_assignment_expression",
  [sym__numeric_reference] = "_numeric_reference",
  [sym__string_reference] = "_string_reference",
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
  [aux_sym_numberelement_repeat1] = "numberelement_repeat1",
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
  [aux_sym_numeric_unary_expression_token1] = aux_sym_numeric_unary_expression_token1,
  [aux_sym_numeric_system_function_token1] = aux_sym_numeric_system_function_token1,
  [aux_sym_numeric_system_function_token2] = aux_sym_numeric_system_function_token2,
  [aux_sym_numeric_system_function_token3] = aux_sym_numeric_system_function_token3,
  [aux_sym_numeric_system_function_token4] = aux_sym_numeric_system_function_token4,
  [aux_sym_numeric_system_function_token5] = aux_sym_numeric_system_function_token5,
  [aux_sym_numeric_system_function_token6] = aux_sym_numeric_system_function_token6,
  [aux_sym_numeric_system_function_token7] = aux_sym_numeric_system_function_token7,
  [aux_sym_numeric_system_function_token8] = aux_sym_numeric_system_function_token8,
  [aux_sym_numeric_system_function_token9] = aux_sym_numeric_system_function_token9,
  [aux_sym_numeric_system_function_token10] = aux_sym_numeric_system_function_token10,
  [aux_sym_numeric_system_function_token11] = aux_sym_numeric_system_function_token11,
  [aux_sym_numeric_system_function_token12] = aux_sym_numeric_system_function_token12,
  [aux_sym_numeric_system_function_token13] = aux_sym_numeric_system_function_token13,
  [aux_sym_numeric_system_function_token14] = aux_sym_numeric_system_function_token14,
  [aux_sym_numeric_system_function_token15] = aux_sym_numeric_system_function_token15,
  [aux_sym_numeric_system_function_token16] = aux_sym_numeric_system_function_token16,
  [aux_sym_numeric_system_function_token17] = aux_sym_numeric_system_function_token17,
  [aux_sym_numeric_system_function_token18] = aux_sym_numeric_system_function_token18,
  [aux_sym_numeric_system_function_token19] = aux_sym_numeric_system_function_token19,
  [aux_sym_numeric_system_function_token20] = aux_sym_numeric_system_function_token20,
  [aux_sym_numeric_system_function_token21] = aux_sym_numeric_system_function_token21,
  [aux_sym_numeric_system_function_token22] = aux_sym_numeric_system_function_token22,
  [aux_sym_numeric_system_function_token23] = aux_sym_numeric_system_function_token23,
  [aux_sym_numeric_system_function_token24] = aux_sym_numeric_system_function_token24,
  [aux_sym_numeric_system_function_token25] = aux_sym_numeric_system_function_token25,
  [aux_sym_numeric_system_function_token26] = aux_sym_numeric_system_function_token26,
  [aux_sym_numeric_system_function_token27] = aux_sym_numeric_system_function_token27,
  [aux_sym_numeric_system_function_token28] = aux_sym_numeric_system_function_token28,
  [aux_sym_numeric_system_function_token29] = aux_sym_numeric_system_function_token29,
  [aux_sym_numeric_system_function_token30] = aux_sym_numeric_system_function_token30,
  [aux_sym_numeric_system_function_token31] = aux_sym_numeric_system_function_token31,
  [aux_sym_numeric_system_function_token32] = aux_sym_numeric_system_function_token32,
  [aux_sym_numeric_system_function_token33] = aux_sym_numeric_system_function_token33,
  [aux_sym_numeric_system_function_token34] = aux_sym_numeric_system_function_token34,
  [aux_sym_numeric_system_function_token35] = aux_sym_numeric_system_function_token35,
  [aux_sym_numeric_system_function_token36] = aux_sym_numeric_system_function_token36,
  [aux_sym_numeric_system_function_token37] = aux_sym_numeric_system_function_token37,
  [aux_sym_numeric_system_function_token38] = aux_sym_numeric_system_function_token38,
  [aux_sym_numeric_system_function_token39] = aux_sym_numeric_system_function_token39,
  [aux_sym_numeric_system_function_token40] = aux_sym_numeric_system_function_token40,
  [aux_sym_numeric_system_function_token41] = aux_sym_numeric_system_function_token41,
  [aux_sym_numeric_system_function_token42] = aux_sym_numeric_system_function_token42,
  [aux_sym_numeric_system_function_token43] = aux_sym_numeric_system_function_token43,
  [aux_sym_numeric_system_function_token44] = aux_sym_numeric_system_function_token44,
  [aux_sym_numeric_system_function_token45] = aux_sym_numeric_system_function_token45,
  [aux_sym_numeric_system_function_token46] = aux_sym_numeric_system_function_token46,
  [aux_sym_numeric_system_function_token47] = aux_sym_numeric_system_function_token47,
  [aux_sym_numeric_system_function_token48] = aux_sym_numeric_system_function_token48,
  [aux_sym_numeric_system_function_token49] = aux_sym_numeric_system_function_token49,
  [aux_sym_numeric_system_function_token50] = aux_sym_numeric_system_function_token50,
  [aux_sym_numeric_system_function_token51] = aux_sym_numeric_system_function_token51,
  [aux_sym_numeric_system_function_token52] = aux_sym_numeric_system_function_token52,
  [aux_sym_numeric_system_function_token53] = aux_sym_numeric_system_function_token53,
  [aux_sym_numeric_system_function_token54] = aux_sym_numeric_system_function_token54,
  [aux_sym_numeric_system_function_token55] = aux_sym_numeric_system_function_token55,
  [aux_sym_numeric_system_function_token56] = aux_sym_numeric_system_function_token56,
  [aux_sym_numeric_system_function_token57] = aux_sym_numeric_system_function_token57,
  [aux_sym_numeric_system_function_token58] = aux_sym_numeric_system_function_token58,
  [aux_sym_numeric_system_function_token59] = aux_sym_numeric_system_function_token59,
  [aux_sym_numeric_system_function_token60] = aux_sym_numeric_system_function_token60,
  [aux_sym_numeric_system_function_token61] = aux_sym_numeric_system_function_token61,
  [aux_sym_numeric_system_function_token62] = aux_sym_numeric_system_function_token62,
  [aux_sym_numeric_system_function_token63] = aux_sym_numeric_system_function_token63,
  [aux_sym_numeric_system_function_token64] = aux_sym_numeric_system_function_token64,
  [aux_sym_numeric_system_function_token65] = aux_sym_numeric_system_function_token65,
  [aux_sym_numeric_system_function_token66] = aux_sym_numeric_system_function_token66,
  [aux_sym_numeric_system_function_token67] = aux_sym_numeric_system_function_token67,
  [aux_sym_numeric_system_function_token68] = aux_sym_numeric_system_function_token68,
  [aux_sym_numeric_system_function_token69] = aux_sym_numeric_system_function_token69,
  [aux_sym_numeric_system_function_token70] = aux_sym_numeric_system_function_token70,
  [aux_sym_numeric_system_function_token71] = aux_sym_numeric_system_function_token71,
  [aux_sym_numeric_system_function_token72] = aux_sym_numeric_system_function_token72,
  [aux_sym_numeric_system_function_token73] = aux_sym_numeric_system_function_token73,
  [aux_sym_numeric_system_function_token74] = aux_sym_numeric_system_function_token74,
  [aux_sym_numeric_system_function_token75] = aux_sym_numeric_system_function_token75,
  [aux_sym_string_system_function_token1] = aux_sym_string_system_function_token1,
  [aux_sym_string_system_function_token2] = aux_sym_string_system_function_token2,
  [aux_sym_string_system_function_token3] = aux_sym_string_system_function_token3,
  [aux_sym_string_system_function_token4] = aux_sym_string_system_function_token4,
  [aux_sym_string_system_function_token5] = aux_sym_string_system_function_token5,
  [aux_sym_string_system_function_token6] = aux_sym_string_system_function_token6,
  [aux_sym_string_system_function_token7] = aux_sym_string_system_function_token7,
  [aux_sym_string_system_function_token8] = aux_sym_string_system_function_token8,
  [aux_sym_string_system_function_token9] = aux_sym_string_system_function_token9,
  [aux_sym_string_system_function_token10] = aux_sym_string_system_function_token10,
  [aux_sym_string_system_function_token11] = aux_sym_string_system_function_token11,
  [aux_sym_string_system_function_token12] = aux_sym_string_system_function_token12,
  [aux_sym_string_system_function_token13] = aux_sym_string_system_function_token13,
  [aux_sym_string_system_function_token14] = aux_sym_string_system_function_token14,
  [aux_sym_string_system_function_token15] = aux_sym_string_system_function_token15,
  [aux_sym_string_system_function_token16] = aux_sym_string_system_function_token16,
  [aux_sym_string_system_function_token17] = aux_sym_string_system_function_token17,
  [aux_sym_string_system_function_token18] = aux_sym_string_system_function_token18,
  [aux_sym_string_system_function_token19] = aux_sym_string_system_function_token19,
  [aux_sym_string_system_function_token20] = aux_sym_string_system_function_token20,
  [aux_sym_string_system_function_token21] = aux_sym_string_system_function_token21,
  [aux_sym_string_system_function_token22] = aux_sym_string_system_function_token22,
  [aux_sym_string_system_function_token23] = aux_sym_string_system_function_token23,
  [aux_sym_string_system_function_token24] = aux_sym_string_system_function_token24,
  [aux_sym_string_system_function_token25] = aux_sym_string_system_function_token25,
  [aux_sym_string_system_function_token26] = aux_sym_string_system_function_token26,
  [aux_sym_string_system_function_token27] = aux_sym_string_system_function_token27,
  [aux_sym_string_system_function_token28] = aux_sym_string_system_function_token28,
  [aux_sym_string_system_function_token29] = aux_sym_string_system_function_token29,
  [aux_sym_string_system_function_token30] = aux_sym_string_system_function_token30,
  [aux_sym_string_system_function_token31] = aux_sym_string_system_function_token31,
  [aux_sym_string_system_function_token32] = aux_sym_string_system_function_token32,
  [aux_sym_string_system_function_token33] = aux_sym_string_system_function_token33,
  [aux_sym_string_system_function_token34] = aux_sym_string_system_function_token34,
  [aux_sym_string_system_function_token35] = aux_sym_string_system_function_token35,
  [aux_sym_string_system_function_token36] = aux_sym_string_system_function_token36,
  [aux_sym_string_system_function_token37] = aux_sym_string_system_function_token37,
  [aux_sym_string_system_function_token38] = aux_sym_string_system_function_token38,
  [aux_sym_string_system_function_token39] = aux_sym_string_system_function_token39,
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
  [sym_expression] = sym_expression,
  [sym_string_array_expression] = sym_string_array_expression,
  [sym_numeric_array_expression] = sym_numeric_array_expression,
  [sym_numeric_expression] = sym_numeric_expression,
  [sym_string_expression] = sym_string_expression,
  [sym_string_binary_expression] = sym_string_binary_expression,
  [sym_numeric_binary_expression] = sym_numeric_binary_expression,
  [sym_numeric_unary_expression] = sym_numeric_unary_expression,
  [sym_numeric_array_primary_expression] = sym_numeric_array_primary_expression,
  [sym_string_array_primary_expression] = sym_string_array_primary_expression,
  [sym_numeric_primary_expression] = sym_numeric_primary_expression,
  [sym_string_primary_expression] = sym_string_primary_expression,
  [sym_numeric_call_expression] = sym_numeric_call_expression,
  [sym_string_call_expression] = sym_string_call_expression,
  [sym_numeric_system_function] = sym_numeric_system_function,
  [sym_string_system_function] = sym_string_system_function,
  [sym_numeric_user_function] = sym_numeric_user_function,
  [sym_string_user_function] = sym_string_user_function,
  [sym_arguments] = sym_arguments,
  [sym_template_string] = sym_template_string,
  [sym_template_substitution] = sym_template_substitution,
  [sym_string] = sym_string,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_assignment_expression] = sym_assignment_expression,
  [sym_string_array_forced_assignment_expression] = sym_string_array_forced_assignment_expression,
  [sym_numeric_array_forced_assignment_expression] = sym_numeric_array_forced_assignment_expression,
  [sym_numeric_forced_assignment_expression] = sym_numeric_forced_assignment_expression,
  [sym_string_forced_assignment_expression] = sym_string_forced_assignment_expression,
  [sym__numeric_reference] = sym__numeric_reference,
  [sym__string_reference] = sym__string_reference,
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
  [aux_sym_numberelement_repeat1] = aux_sym_numberelement_repeat1,
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
  [aux_sym_numeric_unary_expression_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token14] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token15] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token16] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token17] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token18] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token19] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token20] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token21] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token22] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token23] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token24] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token25] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token26] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token27] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token28] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token29] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token30] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token31] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token32] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token33] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token34] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token35] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token36] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token37] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token38] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token39] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token40] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token41] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token42] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token43] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token44] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token45] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token46] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token47] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token48] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token49] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token50] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token51] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token52] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token53] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token54] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token55] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token56] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token57] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token58] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token59] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token60] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token61] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token62] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token63] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token64] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token65] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token66] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token67] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token68] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token69] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token70] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token71] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token72] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token73] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token74] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_system_function_token75] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_system_function_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_system_function_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_system_function_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_system_function_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_system_function_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_system_function_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_system_function_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_system_function_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_system_function_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_system_function_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_system_function_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_system_function_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_system_function_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_system_function_token14] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_system_function_token15] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_system_function_token16] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_system_function_token17] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_system_function_token18] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_system_function_token19] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_system_function_token20] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_system_function_token21] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_system_function_token22] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_system_function_token23] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_system_function_token24] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_system_function_token25] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_system_function_token26] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_system_function_token27] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_system_function_token28] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_system_function_token29] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_system_function_token30] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_system_function_token31] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_system_function_token32] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_system_function_token33] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_system_function_token34] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_system_function_token35] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_system_function_token36] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_system_function_token37] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_system_function_token38] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_system_function_token39] = {
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
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_string_array_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_array_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_string_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_string_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_array_primary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_string_array_primary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_primary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_string_primary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_string_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_system_function] = {
    .visible = true,
    .named = true,
  },
  [sym_string_system_function] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_user_function] = {
    .visible = true,
    .named = true,
  },
  [sym_string_user_function] = {
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
  [sym_string_array_forced_assignment_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_array_forced_assignment_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_forced_assignment_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_string_forced_assignment_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__numeric_reference] = {
    .visible = false,
    .named = true,
  },
  [sym__string_reference] = {
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
  [aux_sym_numberelement_repeat1] = {
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
  [7] = {.index = 11, .length = 4},
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
  [11] =
    {field_left, 0},
    {field_right, 2},
    {field_right, 3},
    {field_right, 4},
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
      if (eof) ADVANCE(50);
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '"') ADVANCE(374);
      if (lookahead == '%') ADVANCE(85);
      if (lookahead == '&') ADVANCE(66);
      if (lookahead == '\'') ADVANCE(376);
      if (lookahead == '(') ADVANCE(63);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '*') ADVANCE(61);
      if (lookahead == '+') ADVANCE(81);
      if (lookahead == ',') ADVANCE(74);
      if (lookahead == '-') ADVANCE(83);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == ':') ADVANCE(52);
      if (lookahead == ';') ADVANCE(75);
      if (lookahead == '<') ADVANCE(87);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == '>') ADVANCE(92);
      if (lookahead == 'D') ADVANCE(876);
      if (lookahead == 'F') ADVANCE(969);
      if (lookahead == '`') ADVANCE(367);
      if (lookahead == 'd') ADVANCE(864);
      if (lookahead == 'f') ADVANCE(873);
      if (lookahead == '{') ADVANCE(32);
      if (lookahead == '|') ADVANCE(33);
      if (lookahead == '}') ADVANCE(34);
      if (lookahead == '~') ADVANCE(94);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(894);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(940);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(926);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1020);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(927);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1021);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(995);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(928);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(877);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(929);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1073);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(968);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(930);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(931);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(878);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(925);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(879);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(895);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(996);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1173);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(51);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(374);
      if (lookahead == '\'') ADVANCE(376);
      if (lookahead == '(') ADVANCE(63);
      if (lookahead == '+') ADVANCE(80);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '`') ADVANCE(366);
      if (lookahead == '~') ADVANCE(93);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(442);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(486);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(474);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(424);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(569);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(518);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(475);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(570);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(544);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(488);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(425);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(476);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(622);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(517);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(477);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(478);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(426);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(473);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(427);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(443);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(545);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1173);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(375);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(377);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(63);
      if (lookahead == '+') ADVANCE(80);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '~') ADVANCE(93);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(702);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(725);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(726);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(693);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(817);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(754);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(782);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(771);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(739);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(694);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(727);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(819);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(753);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(728);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(729);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(695);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(721);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(698);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1173);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(63);
      if (lookahead == '+') ADVANCE(80);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '~') ADVANCE(93);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(702);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(725);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(726);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(693);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(817);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(754);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(782);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(771);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(739);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(697);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(727);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(819);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(753);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(728);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(729);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(695);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(721);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(698);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1173);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(2);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == 'd') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == 'f') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(90);
      END_STATE();
    case 27:
      if (lookahead == '`') ADVANCE(367);
      if (lookahead == '{') ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(371);
      if (lookahead != 0) ADVANCE(369);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(29);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(41);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'f') ADVANCE(55);
      END_STATE();
    case 31:
      if (lookahead == 'f') ADVANCE(875);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 32:
      if (lookahead == '{') ADVANCE(372);
      END_STATE();
    case 33:
      if (lookahead == '|') ADVANCE(77);
      END_STATE();
    case 34:
      if (lookahead == '}') ADVANCE(373);
      END_STATE();
    case 35:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(53);
      END_STATE();
    case 36:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 37:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 40:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(40)
      END_STATE();
    case 41:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 42:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 43:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 44:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 45:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(67);
      END_STATE();
    case 46:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(71);
      END_STATE();
    case 47:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      END_STATE();
    case 48:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 49:
      if (eof) ADVANCE(50);
      if (lookahead == '!') ADVANCE(9);
      if (lookahead == '%') ADVANCE(85);
      if (lookahead == '&') ADVANCE(66);
      if (lookahead == '(') ADVANCE(63);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '*') ADVANCE(61);
      if (lookahead == '+') ADVANCE(81);
      if (lookahead == ',') ADVANCE(74);
      if (lookahead == '-') ADVANCE(83);
      if (lookahead == '.') ADVANCE(1174);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == ':') ADVANCE(52);
      if (lookahead == ';') ADVANCE(75);
      if (lookahead == '<') ADVANCE(87);
      if (lookahead == '=') ADVANCE(58);
      if (lookahead == '>') ADVANCE(92);
      if (lookahead == 'd') ADVANCE(11);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == '|') ADVANCE(33);
      if (lookahead == '}') ADVANCE(34);
      if (lookahead == '~') ADVANCE(26);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(18);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(17);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym__multi_line_statement_token1);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(378);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_line_number);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_label);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == ':') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(89);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_fnend);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_fnend);
      if (lookahead == ':') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '=') ADVANCE(381);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_numeric_function_name);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(76);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_let_statement_token1);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_let_statement_token1);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_let_statement_token1);
      if (lookahead == ':') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_let_statement_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_print_statement_token1);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_print_statement_token1);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1075);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_print_statement_token1);
      if (lookahead == ':') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(379);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(380);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(382);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(79);
      if (lookahead == '=') ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(91);
      if (lookahead == '>') ADVANCE(78);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=') ADVANCE(90);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_numeric_unary_expression_token1);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_numeric_unary_expression_token1);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_numeric_unary_expression_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_numeric_unary_expression_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token1);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token1);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token2);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token2);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token3);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token3);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token4);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token4);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token5);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token5);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token6);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token6);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token7);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token7);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token8);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token8);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token9);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token9);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token10);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token10);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token11);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token11);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token12);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token12);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token13);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token13);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token14);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token14);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token15);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token15);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token16);
      if (lookahead == '$') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token16);
      if (lookahead == '$') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token17);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token17);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token18);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token18);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token19);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token19);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token20);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token20);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token21);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token21);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token22);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token22);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token23);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token23);
      if (lookahead == '$') ADVANCE(333);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token23);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token24);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token24);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token25);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token25);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token26);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token26);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token27);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token27);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token28);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token28);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token29);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token29);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token30);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token30);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token31);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token31);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token32);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token32);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token33);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token33);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token34);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token34);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token35);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token35);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token35);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token36);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1056);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token36);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token36);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token37);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token37);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token38);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1032);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token38);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(581);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token39);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token39);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token40);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token40);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token41);
      if (lookahead == '$') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token41);
      if (lookahead == '$') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token42);
      if (lookahead == '$') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token42);
      if (lookahead == '$') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token43);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token43);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token44);
      if (lookahead == '$') ADVANCE(343);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1045);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token44);
      if (lookahead == '$') ADVANCE(343);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token44);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token45);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token45);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token46);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token46);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token47);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token47);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token48);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token48);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token49);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token49);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token50);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token50);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token51);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token51);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token52);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token52);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token53);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token53);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token54);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token54);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token55);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token55);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token56);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token56);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token57);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token57);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token58);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token58);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token59);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token59);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token60);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token60);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token61);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token61);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token62);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token62);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token63);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token63);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token64);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token64);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token65);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token65);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token66);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token66);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token67);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token67);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token68);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token68);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token69);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token69);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token70);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token70);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token71);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token71);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token72);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token72);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token73);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token73);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token74);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token74);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token75);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token75);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_string_system_function_token1);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_string_system_function_token2);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_string_system_function_token3);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_string_system_function_token4);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_string_system_function_token5);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_string_system_function_token6);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_string_system_function_token7);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_string_system_function_token8);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_string_system_function_token9);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_string_system_function_token10);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_string_system_function_token11);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_string_system_function_token12);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_string_system_function_token13);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_string_system_function_token14);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_string_system_function_token15);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_string_system_function_token16);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_string_system_function_token17);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_string_system_function_token18);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_string_system_function_token19);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_string_system_function_token20);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_string_system_function_token21);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_string_system_function_token22);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_string_system_function_token23);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_string_system_function_token24);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_string_system_function_token25);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_string_system_function_token26);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_string_system_function_token27);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_string_system_function_token28);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_string_system_function_token29);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_string_system_function_token30);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_string_system_function_token31);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_string_system_function_token32);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_string_system_function_token33);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_string_system_function_token34);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_string_system_function_token35);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_string_system_function_token36);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_string_system_function_token37);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_string_system_function_token38);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_string_system_function_token39);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__string_function_identifier);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__numeric_function_identifier);
      if (lookahead == '$') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__numeric_function_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '`') ADVANCE(368);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__template_chars);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__template_chars);
      if (lookahead == '{') ADVANCE(372);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__template_chars);
      if (lookahead == '{') ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(369);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(375);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(377);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_stringidentifier);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(352);
      if (lookahead == '2') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(353);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == '2') ADVANCE(646);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == '_') ADVANCE(508);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == '_') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == '_') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == '_') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == '_') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(659);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(446);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(651);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(575);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(460);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(512);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(444);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(564);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(538);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(514);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(470);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(637);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(458);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(572);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(611);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(307);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(670);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(265);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(595);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(548);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(597);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(591);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(428);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(515);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(596);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(550);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(592);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(527);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(634);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(483);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(593);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(519);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(516);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(630);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(520);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(601);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(619);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(459);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(653);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(467);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(677);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(654);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(448);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(576);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(462);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(672);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(437);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(623);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(577);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(578);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(496);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(615);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(452);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(613);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(682);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(546);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(574);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(585);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(511);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(432);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(487);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(620);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(683);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(571);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(181);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(253);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(639);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(549);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(479);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(687);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(175);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(645);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(588);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(584);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(560);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(607);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(319);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(523);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(573);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(638);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(480);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(668);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(457);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(614);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(507);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(587);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(666);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(553);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(461);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(522);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(644);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(685);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(534);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(418);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(118);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(481);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(513);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(606);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(609);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(610);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(686);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(364);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '2') ADVANCE(780);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '2') ADVANCE(830);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '2') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '_') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '_') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(841);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(705);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(722);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(834);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(786);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(715);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(703);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(781);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(840);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(786);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(715);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(765);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(770);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(821);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(713);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(783);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(308);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(266);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(752);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(801);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(775);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(802);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(797);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(696);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(803);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(776);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(731);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(758);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(714);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(833);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(723);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(850);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(835);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(706);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(787);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(717);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(818);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(788);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(789);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(746);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(811);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(707);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(812);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(709);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(785);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(795);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(748);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(740);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(742);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(182);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(692);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(254);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(823);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(774);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(730);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(860);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(176);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(778);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(701);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(829);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(793);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(784);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(822);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(733);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(719);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(720);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(700);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(741);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(747);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(849);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(724);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(851);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(852);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(768);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(769);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(699);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(708);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(688);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(691);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(810);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(757);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(756);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(828);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(806);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(759);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(842);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(689);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(711);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(690);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(732);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(750);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(779);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(808);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(859);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(365);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym__mat);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == '2') ADVANCE(1097);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'E') ADVANCE(898);
      if (lookahead == 'e') ADVANCE(872);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1111);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(910);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == '_') ADVANCE(959);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1079);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == '_') ADVANCE(998);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == '_') ADVANCE(1035);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == '_') ADVANCE(1099);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == '_') ADVANCE(961);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'd') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'e') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'f') ADVANCE(56);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1121);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1070);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'n') ADVANCE(871);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(999);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(932);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(174);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(945);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'n') ADVANCE(870);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'n') ADVANCE(1138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1111);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(898);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(910);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1103);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1025);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(912);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(963);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(896);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1015);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(981);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(989);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1086);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(897);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(899);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(965);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(919);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(994);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1016);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(922);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1013);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1018);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1019);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1088);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(918);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1022);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1062);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(982);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(306);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1121);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1070);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1003);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(264);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1046);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1000);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1048);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1042);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(880);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(977);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(966);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1059);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1047);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1001);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1043);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(978);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1077);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1085);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(987);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1044);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(936);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(970);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(967);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1081);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(947);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(971);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1052);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1069);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(911);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1102);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(921);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1063);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(988);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1024);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1037);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(962);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(884);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(939);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1071);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1072);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1128);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1104);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(900);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1026);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(914);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1123);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(889);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1080);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1074);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1027);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1028);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(948);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(1065);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(904);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1066);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1006);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(902);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(997);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1054);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1094);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(944);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1029);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1084);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1087);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1040);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1041);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(180);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(979);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1053);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(986);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(868);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(938);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(941);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(252);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1090);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(976);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(999);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(932);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(174);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(945);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(991);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1096);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(885);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(881);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1049);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1034);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(908);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1036);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1030);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1002);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1050);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1011);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(923);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(924);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1005);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(942);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1058);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(318);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(974);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1023);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1089);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(933);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(990);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(983);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(935);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(916);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(917);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(956);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(951);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(886);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(957);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(949);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(952);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(887);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(953);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(954);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(909);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1064);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(972);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(958);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(198);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(867);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(915);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(920);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(937);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(892);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(893);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(992);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(993);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1038);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1031);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1039);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1082);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1083);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(882);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1004);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(955);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(903);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1009);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(913);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(869);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(973);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1095);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(946);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(891);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1078);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1010);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(906);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1012);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1014);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(984);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1055);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(975);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(980);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(985);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(117);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1076);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(863);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(907);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(960);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(934);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1091);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1093);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1067);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(950);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1068);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(964);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1008);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1033);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1057);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1060);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1061);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(352);
      if (lookahead == '2') ADVANCE(1017);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(353);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1137);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1173);
      END_STATE();
    case 1174:
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
  [1] = {.lex_state = 49},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 49},
  [60] = {.lex_state = 49},
  [61] = {.lex_state = 49},
  [62] = {.lex_state = 49},
  [63] = {.lex_state = 49},
  [64] = {.lex_state = 49},
  [65] = {.lex_state = 49},
  [66] = {.lex_state = 49},
  [67] = {.lex_state = 49},
  [68] = {.lex_state = 49},
  [69] = {.lex_state = 49},
  [70] = {.lex_state = 49},
  [71] = {.lex_state = 49},
  [72] = {.lex_state = 49},
  [73] = {.lex_state = 49},
  [74] = {.lex_state = 49},
  [75] = {.lex_state = 49},
  [76] = {.lex_state = 49},
  [77] = {.lex_state = 49},
  [78] = {.lex_state = 49},
  [79] = {.lex_state = 49},
  [80] = {.lex_state = 49},
  [81] = {.lex_state = 49},
  [82] = {.lex_state = 49},
  [83] = {.lex_state = 49},
  [84] = {.lex_state = 49},
  [85] = {.lex_state = 49},
  [86] = {.lex_state = 49},
  [87] = {.lex_state = 49},
  [88] = {.lex_state = 49},
  [89] = {.lex_state = 49},
  [90] = {.lex_state = 49},
  [91] = {.lex_state = 49},
  [92] = {.lex_state = 49},
  [93] = {.lex_state = 49},
  [94] = {.lex_state = 49},
  [95] = {.lex_state = 49},
  [96] = {.lex_state = 49},
  [97] = {.lex_state = 49},
  [98] = {.lex_state = 49},
  [99] = {.lex_state = 49},
  [100] = {.lex_state = 49},
  [101] = {.lex_state = 49},
  [102] = {.lex_state = 49},
  [103] = {.lex_state = 49},
  [104] = {.lex_state = 49},
  [105] = {.lex_state = 49},
  [106] = {.lex_state = 49},
  [107] = {.lex_state = 49},
  [108] = {.lex_state = 49},
  [109] = {.lex_state = 49},
  [110] = {.lex_state = 49},
  [111] = {.lex_state = 49},
  [112] = {.lex_state = 49},
  [113] = {.lex_state = 49},
  [114] = {.lex_state = 49},
  [115] = {.lex_state = 49},
  [116] = {.lex_state = 49},
  [117] = {.lex_state = 49},
  [118] = {.lex_state = 49},
  [119] = {.lex_state = 49},
  [120] = {.lex_state = 49},
  [121] = {.lex_state = 49},
  [122] = {.lex_state = 49},
  [123] = {.lex_state = 49},
  [124] = {.lex_state = 49},
  [125] = {.lex_state = 49},
  [126] = {.lex_state = 49},
  [127] = {.lex_state = 49},
  [128] = {.lex_state = 49},
  [129] = {.lex_state = 49},
  [130] = {.lex_state = 49},
  [131] = {.lex_state = 49},
  [132] = {.lex_state = 49},
  [133] = {.lex_state = 49},
  [134] = {.lex_state = 49},
  [135] = {.lex_state = 49},
  [136] = {.lex_state = 49},
  [137] = {.lex_state = 49},
  [138] = {.lex_state = 49},
  [139] = {.lex_state = 49},
  [140] = {.lex_state = 49},
  [141] = {.lex_state = 49},
  [142] = {.lex_state = 49},
  [143] = {.lex_state = 49},
  [144] = {.lex_state = 49},
  [145] = {.lex_state = 49},
  [146] = {.lex_state = 49},
  [147] = {.lex_state = 49},
  [148] = {.lex_state = 49},
  [149] = {.lex_state = 49},
  [150] = {.lex_state = 49},
  [151] = {.lex_state = 49},
  [152] = {.lex_state = 49},
  [153] = {.lex_state = 49},
  [154] = {.lex_state = 49},
  [155] = {.lex_state = 49},
  [156] = {.lex_state = 49},
  [157] = {.lex_state = 49},
  [158] = {.lex_state = 49},
  [159] = {.lex_state = 49},
  [160] = {.lex_state = 49},
  [161] = {.lex_state = 49},
  [162] = {.lex_state = 49},
  [163] = {.lex_state = 49},
  [164] = {.lex_state = 49},
  [165] = {.lex_state = 49},
  [166] = {.lex_state = 49},
  [167] = {.lex_state = 49},
  [168] = {.lex_state = 49},
  [169] = {.lex_state = 49},
  [170] = {.lex_state = 49},
  [171] = {.lex_state = 49},
  [172] = {.lex_state = 49},
  [173] = {.lex_state = 49},
  [174] = {.lex_state = 49},
  [175] = {.lex_state = 49},
  [176] = {.lex_state = 49},
  [177] = {.lex_state = 49},
  [178] = {.lex_state = 49},
  [179] = {.lex_state = 49},
  [180] = {.lex_state = 49},
  [181] = {.lex_state = 49},
  [182] = {.lex_state = 49},
  [183] = {.lex_state = 49},
  [184] = {.lex_state = 49},
  [185] = {.lex_state = 49},
  [186] = {.lex_state = 49},
  [187] = {.lex_state = 49},
  [188] = {.lex_state = 49},
  [189] = {.lex_state = 49},
  [190] = {.lex_state = 49},
  [191] = {.lex_state = 49},
  [192] = {.lex_state = 49},
  [193] = {.lex_state = 49},
  [194] = {.lex_state = 49},
  [195] = {.lex_state = 49},
  [196] = {.lex_state = 49},
  [197] = {.lex_state = 49},
  [198] = {.lex_state = 49},
  [199] = {.lex_state = 49},
  [200] = {.lex_state = 49},
  [201] = {.lex_state = 49},
  [202] = {.lex_state = 49},
  [203] = {.lex_state = 49},
  [204] = {.lex_state = 49},
  [205] = {.lex_state = 49},
  [206] = {.lex_state = 49},
  [207] = {.lex_state = 49},
  [208] = {.lex_state = 49},
  [209] = {.lex_state = 49},
  [210] = {.lex_state = 49},
  [211] = {.lex_state = 49},
  [212] = {.lex_state = 49},
  [213] = {.lex_state = 49},
  [214] = {.lex_state = 49},
  [215] = {.lex_state = 49},
  [216] = {.lex_state = 49},
  [217] = {.lex_state = 49},
  [218] = {.lex_state = 49},
  [219] = {.lex_state = 49},
  [220] = {.lex_state = 49},
  [221] = {.lex_state = 49},
  [222] = {.lex_state = 28},
  [223] = {.lex_state = 49},
  [224] = {.lex_state = 49},
  [225] = {.lex_state = 28},
  [226] = {.lex_state = 28},
  [227] = {.lex_state = 49},
  [228] = {.lex_state = 49},
  [229] = {.lex_state = 28},
  [230] = {.lex_state = 49},
  [231] = {.lex_state = 49},
  [232] = {.lex_state = 49},
  [233] = {.lex_state = 49},
  [234] = {.lex_state = 49},
  [235] = {.lex_state = 49},
  [236] = {.lex_state = 49},
  [237] = {.lex_state = 49},
  [238] = {.lex_state = 49},
  [239] = {.lex_state = 49},
  [240] = {.lex_state = 49},
  [241] = {.lex_state = 49},
  [242] = {.lex_state = 49},
  [243] = {.lex_state = 49},
  [244] = {.lex_state = 49},
  [245] = {.lex_state = 49},
  [246] = {.lex_state = 49},
  [247] = {.lex_state = 49},
  [248] = {.lex_state = 49},
  [249] = {.lex_state = 49},
  [250] = {.lex_state = 49},
  [251] = {.lex_state = 49},
  [252] = {.lex_state = 27},
  [253] = {.lex_state = 27},
  [254] = {.lex_state = 49},
  [255] = {.lex_state = 27},
  [256] = {.lex_state = 49},
  [257] = {.lex_state = 49},
  [258] = {.lex_state = 49},
  [259] = {.lex_state = 27},
  [260] = {.lex_state = 49},
  [261] = {.lex_state = 49},
  [262] = {.lex_state = 49},
  [263] = {.lex_state = 49},
  [264] = {.lex_state = 27},
  [265] = {.lex_state = 49},
  [266] = {.lex_state = 49},
  [267] = {.lex_state = 49},
  [268] = {.lex_state = 31},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 27},
  [272] = {.lex_state = 31},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 5},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 48},
  [299] = {.lex_state = 48},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 48},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 5},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 48},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 48},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 40},
  [323] = {.lex_state = 40},
  [324] = {.lex_state = 48},
  [325] = {.lex_state = 375},
  [326] = {.lex_state = 377},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 40},
  [330] = {.lex_state = 40},
  [331] = {.lex_state = 375},
  [332] = {.lex_state = 377},
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
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(1),
    [aux_sym_numeric_system_function_token1] = ACTIONS(1),
    [aux_sym_numeric_system_function_token2] = ACTIONS(1),
    [aux_sym_numeric_system_function_token3] = ACTIONS(1),
    [aux_sym_numeric_system_function_token4] = ACTIONS(1),
    [aux_sym_numeric_system_function_token5] = ACTIONS(1),
    [aux_sym_numeric_system_function_token6] = ACTIONS(1),
    [aux_sym_numeric_system_function_token7] = ACTIONS(1),
    [aux_sym_numeric_system_function_token8] = ACTIONS(1),
    [aux_sym_numeric_system_function_token9] = ACTIONS(1),
    [aux_sym_numeric_system_function_token10] = ACTIONS(1),
    [aux_sym_numeric_system_function_token11] = ACTIONS(1),
    [aux_sym_numeric_system_function_token12] = ACTIONS(1),
    [aux_sym_numeric_system_function_token13] = ACTIONS(1),
    [aux_sym_numeric_system_function_token14] = ACTIONS(1),
    [aux_sym_numeric_system_function_token15] = ACTIONS(1),
    [aux_sym_numeric_system_function_token16] = ACTIONS(1),
    [aux_sym_numeric_system_function_token17] = ACTIONS(1),
    [aux_sym_numeric_system_function_token18] = ACTIONS(1),
    [aux_sym_numeric_system_function_token19] = ACTIONS(1),
    [aux_sym_numeric_system_function_token20] = ACTIONS(1),
    [aux_sym_numeric_system_function_token21] = ACTIONS(1),
    [aux_sym_numeric_system_function_token22] = ACTIONS(1),
    [aux_sym_numeric_system_function_token23] = ACTIONS(1),
    [aux_sym_numeric_system_function_token24] = ACTIONS(1),
    [aux_sym_numeric_system_function_token25] = ACTIONS(1),
    [aux_sym_numeric_system_function_token26] = ACTIONS(1),
    [aux_sym_numeric_system_function_token27] = ACTIONS(1),
    [aux_sym_numeric_system_function_token28] = ACTIONS(1),
    [aux_sym_numeric_system_function_token29] = ACTIONS(1),
    [aux_sym_numeric_system_function_token30] = ACTIONS(1),
    [aux_sym_numeric_system_function_token31] = ACTIONS(1),
    [aux_sym_numeric_system_function_token32] = ACTIONS(1),
    [aux_sym_numeric_system_function_token33] = ACTIONS(1),
    [aux_sym_numeric_system_function_token34] = ACTIONS(1),
    [aux_sym_numeric_system_function_token35] = ACTIONS(1),
    [aux_sym_numeric_system_function_token36] = ACTIONS(1),
    [aux_sym_numeric_system_function_token37] = ACTIONS(1),
    [aux_sym_numeric_system_function_token38] = ACTIONS(1),
    [aux_sym_numeric_system_function_token39] = ACTIONS(1),
    [aux_sym_numeric_system_function_token40] = ACTIONS(1),
    [aux_sym_numeric_system_function_token41] = ACTIONS(1),
    [aux_sym_numeric_system_function_token42] = ACTIONS(1),
    [aux_sym_numeric_system_function_token43] = ACTIONS(1),
    [aux_sym_numeric_system_function_token44] = ACTIONS(1),
    [aux_sym_numeric_system_function_token45] = ACTIONS(1),
    [aux_sym_numeric_system_function_token46] = ACTIONS(1),
    [aux_sym_numeric_system_function_token47] = ACTIONS(1),
    [aux_sym_numeric_system_function_token48] = ACTIONS(1),
    [aux_sym_numeric_system_function_token49] = ACTIONS(1),
    [aux_sym_numeric_system_function_token50] = ACTIONS(1),
    [aux_sym_numeric_system_function_token51] = ACTIONS(1),
    [aux_sym_numeric_system_function_token52] = ACTIONS(1),
    [aux_sym_numeric_system_function_token53] = ACTIONS(1),
    [aux_sym_numeric_system_function_token54] = ACTIONS(1),
    [aux_sym_numeric_system_function_token55] = ACTIONS(1),
    [aux_sym_numeric_system_function_token56] = ACTIONS(1),
    [aux_sym_numeric_system_function_token57] = ACTIONS(1),
    [aux_sym_numeric_system_function_token58] = ACTIONS(1),
    [aux_sym_numeric_system_function_token59] = ACTIONS(1),
    [aux_sym_numeric_system_function_token60] = ACTIONS(1),
    [aux_sym_numeric_system_function_token61] = ACTIONS(1),
    [aux_sym_numeric_system_function_token62] = ACTIONS(1),
    [aux_sym_numeric_system_function_token63] = ACTIONS(1),
    [aux_sym_numeric_system_function_token64] = ACTIONS(1),
    [aux_sym_numeric_system_function_token65] = ACTIONS(1),
    [aux_sym_numeric_system_function_token66] = ACTIONS(1),
    [aux_sym_numeric_system_function_token67] = ACTIONS(1),
    [aux_sym_numeric_system_function_token68] = ACTIONS(1),
    [aux_sym_numeric_system_function_token69] = ACTIONS(1),
    [aux_sym_numeric_system_function_token70] = ACTIONS(1),
    [aux_sym_numeric_system_function_token71] = ACTIONS(1),
    [aux_sym_numeric_system_function_token72] = ACTIONS(1),
    [aux_sym_numeric_system_function_token73] = ACTIONS(1),
    [aux_sym_numeric_system_function_token74] = ACTIONS(1),
    [aux_sym_numeric_system_function_token75] = ACTIONS(1),
    [aux_sym_string_system_function_token1] = ACTIONS(1),
    [aux_sym_string_system_function_token2] = ACTIONS(1),
    [aux_sym_string_system_function_token3] = ACTIONS(1),
    [aux_sym_string_system_function_token4] = ACTIONS(1),
    [aux_sym_string_system_function_token5] = ACTIONS(1),
    [aux_sym_string_system_function_token6] = ACTIONS(1),
    [aux_sym_string_system_function_token7] = ACTIONS(1),
    [aux_sym_string_system_function_token8] = ACTIONS(1),
    [aux_sym_string_system_function_token9] = ACTIONS(1),
    [aux_sym_string_system_function_token10] = ACTIONS(1),
    [aux_sym_string_system_function_token11] = ACTIONS(1),
    [aux_sym_string_system_function_token12] = ACTIONS(1),
    [aux_sym_string_system_function_token13] = ACTIONS(1),
    [aux_sym_string_system_function_token14] = ACTIONS(1),
    [aux_sym_string_system_function_token15] = ACTIONS(1),
    [aux_sym_string_system_function_token16] = ACTIONS(1),
    [aux_sym_string_system_function_token17] = ACTIONS(1),
    [aux_sym_string_system_function_token18] = ACTIONS(1),
    [aux_sym_string_system_function_token19] = ACTIONS(1),
    [aux_sym_string_system_function_token20] = ACTIONS(1),
    [aux_sym_string_system_function_token21] = ACTIONS(1),
    [aux_sym_string_system_function_token22] = ACTIONS(1),
    [aux_sym_string_system_function_token23] = ACTIONS(1),
    [aux_sym_string_system_function_token24] = ACTIONS(1),
    [aux_sym_string_system_function_token25] = ACTIONS(1),
    [aux_sym_string_system_function_token26] = ACTIONS(1),
    [aux_sym_string_system_function_token27] = ACTIONS(1),
    [aux_sym_string_system_function_token28] = ACTIONS(1),
    [aux_sym_string_system_function_token29] = ACTIONS(1),
    [aux_sym_string_system_function_token30] = ACTIONS(1),
    [aux_sym_string_system_function_token31] = ACTIONS(1),
    [aux_sym_string_system_function_token32] = ACTIONS(1),
    [aux_sym_string_system_function_token33] = ACTIONS(1),
    [aux_sym_string_system_function_token34] = ACTIONS(1),
    [aux_sym_string_system_function_token35] = ACTIONS(1),
    [aux_sym_string_system_function_token36] = ACTIONS(1),
    [aux_sym_string_system_function_token37] = ACTIONS(1),
    [aux_sym_string_system_function_token38] = ACTIONS(1),
    [aux_sym_string_system_function_token39] = ACTIONS(1),
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
    [sym_source_file] = STATE(328),
    [sym_line] = STATE(148),
    [sym__single_line_statement] = STATE(257),
    [sym__multi_line_statement] = STATE(257),
    [sym_statement] = STATE(232),
    [sym__definition] = STATE(257),
    [sym_function_definition] = STATE(257),
    [sym_let_statement] = STATE(241),
    [sym_print_statement] = STATE(241),
    [aux_sym_source_file_repeat1] = STATE(148),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_line_number] = ACTIONS(5),
    [sym_label] = ACTIONS(7),
    [anon_sym_def] = ACTIONS(9),
    [aux_sym_let_statement_token1] = ACTIONS(11),
    [aux_sym_print_statement_token1] = ACTIONS(13),
  },
  [2] = {
    [sym_expression] = STATE(224),
    [sym_string_array_expression] = STATE(208),
    [sym_numeric_array_expression] = STATE(208),
    [sym_numeric_expression] = STATE(95),
    [sym_string_expression] = STATE(188),
    [sym_string_binary_expression] = STATE(172),
    [sym_numeric_binary_expression] = STATE(89),
    [sym_numeric_unary_expression] = STATE(89),
    [sym_numeric_array_primary_expression] = STATE(212),
    [sym_string_array_primary_expression] = STATE(213),
    [sym_numeric_primary_expression] = STATE(89),
    [sym_string_primary_expression] = STATE(172),
    [sym_numeric_call_expression] = STATE(78),
    [sym_string_call_expression] = STATE(170),
    [sym_numeric_system_function] = STATE(93),
    [sym_string_system_function] = STATE(169),
    [sym_numeric_user_function] = STATE(93),
    [sym_string_user_function] = STATE(169),
    [sym_template_string] = STATE(170),
    [sym_string] = STATE(170),
    [sym_parenthesized_expression] = STATE(78),
    [sym_string_array_forced_assignment_expression] = STATE(213),
    [sym_numeric_array_forced_assignment_expression] = STATE(212),
    [sym_numeric_forced_assignment_expression] = STATE(89),
    [sym_string_forced_assignment_expression] = STATE(172),
    [sym__numeric_reference] = STATE(65),
    [sym__string_reference] = STATE(165),
    [sym_numberelement] = STATE(65),
    [sym_stringelement] = STATE(165),
    [sym_stringarray] = STATE(182),
    [sym_stringreference] = STATE(165),
    [sym_numberreference] = STATE(65),
    [sym_numberarray] = STATE(187),
    [sym_number] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(19),
    [aux_sym_numeric_system_function_token1] = ACTIONS(21),
    [aux_sym_numeric_system_function_token2] = ACTIONS(21),
    [aux_sym_numeric_system_function_token3] = ACTIONS(21),
    [aux_sym_numeric_system_function_token4] = ACTIONS(21),
    [aux_sym_numeric_system_function_token5] = ACTIONS(21),
    [aux_sym_numeric_system_function_token6] = ACTIONS(21),
    [aux_sym_numeric_system_function_token7] = ACTIONS(21),
    [aux_sym_numeric_system_function_token8] = ACTIONS(21),
    [aux_sym_numeric_system_function_token9] = ACTIONS(21),
    [aux_sym_numeric_system_function_token10] = ACTIONS(21),
    [aux_sym_numeric_system_function_token11] = ACTIONS(21),
    [aux_sym_numeric_system_function_token12] = ACTIONS(21),
    [aux_sym_numeric_system_function_token13] = ACTIONS(21),
    [aux_sym_numeric_system_function_token14] = ACTIONS(21),
    [aux_sym_numeric_system_function_token15] = ACTIONS(21),
    [aux_sym_numeric_system_function_token16] = ACTIONS(21),
    [aux_sym_numeric_system_function_token17] = ACTIONS(21),
    [aux_sym_numeric_system_function_token18] = ACTIONS(21),
    [aux_sym_numeric_system_function_token19] = ACTIONS(21),
    [aux_sym_numeric_system_function_token20] = ACTIONS(21),
    [aux_sym_numeric_system_function_token21] = ACTIONS(21),
    [aux_sym_numeric_system_function_token22] = ACTIONS(21),
    [aux_sym_numeric_system_function_token23] = ACTIONS(21),
    [aux_sym_numeric_system_function_token24] = ACTIONS(21),
    [aux_sym_numeric_system_function_token25] = ACTIONS(21),
    [aux_sym_numeric_system_function_token26] = ACTIONS(21),
    [aux_sym_numeric_system_function_token27] = ACTIONS(21),
    [aux_sym_numeric_system_function_token28] = ACTIONS(21),
    [aux_sym_numeric_system_function_token29] = ACTIONS(21),
    [aux_sym_numeric_system_function_token30] = ACTIONS(21),
    [aux_sym_numeric_system_function_token31] = ACTIONS(21),
    [aux_sym_numeric_system_function_token32] = ACTIONS(21),
    [aux_sym_numeric_system_function_token33] = ACTIONS(21),
    [aux_sym_numeric_system_function_token34] = ACTIONS(21),
    [aux_sym_numeric_system_function_token35] = ACTIONS(21),
    [aux_sym_numeric_system_function_token36] = ACTIONS(21),
    [aux_sym_numeric_system_function_token37] = ACTIONS(21),
    [aux_sym_numeric_system_function_token38] = ACTIONS(21),
    [aux_sym_numeric_system_function_token39] = ACTIONS(21),
    [aux_sym_numeric_system_function_token40] = ACTIONS(21),
    [aux_sym_numeric_system_function_token41] = ACTIONS(21),
    [aux_sym_numeric_system_function_token42] = ACTIONS(21),
    [aux_sym_numeric_system_function_token43] = ACTIONS(21),
    [aux_sym_numeric_system_function_token44] = ACTIONS(21),
    [aux_sym_numeric_system_function_token45] = ACTIONS(21),
    [aux_sym_numeric_system_function_token46] = ACTIONS(21),
    [aux_sym_numeric_system_function_token47] = ACTIONS(21),
    [aux_sym_numeric_system_function_token48] = ACTIONS(21),
    [aux_sym_numeric_system_function_token49] = ACTIONS(21),
    [aux_sym_numeric_system_function_token50] = ACTIONS(21),
    [aux_sym_numeric_system_function_token51] = ACTIONS(21),
    [aux_sym_numeric_system_function_token52] = ACTIONS(21),
    [aux_sym_numeric_system_function_token53] = ACTIONS(21),
    [aux_sym_numeric_system_function_token54] = ACTIONS(21),
    [aux_sym_numeric_system_function_token55] = ACTIONS(21),
    [aux_sym_numeric_system_function_token56] = ACTIONS(21),
    [aux_sym_numeric_system_function_token57] = ACTIONS(21),
    [aux_sym_numeric_system_function_token58] = ACTIONS(21),
    [aux_sym_numeric_system_function_token59] = ACTIONS(21),
    [aux_sym_numeric_system_function_token60] = ACTIONS(21),
    [aux_sym_numeric_system_function_token61] = ACTIONS(21),
    [aux_sym_numeric_system_function_token62] = ACTIONS(21),
    [aux_sym_numeric_system_function_token63] = ACTIONS(21),
    [aux_sym_numeric_system_function_token64] = ACTIONS(21),
    [aux_sym_numeric_system_function_token65] = ACTIONS(21),
    [aux_sym_numeric_system_function_token66] = ACTIONS(21),
    [aux_sym_numeric_system_function_token67] = ACTIONS(21),
    [aux_sym_numeric_system_function_token68] = ACTIONS(21),
    [aux_sym_numeric_system_function_token69] = ACTIONS(21),
    [aux_sym_numeric_system_function_token70] = ACTIONS(21),
    [aux_sym_numeric_system_function_token71] = ACTIONS(21),
    [aux_sym_numeric_system_function_token72] = ACTIONS(21),
    [aux_sym_numeric_system_function_token73] = ACTIONS(21),
    [aux_sym_numeric_system_function_token74] = ACTIONS(21),
    [aux_sym_numeric_system_function_token75] = ACTIONS(21),
    [aux_sym_string_system_function_token1] = ACTIONS(23),
    [aux_sym_string_system_function_token2] = ACTIONS(23),
    [aux_sym_string_system_function_token3] = ACTIONS(23),
    [aux_sym_string_system_function_token4] = ACTIONS(23),
    [aux_sym_string_system_function_token5] = ACTIONS(23),
    [aux_sym_string_system_function_token6] = ACTIONS(23),
    [aux_sym_string_system_function_token7] = ACTIONS(23),
    [aux_sym_string_system_function_token8] = ACTIONS(23),
    [aux_sym_string_system_function_token9] = ACTIONS(23),
    [aux_sym_string_system_function_token10] = ACTIONS(23),
    [aux_sym_string_system_function_token11] = ACTIONS(23),
    [aux_sym_string_system_function_token12] = ACTIONS(23),
    [aux_sym_string_system_function_token13] = ACTIONS(23),
    [aux_sym_string_system_function_token14] = ACTIONS(23),
    [aux_sym_string_system_function_token15] = ACTIONS(23),
    [aux_sym_string_system_function_token16] = ACTIONS(23),
    [aux_sym_string_system_function_token17] = ACTIONS(23),
    [aux_sym_string_system_function_token18] = ACTIONS(23),
    [aux_sym_string_system_function_token19] = ACTIONS(23),
    [aux_sym_string_system_function_token20] = ACTIONS(23),
    [aux_sym_string_system_function_token21] = ACTIONS(23),
    [aux_sym_string_system_function_token22] = ACTIONS(23),
    [aux_sym_string_system_function_token23] = ACTIONS(23),
    [aux_sym_string_system_function_token24] = ACTIONS(23),
    [aux_sym_string_system_function_token25] = ACTIONS(23),
    [aux_sym_string_system_function_token26] = ACTIONS(23),
    [aux_sym_string_system_function_token27] = ACTIONS(23),
    [aux_sym_string_system_function_token28] = ACTIONS(23),
    [aux_sym_string_system_function_token29] = ACTIONS(23),
    [aux_sym_string_system_function_token30] = ACTIONS(23),
    [aux_sym_string_system_function_token31] = ACTIONS(23),
    [aux_sym_string_system_function_token32] = ACTIONS(23),
    [aux_sym_string_system_function_token33] = ACTIONS(23),
    [aux_sym_string_system_function_token34] = ACTIONS(23),
    [aux_sym_string_system_function_token35] = ACTIONS(23),
    [aux_sym_string_system_function_token36] = ACTIONS(23),
    [aux_sym_string_system_function_token37] = ACTIONS(23),
    [aux_sym_string_system_function_token38] = ACTIONS(23),
    [aux_sym_string_system_function_token39] = ACTIONS(23),
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
    [sym_expression] = STATE(284),
    [sym_string_array_expression] = STATE(208),
    [sym_numeric_array_expression] = STATE(208),
    [sym_numeric_expression] = STATE(95),
    [sym_string_expression] = STATE(188),
    [sym_string_binary_expression] = STATE(172),
    [sym_numeric_binary_expression] = STATE(89),
    [sym_numeric_unary_expression] = STATE(89),
    [sym_numeric_array_primary_expression] = STATE(212),
    [sym_string_array_primary_expression] = STATE(213),
    [sym_numeric_primary_expression] = STATE(89),
    [sym_string_primary_expression] = STATE(172),
    [sym_numeric_call_expression] = STATE(78),
    [sym_string_call_expression] = STATE(170),
    [sym_numeric_system_function] = STATE(93),
    [sym_string_system_function] = STATE(169),
    [sym_numeric_user_function] = STATE(93),
    [sym_string_user_function] = STATE(169),
    [sym_template_string] = STATE(170),
    [sym_string] = STATE(170),
    [sym_parenthesized_expression] = STATE(78),
    [sym_string_array_forced_assignment_expression] = STATE(213),
    [sym_numeric_array_forced_assignment_expression] = STATE(212),
    [sym_numeric_forced_assignment_expression] = STATE(89),
    [sym_string_forced_assignment_expression] = STATE(172),
    [sym__numeric_reference] = STATE(65),
    [sym__string_reference] = STATE(165),
    [sym_numberelement] = STATE(65),
    [sym_stringelement] = STATE(165),
    [sym_stringarray] = STATE(182),
    [sym_stringreference] = STATE(165),
    [sym_numberreference] = STATE(65),
    [sym_numberarray] = STATE(187),
    [sym_number] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(19),
    [aux_sym_numeric_system_function_token1] = ACTIONS(21),
    [aux_sym_numeric_system_function_token2] = ACTIONS(21),
    [aux_sym_numeric_system_function_token3] = ACTIONS(21),
    [aux_sym_numeric_system_function_token4] = ACTIONS(21),
    [aux_sym_numeric_system_function_token5] = ACTIONS(21),
    [aux_sym_numeric_system_function_token6] = ACTIONS(21),
    [aux_sym_numeric_system_function_token7] = ACTIONS(21),
    [aux_sym_numeric_system_function_token8] = ACTIONS(21),
    [aux_sym_numeric_system_function_token9] = ACTIONS(21),
    [aux_sym_numeric_system_function_token10] = ACTIONS(21),
    [aux_sym_numeric_system_function_token11] = ACTIONS(21),
    [aux_sym_numeric_system_function_token12] = ACTIONS(21),
    [aux_sym_numeric_system_function_token13] = ACTIONS(21),
    [aux_sym_numeric_system_function_token14] = ACTIONS(21),
    [aux_sym_numeric_system_function_token15] = ACTIONS(21),
    [aux_sym_numeric_system_function_token16] = ACTIONS(21),
    [aux_sym_numeric_system_function_token17] = ACTIONS(21),
    [aux_sym_numeric_system_function_token18] = ACTIONS(21),
    [aux_sym_numeric_system_function_token19] = ACTIONS(21),
    [aux_sym_numeric_system_function_token20] = ACTIONS(21),
    [aux_sym_numeric_system_function_token21] = ACTIONS(21),
    [aux_sym_numeric_system_function_token22] = ACTIONS(21),
    [aux_sym_numeric_system_function_token23] = ACTIONS(21),
    [aux_sym_numeric_system_function_token24] = ACTIONS(21),
    [aux_sym_numeric_system_function_token25] = ACTIONS(21),
    [aux_sym_numeric_system_function_token26] = ACTIONS(21),
    [aux_sym_numeric_system_function_token27] = ACTIONS(21),
    [aux_sym_numeric_system_function_token28] = ACTIONS(21),
    [aux_sym_numeric_system_function_token29] = ACTIONS(21),
    [aux_sym_numeric_system_function_token30] = ACTIONS(21),
    [aux_sym_numeric_system_function_token31] = ACTIONS(21),
    [aux_sym_numeric_system_function_token32] = ACTIONS(21),
    [aux_sym_numeric_system_function_token33] = ACTIONS(21),
    [aux_sym_numeric_system_function_token34] = ACTIONS(21),
    [aux_sym_numeric_system_function_token35] = ACTIONS(21),
    [aux_sym_numeric_system_function_token36] = ACTIONS(21),
    [aux_sym_numeric_system_function_token37] = ACTIONS(21),
    [aux_sym_numeric_system_function_token38] = ACTIONS(21),
    [aux_sym_numeric_system_function_token39] = ACTIONS(21),
    [aux_sym_numeric_system_function_token40] = ACTIONS(21),
    [aux_sym_numeric_system_function_token41] = ACTIONS(21),
    [aux_sym_numeric_system_function_token42] = ACTIONS(21),
    [aux_sym_numeric_system_function_token43] = ACTIONS(21),
    [aux_sym_numeric_system_function_token44] = ACTIONS(21),
    [aux_sym_numeric_system_function_token45] = ACTIONS(21),
    [aux_sym_numeric_system_function_token46] = ACTIONS(21),
    [aux_sym_numeric_system_function_token47] = ACTIONS(21),
    [aux_sym_numeric_system_function_token48] = ACTIONS(21),
    [aux_sym_numeric_system_function_token49] = ACTIONS(21),
    [aux_sym_numeric_system_function_token50] = ACTIONS(21),
    [aux_sym_numeric_system_function_token51] = ACTIONS(21),
    [aux_sym_numeric_system_function_token52] = ACTIONS(21),
    [aux_sym_numeric_system_function_token53] = ACTIONS(21),
    [aux_sym_numeric_system_function_token54] = ACTIONS(21),
    [aux_sym_numeric_system_function_token55] = ACTIONS(21),
    [aux_sym_numeric_system_function_token56] = ACTIONS(21),
    [aux_sym_numeric_system_function_token57] = ACTIONS(21),
    [aux_sym_numeric_system_function_token58] = ACTIONS(21),
    [aux_sym_numeric_system_function_token59] = ACTIONS(21),
    [aux_sym_numeric_system_function_token60] = ACTIONS(21),
    [aux_sym_numeric_system_function_token61] = ACTIONS(21),
    [aux_sym_numeric_system_function_token62] = ACTIONS(21),
    [aux_sym_numeric_system_function_token63] = ACTIONS(21),
    [aux_sym_numeric_system_function_token64] = ACTIONS(21),
    [aux_sym_numeric_system_function_token65] = ACTIONS(21),
    [aux_sym_numeric_system_function_token66] = ACTIONS(21),
    [aux_sym_numeric_system_function_token67] = ACTIONS(21),
    [aux_sym_numeric_system_function_token68] = ACTIONS(21),
    [aux_sym_numeric_system_function_token69] = ACTIONS(21),
    [aux_sym_numeric_system_function_token70] = ACTIONS(21),
    [aux_sym_numeric_system_function_token71] = ACTIONS(21),
    [aux_sym_numeric_system_function_token72] = ACTIONS(21),
    [aux_sym_numeric_system_function_token73] = ACTIONS(21),
    [aux_sym_numeric_system_function_token74] = ACTIONS(21),
    [aux_sym_numeric_system_function_token75] = ACTIONS(21),
    [aux_sym_string_system_function_token1] = ACTIONS(23),
    [aux_sym_string_system_function_token2] = ACTIONS(23),
    [aux_sym_string_system_function_token3] = ACTIONS(23),
    [aux_sym_string_system_function_token4] = ACTIONS(23),
    [aux_sym_string_system_function_token5] = ACTIONS(23),
    [aux_sym_string_system_function_token6] = ACTIONS(23),
    [aux_sym_string_system_function_token7] = ACTIONS(23),
    [aux_sym_string_system_function_token8] = ACTIONS(23),
    [aux_sym_string_system_function_token9] = ACTIONS(23),
    [aux_sym_string_system_function_token10] = ACTIONS(23),
    [aux_sym_string_system_function_token11] = ACTIONS(23),
    [aux_sym_string_system_function_token12] = ACTIONS(23),
    [aux_sym_string_system_function_token13] = ACTIONS(23),
    [aux_sym_string_system_function_token14] = ACTIONS(23),
    [aux_sym_string_system_function_token15] = ACTIONS(23),
    [aux_sym_string_system_function_token16] = ACTIONS(23),
    [aux_sym_string_system_function_token17] = ACTIONS(23),
    [aux_sym_string_system_function_token18] = ACTIONS(23),
    [aux_sym_string_system_function_token19] = ACTIONS(23),
    [aux_sym_string_system_function_token20] = ACTIONS(23),
    [aux_sym_string_system_function_token21] = ACTIONS(23),
    [aux_sym_string_system_function_token22] = ACTIONS(23),
    [aux_sym_string_system_function_token23] = ACTIONS(23),
    [aux_sym_string_system_function_token24] = ACTIONS(23),
    [aux_sym_string_system_function_token25] = ACTIONS(23),
    [aux_sym_string_system_function_token26] = ACTIONS(23),
    [aux_sym_string_system_function_token27] = ACTIONS(23),
    [aux_sym_string_system_function_token28] = ACTIONS(23),
    [aux_sym_string_system_function_token29] = ACTIONS(23),
    [aux_sym_string_system_function_token30] = ACTIONS(23),
    [aux_sym_string_system_function_token31] = ACTIONS(23),
    [aux_sym_string_system_function_token32] = ACTIONS(23),
    [aux_sym_string_system_function_token33] = ACTIONS(23),
    [aux_sym_string_system_function_token34] = ACTIONS(23),
    [aux_sym_string_system_function_token35] = ACTIONS(23),
    [aux_sym_string_system_function_token36] = ACTIONS(23),
    [aux_sym_string_system_function_token37] = ACTIONS(23),
    [aux_sym_string_system_function_token38] = ACTIONS(23),
    [aux_sym_string_system_function_token39] = ACTIONS(23),
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
    [sym_expression] = STATE(277),
    [sym_string_array_expression] = STATE(208),
    [sym_numeric_array_expression] = STATE(208),
    [sym_numeric_expression] = STATE(95),
    [sym_string_expression] = STATE(188),
    [sym_string_binary_expression] = STATE(172),
    [sym_numeric_binary_expression] = STATE(89),
    [sym_numeric_unary_expression] = STATE(89),
    [sym_numeric_array_primary_expression] = STATE(212),
    [sym_string_array_primary_expression] = STATE(213),
    [sym_numeric_primary_expression] = STATE(89),
    [sym_string_primary_expression] = STATE(172),
    [sym_numeric_call_expression] = STATE(78),
    [sym_string_call_expression] = STATE(170),
    [sym_numeric_system_function] = STATE(93),
    [sym_string_system_function] = STATE(169),
    [sym_numeric_user_function] = STATE(93),
    [sym_string_user_function] = STATE(169),
    [sym_template_string] = STATE(170),
    [sym_string] = STATE(170),
    [sym_parenthesized_expression] = STATE(78),
    [sym_string_array_forced_assignment_expression] = STATE(213),
    [sym_numeric_array_forced_assignment_expression] = STATE(212),
    [sym_numeric_forced_assignment_expression] = STATE(89),
    [sym_string_forced_assignment_expression] = STATE(172),
    [sym__numeric_reference] = STATE(65),
    [sym__string_reference] = STATE(165),
    [sym_numberelement] = STATE(65),
    [sym_stringelement] = STATE(165),
    [sym_stringarray] = STATE(182),
    [sym_stringreference] = STATE(165),
    [sym_numberreference] = STATE(65),
    [sym_numberarray] = STATE(187),
    [sym_number] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(19),
    [aux_sym_numeric_system_function_token1] = ACTIONS(21),
    [aux_sym_numeric_system_function_token2] = ACTIONS(21),
    [aux_sym_numeric_system_function_token3] = ACTIONS(21),
    [aux_sym_numeric_system_function_token4] = ACTIONS(21),
    [aux_sym_numeric_system_function_token5] = ACTIONS(21),
    [aux_sym_numeric_system_function_token6] = ACTIONS(21),
    [aux_sym_numeric_system_function_token7] = ACTIONS(21),
    [aux_sym_numeric_system_function_token8] = ACTIONS(21),
    [aux_sym_numeric_system_function_token9] = ACTIONS(21),
    [aux_sym_numeric_system_function_token10] = ACTIONS(21),
    [aux_sym_numeric_system_function_token11] = ACTIONS(21),
    [aux_sym_numeric_system_function_token12] = ACTIONS(21),
    [aux_sym_numeric_system_function_token13] = ACTIONS(21),
    [aux_sym_numeric_system_function_token14] = ACTIONS(21),
    [aux_sym_numeric_system_function_token15] = ACTIONS(21),
    [aux_sym_numeric_system_function_token16] = ACTIONS(21),
    [aux_sym_numeric_system_function_token17] = ACTIONS(21),
    [aux_sym_numeric_system_function_token18] = ACTIONS(21),
    [aux_sym_numeric_system_function_token19] = ACTIONS(21),
    [aux_sym_numeric_system_function_token20] = ACTIONS(21),
    [aux_sym_numeric_system_function_token21] = ACTIONS(21),
    [aux_sym_numeric_system_function_token22] = ACTIONS(21),
    [aux_sym_numeric_system_function_token23] = ACTIONS(21),
    [aux_sym_numeric_system_function_token24] = ACTIONS(21),
    [aux_sym_numeric_system_function_token25] = ACTIONS(21),
    [aux_sym_numeric_system_function_token26] = ACTIONS(21),
    [aux_sym_numeric_system_function_token27] = ACTIONS(21),
    [aux_sym_numeric_system_function_token28] = ACTIONS(21),
    [aux_sym_numeric_system_function_token29] = ACTIONS(21),
    [aux_sym_numeric_system_function_token30] = ACTIONS(21),
    [aux_sym_numeric_system_function_token31] = ACTIONS(21),
    [aux_sym_numeric_system_function_token32] = ACTIONS(21),
    [aux_sym_numeric_system_function_token33] = ACTIONS(21),
    [aux_sym_numeric_system_function_token34] = ACTIONS(21),
    [aux_sym_numeric_system_function_token35] = ACTIONS(21),
    [aux_sym_numeric_system_function_token36] = ACTIONS(21),
    [aux_sym_numeric_system_function_token37] = ACTIONS(21),
    [aux_sym_numeric_system_function_token38] = ACTIONS(21),
    [aux_sym_numeric_system_function_token39] = ACTIONS(21),
    [aux_sym_numeric_system_function_token40] = ACTIONS(21),
    [aux_sym_numeric_system_function_token41] = ACTIONS(21),
    [aux_sym_numeric_system_function_token42] = ACTIONS(21),
    [aux_sym_numeric_system_function_token43] = ACTIONS(21),
    [aux_sym_numeric_system_function_token44] = ACTIONS(21),
    [aux_sym_numeric_system_function_token45] = ACTIONS(21),
    [aux_sym_numeric_system_function_token46] = ACTIONS(21),
    [aux_sym_numeric_system_function_token47] = ACTIONS(21),
    [aux_sym_numeric_system_function_token48] = ACTIONS(21),
    [aux_sym_numeric_system_function_token49] = ACTIONS(21),
    [aux_sym_numeric_system_function_token50] = ACTIONS(21),
    [aux_sym_numeric_system_function_token51] = ACTIONS(21),
    [aux_sym_numeric_system_function_token52] = ACTIONS(21),
    [aux_sym_numeric_system_function_token53] = ACTIONS(21),
    [aux_sym_numeric_system_function_token54] = ACTIONS(21),
    [aux_sym_numeric_system_function_token55] = ACTIONS(21),
    [aux_sym_numeric_system_function_token56] = ACTIONS(21),
    [aux_sym_numeric_system_function_token57] = ACTIONS(21),
    [aux_sym_numeric_system_function_token58] = ACTIONS(21),
    [aux_sym_numeric_system_function_token59] = ACTIONS(21),
    [aux_sym_numeric_system_function_token60] = ACTIONS(21),
    [aux_sym_numeric_system_function_token61] = ACTIONS(21),
    [aux_sym_numeric_system_function_token62] = ACTIONS(21),
    [aux_sym_numeric_system_function_token63] = ACTIONS(21),
    [aux_sym_numeric_system_function_token64] = ACTIONS(21),
    [aux_sym_numeric_system_function_token65] = ACTIONS(21),
    [aux_sym_numeric_system_function_token66] = ACTIONS(21),
    [aux_sym_numeric_system_function_token67] = ACTIONS(21),
    [aux_sym_numeric_system_function_token68] = ACTIONS(21),
    [aux_sym_numeric_system_function_token69] = ACTIONS(21),
    [aux_sym_numeric_system_function_token70] = ACTIONS(21),
    [aux_sym_numeric_system_function_token71] = ACTIONS(21),
    [aux_sym_numeric_system_function_token72] = ACTIONS(21),
    [aux_sym_numeric_system_function_token73] = ACTIONS(21),
    [aux_sym_numeric_system_function_token74] = ACTIONS(21),
    [aux_sym_numeric_system_function_token75] = ACTIONS(21),
    [aux_sym_string_system_function_token1] = ACTIONS(23),
    [aux_sym_string_system_function_token2] = ACTIONS(23),
    [aux_sym_string_system_function_token3] = ACTIONS(23),
    [aux_sym_string_system_function_token4] = ACTIONS(23),
    [aux_sym_string_system_function_token5] = ACTIONS(23),
    [aux_sym_string_system_function_token6] = ACTIONS(23),
    [aux_sym_string_system_function_token7] = ACTIONS(23),
    [aux_sym_string_system_function_token8] = ACTIONS(23),
    [aux_sym_string_system_function_token9] = ACTIONS(23),
    [aux_sym_string_system_function_token10] = ACTIONS(23),
    [aux_sym_string_system_function_token11] = ACTIONS(23),
    [aux_sym_string_system_function_token12] = ACTIONS(23),
    [aux_sym_string_system_function_token13] = ACTIONS(23),
    [aux_sym_string_system_function_token14] = ACTIONS(23),
    [aux_sym_string_system_function_token15] = ACTIONS(23),
    [aux_sym_string_system_function_token16] = ACTIONS(23),
    [aux_sym_string_system_function_token17] = ACTIONS(23),
    [aux_sym_string_system_function_token18] = ACTIONS(23),
    [aux_sym_string_system_function_token19] = ACTIONS(23),
    [aux_sym_string_system_function_token20] = ACTIONS(23),
    [aux_sym_string_system_function_token21] = ACTIONS(23),
    [aux_sym_string_system_function_token22] = ACTIONS(23),
    [aux_sym_string_system_function_token23] = ACTIONS(23),
    [aux_sym_string_system_function_token24] = ACTIONS(23),
    [aux_sym_string_system_function_token25] = ACTIONS(23),
    [aux_sym_string_system_function_token26] = ACTIONS(23),
    [aux_sym_string_system_function_token27] = ACTIONS(23),
    [aux_sym_string_system_function_token28] = ACTIONS(23),
    [aux_sym_string_system_function_token29] = ACTIONS(23),
    [aux_sym_string_system_function_token30] = ACTIONS(23),
    [aux_sym_string_system_function_token31] = ACTIONS(23),
    [aux_sym_string_system_function_token32] = ACTIONS(23),
    [aux_sym_string_system_function_token33] = ACTIONS(23),
    [aux_sym_string_system_function_token34] = ACTIONS(23),
    [aux_sym_string_system_function_token35] = ACTIONS(23),
    [aux_sym_string_system_function_token36] = ACTIONS(23),
    [aux_sym_string_system_function_token37] = ACTIONS(23),
    [aux_sym_string_system_function_token38] = ACTIONS(23),
    [aux_sym_string_system_function_token39] = ACTIONS(23),
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
    [sym_expression] = STATE(228),
    [sym_string_array_expression] = STATE(219),
    [sym_numeric_array_expression] = STATE(219),
    [sym_numeric_expression] = STATE(98),
    [sym_string_expression] = STATE(217),
    [sym_string_binary_expression] = STATE(215),
    [sym_numeric_binary_expression] = STATE(101),
    [sym_numeric_unary_expression] = STATE(101),
    [sym_numeric_array_primary_expression] = STATE(230),
    [sym_string_array_primary_expression] = STATE(221),
    [sym_numeric_primary_expression] = STATE(101),
    [sym_string_primary_expression] = STATE(215),
    [sym_numeric_call_expression] = STATE(100),
    [sym_string_call_expression] = STATE(189),
    [sym_numeric_system_function] = STATE(99),
    [sym_string_system_function] = STATE(190),
    [sym_numeric_user_function] = STATE(99),
    [sym_string_user_function] = STATE(190),
    [sym_template_string] = STATE(189),
    [sym_string] = STATE(189),
    [sym_parenthesized_expression] = STATE(100),
    [sym_string_array_forced_assignment_expression] = STATE(221),
    [sym_numeric_array_forced_assignment_expression] = STATE(230),
    [sym_numeric_forced_assignment_expression] = STATE(101),
    [sym_string_forced_assignment_expression] = STATE(215),
    [sym__numeric_reference] = STATE(66),
    [sym__string_reference] = STATE(183),
    [sym_numberelement] = STATE(66),
    [sym_stringelement] = STATE(183),
    [sym_stringarray] = STATE(199),
    [sym_stringreference] = STATE(183),
    [sym_numberreference] = STATE(66),
    [sym_numberarray] = STATE(209),
    [sym_number] = STATE(100),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(45),
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(47),
    [aux_sym_numeric_system_function_token1] = ACTIONS(49),
    [aux_sym_numeric_system_function_token2] = ACTIONS(49),
    [aux_sym_numeric_system_function_token3] = ACTIONS(49),
    [aux_sym_numeric_system_function_token4] = ACTIONS(49),
    [aux_sym_numeric_system_function_token5] = ACTIONS(49),
    [aux_sym_numeric_system_function_token6] = ACTIONS(49),
    [aux_sym_numeric_system_function_token7] = ACTIONS(49),
    [aux_sym_numeric_system_function_token8] = ACTIONS(49),
    [aux_sym_numeric_system_function_token9] = ACTIONS(49),
    [aux_sym_numeric_system_function_token10] = ACTIONS(49),
    [aux_sym_numeric_system_function_token11] = ACTIONS(49),
    [aux_sym_numeric_system_function_token12] = ACTIONS(49),
    [aux_sym_numeric_system_function_token13] = ACTIONS(49),
    [aux_sym_numeric_system_function_token14] = ACTIONS(49),
    [aux_sym_numeric_system_function_token15] = ACTIONS(49),
    [aux_sym_numeric_system_function_token16] = ACTIONS(49),
    [aux_sym_numeric_system_function_token17] = ACTIONS(49),
    [aux_sym_numeric_system_function_token18] = ACTIONS(49),
    [aux_sym_numeric_system_function_token19] = ACTIONS(49),
    [aux_sym_numeric_system_function_token20] = ACTIONS(49),
    [aux_sym_numeric_system_function_token21] = ACTIONS(49),
    [aux_sym_numeric_system_function_token22] = ACTIONS(49),
    [aux_sym_numeric_system_function_token23] = ACTIONS(49),
    [aux_sym_numeric_system_function_token24] = ACTIONS(49),
    [aux_sym_numeric_system_function_token25] = ACTIONS(49),
    [aux_sym_numeric_system_function_token26] = ACTIONS(49),
    [aux_sym_numeric_system_function_token27] = ACTIONS(49),
    [aux_sym_numeric_system_function_token28] = ACTIONS(49),
    [aux_sym_numeric_system_function_token29] = ACTIONS(49),
    [aux_sym_numeric_system_function_token30] = ACTIONS(49),
    [aux_sym_numeric_system_function_token31] = ACTIONS(49),
    [aux_sym_numeric_system_function_token32] = ACTIONS(49),
    [aux_sym_numeric_system_function_token33] = ACTIONS(49),
    [aux_sym_numeric_system_function_token34] = ACTIONS(49),
    [aux_sym_numeric_system_function_token35] = ACTIONS(49),
    [aux_sym_numeric_system_function_token36] = ACTIONS(49),
    [aux_sym_numeric_system_function_token37] = ACTIONS(49),
    [aux_sym_numeric_system_function_token38] = ACTIONS(49),
    [aux_sym_numeric_system_function_token39] = ACTIONS(49),
    [aux_sym_numeric_system_function_token40] = ACTIONS(49),
    [aux_sym_numeric_system_function_token41] = ACTIONS(49),
    [aux_sym_numeric_system_function_token42] = ACTIONS(49),
    [aux_sym_numeric_system_function_token43] = ACTIONS(49),
    [aux_sym_numeric_system_function_token44] = ACTIONS(49),
    [aux_sym_numeric_system_function_token45] = ACTIONS(49),
    [aux_sym_numeric_system_function_token46] = ACTIONS(49),
    [aux_sym_numeric_system_function_token47] = ACTIONS(49),
    [aux_sym_numeric_system_function_token48] = ACTIONS(49),
    [aux_sym_numeric_system_function_token49] = ACTIONS(49),
    [aux_sym_numeric_system_function_token50] = ACTIONS(49),
    [aux_sym_numeric_system_function_token51] = ACTIONS(49),
    [aux_sym_numeric_system_function_token52] = ACTIONS(49),
    [aux_sym_numeric_system_function_token53] = ACTIONS(49),
    [aux_sym_numeric_system_function_token54] = ACTIONS(49),
    [aux_sym_numeric_system_function_token55] = ACTIONS(49),
    [aux_sym_numeric_system_function_token56] = ACTIONS(49),
    [aux_sym_numeric_system_function_token57] = ACTIONS(49),
    [aux_sym_numeric_system_function_token58] = ACTIONS(49),
    [aux_sym_numeric_system_function_token59] = ACTIONS(49),
    [aux_sym_numeric_system_function_token60] = ACTIONS(49),
    [aux_sym_numeric_system_function_token61] = ACTIONS(49),
    [aux_sym_numeric_system_function_token62] = ACTIONS(49),
    [aux_sym_numeric_system_function_token63] = ACTIONS(49),
    [aux_sym_numeric_system_function_token64] = ACTIONS(49),
    [aux_sym_numeric_system_function_token65] = ACTIONS(49),
    [aux_sym_numeric_system_function_token66] = ACTIONS(49),
    [aux_sym_numeric_system_function_token67] = ACTIONS(49),
    [aux_sym_numeric_system_function_token68] = ACTIONS(49),
    [aux_sym_numeric_system_function_token69] = ACTIONS(49),
    [aux_sym_numeric_system_function_token70] = ACTIONS(49),
    [aux_sym_numeric_system_function_token71] = ACTIONS(49),
    [aux_sym_numeric_system_function_token72] = ACTIONS(49),
    [aux_sym_numeric_system_function_token73] = ACTIONS(49),
    [aux_sym_numeric_system_function_token74] = ACTIONS(49),
    [aux_sym_numeric_system_function_token75] = ACTIONS(49),
    [aux_sym_string_system_function_token1] = ACTIONS(51),
    [aux_sym_string_system_function_token2] = ACTIONS(51),
    [aux_sym_string_system_function_token3] = ACTIONS(51),
    [aux_sym_string_system_function_token4] = ACTIONS(51),
    [aux_sym_string_system_function_token5] = ACTIONS(51),
    [aux_sym_string_system_function_token6] = ACTIONS(51),
    [aux_sym_string_system_function_token7] = ACTIONS(51),
    [aux_sym_string_system_function_token8] = ACTIONS(51),
    [aux_sym_string_system_function_token9] = ACTIONS(51),
    [aux_sym_string_system_function_token10] = ACTIONS(51),
    [aux_sym_string_system_function_token11] = ACTIONS(51),
    [aux_sym_string_system_function_token12] = ACTIONS(51),
    [aux_sym_string_system_function_token13] = ACTIONS(51),
    [aux_sym_string_system_function_token14] = ACTIONS(51),
    [aux_sym_string_system_function_token15] = ACTIONS(51),
    [aux_sym_string_system_function_token16] = ACTIONS(51),
    [aux_sym_string_system_function_token17] = ACTIONS(51),
    [aux_sym_string_system_function_token18] = ACTIONS(51),
    [aux_sym_string_system_function_token19] = ACTIONS(51),
    [aux_sym_string_system_function_token20] = ACTIONS(51),
    [aux_sym_string_system_function_token21] = ACTIONS(51),
    [aux_sym_string_system_function_token22] = ACTIONS(51),
    [aux_sym_string_system_function_token23] = ACTIONS(51),
    [aux_sym_string_system_function_token24] = ACTIONS(51),
    [aux_sym_string_system_function_token25] = ACTIONS(51),
    [aux_sym_string_system_function_token26] = ACTIONS(51),
    [aux_sym_string_system_function_token27] = ACTIONS(51),
    [aux_sym_string_system_function_token28] = ACTIONS(51),
    [aux_sym_string_system_function_token29] = ACTIONS(51),
    [aux_sym_string_system_function_token30] = ACTIONS(51),
    [aux_sym_string_system_function_token31] = ACTIONS(51),
    [aux_sym_string_system_function_token32] = ACTIONS(51),
    [aux_sym_string_system_function_token33] = ACTIONS(51),
    [aux_sym_string_system_function_token34] = ACTIONS(51),
    [aux_sym_string_system_function_token35] = ACTIONS(51),
    [aux_sym_string_system_function_token36] = ACTIONS(51),
    [aux_sym_string_system_function_token37] = ACTIONS(51),
    [aux_sym_string_system_function_token38] = ACTIONS(51),
    [aux_sym_string_system_function_token39] = ACTIONS(51),
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
  [6] = {
    [sym_expression] = STATE(207),
    [sym_string_array_expression] = STATE(208),
    [sym_numeric_array_expression] = STATE(208),
    [sym_numeric_expression] = STATE(95),
    [sym_string_expression] = STATE(188),
    [sym_string_binary_expression] = STATE(172),
    [sym_numeric_binary_expression] = STATE(89),
    [sym_numeric_unary_expression] = STATE(89),
    [sym_numeric_array_primary_expression] = STATE(212),
    [sym_string_array_primary_expression] = STATE(213),
    [sym_numeric_primary_expression] = STATE(89),
    [sym_string_primary_expression] = STATE(172),
    [sym_numeric_call_expression] = STATE(78),
    [sym_string_call_expression] = STATE(170),
    [sym_numeric_system_function] = STATE(93),
    [sym_string_system_function] = STATE(169),
    [sym_numeric_user_function] = STATE(93),
    [sym_string_user_function] = STATE(169),
    [sym_template_string] = STATE(170),
    [sym_string] = STATE(170),
    [sym_parenthesized_expression] = STATE(78),
    [sym_string_array_forced_assignment_expression] = STATE(213),
    [sym_numeric_array_forced_assignment_expression] = STATE(212),
    [sym_numeric_forced_assignment_expression] = STATE(89),
    [sym_string_forced_assignment_expression] = STATE(172),
    [sym__numeric_reference] = STATE(65),
    [sym__string_reference] = STATE(165),
    [sym_numberelement] = STATE(65),
    [sym_stringelement] = STATE(165),
    [sym_stringarray] = STATE(182),
    [sym_stringreference] = STATE(165),
    [sym_numberreference] = STATE(65),
    [sym_numberarray] = STATE(187),
    [sym_number] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(19),
    [aux_sym_numeric_system_function_token1] = ACTIONS(21),
    [aux_sym_numeric_system_function_token2] = ACTIONS(21),
    [aux_sym_numeric_system_function_token3] = ACTIONS(21),
    [aux_sym_numeric_system_function_token4] = ACTIONS(21),
    [aux_sym_numeric_system_function_token5] = ACTIONS(21),
    [aux_sym_numeric_system_function_token6] = ACTIONS(21),
    [aux_sym_numeric_system_function_token7] = ACTIONS(21),
    [aux_sym_numeric_system_function_token8] = ACTIONS(21),
    [aux_sym_numeric_system_function_token9] = ACTIONS(21),
    [aux_sym_numeric_system_function_token10] = ACTIONS(21),
    [aux_sym_numeric_system_function_token11] = ACTIONS(21),
    [aux_sym_numeric_system_function_token12] = ACTIONS(21),
    [aux_sym_numeric_system_function_token13] = ACTIONS(21),
    [aux_sym_numeric_system_function_token14] = ACTIONS(21),
    [aux_sym_numeric_system_function_token15] = ACTIONS(21),
    [aux_sym_numeric_system_function_token16] = ACTIONS(21),
    [aux_sym_numeric_system_function_token17] = ACTIONS(21),
    [aux_sym_numeric_system_function_token18] = ACTIONS(21),
    [aux_sym_numeric_system_function_token19] = ACTIONS(21),
    [aux_sym_numeric_system_function_token20] = ACTIONS(21),
    [aux_sym_numeric_system_function_token21] = ACTIONS(21),
    [aux_sym_numeric_system_function_token22] = ACTIONS(21),
    [aux_sym_numeric_system_function_token23] = ACTIONS(21),
    [aux_sym_numeric_system_function_token24] = ACTIONS(21),
    [aux_sym_numeric_system_function_token25] = ACTIONS(21),
    [aux_sym_numeric_system_function_token26] = ACTIONS(21),
    [aux_sym_numeric_system_function_token27] = ACTIONS(21),
    [aux_sym_numeric_system_function_token28] = ACTIONS(21),
    [aux_sym_numeric_system_function_token29] = ACTIONS(21),
    [aux_sym_numeric_system_function_token30] = ACTIONS(21),
    [aux_sym_numeric_system_function_token31] = ACTIONS(21),
    [aux_sym_numeric_system_function_token32] = ACTIONS(21),
    [aux_sym_numeric_system_function_token33] = ACTIONS(21),
    [aux_sym_numeric_system_function_token34] = ACTIONS(21),
    [aux_sym_numeric_system_function_token35] = ACTIONS(21),
    [aux_sym_numeric_system_function_token36] = ACTIONS(21),
    [aux_sym_numeric_system_function_token37] = ACTIONS(21),
    [aux_sym_numeric_system_function_token38] = ACTIONS(21),
    [aux_sym_numeric_system_function_token39] = ACTIONS(21),
    [aux_sym_numeric_system_function_token40] = ACTIONS(21),
    [aux_sym_numeric_system_function_token41] = ACTIONS(21),
    [aux_sym_numeric_system_function_token42] = ACTIONS(21),
    [aux_sym_numeric_system_function_token43] = ACTIONS(21),
    [aux_sym_numeric_system_function_token44] = ACTIONS(21),
    [aux_sym_numeric_system_function_token45] = ACTIONS(21),
    [aux_sym_numeric_system_function_token46] = ACTIONS(21),
    [aux_sym_numeric_system_function_token47] = ACTIONS(21),
    [aux_sym_numeric_system_function_token48] = ACTIONS(21),
    [aux_sym_numeric_system_function_token49] = ACTIONS(21),
    [aux_sym_numeric_system_function_token50] = ACTIONS(21),
    [aux_sym_numeric_system_function_token51] = ACTIONS(21),
    [aux_sym_numeric_system_function_token52] = ACTIONS(21),
    [aux_sym_numeric_system_function_token53] = ACTIONS(21),
    [aux_sym_numeric_system_function_token54] = ACTIONS(21),
    [aux_sym_numeric_system_function_token55] = ACTIONS(21),
    [aux_sym_numeric_system_function_token56] = ACTIONS(21),
    [aux_sym_numeric_system_function_token57] = ACTIONS(21),
    [aux_sym_numeric_system_function_token58] = ACTIONS(21),
    [aux_sym_numeric_system_function_token59] = ACTIONS(21),
    [aux_sym_numeric_system_function_token60] = ACTIONS(21),
    [aux_sym_numeric_system_function_token61] = ACTIONS(21),
    [aux_sym_numeric_system_function_token62] = ACTIONS(21),
    [aux_sym_numeric_system_function_token63] = ACTIONS(21),
    [aux_sym_numeric_system_function_token64] = ACTIONS(21),
    [aux_sym_numeric_system_function_token65] = ACTIONS(21),
    [aux_sym_numeric_system_function_token66] = ACTIONS(21),
    [aux_sym_numeric_system_function_token67] = ACTIONS(21),
    [aux_sym_numeric_system_function_token68] = ACTIONS(21),
    [aux_sym_numeric_system_function_token69] = ACTIONS(21),
    [aux_sym_numeric_system_function_token70] = ACTIONS(21),
    [aux_sym_numeric_system_function_token71] = ACTIONS(21),
    [aux_sym_numeric_system_function_token72] = ACTIONS(21),
    [aux_sym_numeric_system_function_token73] = ACTIONS(21),
    [aux_sym_numeric_system_function_token74] = ACTIONS(21),
    [aux_sym_numeric_system_function_token75] = ACTIONS(21),
    [aux_sym_string_system_function_token1] = ACTIONS(23),
    [aux_sym_string_system_function_token2] = ACTIONS(23),
    [aux_sym_string_system_function_token3] = ACTIONS(23),
    [aux_sym_string_system_function_token4] = ACTIONS(23),
    [aux_sym_string_system_function_token5] = ACTIONS(23),
    [aux_sym_string_system_function_token6] = ACTIONS(23),
    [aux_sym_string_system_function_token7] = ACTIONS(23),
    [aux_sym_string_system_function_token8] = ACTIONS(23),
    [aux_sym_string_system_function_token9] = ACTIONS(23),
    [aux_sym_string_system_function_token10] = ACTIONS(23),
    [aux_sym_string_system_function_token11] = ACTIONS(23),
    [aux_sym_string_system_function_token12] = ACTIONS(23),
    [aux_sym_string_system_function_token13] = ACTIONS(23),
    [aux_sym_string_system_function_token14] = ACTIONS(23),
    [aux_sym_string_system_function_token15] = ACTIONS(23),
    [aux_sym_string_system_function_token16] = ACTIONS(23),
    [aux_sym_string_system_function_token17] = ACTIONS(23),
    [aux_sym_string_system_function_token18] = ACTIONS(23),
    [aux_sym_string_system_function_token19] = ACTIONS(23),
    [aux_sym_string_system_function_token20] = ACTIONS(23),
    [aux_sym_string_system_function_token21] = ACTIONS(23),
    [aux_sym_string_system_function_token22] = ACTIONS(23),
    [aux_sym_string_system_function_token23] = ACTIONS(23),
    [aux_sym_string_system_function_token24] = ACTIONS(23),
    [aux_sym_string_system_function_token25] = ACTIONS(23),
    [aux_sym_string_system_function_token26] = ACTIONS(23),
    [aux_sym_string_system_function_token27] = ACTIONS(23),
    [aux_sym_string_system_function_token28] = ACTIONS(23),
    [aux_sym_string_system_function_token29] = ACTIONS(23),
    [aux_sym_string_system_function_token30] = ACTIONS(23),
    [aux_sym_string_system_function_token31] = ACTIONS(23),
    [aux_sym_string_system_function_token32] = ACTIONS(23),
    [aux_sym_string_system_function_token33] = ACTIONS(23),
    [aux_sym_string_system_function_token34] = ACTIONS(23),
    [aux_sym_string_system_function_token35] = ACTIONS(23),
    [aux_sym_string_system_function_token36] = ACTIONS(23),
    [aux_sym_string_system_function_token37] = ACTIONS(23),
    [aux_sym_string_system_function_token38] = ACTIONS(23),
    [aux_sym_string_system_function_token39] = ACTIONS(23),
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
    [sym_expression] = STATE(300),
    [sym_string_array_expression] = STATE(208),
    [sym_numeric_array_expression] = STATE(208),
    [sym_numeric_expression] = STATE(95),
    [sym_string_expression] = STATE(188),
    [sym_string_binary_expression] = STATE(172),
    [sym_numeric_binary_expression] = STATE(89),
    [sym_numeric_unary_expression] = STATE(89),
    [sym_numeric_array_primary_expression] = STATE(212),
    [sym_string_array_primary_expression] = STATE(213),
    [sym_numeric_primary_expression] = STATE(89),
    [sym_string_primary_expression] = STATE(172),
    [sym_numeric_call_expression] = STATE(78),
    [sym_string_call_expression] = STATE(170),
    [sym_numeric_system_function] = STATE(93),
    [sym_string_system_function] = STATE(169),
    [sym_numeric_user_function] = STATE(93),
    [sym_string_user_function] = STATE(169),
    [sym_template_string] = STATE(170),
    [sym_string] = STATE(170),
    [sym_parenthesized_expression] = STATE(78),
    [sym_string_array_forced_assignment_expression] = STATE(213),
    [sym_numeric_array_forced_assignment_expression] = STATE(212),
    [sym_numeric_forced_assignment_expression] = STATE(89),
    [sym_string_forced_assignment_expression] = STATE(172),
    [sym__numeric_reference] = STATE(65),
    [sym__string_reference] = STATE(165),
    [sym_numberelement] = STATE(65),
    [sym_stringelement] = STATE(165),
    [sym_stringarray] = STATE(182),
    [sym_stringreference] = STATE(165),
    [sym_numberreference] = STATE(65),
    [sym_numberarray] = STATE(187),
    [sym_number] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(19),
    [aux_sym_numeric_system_function_token1] = ACTIONS(21),
    [aux_sym_numeric_system_function_token2] = ACTIONS(21),
    [aux_sym_numeric_system_function_token3] = ACTIONS(21),
    [aux_sym_numeric_system_function_token4] = ACTIONS(21),
    [aux_sym_numeric_system_function_token5] = ACTIONS(21),
    [aux_sym_numeric_system_function_token6] = ACTIONS(21),
    [aux_sym_numeric_system_function_token7] = ACTIONS(21),
    [aux_sym_numeric_system_function_token8] = ACTIONS(21),
    [aux_sym_numeric_system_function_token9] = ACTIONS(21),
    [aux_sym_numeric_system_function_token10] = ACTIONS(21),
    [aux_sym_numeric_system_function_token11] = ACTIONS(21),
    [aux_sym_numeric_system_function_token12] = ACTIONS(21),
    [aux_sym_numeric_system_function_token13] = ACTIONS(21),
    [aux_sym_numeric_system_function_token14] = ACTIONS(21),
    [aux_sym_numeric_system_function_token15] = ACTIONS(21),
    [aux_sym_numeric_system_function_token16] = ACTIONS(21),
    [aux_sym_numeric_system_function_token17] = ACTIONS(21),
    [aux_sym_numeric_system_function_token18] = ACTIONS(21),
    [aux_sym_numeric_system_function_token19] = ACTIONS(21),
    [aux_sym_numeric_system_function_token20] = ACTIONS(21),
    [aux_sym_numeric_system_function_token21] = ACTIONS(21),
    [aux_sym_numeric_system_function_token22] = ACTIONS(21),
    [aux_sym_numeric_system_function_token23] = ACTIONS(21),
    [aux_sym_numeric_system_function_token24] = ACTIONS(21),
    [aux_sym_numeric_system_function_token25] = ACTIONS(21),
    [aux_sym_numeric_system_function_token26] = ACTIONS(21),
    [aux_sym_numeric_system_function_token27] = ACTIONS(21),
    [aux_sym_numeric_system_function_token28] = ACTIONS(21),
    [aux_sym_numeric_system_function_token29] = ACTIONS(21),
    [aux_sym_numeric_system_function_token30] = ACTIONS(21),
    [aux_sym_numeric_system_function_token31] = ACTIONS(21),
    [aux_sym_numeric_system_function_token32] = ACTIONS(21),
    [aux_sym_numeric_system_function_token33] = ACTIONS(21),
    [aux_sym_numeric_system_function_token34] = ACTIONS(21),
    [aux_sym_numeric_system_function_token35] = ACTIONS(21),
    [aux_sym_numeric_system_function_token36] = ACTIONS(21),
    [aux_sym_numeric_system_function_token37] = ACTIONS(21),
    [aux_sym_numeric_system_function_token38] = ACTIONS(21),
    [aux_sym_numeric_system_function_token39] = ACTIONS(21),
    [aux_sym_numeric_system_function_token40] = ACTIONS(21),
    [aux_sym_numeric_system_function_token41] = ACTIONS(21),
    [aux_sym_numeric_system_function_token42] = ACTIONS(21),
    [aux_sym_numeric_system_function_token43] = ACTIONS(21),
    [aux_sym_numeric_system_function_token44] = ACTIONS(21),
    [aux_sym_numeric_system_function_token45] = ACTIONS(21),
    [aux_sym_numeric_system_function_token46] = ACTIONS(21),
    [aux_sym_numeric_system_function_token47] = ACTIONS(21),
    [aux_sym_numeric_system_function_token48] = ACTIONS(21),
    [aux_sym_numeric_system_function_token49] = ACTIONS(21),
    [aux_sym_numeric_system_function_token50] = ACTIONS(21),
    [aux_sym_numeric_system_function_token51] = ACTIONS(21),
    [aux_sym_numeric_system_function_token52] = ACTIONS(21),
    [aux_sym_numeric_system_function_token53] = ACTIONS(21),
    [aux_sym_numeric_system_function_token54] = ACTIONS(21),
    [aux_sym_numeric_system_function_token55] = ACTIONS(21),
    [aux_sym_numeric_system_function_token56] = ACTIONS(21),
    [aux_sym_numeric_system_function_token57] = ACTIONS(21),
    [aux_sym_numeric_system_function_token58] = ACTIONS(21),
    [aux_sym_numeric_system_function_token59] = ACTIONS(21),
    [aux_sym_numeric_system_function_token60] = ACTIONS(21),
    [aux_sym_numeric_system_function_token61] = ACTIONS(21),
    [aux_sym_numeric_system_function_token62] = ACTIONS(21),
    [aux_sym_numeric_system_function_token63] = ACTIONS(21),
    [aux_sym_numeric_system_function_token64] = ACTIONS(21),
    [aux_sym_numeric_system_function_token65] = ACTIONS(21),
    [aux_sym_numeric_system_function_token66] = ACTIONS(21),
    [aux_sym_numeric_system_function_token67] = ACTIONS(21),
    [aux_sym_numeric_system_function_token68] = ACTIONS(21),
    [aux_sym_numeric_system_function_token69] = ACTIONS(21),
    [aux_sym_numeric_system_function_token70] = ACTIONS(21),
    [aux_sym_numeric_system_function_token71] = ACTIONS(21),
    [aux_sym_numeric_system_function_token72] = ACTIONS(21),
    [aux_sym_numeric_system_function_token73] = ACTIONS(21),
    [aux_sym_numeric_system_function_token74] = ACTIONS(21),
    [aux_sym_numeric_system_function_token75] = ACTIONS(21),
    [aux_sym_string_system_function_token1] = ACTIONS(23),
    [aux_sym_string_system_function_token2] = ACTIONS(23),
    [aux_sym_string_system_function_token3] = ACTIONS(23),
    [aux_sym_string_system_function_token4] = ACTIONS(23),
    [aux_sym_string_system_function_token5] = ACTIONS(23),
    [aux_sym_string_system_function_token6] = ACTIONS(23),
    [aux_sym_string_system_function_token7] = ACTIONS(23),
    [aux_sym_string_system_function_token8] = ACTIONS(23),
    [aux_sym_string_system_function_token9] = ACTIONS(23),
    [aux_sym_string_system_function_token10] = ACTIONS(23),
    [aux_sym_string_system_function_token11] = ACTIONS(23),
    [aux_sym_string_system_function_token12] = ACTIONS(23),
    [aux_sym_string_system_function_token13] = ACTIONS(23),
    [aux_sym_string_system_function_token14] = ACTIONS(23),
    [aux_sym_string_system_function_token15] = ACTIONS(23),
    [aux_sym_string_system_function_token16] = ACTIONS(23),
    [aux_sym_string_system_function_token17] = ACTIONS(23),
    [aux_sym_string_system_function_token18] = ACTIONS(23),
    [aux_sym_string_system_function_token19] = ACTIONS(23),
    [aux_sym_string_system_function_token20] = ACTIONS(23),
    [aux_sym_string_system_function_token21] = ACTIONS(23),
    [aux_sym_string_system_function_token22] = ACTIONS(23),
    [aux_sym_string_system_function_token23] = ACTIONS(23),
    [aux_sym_string_system_function_token24] = ACTIONS(23),
    [aux_sym_string_system_function_token25] = ACTIONS(23),
    [aux_sym_string_system_function_token26] = ACTIONS(23),
    [aux_sym_string_system_function_token27] = ACTIONS(23),
    [aux_sym_string_system_function_token28] = ACTIONS(23),
    [aux_sym_string_system_function_token29] = ACTIONS(23),
    [aux_sym_string_system_function_token30] = ACTIONS(23),
    [aux_sym_string_system_function_token31] = ACTIONS(23),
    [aux_sym_string_system_function_token32] = ACTIONS(23),
    [aux_sym_string_system_function_token33] = ACTIONS(23),
    [aux_sym_string_system_function_token34] = ACTIONS(23),
    [aux_sym_string_system_function_token35] = ACTIONS(23),
    [aux_sym_string_system_function_token36] = ACTIONS(23),
    [aux_sym_string_system_function_token37] = ACTIONS(23),
    [aux_sym_string_system_function_token38] = ACTIONS(23),
    [aux_sym_string_system_function_token39] = ACTIONS(23),
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
    [sym_expression] = STATE(210),
    [sym_string_array_expression] = STATE(219),
    [sym_numeric_array_expression] = STATE(219),
    [sym_numeric_expression] = STATE(98),
    [sym_string_expression] = STATE(217),
    [sym_string_binary_expression] = STATE(215),
    [sym_numeric_binary_expression] = STATE(101),
    [sym_numeric_unary_expression] = STATE(101),
    [sym_numeric_array_primary_expression] = STATE(230),
    [sym_string_array_primary_expression] = STATE(221),
    [sym_numeric_primary_expression] = STATE(101),
    [sym_string_primary_expression] = STATE(215),
    [sym_numeric_call_expression] = STATE(100),
    [sym_string_call_expression] = STATE(189),
    [sym_numeric_system_function] = STATE(99),
    [sym_string_system_function] = STATE(190),
    [sym_numeric_user_function] = STATE(99),
    [sym_string_user_function] = STATE(190),
    [sym_template_string] = STATE(189),
    [sym_string] = STATE(189),
    [sym_parenthesized_expression] = STATE(100),
    [sym_string_array_forced_assignment_expression] = STATE(221),
    [sym_numeric_array_forced_assignment_expression] = STATE(230),
    [sym_numeric_forced_assignment_expression] = STATE(101),
    [sym_string_forced_assignment_expression] = STATE(215),
    [sym__numeric_reference] = STATE(66),
    [sym__string_reference] = STATE(183),
    [sym_numberelement] = STATE(66),
    [sym_stringelement] = STATE(183),
    [sym_stringarray] = STATE(199),
    [sym_stringreference] = STATE(183),
    [sym_numberreference] = STATE(66),
    [sym_numberarray] = STATE(209),
    [sym_number] = STATE(100),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(45),
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(47),
    [aux_sym_numeric_system_function_token1] = ACTIONS(49),
    [aux_sym_numeric_system_function_token2] = ACTIONS(49),
    [aux_sym_numeric_system_function_token3] = ACTIONS(49),
    [aux_sym_numeric_system_function_token4] = ACTIONS(49),
    [aux_sym_numeric_system_function_token5] = ACTIONS(49),
    [aux_sym_numeric_system_function_token6] = ACTIONS(49),
    [aux_sym_numeric_system_function_token7] = ACTIONS(49),
    [aux_sym_numeric_system_function_token8] = ACTIONS(49),
    [aux_sym_numeric_system_function_token9] = ACTIONS(49),
    [aux_sym_numeric_system_function_token10] = ACTIONS(49),
    [aux_sym_numeric_system_function_token11] = ACTIONS(49),
    [aux_sym_numeric_system_function_token12] = ACTIONS(49),
    [aux_sym_numeric_system_function_token13] = ACTIONS(49),
    [aux_sym_numeric_system_function_token14] = ACTIONS(49),
    [aux_sym_numeric_system_function_token15] = ACTIONS(49),
    [aux_sym_numeric_system_function_token16] = ACTIONS(49),
    [aux_sym_numeric_system_function_token17] = ACTIONS(49),
    [aux_sym_numeric_system_function_token18] = ACTIONS(49),
    [aux_sym_numeric_system_function_token19] = ACTIONS(49),
    [aux_sym_numeric_system_function_token20] = ACTIONS(49),
    [aux_sym_numeric_system_function_token21] = ACTIONS(49),
    [aux_sym_numeric_system_function_token22] = ACTIONS(49),
    [aux_sym_numeric_system_function_token23] = ACTIONS(49),
    [aux_sym_numeric_system_function_token24] = ACTIONS(49),
    [aux_sym_numeric_system_function_token25] = ACTIONS(49),
    [aux_sym_numeric_system_function_token26] = ACTIONS(49),
    [aux_sym_numeric_system_function_token27] = ACTIONS(49),
    [aux_sym_numeric_system_function_token28] = ACTIONS(49),
    [aux_sym_numeric_system_function_token29] = ACTIONS(49),
    [aux_sym_numeric_system_function_token30] = ACTIONS(49),
    [aux_sym_numeric_system_function_token31] = ACTIONS(49),
    [aux_sym_numeric_system_function_token32] = ACTIONS(49),
    [aux_sym_numeric_system_function_token33] = ACTIONS(49),
    [aux_sym_numeric_system_function_token34] = ACTIONS(49),
    [aux_sym_numeric_system_function_token35] = ACTIONS(49),
    [aux_sym_numeric_system_function_token36] = ACTIONS(49),
    [aux_sym_numeric_system_function_token37] = ACTIONS(49),
    [aux_sym_numeric_system_function_token38] = ACTIONS(49),
    [aux_sym_numeric_system_function_token39] = ACTIONS(49),
    [aux_sym_numeric_system_function_token40] = ACTIONS(49),
    [aux_sym_numeric_system_function_token41] = ACTIONS(49),
    [aux_sym_numeric_system_function_token42] = ACTIONS(49),
    [aux_sym_numeric_system_function_token43] = ACTIONS(49),
    [aux_sym_numeric_system_function_token44] = ACTIONS(49),
    [aux_sym_numeric_system_function_token45] = ACTIONS(49),
    [aux_sym_numeric_system_function_token46] = ACTIONS(49),
    [aux_sym_numeric_system_function_token47] = ACTIONS(49),
    [aux_sym_numeric_system_function_token48] = ACTIONS(49),
    [aux_sym_numeric_system_function_token49] = ACTIONS(49),
    [aux_sym_numeric_system_function_token50] = ACTIONS(49),
    [aux_sym_numeric_system_function_token51] = ACTIONS(49),
    [aux_sym_numeric_system_function_token52] = ACTIONS(49),
    [aux_sym_numeric_system_function_token53] = ACTIONS(49),
    [aux_sym_numeric_system_function_token54] = ACTIONS(49),
    [aux_sym_numeric_system_function_token55] = ACTIONS(49),
    [aux_sym_numeric_system_function_token56] = ACTIONS(49),
    [aux_sym_numeric_system_function_token57] = ACTIONS(49),
    [aux_sym_numeric_system_function_token58] = ACTIONS(49),
    [aux_sym_numeric_system_function_token59] = ACTIONS(49),
    [aux_sym_numeric_system_function_token60] = ACTIONS(49),
    [aux_sym_numeric_system_function_token61] = ACTIONS(49),
    [aux_sym_numeric_system_function_token62] = ACTIONS(49),
    [aux_sym_numeric_system_function_token63] = ACTIONS(49),
    [aux_sym_numeric_system_function_token64] = ACTIONS(49),
    [aux_sym_numeric_system_function_token65] = ACTIONS(49),
    [aux_sym_numeric_system_function_token66] = ACTIONS(49),
    [aux_sym_numeric_system_function_token67] = ACTIONS(49),
    [aux_sym_numeric_system_function_token68] = ACTIONS(49),
    [aux_sym_numeric_system_function_token69] = ACTIONS(49),
    [aux_sym_numeric_system_function_token70] = ACTIONS(49),
    [aux_sym_numeric_system_function_token71] = ACTIONS(49),
    [aux_sym_numeric_system_function_token72] = ACTIONS(49),
    [aux_sym_numeric_system_function_token73] = ACTIONS(49),
    [aux_sym_numeric_system_function_token74] = ACTIONS(49),
    [aux_sym_numeric_system_function_token75] = ACTIONS(49),
    [aux_sym_string_system_function_token1] = ACTIONS(51),
    [aux_sym_string_system_function_token2] = ACTIONS(51),
    [aux_sym_string_system_function_token3] = ACTIONS(51),
    [aux_sym_string_system_function_token4] = ACTIONS(51),
    [aux_sym_string_system_function_token5] = ACTIONS(51),
    [aux_sym_string_system_function_token6] = ACTIONS(51),
    [aux_sym_string_system_function_token7] = ACTIONS(51),
    [aux_sym_string_system_function_token8] = ACTIONS(51),
    [aux_sym_string_system_function_token9] = ACTIONS(51),
    [aux_sym_string_system_function_token10] = ACTIONS(51),
    [aux_sym_string_system_function_token11] = ACTIONS(51),
    [aux_sym_string_system_function_token12] = ACTIONS(51),
    [aux_sym_string_system_function_token13] = ACTIONS(51),
    [aux_sym_string_system_function_token14] = ACTIONS(51),
    [aux_sym_string_system_function_token15] = ACTIONS(51),
    [aux_sym_string_system_function_token16] = ACTIONS(51),
    [aux_sym_string_system_function_token17] = ACTIONS(51),
    [aux_sym_string_system_function_token18] = ACTIONS(51),
    [aux_sym_string_system_function_token19] = ACTIONS(51),
    [aux_sym_string_system_function_token20] = ACTIONS(51),
    [aux_sym_string_system_function_token21] = ACTIONS(51),
    [aux_sym_string_system_function_token22] = ACTIONS(51),
    [aux_sym_string_system_function_token23] = ACTIONS(51),
    [aux_sym_string_system_function_token24] = ACTIONS(51),
    [aux_sym_string_system_function_token25] = ACTIONS(51),
    [aux_sym_string_system_function_token26] = ACTIONS(51),
    [aux_sym_string_system_function_token27] = ACTIONS(51),
    [aux_sym_string_system_function_token28] = ACTIONS(51),
    [aux_sym_string_system_function_token29] = ACTIONS(51),
    [aux_sym_string_system_function_token30] = ACTIONS(51),
    [aux_sym_string_system_function_token31] = ACTIONS(51),
    [aux_sym_string_system_function_token32] = ACTIONS(51),
    [aux_sym_string_system_function_token33] = ACTIONS(51),
    [aux_sym_string_system_function_token34] = ACTIONS(51),
    [aux_sym_string_system_function_token35] = ACTIONS(51),
    [aux_sym_string_system_function_token36] = ACTIONS(51),
    [aux_sym_string_system_function_token37] = ACTIONS(51),
    [aux_sym_string_system_function_token38] = ACTIONS(51),
    [aux_sym_string_system_function_token39] = ACTIONS(51),
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
    [sym_numeric_array_expression] = STATE(318),
    [sym_numeric_expression] = STATE(131),
    [sym_numeric_binary_expression] = STATE(89),
    [sym_numeric_unary_expression] = STATE(89),
    [sym_numeric_array_primary_expression] = STATE(212),
    [sym_numeric_primary_expression] = STATE(89),
    [sym_numeric_call_expression] = STATE(78),
    [sym_numeric_system_function] = STATE(93),
    [sym_numeric_user_function] = STATE(93),
    [sym_parenthesized_expression] = STATE(78),
    [sym_numeric_array_forced_assignment_expression] = STATE(212),
    [sym_numeric_forced_assignment_expression] = STATE(89),
    [sym__numeric_reference] = STATE(65),
    [sym_numberelement] = STATE(65),
    [sym_numberreference] = STATE(65),
    [sym_numberarray] = STATE(187),
    [sym_number] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(19),
    [aux_sym_numeric_system_function_token1] = ACTIONS(21),
    [aux_sym_numeric_system_function_token2] = ACTIONS(21),
    [aux_sym_numeric_system_function_token3] = ACTIONS(21),
    [aux_sym_numeric_system_function_token4] = ACTIONS(21),
    [aux_sym_numeric_system_function_token5] = ACTIONS(21),
    [aux_sym_numeric_system_function_token6] = ACTIONS(21),
    [aux_sym_numeric_system_function_token7] = ACTIONS(21),
    [aux_sym_numeric_system_function_token8] = ACTIONS(21),
    [aux_sym_numeric_system_function_token9] = ACTIONS(21),
    [aux_sym_numeric_system_function_token10] = ACTIONS(21),
    [aux_sym_numeric_system_function_token11] = ACTIONS(21),
    [aux_sym_numeric_system_function_token12] = ACTIONS(21),
    [aux_sym_numeric_system_function_token13] = ACTIONS(21),
    [aux_sym_numeric_system_function_token14] = ACTIONS(21),
    [aux_sym_numeric_system_function_token15] = ACTIONS(21),
    [aux_sym_numeric_system_function_token16] = ACTIONS(21),
    [aux_sym_numeric_system_function_token17] = ACTIONS(21),
    [aux_sym_numeric_system_function_token18] = ACTIONS(21),
    [aux_sym_numeric_system_function_token19] = ACTIONS(21),
    [aux_sym_numeric_system_function_token20] = ACTIONS(21),
    [aux_sym_numeric_system_function_token21] = ACTIONS(21),
    [aux_sym_numeric_system_function_token22] = ACTIONS(21),
    [aux_sym_numeric_system_function_token23] = ACTIONS(21),
    [aux_sym_numeric_system_function_token24] = ACTIONS(21),
    [aux_sym_numeric_system_function_token25] = ACTIONS(21),
    [aux_sym_numeric_system_function_token26] = ACTIONS(21),
    [aux_sym_numeric_system_function_token27] = ACTIONS(21),
    [aux_sym_numeric_system_function_token28] = ACTIONS(21),
    [aux_sym_numeric_system_function_token29] = ACTIONS(21),
    [aux_sym_numeric_system_function_token30] = ACTIONS(21),
    [aux_sym_numeric_system_function_token31] = ACTIONS(21),
    [aux_sym_numeric_system_function_token32] = ACTIONS(21),
    [aux_sym_numeric_system_function_token33] = ACTIONS(21),
    [aux_sym_numeric_system_function_token34] = ACTIONS(21),
    [aux_sym_numeric_system_function_token35] = ACTIONS(21),
    [aux_sym_numeric_system_function_token36] = ACTIONS(21),
    [aux_sym_numeric_system_function_token37] = ACTIONS(21),
    [aux_sym_numeric_system_function_token38] = ACTIONS(21),
    [aux_sym_numeric_system_function_token39] = ACTIONS(21),
    [aux_sym_numeric_system_function_token40] = ACTIONS(21),
    [aux_sym_numeric_system_function_token41] = ACTIONS(21),
    [aux_sym_numeric_system_function_token42] = ACTIONS(21),
    [aux_sym_numeric_system_function_token43] = ACTIONS(21),
    [aux_sym_numeric_system_function_token44] = ACTIONS(21),
    [aux_sym_numeric_system_function_token45] = ACTIONS(21),
    [aux_sym_numeric_system_function_token46] = ACTIONS(21),
    [aux_sym_numeric_system_function_token47] = ACTIONS(21),
    [aux_sym_numeric_system_function_token48] = ACTIONS(21),
    [aux_sym_numeric_system_function_token49] = ACTIONS(21),
    [aux_sym_numeric_system_function_token50] = ACTIONS(21),
    [aux_sym_numeric_system_function_token51] = ACTIONS(21),
    [aux_sym_numeric_system_function_token52] = ACTIONS(21),
    [aux_sym_numeric_system_function_token53] = ACTIONS(21),
    [aux_sym_numeric_system_function_token54] = ACTIONS(21),
    [aux_sym_numeric_system_function_token55] = ACTIONS(21),
    [aux_sym_numeric_system_function_token56] = ACTIONS(21),
    [aux_sym_numeric_system_function_token57] = ACTIONS(21),
    [aux_sym_numeric_system_function_token58] = ACTIONS(21),
    [aux_sym_numeric_system_function_token59] = ACTIONS(21),
    [aux_sym_numeric_system_function_token60] = ACTIONS(21),
    [aux_sym_numeric_system_function_token61] = ACTIONS(21),
    [aux_sym_numeric_system_function_token62] = ACTIONS(21),
    [aux_sym_numeric_system_function_token63] = ACTIONS(21),
    [aux_sym_numeric_system_function_token64] = ACTIONS(21),
    [aux_sym_numeric_system_function_token65] = ACTIONS(21),
    [aux_sym_numeric_system_function_token66] = ACTIONS(21),
    [aux_sym_numeric_system_function_token67] = ACTIONS(21),
    [aux_sym_numeric_system_function_token68] = ACTIONS(21),
    [aux_sym_numeric_system_function_token69] = ACTIONS(21),
    [aux_sym_numeric_system_function_token70] = ACTIONS(21),
    [aux_sym_numeric_system_function_token71] = ACTIONS(21),
    [aux_sym_numeric_system_function_token72] = ACTIONS(21),
    [aux_sym_numeric_system_function_token73] = ACTIONS(21),
    [aux_sym_numeric_system_function_token74] = ACTIONS(21),
    [aux_sym_numeric_system_function_token75] = ACTIONS(21),
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(37),
    [sym__mat] = ACTIONS(73),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [10] = {
    [sym_numeric_array_expression] = STATE(306),
    [sym_numeric_expression] = STATE(129),
    [sym_numeric_binary_expression] = STATE(89),
    [sym_numeric_unary_expression] = STATE(89),
    [sym_numeric_array_primary_expression] = STATE(212),
    [sym_numeric_primary_expression] = STATE(89),
    [sym_numeric_call_expression] = STATE(78),
    [sym_numeric_system_function] = STATE(93),
    [sym_numeric_user_function] = STATE(93),
    [sym_parenthesized_expression] = STATE(78),
    [sym_numeric_array_forced_assignment_expression] = STATE(212),
    [sym_numeric_forced_assignment_expression] = STATE(89),
    [sym__numeric_reference] = STATE(65),
    [sym_numberelement] = STATE(65),
    [sym_numberreference] = STATE(65),
    [sym_numberarray] = STATE(187),
    [sym_number] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(19),
    [aux_sym_numeric_system_function_token1] = ACTIONS(21),
    [aux_sym_numeric_system_function_token2] = ACTIONS(21),
    [aux_sym_numeric_system_function_token3] = ACTIONS(21),
    [aux_sym_numeric_system_function_token4] = ACTIONS(21),
    [aux_sym_numeric_system_function_token5] = ACTIONS(21),
    [aux_sym_numeric_system_function_token6] = ACTIONS(21),
    [aux_sym_numeric_system_function_token7] = ACTIONS(21),
    [aux_sym_numeric_system_function_token8] = ACTIONS(21),
    [aux_sym_numeric_system_function_token9] = ACTIONS(21),
    [aux_sym_numeric_system_function_token10] = ACTIONS(21),
    [aux_sym_numeric_system_function_token11] = ACTIONS(21),
    [aux_sym_numeric_system_function_token12] = ACTIONS(21),
    [aux_sym_numeric_system_function_token13] = ACTIONS(21),
    [aux_sym_numeric_system_function_token14] = ACTIONS(21),
    [aux_sym_numeric_system_function_token15] = ACTIONS(21),
    [aux_sym_numeric_system_function_token16] = ACTIONS(21),
    [aux_sym_numeric_system_function_token17] = ACTIONS(21),
    [aux_sym_numeric_system_function_token18] = ACTIONS(21),
    [aux_sym_numeric_system_function_token19] = ACTIONS(21),
    [aux_sym_numeric_system_function_token20] = ACTIONS(21),
    [aux_sym_numeric_system_function_token21] = ACTIONS(21),
    [aux_sym_numeric_system_function_token22] = ACTIONS(21),
    [aux_sym_numeric_system_function_token23] = ACTIONS(21),
    [aux_sym_numeric_system_function_token24] = ACTIONS(21),
    [aux_sym_numeric_system_function_token25] = ACTIONS(21),
    [aux_sym_numeric_system_function_token26] = ACTIONS(21),
    [aux_sym_numeric_system_function_token27] = ACTIONS(21),
    [aux_sym_numeric_system_function_token28] = ACTIONS(21),
    [aux_sym_numeric_system_function_token29] = ACTIONS(21),
    [aux_sym_numeric_system_function_token30] = ACTIONS(21),
    [aux_sym_numeric_system_function_token31] = ACTIONS(21),
    [aux_sym_numeric_system_function_token32] = ACTIONS(21),
    [aux_sym_numeric_system_function_token33] = ACTIONS(21),
    [aux_sym_numeric_system_function_token34] = ACTIONS(21),
    [aux_sym_numeric_system_function_token35] = ACTIONS(21),
    [aux_sym_numeric_system_function_token36] = ACTIONS(21),
    [aux_sym_numeric_system_function_token37] = ACTIONS(21),
    [aux_sym_numeric_system_function_token38] = ACTIONS(21),
    [aux_sym_numeric_system_function_token39] = ACTIONS(21),
    [aux_sym_numeric_system_function_token40] = ACTIONS(21),
    [aux_sym_numeric_system_function_token41] = ACTIONS(21),
    [aux_sym_numeric_system_function_token42] = ACTIONS(21),
    [aux_sym_numeric_system_function_token43] = ACTIONS(21),
    [aux_sym_numeric_system_function_token44] = ACTIONS(21),
    [aux_sym_numeric_system_function_token45] = ACTIONS(21),
    [aux_sym_numeric_system_function_token46] = ACTIONS(21),
    [aux_sym_numeric_system_function_token47] = ACTIONS(21),
    [aux_sym_numeric_system_function_token48] = ACTIONS(21),
    [aux_sym_numeric_system_function_token49] = ACTIONS(21),
    [aux_sym_numeric_system_function_token50] = ACTIONS(21),
    [aux_sym_numeric_system_function_token51] = ACTIONS(21),
    [aux_sym_numeric_system_function_token52] = ACTIONS(21),
    [aux_sym_numeric_system_function_token53] = ACTIONS(21),
    [aux_sym_numeric_system_function_token54] = ACTIONS(21),
    [aux_sym_numeric_system_function_token55] = ACTIONS(21),
    [aux_sym_numeric_system_function_token56] = ACTIONS(21),
    [aux_sym_numeric_system_function_token57] = ACTIONS(21),
    [aux_sym_numeric_system_function_token58] = ACTIONS(21),
    [aux_sym_numeric_system_function_token59] = ACTIONS(21),
    [aux_sym_numeric_system_function_token60] = ACTIONS(21),
    [aux_sym_numeric_system_function_token61] = ACTIONS(21),
    [aux_sym_numeric_system_function_token62] = ACTIONS(21),
    [aux_sym_numeric_system_function_token63] = ACTIONS(21),
    [aux_sym_numeric_system_function_token64] = ACTIONS(21),
    [aux_sym_numeric_system_function_token65] = ACTIONS(21),
    [aux_sym_numeric_system_function_token66] = ACTIONS(21),
    [aux_sym_numeric_system_function_token67] = ACTIONS(21),
    [aux_sym_numeric_system_function_token68] = ACTIONS(21),
    [aux_sym_numeric_system_function_token69] = ACTIONS(21),
    [aux_sym_numeric_system_function_token70] = ACTIONS(21),
    [aux_sym_numeric_system_function_token71] = ACTIONS(21),
    [aux_sym_numeric_system_function_token72] = ACTIONS(21),
    [aux_sym_numeric_system_function_token73] = ACTIONS(21),
    [aux_sym_numeric_system_function_token74] = ACTIONS(21),
    [aux_sym_numeric_system_function_token75] = ACTIONS(21),
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(37),
    [sym__mat] = ACTIONS(73),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [11] = {
    [sym_numeric_expression] = STATE(124),
    [sym_numeric_binary_expression] = STATE(89),
    [sym_numeric_unary_expression] = STATE(89),
    [sym_numeric_primary_expression] = STATE(89),
    [sym_numeric_call_expression] = STATE(78),
    [sym_numeric_system_function] = STATE(93),
    [sym_numeric_user_function] = STATE(93),
    [sym_parenthesized_expression] = STATE(78),
    [sym_numeric_forced_assignment_expression] = STATE(89),
    [sym__numeric_reference] = STATE(65),
    [sym_numberelement] = STATE(65),
    [sym_numberreference] = STATE(65),
    [sym_range] = STATE(319),
    [sym_number] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(19),
    [aux_sym_numeric_system_function_token1] = ACTIONS(21),
    [aux_sym_numeric_system_function_token2] = ACTIONS(21),
    [aux_sym_numeric_system_function_token3] = ACTIONS(21),
    [aux_sym_numeric_system_function_token4] = ACTIONS(21),
    [aux_sym_numeric_system_function_token5] = ACTIONS(21),
    [aux_sym_numeric_system_function_token6] = ACTIONS(21),
    [aux_sym_numeric_system_function_token7] = ACTIONS(21),
    [aux_sym_numeric_system_function_token8] = ACTIONS(21),
    [aux_sym_numeric_system_function_token9] = ACTIONS(21),
    [aux_sym_numeric_system_function_token10] = ACTIONS(21),
    [aux_sym_numeric_system_function_token11] = ACTIONS(21),
    [aux_sym_numeric_system_function_token12] = ACTIONS(21),
    [aux_sym_numeric_system_function_token13] = ACTIONS(21),
    [aux_sym_numeric_system_function_token14] = ACTIONS(21),
    [aux_sym_numeric_system_function_token15] = ACTIONS(21),
    [aux_sym_numeric_system_function_token16] = ACTIONS(21),
    [aux_sym_numeric_system_function_token17] = ACTIONS(21),
    [aux_sym_numeric_system_function_token18] = ACTIONS(21),
    [aux_sym_numeric_system_function_token19] = ACTIONS(21),
    [aux_sym_numeric_system_function_token20] = ACTIONS(21),
    [aux_sym_numeric_system_function_token21] = ACTIONS(21),
    [aux_sym_numeric_system_function_token22] = ACTIONS(21),
    [aux_sym_numeric_system_function_token23] = ACTIONS(21),
    [aux_sym_numeric_system_function_token24] = ACTIONS(21),
    [aux_sym_numeric_system_function_token25] = ACTIONS(21),
    [aux_sym_numeric_system_function_token26] = ACTIONS(21),
    [aux_sym_numeric_system_function_token27] = ACTIONS(21),
    [aux_sym_numeric_system_function_token28] = ACTIONS(21),
    [aux_sym_numeric_system_function_token29] = ACTIONS(21),
    [aux_sym_numeric_system_function_token30] = ACTIONS(21),
    [aux_sym_numeric_system_function_token31] = ACTIONS(21),
    [aux_sym_numeric_system_function_token32] = ACTIONS(21),
    [aux_sym_numeric_system_function_token33] = ACTIONS(21),
    [aux_sym_numeric_system_function_token34] = ACTIONS(21),
    [aux_sym_numeric_system_function_token35] = ACTIONS(21),
    [aux_sym_numeric_system_function_token36] = ACTIONS(21),
    [aux_sym_numeric_system_function_token37] = ACTIONS(21),
    [aux_sym_numeric_system_function_token38] = ACTIONS(21),
    [aux_sym_numeric_system_function_token39] = ACTIONS(21),
    [aux_sym_numeric_system_function_token40] = ACTIONS(21),
    [aux_sym_numeric_system_function_token41] = ACTIONS(21),
    [aux_sym_numeric_system_function_token42] = ACTIONS(21),
    [aux_sym_numeric_system_function_token43] = ACTIONS(21),
    [aux_sym_numeric_system_function_token44] = ACTIONS(21),
    [aux_sym_numeric_system_function_token45] = ACTIONS(21),
    [aux_sym_numeric_system_function_token46] = ACTIONS(21),
    [aux_sym_numeric_system_function_token47] = ACTIONS(21),
    [aux_sym_numeric_system_function_token48] = ACTIONS(21),
    [aux_sym_numeric_system_function_token49] = ACTIONS(21),
    [aux_sym_numeric_system_function_token50] = ACTIONS(21),
    [aux_sym_numeric_system_function_token51] = ACTIONS(21),
    [aux_sym_numeric_system_function_token52] = ACTIONS(21),
    [aux_sym_numeric_system_function_token53] = ACTIONS(21),
    [aux_sym_numeric_system_function_token54] = ACTIONS(21),
    [aux_sym_numeric_system_function_token55] = ACTIONS(21),
    [aux_sym_numeric_system_function_token56] = ACTIONS(21),
    [aux_sym_numeric_system_function_token57] = ACTIONS(21),
    [aux_sym_numeric_system_function_token58] = ACTIONS(21),
    [aux_sym_numeric_system_function_token59] = ACTIONS(21),
    [aux_sym_numeric_system_function_token60] = ACTIONS(21),
    [aux_sym_numeric_system_function_token61] = ACTIONS(21),
    [aux_sym_numeric_system_function_token62] = ACTIONS(21),
    [aux_sym_numeric_system_function_token63] = ACTIONS(21),
    [aux_sym_numeric_system_function_token64] = ACTIONS(21),
    [aux_sym_numeric_system_function_token65] = ACTIONS(21),
    [aux_sym_numeric_system_function_token66] = ACTIONS(21),
    [aux_sym_numeric_system_function_token67] = ACTIONS(21),
    [aux_sym_numeric_system_function_token68] = ACTIONS(21),
    [aux_sym_numeric_system_function_token69] = ACTIONS(21),
    [aux_sym_numeric_system_function_token70] = ACTIONS(21),
    [aux_sym_numeric_system_function_token71] = ACTIONS(21),
    [aux_sym_numeric_system_function_token72] = ACTIONS(21),
    [aux_sym_numeric_system_function_token73] = ACTIONS(21),
    [aux_sym_numeric_system_function_token74] = ACTIONS(21),
    [aux_sym_numeric_system_function_token75] = ACTIONS(21),
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(37),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [12] = {
    [sym_numeric_expression] = STATE(130),
    [sym_numeric_binary_expression] = STATE(89),
    [sym_numeric_unary_expression] = STATE(89),
    [sym_numeric_primary_expression] = STATE(89),
    [sym_numeric_call_expression] = STATE(78),
    [sym_numeric_system_function] = STATE(93),
    [sym_numeric_user_function] = STATE(93),
    [sym_parenthesized_expression] = STATE(78),
    [sym_numeric_forced_assignment_expression] = STATE(89),
    [sym__numeric_reference] = STATE(65),
    [sym_numberelement] = STATE(65),
    [sym_numberreference] = STATE(65),
    [sym_range] = STATE(290),
    [sym_number] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(19),
    [aux_sym_numeric_system_function_token1] = ACTIONS(21),
    [aux_sym_numeric_system_function_token2] = ACTIONS(21),
    [aux_sym_numeric_system_function_token3] = ACTIONS(21),
    [aux_sym_numeric_system_function_token4] = ACTIONS(21),
    [aux_sym_numeric_system_function_token5] = ACTIONS(21),
    [aux_sym_numeric_system_function_token6] = ACTIONS(21),
    [aux_sym_numeric_system_function_token7] = ACTIONS(21),
    [aux_sym_numeric_system_function_token8] = ACTIONS(21),
    [aux_sym_numeric_system_function_token9] = ACTIONS(21),
    [aux_sym_numeric_system_function_token10] = ACTIONS(21),
    [aux_sym_numeric_system_function_token11] = ACTIONS(21),
    [aux_sym_numeric_system_function_token12] = ACTIONS(21),
    [aux_sym_numeric_system_function_token13] = ACTIONS(21),
    [aux_sym_numeric_system_function_token14] = ACTIONS(21),
    [aux_sym_numeric_system_function_token15] = ACTIONS(21),
    [aux_sym_numeric_system_function_token16] = ACTIONS(21),
    [aux_sym_numeric_system_function_token17] = ACTIONS(21),
    [aux_sym_numeric_system_function_token18] = ACTIONS(21),
    [aux_sym_numeric_system_function_token19] = ACTIONS(21),
    [aux_sym_numeric_system_function_token20] = ACTIONS(21),
    [aux_sym_numeric_system_function_token21] = ACTIONS(21),
    [aux_sym_numeric_system_function_token22] = ACTIONS(21),
    [aux_sym_numeric_system_function_token23] = ACTIONS(21),
    [aux_sym_numeric_system_function_token24] = ACTIONS(21),
    [aux_sym_numeric_system_function_token25] = ACTIONS(21),
    [aux_sym_numeric_system_function_token26] = ACTIONS(21),
    [aux_sym_numeric_system_function_token27] = ACTIONS(21),
    [aux_sym_numeric_system_function_token28] = ACTIONS(21),
    [aux_sym_numeric_system_function_token29] = ACTIONS(21),
    [aux_sym_numeric_system_function_token30] = ACTIONS(21),
    [aux_sym_numeric_system_function_token31] = ACTIONS(21),
    [aux_sym_numeric_system_function_token32] = ACTIONS(21),
    [aux_sym_numeric_system_function_token33] = ACTIONS(21),
    [aux_sym_numeric_system_function_token34] = ACTIONS(21),
    [aux_sym_numeric_system_function_token35] = ACTIONS(21),
    [aux_sym_numeric_system_function_token36] = ACTIONS(21),
    [aux_sym_numeric_system_function_token37] = ACTIONS(21),
    [aux_sym_numeric_system_function_token38] = ACTIONS(21),
    [aux_sym_numeric_system_function_token39] = ACTIONS(21),
    [aux_sym_numeric_system_function_token40] = ACTIONS(21),
    [aux_sym_numeric_system_function_token41] = ACTIONS(21),
    [aux_sym_numeric_system_function_token42] = ACTIONS(21),
    [aux_sym_numeric_system_function_token43] = ACTIONS(21),
    [aux_sym_numeric_system_function_token44] = ACTIONS(21),
    [aux_sym_numeric_system_function_token45] = ACTIONS(21),
    [aux_sym_numeric_system_function_token46] = ACTIONS(21),
    [aux_sym_numeric_system_function_token47] = ACTIONS(21),
    [aux_sym_numeric_system_function_token48] = ACTIONS(21),
    [aux_sym_numeric_system_function_token49] = ACTIONS(21),
    [aux_sym_numeric_system_function_token50] = ACTIONS(21),
    [aux_sym_numeric_system_function_token51] = ACTIONS(21),
    [aux_sym_numeric_system_function_token52] = ACTIONS(21),
    [aux_sym_numeric_system_function_token53] = ACTIONS(21),
    [aux_sym_numeric_system_function_token54] = ACTIONS(21),
    [aux_sym_numeric_system_function_token55] = ACTIONS(21),
    [aux_sym_numeric_system_function_token56] = ACTIONS(21),
    [aux_sym_numeric_system_function_token57] = ACTIONS(21),
    [aux_sym_numeric_system_function_token58] = ACTIONS(21),
    [aux_sym_numeric_system_function_token59] = ACTIONS(21),
    [aux_sym_numeric_system_function_token60] = ACTIONS(21),
    [aux_sym_numeric_system_function_token61] = ACTIONS(21),
    [aux_sym_numeric_system_function_token62] = ACTIONS(21),
    [aux_sym_numeric_system_function_token63] = ACTIONS(21),
    [aux_sym_numeric_system_function_token64] = ACTIONS(21),
    [aux_sym_numeric_system_function_token65] = ACTIONS(21),
    [aux_sym_numeric_system_function_token66] = ACTIONS(21),
    [aux_sym_numeric_system_function_token67] = ACTIONS(21),
    [aux_sym_numeric_system_function_token68] = ACTIONS(21),
    [aux_sym_numeric_system_function_token69] = ACTIONS(21),
    [aux_sym_numeric_system_function_token70] = ACTIONS(21),
    [aux_sym_numeric_system_function_token71] = ACTIONS(21),
    [aux_sym_numeric_system_function_token72] = ACTIONS(21),
    [aux_sym_numeric_system_function_token73] = ACTIONS(21),
    [aux_sym_numeric_system_function_token74] = ACTIONS(21),
    [aux_sym_numeric_system_function_token75] = ACTIONS(21),
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(37),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [13] = {
    [sym_numeric_expression] = STATE(123),
    [sym_numeric_binary_expression] = STATE(89),
    [sym_numeric_unary_expression] = STATE(89),
    [sym_numeric_primary_expression] = STATE(89),
    [sym_numeric_call_expression] = STATE(78),
    [sym_numeric_system_function] = STATE(93),
    [sym_numeric_user_function] = STATE(93),
    [sym_parenthesized_expression] = STATE(78),
    [sym_numeric_forced_assignment_expression] = STATE(89),
    [sym__numeric_reference] = STATE(65),
    [sym_numberelement] = STATE(65),
    [sym_numberreference] = STATE(65),
    [sym_range] = STATE(310),
    [sym_number] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(19),
    [aux_sym_numeric_system_function_token1] = ACTIONS(21),
    [aux_sym_numeric_system_function_token2] = ACTIONS(21),
    [aux_sym_numeric_system_function_token3] = ACTIONS(21),
    [aux_sym_numeric_system_function_token4] = ACTIONS(21),
    [aux_sym_numeric_system_function_token5] = ACTIONS(21),
    [aux_sym_numeric_system_function_token6] = ACTIONS(21),
    [aux_sym_numeric_system_function_token7] = ACTIONS(21),
    [aux_sym_numeric_system_function_token8] = ACTIONS(21),
    [aux_sym_numeric_system_function_token9] = ACTIONS(21),
    [aux_sym_numeric_system_function_token10] = ACTIONS(21),
    [aux_sym_numeric_system_function_token11] = ACTIONS(21),
    [aux_sym_numeric_system_function_token12] = ACTIONS(21),
    [aux_sym_numeric_system_function_token13] = ACTIONS(21),
    [aux_sym_numeric_system_function_token14] = ACTIONS(21),
    [aux_sym_numeric_system_function_token15] = ACTIONS(21),
    [aux_sym_numeric_system_function_token16] = ACTIONS(21),
    [aux_sym_numeric_system_function_token17] = ACTIONS(21),
    [aux_sym_numeric_system_function_token18] = ACTIONS(21),
    [aux_sym_numeric_system_function_token19] = ACTIONS(21),
    [aux_sym_numeric_system_function_token20] = ACTIONS(21),
    [aux_sym_numeric_system_function_token21] = ACTIONS(21),
    [aux_sym_numeric_system_function_token22] = ACTIONS(21),
    [aux_sym_numeric_system_function_token23] = ACTIONS(21),
    [aux_sym_numeric_system_function_token24] = ACTIONS(21),
    [aux_sym_numeric_system_function_token25] = ACTIONS(21),
    [aux_sym_numeric_system_function_token26] = ACTIONS(21),
    [aux_sym_numeric_system_function_token27] = ACTIONS(21),
    [aux_sym_numeric_system_function_token28] = ACTIONS(21),
    [aux_sym_numeric_system_function_token29] = ACTIONS(21),
    [aux_sym_numeric_system_function_token30] = ACTIONS(21),
    [aux_sym_numeric_system_function_token31] = ACTIONS(21),
    [aux_sym_numeric_system_function_token32] = ACTIONS(21),
    [aux_sym_numeric_system_function_token33] = ACTIONS(21),
    [aux_sym_numeric_system_function_token34] = ACTIONS(21),
    [aux_sym_numeric_system_function_token35] = ACTIONS(21),
    [aux_sym_numeric_system_function_token36] = ACTIONS(21),
    [aux_sym_numeric_system_function_token37] = ACTIONS(21),
    [aux_sym_numeric_system_function_token38] = ACTIONS(21),
    [aux_sym_numeric_system_function_token39] = ACTIONS(21),
    [aux_sym_numeric_system_function_token40] = ACTIONS(21),
    [aux_sym_numeric_system_function_token41] = ACTIONS(21),
    [aux_sym_numeric_system_function_token42] = ACTIONS(21),
    [aux_sym_numeric_system_function_token43] = ACTIONS(21),
    [aux_sym_numeric_system_function_token44] = ACTIONS(21),
    [aux_sym_numeric_system_function_token45] = ACTIONS(21),
    [aux_sym_numeric_system_function_token46] = ACTIONS(21),
    [aux_sym_numeric_system_function_token47] = ACTIONS(21),
    [aux_sym_numeric_system_function_token48] = ACTIONS(21),
    [aux_sym_numeric_system_function_token49] = ACTIONS(21),
    [aux_sym_numeric_system_function_token50] = ACTIONS(21),
    [aux_sym_numeric_system_function_token51] = ACTIONS(21),
    [aux_sym_numeric_system_function_token52] = ACTIONS(21),
    [aux_sym_numeric_system_function_token53] = ACTIONS(21),
    [aux_sym_numeric_system_function_token54] = ACTIONS(21),
    [aux_sym_numeric_system_function_token55] = ACTIONS(21),
    [aux_sym_numeric_system_function_token56] = ACTIONS(21),
    [aux_sym_numeric_system_function_token57] = ACTIONS(21),
    [aux_sym_numeric_system_function_token58] = ACTIONS(21),
    [aux_sym_numeric_system_function_token59] = ACTIONS(21),
    [aux_sym_numeric_system_function_token60] = ACTIONS(21),
    [aux_sym_numeric_system_function_token61] = ACTIONS(21),
    [aux_sym_numeric_system_function_token62] = ACTIONS(21),
    [aux_sym_numeric_system_function_token63] = ACTIONS(21),
    [aux_sym_numeric_system_function_token64] = ACTIONS(21),
    [aux_sym_numeric_system_function_token65] = ACTIONS(21),
    [aux_sym_numeric_system_function_token66] = ACTIONS(21),
    [aux_sym_numeric_system_function_token67] = ACTIONS(21),
    [aux_sym_numeric_system_function_token68] = ACTIONS(21),
    [aux_sym_numeric_system_function_token69] = ACTIONS(21),
    [aux_sym_numeric_system_function_token70] = ACTIONS(21),
    [aux_sym_numeric_system_function_token71] = ACTIONS(21),
    [aux_sym_numeric_system_function_token72] = ACTIONS(21),
    [aux_sym_numeric_system_function_token73] = ACTIONS(21),
    [aux_sym_numeric_system_function_token74] = ACTIONS(21),
    [aux_sym_numeric_system_function_token75] = ACTIONS(21),
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(37),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [14] = {
    [sym_numeric_expression] = STATE(130),
    [sym_numeric_binary_expression] = STATE(89),
    [sym_numeric_unary_expression] = STATE(89),
    [sym_numeric_primary_expression] = STATE(89),
    [sym_numeric_call_expression] = STATE(78),
    [sym_numeric_system_function] = STATE(93),
    [sym_numeric_user_function] = STATE(93),
    [sym_parenthesized_expression] = STATE(78),
    [sym_numeric_forced_assignment_expression] = STATE(89),
    [sym__numeric_reference] = STATE(65),
    [sym_numberelement] = STATE(65),
    [sym_numberreference] = STATE(65),
    [sym_range] = STATE(310),
    [sym_number] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(19),
    [aux_sym_numeric_system_function_token1] = ACTIONS(21),
    [aux_sym_numeric_system_function_token2] = ACTIONS(21),
    [aux_sym_numeric_system_function_token3] = ACTIONS(21),
    [aux_sym_numeric_system_function_token4] = ACTIONS(21),
    [aux_sym_numeric_system_function_token5] = ACTIONS(21),
    [aux_sym_numeric_system_function_token6] = ACTIONS(21),
    [aux_sym_numeric_system_function_token7] = ACTIONS(21),
    [aux_sym_numeric_system_function_token8] = ACTIONS(21),
    [aux_sym_numeric_system_function_token9] = ACTIONS(21),
    [aux_sym_numeric_system_function_token10] = ACTIONS(21),
    [aux_sym_numeric_system_function_token11] = ACTIONS(21),
    [aux_sym_numeric_system_function_token12] = ACTIONS(21),
    [aux_sym_numeric_system_function_token13] = ACTIONS(21),
    [aux_sym_numeric_system_function_token14] = ACTIONS(21),
    [aux_sym_numeric_system_function_token15] = ACTIONS(21),
    [aux_sym_numeric_system_function_token16] = ACTIONS(21),
    [aux_sym_numeric_system_function_token17] = ACTIONS(21),
    [aux_sym_numeric_system_function_token18] = ACTIONS(21),
    [aux_sym_numeric_system_function_token19] = ACTIONS(21),
    [aux_sym_numeric_system_function_token20] = ACTIONS(21),
    [aux_sym_numeric_system_function_token21] = ACTIONS(21),
    [aux_sym_numeric_system_function_token22] = ACTIONS(21),
    [aux_sym_numeric_system_function_token23] = ACTIONS(21),
    [aux_sym_numeric_system_function_token24] = ACTIONS(21),
    [aux_sym_numeric_system_function_token25] = ACTIONS(21),
    [aux_sym_numeric_system_function_token26] = ACTIONS(21),
    [aux_sym_numeric_system_function_token27] = ACTIONS(21),
    [aux_sym_numeric_system_function_token28] = ACTIONS(21),
    [aux_sym_numeric_system_function_token29] = ACTIONS(21),
    [aux_sym_numeric_system_function_token30] = ACTIONS(21),
    [aux_sym_numeric_system_function_token31] = ACTIONS(21),
    [aux_sym_numeric_system_function_token32] = ACTIONS(21),
    [aux_sym_numeric_system_function_token33] = ACTIONS(21),
    [aux_sym_numeric_system_function_token34] = ACTIONS(21),
    [aux_sym_numeric_system_function_token35] = ACTIONS(21),
    [aux_sym_numeric_system_function_token36] = ACTIONS(21),
    [aux_sym_numeric_system_function_token37] = ACTIONS(21),
    [aux_sym_numeric_system_function_token38] = ACTIONS(21),
    [aux_sym_numeric_system_function_token39] = ACTIONS(21),
    [aux_sym_numeric_system_function_token40] = ACTIONS(21),
    [aux_sym_numeric_system_function_token41] = ACTIONS(21),
    [aux_sym_numeric_system_function_token42] = ACTIONS(21),
    [aux_sym_numeric_system_function_token43] = ACTIONS(21),
    [aux_sym_numeric_system_function_token44] = ACTIONS(21),
    [aux_sym_numeric_system_function_token45] = ACTIONS(21),
    [aux_sym_numeric_system_function_token46] = ACTIONS(21),
    [aux_sym_numeric_system_function_token47] = ACTIONS(21),
    [aux_sym_numeric_system_function_token48] = ACTIONS(21),
    [aux_sym_numeric_system_function_token49] = ACTIONS(21),
    [aux_sym_numeric_system_function_token50] = ACTIONS(21),
    [aux_sym_numeric_system_function_token51] = ACTIONS(21),
    [aux_sym_numeric_system_function_token52] = ACTIONS(21),
    [aux_sym_numeric_system_function_token53] = ACTIONS(21),
    [aux_sym_numeric_system_function_token54] = ACTIONS(21),
    [aux_sym_numeric_system_function_token55] = ACTIONS(21),
    [aux_sym_numeric_system_function_token56] = ACTIONS(21),
    [aux_sym_numeric_system_function_token57] = ACTIONS(21),
    [aux_sym_numeric_system_function_token58] = ACTIONS(21),
    [aux_sym_numeric_system_function_token59] = ACTIONS(21),
    [aux_sym_numeric_system_function_token60] = ACTIONS(21),
    [aux_sym_numeric_system_function_token61] = ACTIONS(21),
    [aux_sym_numeric_system_function_token62] = ACTIONS(21),
    [aux_sym_numeric_system_function_token63] = ACTIONS(21),
    [aux_sym_numeric_system_function_token64] = ACTIONS(21),
    [aux_sym_numeric_system_function_token65] = ACTIONS(21),
    [aux_sym_numeric_system_function_token66] = ACTIONS(21),
    [aux_sym_numeric_system_function_token67] = ACTIONS(21),
    [aux_sym_numeric_system_function_token68] = ACTIONS(21),
    [aux_sym_numeric_system_function_token69] = ACTIONS(21),
    [aux_sym_numeric_system_function_token70] = ACTIONS(21),
    [aux_sym_numeric_system_function_token71] = ACTIONS(21),
    [aux_sym_numeric_system_function_token72] = ACTIONS(21),
    [aux_sym_numeric_system_function_token73] = ACTIONS(21),
    [aux_sym_numeric_system_function_token74] = ACTIONS(21),
    [aux_sym_numeric_system_function_token75] = ACTIONS(21),
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(37),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [15] = {
    [sym_numeric_expression] = STATE(130),
    [sym_numeric_binary_expression] = STATE(89),
    [sym_numeric_unary_expression] = STATE(89),
    [sym_numeric_primary_expression] = STATE(89),
    [sym_numeric_call_expression] = STATE(78),
    [sym_numeric_system_function] = STATE(93),
    [sym_numeric_user_function] = STATE(93),
    [sym_parenthesized_expression] = STATE(78),
    [sym_numeric_forced_assignment_expression] = STATE(89),
    [sym__numeric_reference] = STATE(65),
    [sym_numberelement] = STATE(65),
    [sym_numberreference] = STATE(65),
    [sym_range] = STATE(319),
    [sym_number] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(19),
    [aux_sym_numeric_system_function_token1] = ACTIONS(21),
    [aux_sym_numeric_system_function_token2] = ACTIONS(21),
    [aux_sym_numeric_system_function_token3] = ACTIONS(21),
    [aux_sym_numeric_system_function_token4] = ACTIONS(21),
    [aux_sym_numeric_system_function_token5] = ACTIONS(21),
    [aux_sym_numeric_system_function_token6] = ACTIONS(21),
    [aux_sym_numeric_system_function_token7] = ACTIONS(21),
    [aux_sym_numeric_system_function_token8] = ACTIONS(21),
    [aux_sym_numeric_system_function_token9] = ACTIONS(21),
    [aux_sym_numeric_system_function_token10] = ACTIONS(21),
    [aux_sym_numeric_system_function_token11] = ACTIONS(21),
    [aux_sym_numeric_system_function_token12] = ACTIONS(21),
    [aux_sym_numeric_system_function_token13] = ACTIONS(21),
    [aux_sym_numeric_system_function_token14] = ACTIONS(21),
    [aux_sym_numeric_system_function_token15] = ACTIONS(21),
    [aux_sym_numeric_system_function_token16] = ACTIONS(21),
    [aux_sym_numeric_system_function_token17] = ACTIONS(21),
    [aux_sym_numeric_system_function_token18] = ACTIONS(21),
    [aux_sym_numeric_system_function_token19] = ACTIONS(21),
    [aux_sym_numeric_system_function_token20] = ACTIONS(21),
    [aux_sym_numeric_system_function_token21] = ACTIONS(21),
    [aux_sym_numeric_system_function_token22] = ACTIONS(21),
    [aux_sym_numeric_system_function_token23] = ACTIONS(21),
    [aux_sym_numeric_system_function_token24] = ACTIONS(21),
    [aux_sym_numeric_system_function_token25] = ACTIONS(21),
    [aux_sym_numeric_system_function_token26] = ACTIONS(21),
    [aux_sym_numeric_system_function_token27] = ACTIONS(21),
    [aux_sym_numeric_system_function_token28] = ACTIONS(21),
    [aux_sym_numeric_system_function_token29] = ACTIONS(21),
    [aux_sym_numeric_system_function_token30] = ACTIONS(21),
    [aux_sym_numeric_system_function_token31] = ACTIONS(21),
    [aux_sym_numeric_system_function_token32] = ACTIONS(21),
    [aux_sym_numeric_system_function_token33] = ACTIONS(21),
    [aux_sym_numeric_system_function_token34] = ACTIONS(21),
    [aux_sym_numeric_system_function_token35] = ACTIONS(21),
    [aux_sym_numeric_system_function_token36] = ACTIONS(21),
    [aux_sym_numeric_system_function_token37] = ACTIONS(21),
    [aux_sym_numeric_system_function_token38] = ACTIONS(21),
    [aux_sym_numeric_system_function_token39] = ACTIONS(21),
    [aux_sym_numeric_system_function_token40] = ACTIONS(21),
    [aux_sym_numeric_system_function_token41] = ACTIONS(21),
    [aux_sym_numeric_system_function_token42] = ACTIONS(21),
    [aux_sym_numeric_system_function_token43] = ACTIONS(21),
    [aux_sym_numeric_system_function_token44] = ACTIONS(21),
    [aux_sym_numeric_system_function_token45] = ACTIONS(21),
    [aux_sym_numeric_system_function_token46] = ACTIONS(21),
    [aux_sym_numeric_system_function_token47] = ACTIONS(21),
    [aux_sym_numeric_system_function_token48] = ACTIONS(21),
    [aux_sym_numeric_system_function_token49] = ACTIONS(21),
    [aux_sym_numeric_system_function_token50] = ACTIONS(21),
    [aux_sym_numeric_system_function_token51] = ACTIONS(21),
    [aux_sym_numeric_system_function_token52] = ACTIONS(21),
    [aux_sym_numeric_system_function_token53] = ACTIONS(21),
    [aux_sym_numeric_system_function_token54] = ACTIONS(21),
    [aux_sym_numeric_system_function_token55] = ACTIONS(21),
    [aux_sym_numeric_system_function_token56] = ACTIONS(21),
    [aux_sym_numeric_system_function_token57] = ACTIONS(21),
    [aux_sym_numeric_system_function_token58] = ACTIONS(21),
    [aux_sym_numeric_system_function_token59] = ACTIONS(21),
    [aux_sym_numeric_system_function_token60] = ACTIONS(21),
    [aux_sym_numeric_system_function_token61] = ACTIONS(21),
    [aux_sym_numeric_system_function_token62] = ACTIONS(21),
    [aux_sym_numeric_system_function_token63] = ACTIONS(21),
    [aux_sym_numeric_system_function_token64] = ACTIONS(21),
    [aux_sym_numeric_system_function_token65] = ACTIONS(21),
    [aux_sym_numeric_system_function_token66] = ACTIONS(21),
    [aux_sym_numeric_system_function_token67] = ACTIONS(21),
    [aux_sym_numeric_system_function_token68] = ACTIONS(21),
    [aux_sym_numeric_system_function_token69] = ACTIONS(21),
    [aux_sym_numeric_system_function_token70] = ACTIONS(21),
    [aux_sym_numeric_system_function_token71] = ACTIONS(21),
    [aux_sym_numeric_system_function_token72] = ACTIONS(21),
    [aux_sym_numeric_system_function_token73] = ACTIONS(21),
    [aux_sym_numeric_system_function_token74] = ACTIONS(21),
    [aux_sym_numeric_system_function_token75] = ACTIONS(21),
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(37),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [16] = {
    [sym_numeric_expression] = STATE(130),
    [sym_numeric_binary_expression] = STATE(89),
    [sym_numeric_unary_expression] = STATE(89),
    [sym_numeric_primary_expression] = STATE(89),
    [sym_numeric_call_expression] = STATE(78),
    [sym_numeric_system_function] = STATE(93),
    [sym_numeric_user_function] = STATE(93),
    [sym_parenthesized_expression] = STATE(78),
    [sym_numeric_forced_assignment_expression] = STATE(89),
    [sym__numeric_reference] = STATE(65),
    [sym_numberelement] = STATE(65),
    [sym_numberreference] = STATE(65),
    [sym_range] = STATE(279),
    [sym_number] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(19),
    [aux_sym_numeric_system_function_token1] = ACTIONS(21),
    [aux_sym_numeric_system_function_token2] = ACTIONS(21),
    [aux_sym_numeric_system_function_token3] = ACTIONS(21),
    [aux_sym_numeric_system_function_token4] = ACTIONS(21),
    [aux_sym_numeric_system_function_token5] = ACTIONS(21),
    [aux_sym_numeric_system_function_token6] = ACTIONS(21),
    [aux_sym_numeric_system_function_token7] = ACTIONS(21),
    [aux_sym_numeric_system_function_token8] = ACTIONS(21),
    [aux_sym_numeric_system_function_token9] = ACTIONS(21),
    [aux_sym_numeric_system_function_token10] = ACTIONS(21),
    [aux_sym_numeric_system_function_token11] = ACTIONS(21),
    [aux_sym_numeric_system_function_token12] = ACTIONS(21),
    [aux_sym_numeric_system_function_token13] = ACTIONS(21),
    [aux_sym_numeric_system_function_token14] = ACTIONS(21),
    [aux_sym_numeric_system_function_token15] = ACTIONS(21),
    [aux_sym_numeric_system_function_token16] = ACTIONS(21),
    [aux_sym_numeric_system_function_token17] = ACTIONS(21),
    [aux_sym_numeric_system_function_token18] = ACTIONS(21),
    [aux_sym_numeric_system_function_token19] = ACTIONS(21),
    [aux_sym_numeric_system_function_token20] = ACTIONS(21),
    [aux_sym_numeric_system_function_token21] = ACTIONS(21),
    [aux_sym_numeric_system_function_token22] = ACTIONS(21),
    [aux_sym_numeric_system_function_token23] = ACTIONS(21),
    [aux_sym_numeric_system_function_token24] = ACTIONS(21),
    [aux_sym_numeric_system_function_token25] = ACTIONS(21),
    [aux_sym_numeric_system_function_token26] = ACTIONS(21),
    [aux_sym_numeric_system_function_token27] = ACTIONS(21),
    [aux_sym_numeric_system_function_token28] = ACTIONS(21),
    [aux_sym_numeric_system_function_token29] = ACTIONS(21),
    [aux_sym_numeric_system_function_token30] = ACTIONS(21),
    [aux_sym_numeric_system_function_token31] = ACTIONS(21),
    [aux_sym_numeric_system_function_token32] = ACTIONS(21),
    [aux_sym_numeric_system_function_token33] = ACTIONS(21),
    [aux_sym_numeric_system_function_token34] = ACTIONS(21),
    [aux_sym_numeric_system_function_token35] = ACTIONS(21),
    [aux_sym_numeric_system_function_token36] = ACTIONS(21),
    [aux_sym_numeric_system_function_token37] = ACTIONS(21),
    [aux_sym_numeric_system_function_token38] = ACTIONS(21),
    [aux_sym_numeric_system_function_token39] = ACTIONS(21),
    [aux_sym_numeric_system_function_token40] = ACTIONS(21),
    [aux_sym_numeric_system_function_token41] = ACTIONS(21),
    [aux_sym_numeric_system_function_token42] = ACTIONS(21),
    [aux_sym_numeric_system_function_token43] = ACTIONS(21),
    [aux_sym_numeric_system_function_token44] = ACTIONS(21),
    [aux_sym_numeric_system_function_token45] = ACTIONS(21),
    [aux_sym_numeric_system_function_token46] = ACTIONS(21),
    [aux_sym_numeric_system_function_token47] = ACTIONS(21),
    [aux_sym_numeric_system_function_token48] = ACTIONS(21),
    [aux_sym_numeric_system_function_token49] = ACTIONS(21),
    [aux_sym_numeric_system_function_token50] = ACTIONS(21),
    [aux_sym_numeric_system_function_token51] = ACTIONS(21),
    [aux_sym_numeric_system_function_token52] = ACTIONS(21),
    [aux_sym_numeric_system_function_token53] = ACTIONS(21),
    [aux_sym_numeric_system_function_token54] = ACTIONS(21),
    [aux_sym_numeric_system_function_token55] = ACTIONS(21),
    [aux_sym_numeric_system_function_token56] = ACTIONS(21),
    [aux_sym_numeric_system_function_token57] = ACTIONS(21),
    [aux_sym_numeric_system_function_token58] = ACTIONS(21),
    [aux_sym_numeric_system_function_token59] = ACTIONS(21),
    [aux_sym_numeric_system_function_token60] = ACTIONS(21),
    [aux_sym_numeric_system_function_token61] = ACTIONS(21),
    [aux_sym_numeric_system_function_token62] = ACTIONS(21),
    [aux_sym_numeric_system_function_token63] = ACTIONS(21),
    [aux_sym_numeric_system_function_token64] = ACTIONS(21),
    [aux_sym_numeric_system_function_token65] = ACTIONS(21),
    [aux_sym_numeric_system_function_token66] = ACTIONS(21),
    [aux_sym_numeric_system_function_token67] = ACTIONS(21),
    [aux_sym_numeric_system_function_token68] = ACTIONS(21),
    [aux_sym_numeric_system_function_token69] = ACTIONS(21),
    [aux_sym_numeric_system_function_token70] = ACTIONS(21),
    [aux_sym_numeric_system_function_token71] = ACTIONS(21),
    [aux_sym_numeric_system_function_token72] = ACTIONS(21),
    [aux_sym_numeric_system_function_token73] = ACTIONS(21),
    [aux_sym_numeric_system_function_token74] = ACTIONS(21),
    [aux_sym_numeric_system_function_token75] = ACTIONS(21),
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(37),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [17] = {
    [sym_numeric_expression] = STATE(120),
    [sym_numeric_binary_expression] = STATE(89),
    [sym_numeric_unary_expression] = STATE(89),
    [sym_numeric_primary_expression] = STATE(89),
    [sym_numeric_call_expression] = STATE(78),
    [sym_numeric_system_function] = STATE(93),
    [sym_numeric_user_function] = STATE(93),
    [sym_parenthesized_expression] = STATE(78),
    [sym_assignment_expression] = STATE(239),
    [sym_numeric_forced_assignment_expression] = STATE(89),
    [sym__numeric_reference] = STATE(67),
    [sym_numberelement] = STATE(67),
    [sym_numberreference] = STATE(67),
    [sym_number] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(19),
    [aux_sym_numeric_system_function_token1] = ACTIONS(21),
    [aux_sym_numeric_system_function_token2] = ACTIONS(21),
    [aux_sym_numeric_system_function_token3] = ACTIONS(21),
    [aux_sym_numeric_system_function_token4] = ACTIONS(21),
    [aux_sym_numeric_system_function_token5] = ACTIONS(21),
    [aux_sym_numeric_system_function_token6] = ACTIONS(21),
    [aux_sym_numeric_system_function_token7] = ACTIONS(21),
    [aux_sym_numeric_system_function_token8] = ACTIONS(21),
    [aux_sym_numeric_system_function_token9] = ACTIONS(21),
    [aux_sym_numeric_system_function_token10] = ACTIONS(21),
    [aux_sym_numeric_system_function_token11] = ACTIONS(21),
    [aux_sym_numeric_system_function_token12] = ACTIONS(21),
    [aux_sym_numeric_system_function_token13] = ACTIONS(21),
    [aux_sym_numeric_system_function_token14] = ACTIONS(21),
    [aux_sym_numeric_system_function_token15] = ACTIONS(21),
    [aux_sym_numeric_system_function_token16] = ACTIONS(21),
    [aux_sym_numeric_system_function_token17] = ACTIONS(21),
    [aux_sym_numeric_system_function_token18] = ACTIONS(21),
    [aux_sym_numeric_system_function_token19] = ACTIONS(21),
    [aux_sym_numeric_system_function_token20] = ACTIONS(21),
    [aux_sym_numeric_system_function_token21] = ACTIONS(21),
    [aux_sym_numeric_system_function_token22] = ACTIONS(21),
    [aux_sym_numeric_system_function_token23] = ACTIONS(21),
    [aux_sym_numeric_system_function_token24] = ACTIONS(21),
    [aux_sym_numeric_system_function_token25] = ACTIONS(21),
    [aux_sym_numeric_system_function_token26] = ACTIONS(21),
    [aux_sym_numeric_system_function_token27] = ACTIONS(21),
    [aux_sym_numeric_system_function_token28] = ACTIONS(21),
    [aux_sym_numeric_system_function_token29] = ACTIONS(21),
    [aux_sym_numeric_system_function_token30] = ACTIONS(21),
    [aux_sym_numeric_system_function_token31] = ACTIONS(21),
    [aux_sym_numeric_system_function_token32] = ACTIONS(21),
    [aux_sym_numeric_system_function_token33] = ACTIONS(21),
    [aux_sym_numeric_system_function_token34] = ACTIONS(21),
    [aux_sym_numeric_system_function_token35] = ACTIONS(21),
    [aux_sym_numeric_system_function_token36] = ACTIONS(21),
    [aux_sym_numeric_system_function_token37] = ACTIONS(21),
    [aux_sym_numeric_system_function_token38] = ACTIONS(21),
    [aux_sym_numeric_system_function_token39] = ACTIONS(21),
    [aux_sym_numeric_system_function_token40] = ACTIONS(21),
    [aux_sym_numeric_system_function_token41] = ACTIONS(21),
    [aux_sym_numeric_system_function_token42] = ACTIONS(21),
    [aux_sym_numeric_system_function_token43] = ACTIONS(21),
    [aux_sym_numeric_system_function_token44] = ACTIONS(21),
    [aux_sym_numeric_system_function_token45] = ACTIONS(21),
    [aux_sym_numeric_system_function_token46] = ACTIONS(21),
    [aux_sym_numeric_system_function_token47] = ACTIONS(21),
    [aux_sym_numeric_system_function_token48] = ACTIONS(21),
    [aux_sym_numeric_system_function_token49] = ACTIONS(21),
    [aux_sym_numeric_system_function_token50] = ACTIONS(21),
    [aux_sym_numeric_system_function_token51] = ACTIONS(21),
    [aux_sym_numeric_system_function_token52] = ACTIONS(21),
    [aux_sym_numeric_system_function_token53] = ACTIONS(21),
    [aux_sym_numeric_system_function_token54] = ACTIONS(21),
    [aux_sym_numeric_system_function_token55] = ACTIONS(21),
    [aux_sym_numeric_system_function_token56] = ACTIONS(21),
    [aux_sym_numeric_system_function_token57] = ACTIONS(21),
    [aux_sym_numeric_system_function_token58] = ACTIONS(21),
    [aux_sym_numeric_system_function_token59] = ACTIONS(21),
    [aux_sym_numeric_system_function_token60] = ACTIONS(21),
    [aux_sym_numeric_system_function_token61] = ACTIONS(21),
    [aux_sym_numeric_system_function_token62] = ACTIONS(21),
    [aux_sym_numeric_system_function_token63] = ACTIONS(21),
    [aux_sym_numeric_system_function_token64] = ACTIONS(21),
    [aux_sym_numeric_system_function_token65] = ACTIONS(21),
    [aux_sym_numeric_system_function_token66] = ACTIONS(21),
    [aux_sym_numeric_system_function_token67] = ACTIONS(21),
    [aux_sym_numeric_system_function_token68] = ACTIONS(21),
    [aux_sym_numeric_system_function_token69] = ACTIONS(21),
    [aux_sym_numeric_system_function_token70] = ACTIONS(21),
    [aux_sym_numeric_system_function_token71] = ACTIONS(21),
    [aux_sym_numeric_system_function_token72] = ACTIONS(21),
    [aux_sym_numeric_system_function_token73] = ACTIONS(21),
    [aux_sym_numeric_system_function_token74] = ACTIONS(21),
    [aux_sym_numeric_system_function_token75] = ACTIONS(21),
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(37),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [18] = {
    [sym_numeric_expression] = STATE(130),
    [sym_numeric_binary_expression] = STATE(89),
    [sym_numeric_unary_expression] = STATE(89),
    [sym_numeric_primary_expression] = STATE(89),
    [sym_numeric_call_expression] = STATE(78),
    [sym_numeric_system_function] = STATE(93),
    [sym_numeric_user_function] = STATE(93),
    [sym_parenthesized_expression] = STATE(78),
    [sym_numeric_forced_assignment_expression] = STATE(89),
    [sym__numeric_reference] = STATE(65),
    [sym_numberelement] = STATE(65),
    [sym_numberreference] = STATE(65),
    [sym_range] = STATE(301),
    [sym_number] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(19),
    [aux_sym_numeric_system_function_token1] = ACTIONS(21),
    [aux_sym_numeric_system_function_token2] = ACTIONS(21),
    [aux_sym_numeric_system_function_token3] = ACTIONS(21),
    [aux_sym_numeric_system_function_token4] = ACTIONS(21),
    [aux_sym_numeric_system_function_token5] = ACTIONS(21),
    [aux_sym_numeric_system_function_token6] = ACTIONS(21),
    [aux_sym_numeric_system_function_token7] = ACTIONS(21),
    [aux_sym_numeric_system_function_token8] = ACTIONS(21),
    [aux_sym_numeric_system_function_token9] = ACTIONS(21),
    [aux_sym_numeric_system_function_token10] = ACTIONS(21),
    [aux_sym_numeric_system_function_token11] = ACTIONS(21),
    [aux_sym_numeric_system_function_token12] = ACTIONS(21),
    [aux_sym_numeric_system_function_token13] = ACTIONS(21),
    [aux_sym_numeric_system_function_token14] = ACTIONS(21),
    [aux_sym_numeric_system_function_token15] = ACTIONS(21),
    [aux_sym_numeric_system_function_token16] = ACTIONS(21),
    [aux_sym_numeric_system_function_token17] = ACTIONS(21),
    [aux_sym_numeric_system_function_token18] = ACTIONS(21),
    [aux_sym_numeric_system_function_token19] = ACTIONS(21),
    [aux_sym_numeric_system_function_token20] = ACTIONS(21),
    [aux_sym_numeric_system_function_token21] = ACTIONS(21),
    [aux_sym_numeric_system_function_token22] = ACTIONS(21),
    [aux_sym_numeric_system_function_token23] = ACTIONS(21),
    [aux_sym_numeric_system_function_token24] = ACTIONS(21),
    [aux_sym_numeric_system_function_token25] = ACTIONS(21),
    [aux_sym_numeric_system_function_token26] = ACTIONS(21),
    [aux_sym_numeric_system_function_token27] = ACTIONS(21),
    [aux_sym_numeric_system_function_token28] = ACTIONS(21),
    [aux_sym_numeric_system_function_token29] = ACTIONS(21),
    [aux_sym_numeric_system_function_token30] = ACTIONS(21),
    [aux_sym_numeric_system_function_token31] = ACTIONS(21),
    [aux_sym_numeric_system_function_token32] = ACTIONS(21),
    [aux_sym_numeric_system_function_token33] = ACTIONS(21),
    [aux_sym_numeric_system_function_token34] = ACTIONS(21),
    [aux_sym_numeric_system_function_token35] = ACTIONS(21),
    [aux_sym_numeric_system_function_token36] = ACTIONS(21),
    [aux_sym_numeric_system_function_token37] = ACTIONS(21),
    [aux_sym_numeric_system_function_token38] = ACTIONS(21),
    [aux_sym_numeric_system_function_token39] = ACTIONS(21),
    [aux_sym_numeric_system_function_token40] = ACTIONS(21),
    [aux_sym_numeric_system_function_token41] = ACTIONS(21),
    [aux_sym_numeric_system_function_token42] = ACTIONS(21),
    [aux_sym_numeric_system_function_token43] = ACTIONS(21),
    [aux_sym_numeric_system_function_token44] = ACTIONS(21),
    [aux_sym_numeric_system_function_token45] = ACTIONS(21),
    [aux_sym_numeric_system_function_token46] = ACTIONS(21),
    [aux_sym_numeric_system_function_token47] = ACTIONS(21),
    [aux_sym_numeric_system_function_token48] = ACTIONS(21),
    [aux_sym_numeric_system_function_token49] = ACTIONS(21),
    [aux_sym_numeric_system_function_token50] = ACTIONS(21),
    [aux_sym_numeric_system_function_token51] = ACTIONS(21),
    [aux_sym_numeric_system_function_token52] = ACTIONS(21),
    [aux_sym_numeric_system_function_token53] = ACTIONS(21),
    [aux_sym_numeric_system_function_token54] = ACTIONS(21),
    [aux_sym_numeric_system_function_token55] = ACTIONS(21),
    [aux_sym_numeric_system_function_token56] = ACTIONS(21),
    [aux_sym_numeric_system_function_token57] = ACTIONS(21),
    [aux_sym_numeric_system_function_token58] = ACTIONS(21),
    [aux_sym_numeric_system_function_token59] = ACTIONS(21),
    [aux_sym_numeric_system_function_token60] = ACTIONS(21),
    [aux_sym_numeric_system_function_token61] = ACTIONS(21),
    [aux_sym_numeric_system_function_token62] = ACTIONS(21),
    [aux_sym_numeric_system_function_token63] = ACTIONS(21),
    [aux_sym_numeric_system_function_token64] = ACTIONS(21),
    [aux_sym_numeric_system_function_token65] = ACTIONS(21),
    [aux_sym_numeric_system_function_token66] = ACTIONS(21),
    [aux_sym_numeric_system_function_token67] = ACTIONS(21),
    [aux_sym_numeric_system_function_token68] = ACTIONS(21),
    [aux_sym_numeric_system_function_token69] = ACTIONS(21),
    [aux_sym_numeric_system_function_token70] = ACTIONS(21),
    [aux_sym_numeric_system_function_token71] = ACTIONS(21),
    [aux_sym_numeric_system_function_token72] = ACTIONS(21),
    [aux_sym_numeric_system_function_token73] = ACTIONS(21),
    [aux_sym_numeric_system_function_token74] = ACTIONS(21),
    [aux_sym_numeric_system_function_token75] = ACTIONS(21),
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(37),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [19] = {
    [sym_numeric_expression] = STATE(119),
    [sym_numeric_binary_expression] = STATE(101),
    [sym_numeric_unary_expression] = STATE(101),
    [sym_numeric_primary_expression] = STATE(101),
    [sym_numeric_call_expression] = STATE(100),
    [sym_numeric_system_function] = STATE(99),
    [sym_numeric_user_function] = STATE(99),
    [sym_parenthesized_expression] = STATE(100),
    [sym_assignment_expression] = STATE(238),
    [sym_numeric_forced_assignment_expression] = STATE(101),
    [sym__numeric_reference] = STATE(68),
    [sym_numberelement] = STATE(68),
    [sym_numberreference] = STATE(68),
    [sym_number] = STATE(100),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(45),
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(47),
    [aux_sym_numeric_system_function_token1] = ACTIONS(49),
    [aux_sym_numeric_system_function_token2] = ACTIONS(49),
    [aux_sym_numeric_system_function_token3] = ACTIONS(49),
    [aux_sym_numeric_system_function_token4] = ACTIONS(49),
    [aux_sym_numeric_system_function_token5] = ACTIONS(49),
    [aux_sym_numeric_system_function_token6] = ACTIONS(49),
    [aux_sym_numeric_system_function_token7] = ACTIONS(49),
    [aux_sym_numeric_system_function_token8] = ACTIONS(49),
    [aux_sym_numeric_system_function_token9] = ACTIONS(49),
    [aux_sym_numeric_system_function_token10] = ACTIONS(49),
    [aux_sym_numeric_system_function_token11] = ACTIONS(49),
    [aux_sym_numeric_system_function_token12] = ACTIONS(49),
    [aux_sym_numeric_system_function_token13] = ACTIONS(49),
    [aux_sym_numeric_system_function_token14] = ACTIONS(49),
    [aux_sym_numeric_system_function_token15] = ACTIONS(49),
    [aux_sym_numeric_system_function_token16] = ACTIONS(49),
    [aux_sym_numeric_system_function_token17] = ACTIONS(49),
    [aux_sym_numeric_system_function_token18] = ACTIONS(49),
    [aux_sym_numeric_system_function_token19] = ACTIONS(49),
    [aux_sym_numeric_system_function_token20] = ACTIONS(49),
    [aux_sym_numeric_system_function_token21] = ACTIONS(49),
    [aux_sym_numeric_system_function_token22] = ACTIONS(49),
    [aux_sym_numeric_system_function_token23] = ACTIONS(49),
    [aux_sym_numeric_system_function_token24] = ACTIONS(49),
    [aux_sym_numeric_system_function_token25] = ACTIONS(49),
    [aux_sym_numeric_system_function_token26] = ACTIONS(49),
    [aux_sym_numeric_system_function_token27] = ACTIONS(49),
    [aux_sym_numeric_system_function_token28] = ACTIONS(49),
    [aux_sym_numeric_system_function_token29] = ACTIONS(49),
    [aux_sym_numeric_system_function_token30] = ACTIONS(49),
    [aux_sym_numeric_system_function_token31] = ACTIONS(49),
    [aux_sym_numeric_system_function_token32] = ACTIONS(49),
    [aux_sym_numeric_system_function_token33] = ACTIONS(49),
    [aux_sym_numeric_system_function_token34] = ACTIONS(49),
    [aux_sym_numeric_system_function_token35] = ACTIONS(49),
    [aux_sym_numeric_system_function_token36] = ACTIONS(49),
    [aux_sym_numeric_system_function_token37] = ACTIONS(49),
    [aux_sym_numeric_system_function_token38] = ACTIONS(49),
    [aux_sym_numeric_system_function_token39] = ACTIONS(49),
    [aux_sym_numeric_system_function_token40] = ACTIONS(49),
    [aux_sym_numeric_system_function_token41] = ACTIONS(49),
    [aux_sym_numeric_system_function_token42] = ACTIONS(49),
    [aux_sym_numeric_system_function_token43] = ACTIONS(49),
    [aux_sym_numeric_system_function_token44] = ACTIONS(49),
    [aux_sym_numeric_system_function_token45] = ACTIONS(49),
    [aux_sym_numeric_system_function_token46] = ACTIONS(49),
    [aux_sym_numeric_system_function_token47] = ACTIONS(49),
    [aux_sym_numeric_system_function_token48] = ACTIONS(49),
    [aux_sym_numeric_system_function_token49] = ACTIONS(49),
    [aux_sym_numeric_system_function_token50] = ACTIONS(49),
    [aux_sym_numeric_system_function_token51] = ACTIONS(49),
    [aux_sym_numeric_system_function_token52] = ACTIONS(49),
    [aux_sym_numeric_system_function_token53] = ACTIONS(49),
    [aux_sym_numeric_system_function_token54] = ACTIONS(49),
    [aux_sym_numeric_system_function_token55] = ACTIONS(49),
    [aux_sym_numeric_system_function_token56] = ACTIONS(49),
    [aux_sym_numeric_system_function_token57] = ACTIONS(49),
    [aux_sym_numeric_system_function_token58] = ACTIONS(49),
    [aux_sym_numeric_system_function_token59] = ACTIONS(49),
    [aux_sym_numeric_system_function_token60] = ACTIONS(49),
    [aux_sym_numeric_system_function_token61] = ACTIONS(49),
    [aux_sym_numeric_system_function_token62] = ACTIONS(49),
    [aux_sym_numeric_system_function_token63] = ACTIONS(49),
    [aux_sym_numeric_system_function_token64] = ACTIONS(49),
    [aux_sym_numeric_system_function_token65] = ACTIONS(49),
    [aux_sym_numeric_system_function_token66] = ACTIONS(49),
    [aux_sym_numeric_system_function_token67] = ACTIONS(49),
    [aux_sym_numeric_system_function_token68] = ACTIONS(49),
    [aux_sym_numeric_system_function_token69] = ACTIONS(49),
    [aux_sym_numeric_system_function_token70] = ACTIONS(49),
    [aux_sym_numeric_system_function_token71] = ACTIONS(49),
    [aux_sym_numeric_system_function_token72] = ACTIONS(49),
    [aux_sym_numeric_system_function_token73] = ACTIONS(49),
    [aux_sym_numeric_system_function_token74] = ACTIONS(49),
    [aux_sym_numeric_system_function_token75] = ACTIONS(49),
    [sym__numeric_function_identifier] = ACTIONS(75),
    [sym_numberidentifier] = ACTIONS(65),
    [aux_sym_number_token1] = ACTIONS(69),
  },
  [20] = {
    [sym_numeric_expression] = STATE(86),
    [sym_numeric_binary_expression] = STATE(89),
    [sym_numeric_unary_expression] = STATE(89),
    [sym_numeric_primary_expression] = STATE(89),
    [sym_numeric_call_expression] = STATE(78),
    [sym_numeric_system_function] = STATE(93),
    [sym_numeric_user_function] = STATE(93),
    [sym_parenthesized_expression] = STATE(78),
    [sym_numeric_forced_assignment_expression] = STATE(89),
    [sym__numeric_reference] = STATE(65),
    [sym_numberelement] = STATE(65),
    [sym_numberreference] = STATE(65),
    [sym_number] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(19),
    [aux_sym_numeric_system_function_token1] = ACTIONS(21),
    [aux_sym_numeric_system_function_token2] = ACTIONS(21),
    [aux_sym_numeric_system_function_token3] = ACTIONS(21),
    [aux_sym_numeric_system_function_token4] = ACTIONS(21),
    [aux_sym_numeric_system_function_token5] = ACTIONS(21),
    [aux_sym_numeric_system_function_token6] = ACTIONS(21),
    [aux_sym_numeric_system_function_token7] = ACTIONS(21),
    [aux_sym_numeric_system_function_token8] = ACTIONS(21),
    [aux_sym_numeric_system_function_token9] = ACTIONS(21),
    [aux_sym_numeric_system_function_token10] = ACTIONS(21),
    [aux_sym_numeric_system_function_token11] = ACTIONS(21),
    [aux_sym_numeric_system_function_token12] = ACTIONS(21),
    [aux_sym_numeric_system_function_token13] = ACTIONS(21),
    [aux_sym_numeric_system_function_token14] = ACTIONS(21),
    [aux_sym_numeric_system_function_token15] = ACTIONS(21),
    [aux_sym_numeric_system_function_token16] = ACTIONS(21),
    [aux_sym_numeric_system_function_token17] = ACTIONS(21),
    [aux_sym_numeric_system_function_token18] = ACTIONS(21),
    [aux_sym_numeric_system_function_token19] = ACTIONS(21),
    [aux_sym_numeric_system_function_token20] = ACTIONS(21),
    [aux_sym_numeric_system_function_token21] = ACTIONS(21),
    [aux_sym_numeric_system_function_token22] = ACTIONS(21),
    [aux_sym_numeric_system_function_token23] = ACTIONS(21),
    [aux_sym_numeric_system_function_token24] = ACTIONS(21),
    [aux_sym_numeric_system_function_token25] = ACTIONS(21),
    [aux_sym_numeric_system_function_token26] = ACTIONS(21),
    [aux_sym_numeric_system_function_token27] = ACTIONS(21),
    [aux_sym_numeric_system_function_token28] = ACTIONS(21),
    [aux_sym_numeric_system_function_token29] = ACTIONS(21),
    [aux_sym_numeric_system_function_token30] = ACTIONS(21),
    [aux_sym_numeric_system_function_token31] = ACTIONS(21),
    [aux_sym_numeric_system_function_token32] = ACTIONS(21),
    [aux_sym_numeric_system_function_token33] = ACTIONS(21),
    [aux_sym_numeric_system_function_token34] = ACTIONS(21),
    [aux_sym_numeric_system_function_token35] = ACTIONS(21),
    [aux_sym_numeric_system_function_token36] = ACTIONS(21),
    [aux_sym_numeric_system_function_token37] = ACTIONS(21),
    [aux_sym_numeric_system_function_token38] = ACTIONS(21),
    [aux_sym_numeric_system_function_token39] = ACTIONS(21),
    [aux_sym_numeric_system_function_token40] = ACTIONS(21),
    [aux_sym_numeric_system_function_token41] = ACTIONS(21),
    [aux_sym_numeric_system_function_token42] = ACTIONS(21),
    [aux_sym_numeric_system_function_token43] = ACTIONS(21),
    [aux_sym_numeric_system_function_token44] = ACTIONS(21),
    [aux_sym_numeric_system_function_token45] = ACTIONS(21),
    [aux_sym_numeric_system_function_token46] = ACTIONS(21),
    [aux_sym_numeric_system_function_token47] = ACTIONS(21),
    [aux_sym_numeric_system_function_token48] = ACTIONS(21),
    [aux_sym_numeric_system_function_token49] = ACTIONS(21),
    [aux_sym_numeric_system_function_token50] = ACTIONS(21),
    [aux_sym_numeric_system_function_token51] = ACTIONS(21),
    [aux_sym_numeric_system_function_token52] = ACTIONS(21),
    [aux_sym_numeric_system_function_token53] = ACTIONS(21),
    [aux_sym_numeric_system_function_token54] = ACTIONS(21),
    [aux_sym_numeric_system_function_token55] = ACTIONS(21),
    [aux_sym_numeric_system_function_token56] = ACTIONS(21),
    [aux_sym_numeric_system_function_token57] = ACTIONS(21),
    [aux_sym_numeric_system_function_token58] = ACTIONS(21),
    [aux_sym_numeric_system_function_token59] = ACTIONS(21),
    [aux_sym_numeric_system_function_token60] = ACTIONS(21),
    [aux_sym_numeric_system_function_token61] = ACTIONS(21),
    [aux_sym_numeric_system_function_token62] = ACTIONS(21),
    [aux_sym_numeric_system_function_token63] = ACTIONS(21),
    [aux_sym_numeric_system_function_token64] = ACTIONS(21),
    [aux_sym_numeric_system_function_token65] = ACTIONS(21),
    [aux_sym_numeric_system_function_token66] = ACTIONS(21),
    [aux_sym_numeric_system_function_token67] = ACTIONS(21),
    [aux_sym_numeric_system_function_token68] = ACTIONS(21),
    [aux_sym_numeric_system_function_token69] = ACTIONS(21),
    [aux_sym_numeric_system_function_token70] = ACTIONS(21),
    [aux_sym_numeric_system_function_token71] = ACTIONS(21),
    [aux_sym_numeric_system_function_token72] = ACTIONS(21),
    [aux_sym_numeric_system_function_token73] = ACTIONS(21),
    [aux_sym_numeric_system_function_token74] = ACTIONS(21),
    [aux_sym_numeric_system_function_token75] = ACTIONS(21),
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(37),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [21] = {
    [sym_numeric_expression] = STATE(85),
    [sym_numeric_binary_expression] = STATE(89),
    [sym_numeric_unary_expression] = STATE(89),
    [sym_numeric_primary_expression] = STATE(89),
    [sym_numeric_call_expression] = STATE(78),
    [sym_numeric_system_function] = STATE(93),
    [sym_numeric_user_function] = STATE(93),
    [sym_parenthesized_expression] = STATE(78),
    [sym_numeric_forced_assignment_expression] = STATE(89),
    [sym__numeric_reference] = STATE(65),
    [sym_numberelement] = STATE(65),
    [sym_numberreference] = STATE(65),
    [sym_number] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(19),
    [aux_sym_numeric_system_function_token1] = ACTIONS(21),
    [aux_sym_numeric_system_function_token2] = ACTIONS(21),
    [aux_sym_numeric_system_function_token3] = ACTIONS(21),
    [aux_sym_numeric_system_function_token4] = ACTIONS(21),
    [aux_sym_numeric_system_function_token5] = ACTIONS(21),
    [aux_sym_numeric_system_function_token6] = ACTIONS(21),
    [aux_sym_numeric_system_function_token7] = ACTIONS(21),
    [aux_sym_numeric_system_function_token8] = ACTIONS(21),
    [aux_sym_numeric_system_function_token9] = ACTIONS(21),
    [aux_sym_numeric_system_function_token10] = ACTIONS(21),
    [aux_sym_numeric_system_function_token11] = ACTIONS(21),
    [aux_sym_numeric_system_function_token12] = ACTIONS(21),
    [aux_sym_numeric_system_function_token13] = ACTIONS(21),
    [aux_sym_numeric_system_function_token14] = ACTIONS(21),
    [aux_sym_numeric_system_function_token15] = ACTIONS(21),
    [aux_sym_numeric_system_function_token16] = ACTIONS(21),
    [aux_sym_numeric_system_function_token17] = ACTIONS(21),
    [aux_sym_numeric_system_function_token18] = ACTIONS(21),
    [aux_sym_numeric_system_function_token19] = ACTIONS(21),
    [aux_sym_numeric_system_function_token20] = ACTIONS(21),
    [aux_sym_numeric_system_function_token21] = ACTIONS(21),
    [aux_sym_numeric_system_function_token22] = ACTIONS(21),
    [aux_sym_numeric_system_function_token23] = ACTIONS(21),
    [aux_sym_numeric_system_function_token24] = ACTIONS(21),
    [aux_sym_numeric_system_function_token25] = ACTIONS(21),
    [aux_sym_numeric_system_function_token26] = ACTIONS(21),
    [aux_sym_numeric_system_function_token27] = ACTIONS(21),
    [aux_sym_numeric_system_function_token28] = ACTIONS(21),
    [aux_sym_numeric_system_function_token29] = ACTIONS(21),
    [aux_sym_numeric_system_function_token30] = ACTIONS(21),
    [aux_sym_numeric_system_function_token31] = ACTIONS(21),
    [aux_sym_numeric_system_function_token32] = ACTIONS(21),
    [aux_sym_numeric_system_function_token33] = ACTIONS(21),
    [aux_sym_numeric_system_function_token34] = ACTIONS(21),
    [aux_sym_numeric_system_function_token35] = ACTIONS(21),
    [aux_sym_numeric_system_function_token36] = ACTIONS(21),
    [aux_sym_numeric_system_function_token37] = ACTIONS(21),
    [aux_sym_numeric_system_function_token38] = ACTIONS(21),
    [aux_sym_numeric_system_function_token39] = ACTIONS(21),
    [aux_sym_numeric_system_function_token40] = ACTIONS(21),
    [aux_sym_numeric_system_function_token41] = ACTIONS(21),
    [aux_sym_numeric_system_function_token42] = ACTIONS(21),
    [aux_sym_numeric_system_function_token43] = ACTIONS(21),
    [aux_sym_numeric_system_function_token44] = ACTIONS(21),
    [aux_sym_numeric_system_function_token45] = ACTIONS(21),
    [aux_sym_numeric_system_function_token46] = ACTIONS(21),
    [aux_sym_numeric_system_function_token47] = ACTIONS(21),
    [aux_sym_numeric_system_function_token48] = ACTIONS(21),
    [aux_sym_numeric_system_function_token49] = ACTIONS(21),
    [aux_sym_numeric_system_function_token50] = ACTIONS(21),
    [aux_sym_numeric_system_function_token51] = ACTIONS(21),
    [aux_sym_numeric_system_function_token52] = ACTIONS(21),
    [aux_sym_numeric_system_function_token53] = ACTIONS(21),
    [aux_sym_numeric_system_function_token54] = ACTIONS(21),
    [aux_sym_numeric_system_function_token55] = ACTIONS(21),
    [aux_sym_numeric_system_function_token56] = ACTIONS(21),
    [aux_sym_numeric_system_function_token57] = ACTIONS(21),
    [aux_sym_numeric_system_function_token58] = ACTIONS(21),
    [aux_sym_numeric_system_function_token59] = ACTIONS(21),
    [aux_sym_numeric_system_function_token60] = ACTIONS(21),
    [aux_sym_numeric_system_function_token61] = ACTIONS(21),
    [aux_sym_numeric_system_function_token62] = ACTIONS(21),
    [aux_sym_numeric_system_function_token63] = ACTIONS(21),
    [aux_sym_numeric_system_function_token64] = ACTIONS(21),
    [aux_sym_numeric_system_function_token65] = ACTIONS(21),
    [aux_sym_numeric_system_function_token66] = ACTIONS(21),
    [aux_sym_numeric_system_function_token67] = ACTIONS(21),
    [aux_sym_numeric_system_function_token68] = ACTIONS(21),
    [aux_sym_numeric_system_function_token69] = ACTIONS(21),
    [aux_sym_numeric_system_function_token70] = ACTIONS(21),
    [aux_sym_numeric_system_function_token71] = ACTIONS(21),
    [aux_sym_numeric_system_function_token72] = ACTIONS(21),
    [aux_sym_numeric_system_function_token73] = ACTIONS(21),
    [aux_sym_numeric_system_function_token74] = ACTIONS(21),
    [aux_sym_numeric_system_function_token75] = ACTIONS(21),
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(37),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [22] = {
    [sym_numeric_expression] = STATE(109),
    [sym_numeric_binary_expression] = STATE(101),
    [sym_numeric_unary_expression] = STATE(101),
    [sym_numeric_primary_expression] = STATE(101),
    [sym_numeric_call_expression] = STATE(100),
    [sym_numeric_system_function] = STATE(99),
    [sym_numeric_user_function] = STATE(99),
    [sym_parenthesized_expression] = STATE(100),
    [sym_numeric_forced_assignment_expression] = STATE(101),
    [sym__numeric_reference] = STATE(66),
    [sym_numberelement] = STATE(66),
    [sym_numberreference] = STATE(66),
    [sym_number] = STATE(100),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(45),
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(47),
    [aux_sym_numeric_system_function_token1] = ACTIONS(49),
    [aux_sym_numeric_system_function_token2] = ACTIONS(49),
    [aux_sym_numeric_system_function_token3] = ACTIONS(49),
    [aux_sym_numeric_system_function_token4] = ACTIONS(49),
    [aux_sym_numeric_system_function_token5] = ACTIONS(49),
    [aux_sym_numeric_system_function_token6] = ACTIONS(49),
    [aux_sym_numeric_system_function_token7] = ACTIONS(49),
    [aux_sym_numeric_system_function_token8] = ACTIONS(49),
    [aux_sym_numeric_system_function_token9] = ACTIONS(49),
    [aux_sym_numeric_system_function_token10] = ACTIONS(49),
    [aux_sym_numeric_system_function_token11] = ACTIONS(49),
    [aux_sym_numeric_system_function_token12] = ACTIONS(49),
    [aux_sym_numeric_system_function_token13] = ACTIONS(49),
    [aux_sym_numeric_system_function_token14] = ACTIONS(49),
    [aux_sym_numeric_system_function_token15] = ACTIONS(49),
    [aux_sym_numeric_system_function_token16] = ACTIONS(49),
    [aux_sym_numeric_system_function_token17] = ACTIONS(49),
    [aux_sym_numeric_system_function_token18] = ACTIONS(49),
    [aux_sym_numeric_system_function_token19] = ACTIONS(49),
    [aux_sym_numeric_system_function_token20] = ACTIONS(49),
    [aux_sym_numeric_system_function_token21] = ACTIONS(49),
    [aux_sym_numeric_system_function_token22] = ACTIONS(49),
    [aux_sym_numeric_system_function_token23] = ACTIONS(49),
    [aux_sym_numeric_system_function_token24] = ACTIONS(49),
    [aux_sym_numeric_system_function_token25] = ACTIONS(49),
    [aux_sym_numeric_system_function_token26] = ACTIONS(49),
    [aux_sym_numeric_system_function_token27] = ACTIONS(49),
    [aux_sym_numeric_system_function_token28] = ACTIONS(49),
    [aux_sym_numeric_system_function_token29] = ACTIONS(49),
    [aux_sym_numeric_system_function_token30] = ACTIONS(49),
    [aux_sym_numeric_system_function_token31] = ACTIONS(49),
    [aux_sym_numeric_system_function_token32] = ACTIONS(49),
    [aux_sym_numeric_system_function_token33] = ACTIONS(49),
    [aux_sym_numeric_system_function_token34] = ACTIONS(49),
    [aux_sym_numeric_system_function_token35] = ACTIONS(49),
    [aux_sym_numeric_system_function_token36] = ACTIONS(49),
    [aux_sym_numeric_system_function_token37] = ACTIONS(49),
    [aux_sym_numeric_system_function_token38] = ACTIONS(49),
    [aux_sym_numeric_system_function_token39] = ACTIONS(49),
    [aux_sym_numeric_system_function_token40] = ACTIONS(49),
    [aux_sym_numeric_system_function_token41] = ACTIONS(49),
    [aux_sym_numeric_system_function_token42] = ACTIONS(49),
    [aux_sym_numeric_system_function_token43] = ACTIONS(49),
    [aux_sym_numeric_system_function_token44] = ACTIONS(49),
    [aux_sym_numeric_system_function_token45] = ACTIONS(49),
    [aux_sym_numeric_system_function_token46] = ACTIONS(49),
    [aux_sym_numeric_system_function_token47] = ACTIONS(49),
    [aux_sym_numeric_system_function_token48] = ACTIONS(49),
    [aux_sym_numeric_system_function_token49] = ACTIONS(49),
    [aux_sym_numeric_system_function_token50] = ACTIONS(49),
    [aux_sym_numeric_system_function_token51] = ACTIONS(49),
    [aux_sym_numeric_system_function_token52] = ACTIONS(49),
    [aux_sym_numeric_system_function_token53] = ACTIONS(49),
    [aux_sym_numeric_system_function_token54] = ACTIONS(49),
    [aux_sym_numeric_system_function_token55] = ACTIONS(49),
    [aux_sym_numeric_system_function_token56] = ACTIONS(49),
    [aux_sym_numeric_system_function_token57] = ACTIONS(49),
    [aux_sym_numeric_system_function_token58] = ACTIONS(49),
    [aux_sym_numeric_system_function_token59] = ACTIONS(49),
    [aux_sym_numeric_system_function_token60] = ACTIONS(49),
    [aux_sym_numeric_system_function_token61] = ACTIONS(49),
    [aux_sym_numeric_system_function_token62] = ACTIONS(49),
    [aux_sym_numeric_system_function_token63] = ACTIONS(49),
    [aux_sym_numeric_system_function_token64] = ACTIONS(49),
    [aux_sym_numeric_system_function_token65] = ACTIONS(49),
    [aux_sym_numeric_system_function_token66] = ACTIONS(49),
    [aux_sym_numeric_system_function_token67] = ACTIONS(49),
    [aux_sym_numeric_system_function_token68] = ACTIONS(49),
    [aux_sym_numeric_system_function_token69] = ACTIONS(49),
    [aux_sym_numeric_system_function_token70] = ACTIONS(49),
    [aux_sym_numeric_system_function_token71] = ACTIONS(49),
    [aux_sym_numeric_system_function_token72] = ACTIONS(49),
    [aux_sym_numeric_system_function_token73] = ACTIONS(49),
    [aux_sym_numeric_system_function_token74] = ACTIONS(49),
    [aux_sym_numeric_system_function_token75] = ACTIONS(49),
    [sym__numeric_function_identifier] = ACTIONS(75),
    [sym_numberidentifier] = ACTIONS(65),
    [aux_sym_number_token1] = ACTIONS(69),
  },
  [23] = {
    [sym_numeric_expression] = STATE(108),
    [sym_numeric_binary_expression] = STATE(101),
    [sym_numeric_unary_expression] = STATE(101),
    [sym_numeric_primary_expression] = STATE(101),
    [sym_numeric_call_expression] = STATE(100),
    [sym_numeric_system_function] = STATE(99),
    [sym_numeric_user_function] = STATE(99),
    [sym_parenthesized_expression] = STATE(100),
    [sym_numeric_forced_assignment_expression] = STATE(101),
    [sym__numeric_reference] = STATE(66),
    [sym_numberelement] = STATE(66),
    [sym_numberreference] = STATE(66),
    [sym_number] = STATE(100),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(45),
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(47),
    [aux_sym_numeric_system_function_token1] = ACTIONS(49),
    [aux_sym_numeric_system_function_token2] = ACTIONS(49),
    [aux_sym_numeric_system_function_token3] = ACTIONS(49),
    [aux_sym_numeric_system_function_token4] = ACTIONS(49),
    [aux_sym_numeric_system_function_token5] = ACTIONS(49),
    [aux_sym_numeric_system_function_token6] = ACTIONS(49),
    [aux_sym_numeric_system_function_token7] = ACTIONS(49),
    [aux_sym_numeric_system_function_token8] = ACTIONS(49),
    [aux_sym_numeric_system_function_token9] = ACTIONS(49),
    [aux_sym_numeric_system_function_token10] = ACTIONS(49),
    [aux_sym_numeric_system_function_token11] = ACTIONS(49),
    [aux_sym_numeric_system_function_token12] = ACTIONS(49),
    [aux_sym_numeric_system_function_token13] = ACTIONS(49),
    [aux_sym_numeric_system_function_token14] = ACTIONS(49),
    [aux_sym_numeric_system_function_token15] = ACTIONS(49),
    [aux_sym_numeric_system_function_token16] = ACTIONS(49),
    [aux_sym_numeric_system_function_token17] = ACTIONS(49),
    [aux_sym_numeric_system_function_token18] = ACTIONS(49),
    [aux_sym_numeric_system_function_token19] = ACTIONS(49),
    [aux_sym_numeric_system_function_token20] = ACTIONS(49),
    [aux_sym_numeric_system_function_token21] = ACTIONS(49),
    [aux_sym_numeric_system_function_token22] = ACTIONS(49),
    [aux_sym_numeric_system_function_token23] = ACTIONS(49),
    [aux_sym_numeric_system_function_token24] = ACTIONS(49),
    [aux_sym_numeric_system_function_token25] = ACTIONS(49),
    [aux_sym_numeric_system_function_token26] = ACTIONS(49),
    [aux_sym_numeric_system_function_token27] = ACTIONS(49),
    [aux_sym_numeric_system_function_token28] = ACTIONS(49),
    [aux_sym_numeric_system_function_token29] = ACTIONS(49),
    [aux_sym_numeric_system_function_token30] = ACTIONS(49),
    [aux_sym_numeric_system_function_token31] = ACTIONS(49),
    [aux_sym_numeric_system_function_token32] = ACTIONS(49),
    [aux_sym_numeric_system_function_token33] = ACTIONS(49),
    [aux_sym_numeric_system_function_token34] = ACTIONS(49),
    [aux_sym_numeric_system_function_token35] = ACTIONS(49),
    [aux_sym_numeric_system_function_token36] = ACTIONS(49),
    [aux_sym_numeric_system_function_token37] = ACTIONS(49),
    [aux_sym_numeric_system_function_token38] = ACTIONS(49),
    [aux_sym_numeric_system_function_token39] = ACTIONS(49),
    [aux_sym_numeric_system_function_token40] = ACTIONS(49),
    [aux_sym_numeric_system_function_token41] = ACTIONS(49),
    [aux_sym_numeric_system_function_token42] = ACTIONS(49),
    [aux_sym_numeric_system_function_token43] = ACTIONS(49),
    [aux_sym_numeric_system_function_token44] = ACTIONS(49),
    [aux_sym_numeric_system_function_token45] = ACTIONS(49),
    [aux_sym_numeric_system_function_token46] = ACTIONS(49),
    [aux_sym_numeric_system_function_token47] = ACTIONS(49),
    [aux_sym_numeric_system_function_token48] = ACTIONS(49),
    [aux_sym_numeric_system_function_token49] = ACTIONS(49),
    [aux_sym_numeric_system_function_token50] = ACTIONS(49),
    [aux_sym_numeric_system_function_token51] = ACTIONS(49),
    [aux_sym_numeric_system_function_token52] = ACTIONS(49),
    [aux_sym_numeric_system_function_token53] = ACTIONS(49),
    [aux_sym_numeric_system_function_token54] = ACTIONS(49),
    [aux_sym_numeric_system_function_token55] = ACTIONS(49),
    [aux_sym_numeric_system_function_token56] = ACTIONS(49),
    [aux_sym_numeric_system_function_token57] = ACTIONS(49),
    [aux_sym_numeric_system_function_token58] = ACTIONS(49),
    [aux_sym_numeric_system_function_token59] = ACTIONS(49),
    [aux_sym_numeric_system_function_token60] = ACTIONS(49),
    [aux_sym_numeric_system_function_token61] = ACTIONS(49),
    [aux_sym_numeric_system_function_token62] = ACTIONS(49),
    [aux_sym_numeric_system_function_token63] = ACTIONS(49),
    [aux_sym_numeric_system_function_token64] = ACTIONS(49),
    [aux_sym_numeric_system_function_token65] = ACTIONS(49),
    [aux_sym_numeric_system_function_token66] = ACTIONS(49),
    [aux_sym_numeric_system_function_token67] = ACTIONS(49),
    [aux_sym_numeric_system_function_token68] = ACTIONS(49),
    [aux_sym_numeric_system_function_token69] = ACTIONS(49),
    [aux_sym_numeric_system_function_token70] = ACTIONS(49),
    [aux_sym_numeric_system_function_token71] = ACTIONS(49),
    [aux_sym_numeric_system_function_token72] = ACTIONS(49),
    [aux_sym_numeric_system_function_token73] = ACTIONS(49),
    [aux_sym_numeric_system_function_token74] = ACTIONS(49),
    [aux_sym_numeric_system_function_token75] = ACTIONS(49),
    [sym__numeric_function_identifier] = ACTIONS(75),
    [sym_numberidentifier] = ACTIONS(65),
    [aux_sym_number_token1] = ACTIONS(69),
  },
  [24] = {
    [sym_numeric_expression] = STATE(97),
    [sym_numeric_binary_expression] = STATE(101),
    [sym_numeric_unary_expression] = STATE(101),
    [sym_numeric_primary_expression] = STATE(101),
    [sym_numeric_call_expression] = STATE(100),
    [sym_numeric_system_function] = STATE(99),
    [sym_numeric_user_function] = STATE(99),
    [sym_parenthesized_expression] = STATE(100),
    [sym_numeric_forced_assignment_expression] = STATE(101),
    [sym__numeric_reference] = STATE(66),
    [sym_numberelement] = STATE(66),
    [sym_numberreference] = STATE(66),
    [sym_number] = STATE(100),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(45),
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(47),
    [aux_sym_numeric_system_function_token1] = ACTIONS(49),
    [aux_sym_numeric_system_function_token2] = ACTIONS(49),
    [aux_sym_numeric_system_function_token3] = ACTIONS(49),
    [aux_sym_numeric_system_function_token4] = ACTIONS(49),
    [aux_sym_numeric_system_function_token5] = ACTIONS(49),
    [aux_sym_numeric_system_function_token6] = ACTIONS(49),
    [aux_sym_numeric_system_function_token7] = ACTIONS(49),
    [aux_sym_numeric_system_function_token8] = ACTIONS(49),
    [aux_sym_numeric_system_function_token9] = ACTIONS(49),
    [aux_sym_numeric_system_function_token10] = ACTIONS(49),
    [aux_sym_numeric_system_function_token11] = ACTIONS(49),
    [aux_sym_numeric_system_function_token12] = ACTIONS(49),
    [aux_sym_numeric_system_function_token13] = ACTIONS(49),
    [aux_sym_numeric_system_function_token14] = ACTIONS(49),
    [aux_sym_numeric_system_function_token15] = ACTIONS(49),
    [aux_sym_numeric_system_function_token16] = ACTIONS(49),
    [aux_sym_numeric_system_function_token17] = ACTIONS(49),
    [aux_sym_numeric_system_function_token18] = ACTIONS(49),
    [aux_sym_numeric_system_function_token19] = ACTIONS(49),
    [aux_sym_numeric_system_function_token20] = ACTIONS(49),
    [aux_sym_numeric_system_function_token21] = ACTIONS(49),
    [aux_sym_numeric_system_function_token22] = ACTIONS(49),
    [aux_sym_numeric_system_function_token23] = ACTIONS(49),
    [aux_sym_numeric_system_function_token24] = ACTIONS(49),
    [aux_sym_numeric_system_function_token25] = ACTIONS(49),
    [aux_sym_numeric_system_function_token26] = ACTIONS(49),
    [aux_sym_numeric_system_function_token27] = ACTIONS(49),
    [aux_sym_numeric_system_function_token28] = ACTIONS(49),
    [aux_sym_numeric_system_function_token29] = ACTIONS(49),
    [aux_sym_numeric_system_function_token30] = ACTIONS(49),
    [aux_sym_numeric_system_function_token31] = ACTIONS(49),
    [aux_sym_numeric_system_function_token32] = ACTIONS(49),
    [aux_sym_numeric_system_function_token33] = ACTIONS(49),
    [aux_sym_numeric_system_function_token34] = ACTIONS(49),
    [aux_sym_numeric_system_function_token35] = ACTIONS(49),
    [aux_sym_numeric_system_function_token36] = ACTIONS(49),
    [aux_sym_numeric_system_function_token37] = ACTIONS(49),
    [aux_sym_numeric_system_function_token38] = ACTIONS(49),
    [aux_sym_numeric_system_function_token39] = ACTIONS(49),
    [aux_sym_numeric_system_function_token40] = ACTIONS(49),
    [aux_sym_numeric_system_function_token41] = ACTIONS(49),
    [aux_sym_numeric_system_function_token42] = ACTIONS(49),
    [aux_sym_numeric_system_function_token43] = ACTIONS(49),
    [aux_sym_numeric_system_function_token44] = ACTIONS(49),
    [aux_sym_numeric_system_function_token45] = ACTIONS(49),
    [aux_sym_numeric_system_function_token46] = ACTIONS(49),
    [aux_sym_numeric_system_function_token47] = ACTIONS(49),
    [aux_sym_numeric_system_function_token48] = ACTIONS(49),
    [aux_sym_numeric_system_function_token49] = ACTIONS(49),
    [aux_sym_numeric_system_function_token50] = ACTIONS(49),
    [aux_sym_numeric_system_function_token51] = ACTIONS(49),
    [aux_sym_numeric_system_function_token52] = ACTIONS(49),
    [aux_sym_numeric_system_function_token53] = ACTIONS(49),
    [aux_sym_numeric_system_function_token54] = ACTIONS(49),
    [aux_sym_numeric_system_function_token55] = ACTIONS(49),
    [aux_sym_numeric_system_function_token56] = ACTIONS(49),
    [aux_sym_numeric_system_function_token57] = ACTIONS(49),
    [aux_sym_numeric_system_function_token58] = ACTIONS(49),
    [aux_sym_numeric_system_function_token59] = ACTIONS(49),
    [aux_sym_numeric_system_function_token60] = ACTIONS(49),
    [aux_sym_numeric_system_function_token61] = ACTIONS(49),
    [aux_sym_numeric_system_function_token62] = ACTIONS(49),
    [aux_sym_numeric_system_function_token63] = ACTIONS(49),
    [aux_sym_numeric_system_function_token64] = ACTIONS(49),
    [aux_sym_numeric_system_function_token65] = ACTIONS(49),
    [aux_sym_numeric_system_function_token66] = ACTIONS(49),
    [aux_sym_numeric_system_function_token67] = ACTIONS(49),
    [aux_sym_numeric_system_function_token68] = ACTIONS(49),
    [aux_sym_numeric_system_function_token69] = ACTIONS(49),
    [aux_sym_numeric_system_function_token70] = ACTIONS(49),
    [aux_sym_numeric_system_function_token71] = ACTIONS(49),
    [aux_sym_numeric_system_function_token72] = ACTIONS(49),
    [aux_sym_numeric_system_function_token73] = ACTIONS(49),
    [aux_sym_numeric_system_function_token74] = ACTIONS(49),
    [aux_sym_numeric_system_function_token75] = ACTIONS(49),
    [sym__numeric_function_identifier] = ACTIONS(75),
    [sym_numberidentifier] = ACTIONS(65),
    [aux_sym_number_token1] = ACTIONS(69),
  },
  [25] = {
    [sym_numeric_expression] = STATE(94),
    [sym_numeric_binary_expression] = STATE(89),
    [sym_numeric_unary_expression] = STATE(89),
    [sym_numeric_primary_expression] = STATE(89),
    [sym_numeric_call_expression] = STATE(78),
    [sym_numeric_system_function] = STATE(93),
    [sym_numeric_user_function] = STATE(93),
    [sym_parenthesized_expression] = STATE(78),
    [sym_numeric_forced_assignment_expression] = STATE(89),
    [sym__numeric_reference] = STATE(65),
    [sym_numberelement] = STATE(65),
    [sym_numberreference] = STATE(65),
    [sym_number] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(19),
    [aux_sym_numeric_system_function_token1] = ACTIONS(21),
    [aux_sym_numeric_system_function_token2] = ACTIONS(21),
    [aux_sym_numeric_system_function_token3] = ACTIONS(21),
    [aux_sym_numeric_system_function_token4] = ACTIONS(21),
    [aux_sym_numeric_system_function_token5] = ACTIONS(21),
    [aux_sym_numeric_system_function_token6] = ACTIONS(21),
    [aux_sym_numeric_system_function_token7] = ACTIONS(21),
    [aux_sym_numeric_system_function_token8] = ACTIONS(21),
    [aux_sym_numeric_system_function_token9] = ACTIONS(21),
    [aux_sym_numeric_system_function_token10] = ACTIONS(21),
    [aux_sym_numeric_system_function_token11] = ACTIONS(21),
    [aux_sym_numeric_system_function_token12] = ACTIONS(21),
    [aux_sym_numeric_system_function_token13] = ACTIONS(21),
    [aux_sym_numeric_system_function_token14] = ACTIONS(21),
    [aux_sym_numeric_system_function_token15] = ACTIONS(21),
    [aux_sym_numeric_system_function_token16] = ACTIONS(21),
    [aux_sym_numeric_system_function_token17] = ACTIONS(21),
    [aux_sym_numeric_system_function_token18] = ACTIONS(21),
    [aux_sym_numeric_system_function_token19] = ACTIONS(21),
    [aux_sym_numeric_system_function_token20] = ACTIONS(21),
    [aux_sym_numeric_system_function_token21] = ACTIONS(21),
    [aux_sym_numeric_system_function_token22] = ACTIONS(21),
    [aux_sym_numeric_system_function_token23] = ACTIONS(21),
    [aux_sym_numeric_system_function_token24] = ACTIONS(21),
    [aux_sym_numeric_system_function_token25] = ACTIONS(21),
    [aux_sym_numeric_system_function_token26] = ACTIONS(21),
    [aux_sym_numeric_system_function_token27] = ACTIONS(21),
    [aux_sym_numeric_system_function_token28] = ACTIONS(21),
    [aux_sym_numeric_system_function_token29] = ACTIONS(21),
    [aux_sym_numeric_system_function_token30] = ACTIONS(21),
    [aux_sym_numeric_system_function_token31] = ACTIONS(21),
    [aux_sym_numeric_system_function_token32] = ACTIONS(21),
    [aux_sym_numeric_system_function_token33] = ACTIONS(21),
    [aux_sym_numeric_system_function_token34] = ACTIONS(21),
    [aux_sym_numeric_system_function_token35] = ACTIONS(21),
    [aux_sym_numeric_system_function_token36] = ACTIONS(21),
    [aux_sym_numeric_system_function_token37] = ACTIONS(21),
    [aux_sym_numeric_system_function_token38] = ACTIONS(21),
    [aux_sym_numeric_system_function_token39] = ACTIONS(21),
    [aux_sym_numeric_system_function_token40] = ACTIONS(21),
    [aux_sym_numeric_system_function_token41] = ACTIONS(21),
    [aux_sym_numeric_system_function_token42] = ACTIONS(21),
    [aux_sym_numeric_system_function_token43] = ACTIONS(21),
    [aux_sym_numeric_system_function_token44] = ACTIONS(21),
    [aux_sym_numeric_system_function_token45] = ACTIONS(21),
    [aux_sym_numeric_system_function_token46] = ACTIONS(21),
    [aux_sym_numeric_system_function_token47] = ACTIONS(21),
    [aux_sym_numeric_system_function_token48] = ACTIONS(21),
    [aux_sym_numeric_system_function_token49] = ACTIONS(21),
    [aux_sym_numeric_system_function_token50] = ACTIONS(21),
    [aux_sym_numeric_system_function_token51] = ACTIONS(21),
    [aux_sym_numeric_system_function_token52] = ACTIONS(21),
    [aux_sym_numeric_system_function_token53] = ACTIONS(21),
    [aux_sym_numeric_system_function_token54] = ACTIONS(21),
    [aux_sym_numeric_system_function_token55] = ACTIONS(21),
    [aux_sym_numeric_system_function_token56] = ACTIONS(21),
    [aux_sym_numeric_system_function_token57] = ACTIONS(21),
    [aux_sym_numeric_system_function_token58] = ACTIONS(21),
    [aux_sym_numeric_system_function_token59] = ACTIONS(21),
    [aux_sym_numeric_system_function_token60] = ACTIONS(21),
    [aux_sym_numeric_system_function_token61] = ACTIONS(21),
    [aux_sym_numeric_system_function_token62] = ACTIONS(21),
    [aux_sym_numeric_system_function_token63] = ACTIONS(21),
    [aux_sym_numeric_system_function_token64] = ACTIONS(21),
    [aux_sym_numeric_system_function_token65] = ACTIONS(21),
    [aux_sym_numeric_system_function_token66] = ACTIONS(21),
    [aux_sym_numeric_system_function_token67] = ACTIONS(21),
    [aux_sym_numeric_system_function_token68] = ACTIONS(21),
    [aux_sym_numeric_system_function_token69] = ACTIONS(21),
    [aux_sym_numeric_system_function_token70] = ACTIONS(21),
    [aux_sym_numeric_system_function_token71] = ACTIONS(21),
    [aux_sym_numeric_system_function_token72] = ACTIONS(21),
    [aux_sym_numeric_system_function_token73] = ACTIONS(21),
    [aux_sym_numeric_system_function_token74] = ACTIONS(21),
    [aux_sym_numeric_system_function_token75] = ACTIONS(21),
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(37),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [26] = {
    [sym_numeric_expression] = STATE(118),
    [sym_numeric_binary_expression] = STATE(89),
    [sym_numeric_unary_expression] = STATE(89),
    [sym_numeric_primary_expression] = STATE(89),
    [sym_numeric_call_expression] = STATE(78),
    [sym_numeric_system_function] = STATE(93),
    [sym_numeric_user_function] = STATE(93),
    [sym_parenthesized_expression] = STATE(78),
    [sym_numeric_forced_assignment_expression] = STATE(89),
    [sym__numeric_reference] = STATE(65),
    [sym_numberelement] = STATE(65),
    [sym_numberreference] = STATE(65),
    [sym_number] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(19),
    [aux_sym_numeric_system_function_token1] = ACTIONS(21),
    [aux_sym_numeric_system_function_token2] = ACTIONS(21),
    [aux_sym_numeric_system_function_token3] = ACTIONS(21),
    [aux_sym_numeric_system_function_token4] = ACTIONS(21),
    [aux_sym_numeric_system_function_token5] = ACTIONS(21),
    [aux_sym_numeric_system_function_token6] = ACTIONS(21),
    [aux_sym_numeric_system_function_token7] = ACTIONS(21),
    [aux_sym_numeric_system_function_token8] = ACTIONS(21),
    [aux_sym_numeric_system_function_token9] = ACTIONS(21),
    [aux_sym_numeric_system_function_token10] = ACTIONS(21),
    [aux_sym_numeric_system_function_token11] = ACTIONS(21),
    [aux_sym_numeric_system_function_token12] = ACTIONS(21),
    [aux_sym_numeric_system_function_token13] = ACTIONS(21),
    [aux_sym_numeric_system_function_token14] = ACTIONS(21),
    [aux_sym_numeric_system_function_token15] = ACTIONS(21),
    [aux_sym_numeric_system_function_token16] = ACTIONS(21),
    [aux_sym_numeric_system_function_token17] = ACTIONS(21),
    [aux_sym_numeric_system_function_token18] = ACTIONS(21),
    [aux_sym_numeric_system_function_token19] = ACTIONS(21),
    [aux_sym_numeric_system_function_token20] = ACTIONS(21),
    [aux_sym_numeric_system_function_token21] = ACTIONS(21),
    [aux_sym_numeric_system_function_token22] = ACTIONS(21),
    [aux_sym_numeric_system_function_token23] = ACTIONS(21),
    [aux_sym_numeric_system_function_token24] = ACTIONS(21),
    [aux_sym_numeric_system_function_token25] = ACTIONS(21),
    [aux_sym_numeric_system_function_token26] = ACTIONS(21),
    [aux_sym_numeric_system_function_token27] = ACTIONS(21),
    [aux_sym_numeric_system_function_token28] = ACTIONS(21),
    [aux_sym_numeric_system_function_token29] = ACTIONS(21),
    [aux_sym_numeric_system_function_token30] = ACTIONS(21),
    [aux_sym_numeric_system_function_token31] = ACTIONS(21),
    [aux_sym_numeric_system_function_token32] = ACTIONS(21),
    [aux_sym_numeric_system_function_token33] = ACTIONS(21),
    [aux_sym_numeric_system_function_token34] = ACTIONS(21),
    [aux_sym_numeric_system_function_token35] = ACTIONS(21),
    [aux_sym_numeric_system_function_token36] = ACTIONS(21),
    [aux_sym_numeric_system_function_token37] = ACTIONS(21),
    [aux_sym_numeric_system_function_token38] = ACTIONS(21),
    [aux_sym_numeric_system_function_token39] = ACTIONS(21),
    [aux_sym_numeric_system_function_token40] = ACTIONS(21),
    [aux_sym_numeric_system_function_token41] = ACTIONS(21),
    [aux_sym_numeric_system_function_token42] = ACTIONS(21),
    [aux_sym_numeric_system_function_token43] = ACTIONS(21),
    [aux_sym_numeric_system_function_token44] = ACTIONS(21),
    [aux_sym_numeric_system_function_token45] = ACTIONS(21),
    [aux_sym_numeric_system_function_token46] = ACTIONS(21),
    [aux_sym_numeric_system_function_token47] = ACTIONS(21),
    [aux_sym_numeric_system_function_token48] = ACTIONS(21),
    [aux_sym_numeric_system_function_token49] = ACTIONS(21),
    [aux_sym_numeric_system_function_token50] = ACTIONS(21),
    [aux_sym_numeric_system_function_token51] = ACTIONS(21),
    [aux_sym_numeric_system_function_token52] = ACTIONS(21),
    [aux_sym_numeric_system_function_token53] = ACTIONS(21),
    [aux_sym_numeric_system_function_token54] = ACTIONS(21),
    [aux_sym_numeric_system_function_token55] = ACTIONS(21),
    [aux_sym_numeric_system_function_token56] = ACTIONS(21),
    [aux_sym_numeric_system_function_token57] = ACTIONS(21),
    [aux_sym_numeric_system_function_token58] = ACTIONS(21),
    [aux_sym_numeric_system_function_token59] = ACTIONS(21),
    [aux_sym_numeric_system_function_token60] = ACTIONS(21),
    [aux_sym_numeric_system_function_token61] = ACTIONS(21),
    [aux_sym_numeric_system_function_token62] = ACTIONS(21),
    [aux_sym_numeric_system_function_token63] = ACTIONS(21),
    [aux_sym_numeric_system_function_token64] = ACTIONS(21),
    [aux_sym_numeric_system_function_token65] = ACTIONS(21),
    [aux_sym_numeric_system_function_token66] = ACTIONS(21),
    [aux_sym_numeric_system_function_token67] = ACTIONS(21),
    [aux_sym_numeric_system_function_token68] = ACTIONS(21),
    [aux_sym_numeric_system_function_token69] = ACTIONS(21),
    [aux_sym_numeric_system_function_token70] = ACTIONS(21),
    [aux_sym_numeric_system_function_token71] = ACTIONS(21),
    [aux_sym_numeric_system_function_token72] = ACTIONS(21),
    [aux_sym_numeric_system_function_token73] = ACTIONS(21),
    [aux_sym_numeric_system_function_token74] = ACTIONS(21),
    [aux_sym_numeric_system_function_token75] = ACTIONS(21),
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(37),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [27] = {
    [sym_numeric_expression] = STATE(92),
    [sym_numeric_binary_expression] = STATE(89),
    [sym_numeric_unary_expression] = STATE(89),
    [sym_numeric_primary_expression] = STATE(89),
    [sym_numeric_call_expression] = STATE(78),
    [sym_numeric_system_function] = STATE(93),
    [sym_numeric_user_function] = STATE(93),
    [sym_parenthesized_expression] = STATE(78),
    [sym_numeric_forced_assignment_expression] = STATE(89),
    [sym__numeric_reference] = STATE(65),
    [sym_numberelement] = STATE(65),
    [sym_numberreference] = STATE(65),
    [sym_number] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(19),
    [aux_sym_numeric_system_function_token1] = ACTIONS(21),
    [aux_sym_numeric_system_function_token2] = ACTIONS(21),
    [aux_sym_numeric_system_function_token3] = ACTIONS(21),
    [aux_sym_numeric_system_function_token4] = ACTIONS(21),
    [aux_sym_numeric_system_function_token5] = ACTIONS(21),
    [aux_sym_numeric_system_function_token6] = ACTIONS(21),
    [aux_sym_numeric_system_function_token7] = ACTIONS(21),
    [aux_sym_numeric_system_function_token8] = ACTIONS(21),
    [aux_sym_numeric_system_function_token9] = ACTIONS(21),
    [aux_sym_numeric_system_function_token10] = ACTIONS(21),
    [aux_sym_numeric_system_function_token11] = ACTIONS(21),
    [aux_sym_numeric_system_function_token12] = ACTIONS(21),
    [aux_sym_numeric_system_function_token13] = ACTIONS(21),
    [aux_sym_numeric_system_function_token14] = ACTIONS(21),
    [aux_sym_numeric_system_function_token15] = ACTIONS(21),
    [aux_sym_numeric_system_function_token16] = ACTIONS(21),
    [aux_sym_numeric_system_function_token17] = ACTIONS(21),
    [aux_sym_numeric_system_function_token18] = ACTIONS(21),
    [aux_sym_numeric_system_function_token19] = ACTIONS(21),
    [aux_sym_numeric_system_function_token20] = ACTIONS(21),
    [aux_sym_numeric_system_function_token21] = ACTIONS(21),
    [aux_sym_numeric_system_function_token22] = ACTIONS(21),
    [aux_sym_numeric_system_function_token23] = ACTIONS(21),
    [aux_sym_numeric_system_function_token24] = ACTIONS(21),
    [aux_sym_numeric_system_function_token25] = ACTIONS(21),
    [aux_sym_numeric_system_function_token26] = ACTIONS(21),
    [aux_sym_numeric_system_function_token27] = ACTIONS(21),
    [aux_sym_numeric_system_function_token28] = ACTIONS(21),
    [aux_sym_numeric_system_function_token29] = ACTIONS(21),
    [aux_sym_numeric_system_function_token30] = ACTIONS(21),
    [aux_sym_numeric_system_function_token31] = ACTIONS(21),
    [aux_sym_numeric_system_function_token32] = ACTIONS(21),
    [aux_sym_numeric_system_function_token33] = ACTIONS(21),
    [aux_sym_numeric_system_function_token34] = ACTIONS(21),
    [aux_sym_numeric_system_function_token35] = ACTIONS(21),
    [aux_sym_numeric_system_function_token36] = ACTIONS(21),
    [aux_sym_numeric_system_function_token37] = ACTIONS(21),
    [aux_sym_numeric_system_function_token38] = ACTIONS(21),
    [aux_sym_numeric_system_function_token39] = ACTIONS(21),
    [aux_sym_numeric_system_function_token40] = ACTIONS(21),
    [aux_sym_numeric_system_function_token41] = ACTIONS(21),
    [aux_sym_numeric_system_function_token42] = ACTIONS(21),
    [aux_sym_numeric_system_function_token43] = ACTIONS(21),
    [aux_sym_numeric_system_function_token44] = ACTIONS(21),
    [aux_sym_numeric_system_function_token45] = ACTIONS(21),
    [aux_sym_numeric_system_function_token46] = ACTIONS(21),
    [aux_sym_numeric_system_function_token47] = ACTIONS(21),
    [aux_sym_numeric_system_function_token48] = ACTIONS(21),
    [aux_sym_numeric_system_function_token49] = ACTIONS(21),
    [aux_sym_numeric_system_function_token50] = ACTIONS(21),
    [aux_sym_numeric_system_function_token51] = ACTIONS(21),
    [aux_sym_numeric_system_function_token52] = ACTIONS(21),
    [aux_sym_numeric_system_function_token53] = ACTIONS(21),
    [aux_sym_numeric_system_function_token54] = ACTIONS(21),
    [aux_sym_numeric_system_function_token55] = ACTIONS(21),
    [aux_sym_numeric_system_function_token56] = ACTIONS(21),
    [aux_sym_numeric_system_function_token57] = ACTIONS(21),
    [aux_sym_numeric_system_function_token58] = ACTIONS(21),
    [aux_sym_numeric_system_function_token59] = ACTIONS(21),
    [aux_sym_numeric_system_function_token60] = ACTIONS(21),
    [aux_sym_numeric_system_function_token61] = ACTIONS(21),
    [aux_sym_numeric_system_function_token62] = ACTIONS(21),
    [aux_sym_numeric_system_function_token63] = ACTIONS(21),
    [aux_sym_numeric_system_function_token64] = ACTIONS(21),
    [aux_sym_numeric_system_function_token65] = ACTIONS(21),
    [aux_sym_numeric_system_function_token66] = ACTIONS(21),
    [aux_sym_numeric_system_function_token67] = ACTIONS(21),
    [aux_sym_numeric_system_function_token68] = ACTIONS(21),
    [aux_sym_numeric_system_function_token69] = ACTIONS(21),
    [aux_sym_numeric_system_function_token70] = ACTIONS(21),
    [aux_sym_numeric_system_function_token71] = ACTIONS(21),
    [aux_sym_numeric_system_function_token72] = ACTIONS(21),
    [aux_sym_numeric_system_function_token73] = ACTIONS(21),
    [aux_sym_numeric_system_function_token74] = ACTIONS(21),
    [aux_sym_numeric_system_function_token75] = ACTIONS(21),
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(37),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [28] = {
    [sym_numeric_expression] = STATE(122),
    [sym_numeric_binary_expression] = STATE(101),
    [sym_numeric_unary_expression] = STATE(101),
    [sym_numeric_primary_expression] = STATE(101),
    [sym_numeric_call_expression] = STATE(100),
    [sym_numeric_system_function] = STATE(99),
    [sym_numeric_user_function] = STATE(99),
    [sym_parenthesized_expression] = STATE(100),
    [sym_numeric_forced_assignment_expression] = STATE(101),
    [sym__numeric_reference] = STATE(66),
    [sym_numberelement] = STATE(66),
    [sym_numberreference] = STATE(66),
    [sym_number] = STATE(100),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(45),
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(47),
    [aux_sym_numeric_system_function_token1] = ACTIONS(49),
    [aux_sym_numeric_system_function_token2] = ACTIONS(49),
    [aux_sym_numeric_system_function_token3] = ACTIONS(49),
    [aux_sym_numeric_system_function_token4] = ACTIONS(49),
    [aux_sym_numeric_system_function_token5] = ACTIONS(49),
    [aux_sym_numeric_system_function_token6] = ACTIONS(49),
    [aux_sym_numeric_system_function_token7] = ACTIONS(49),
    [aux_sym_numeric_system_function_token8] = ACTIONS(49),
    [aux_sym_numeric_system_function_token9] = ACTIONS(49),
    [aux_sym_numeric_system_function_token10] = ACTIONS(49),
    [aux_sym_numeric_system_function_token11] = ACTIONS(49),
    [aux_sym_numeric_system_function_token12] = ACTIONS(49),
    [aux_sym_numeric_system_function_token13] = ACTIONS(49),
    [aux_sym_numeric_system_function_token14] = ACTIONS(49),
    [aux_sym_numeric_system_function_token15] = ACTIONS(49),
    [aux_sym_numeric_system_function_token16] = ACTIONS(49),
    [aux_sym_numeric_system_function_token17] = ACTIONS(49),
    [aux_sym_numeric_system_function_token18] = ACTIONS(49),
    [aux_sym_numeric_system_function_token19] = ACTIONS(49),
    [aux_sym_numeric_system_function_token20] = ACTIONS(49),
    [aux_sym_numeric_system_function_token21] = ACTIONS(49),
    [aux_sym_numeric_system_function_token22] = ACTIONS(49),
    [aux_sym_numeric_system_function_token23] = ACTIONS(49),
    [aux_sym_numeric_system_function_token24] = ACTIONS(49),
    [aux_sym_numeric_system_function_token25] = ACTIONS(49),
    [aux_sym_numeric_system_function_token26] = ACTIONS(49),
    [aux_sym_numeric_system_function_token27] = ACTIONS(49),
    [aux_sym_numeric_system_function_token28] = ACTIONS(49),
    [aux_sym_numeric_system_function_token29] = ACTIONS(49),
    [aux_sym_numeric_system_function_token30] = ACTIONS(49),
    [aux_sym_numeric_system_function_token31] = ACTIONS(49),
    [aux_sym_numeric_system_function_token32] = ACTIONS(49),
    [aux_sym_numeric_system_function_token33] = ACTIONS(49),
    [aux_sym_numeric_system_function_token34] = ACTIONS(49),
    [aux_sym_numeric_system_function_token35] = ACTIONS(49),
    [aux_sym_numeric_system_function_token36] = ACTIONS(49),
    [aux_sym_numeric_system_function_token37] = ACTIONS(49),
    [aux_sym_numeric_system_function_token38] = ACTIONS(49),
    [aux_sym_numeric_system_function_token39] = ACTIONS(49),
    [aux_sym_numeric_system_function_token40] = ACTIONS(49),
    [aux_sym_numeric_system_function_token41] = ACTIONS(49),
    [aux_sym_numeric_system_function_token42] = ACTIONS(49),
    [aux_sym_numeric_system_function_token43] = ACTIONS(49),
    [aux_sym_numeric_system_function_token44] = ACTIONS(49),
    [aux_sym_numeric_system_function_token45] = ACTIONS(49),
    [aux_sym_numeric_system_function_token46] = ACTIONS(49),
    [aux_sym_numeric_system_function_token47] = ACTIONS(49),
    [aux_sym_numeric_system_function_token48] = ACTIONS(49),
    [aux_sym_numeric_system_function_token49] = ACTIONS(49),
    [aux_sym_numeric_system_function_token50] = ACTIONS(49),
    [aux_sym_numeric_system_function_token51] = ACTIONS(49),
    [aux_sym_numeric_system_function_token52] = ACTIONS(49),
    [aux_sym_numeric_system_function_token53] = ACTIONS(49),
    [aux_sym_numeric_system_function_token54] = ACTIONS(49),
    [aux_sym_numeric_system_function_token55] = ACTIONS(49),
    [aux_sym_numeric_system_function_token56] = ACTIONS(49),
    [aux_sym_numeric_system_function_token57] = ACTIONS(49),
    [aux_sym_numeric_system_function_token58] = ACTIONS(49),
    [aux_sym_numeric_system_function_token59] = ACTIONS(49),
    [aux_sym_numeric_system_function_token60] = ACTIONS(49),
    [aux_sym_numeric_system_function_token61] = ACTIONS(49),
    [aux_sym_numeric_system_function_token62] = ACTIONS(49),
    [aux_sym_numeric_system_function_token63] = ACTIONS(49),
    [aux_sym_numeric_system_function_token64] = ACTIONS(49),
    [aux_sym_numeric_system_function_token65] = ACTIONS(49),
    [aux_sym_numeric_system_function_token66] = ACTIONS(49),
    [aux_sym_numeric_system_function_token67] = ACTIONS(49),
    [aux_sym_numeric_system_function_token68] = ACTIONS(49),
    [aux_sym_numeric_system_function_token69] = ACTIONS(49),
    [aux_sym_numeric_system_function_token70] = ACTIONS(49),
    [aux_sym_numeric_system_function_token71] = ACTIONS(49),
    [aux_sym_numeric_system_function_token72] = ACTIONS(49),
    [aux_sym_numeric_system_function_token73] = ACTIONS(49),
    [aux_sym_numeric_system_function_token74] = ACTIONS(49),
    [aux_sym_numeric_system_function_token75] = ACTIONS(49),
    [sym__numeric_function_identifier] = ACTIONS(75),
    [sym_numberidentifier] = ACTIONS(65),
    [aux_sym_number_token1] = ACTIONS(69),
  },
  [29] = {
    [sym_numeric_expression] = STATE(91),
    [sym_numeric_binary_expression] = STATE(89),
    [sym_numeric_unary_expression] = STATE(89),
    [sym_numeric_primary_expression] = STATE(89),
    [sym_numeric_call_expression] = STATE(78),
    [sym_numeric_system_function] = STATE(93),
    [sym_numeric_user_function] = STATE(93),
    [sym_parenthesized_expression] = STATE(78),
    [sym_numeric_forced_assignment_expression] = STATE(89),
    [sym__numeric_reference] = STATE(65),
    [sym_numberelement] = STATE(65),
    [sym_numberreference] = STATE(65),
    [sym_number] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(19),
    [aux_sym_numeric_system_function_token1] = ACTIONS(21),
    [aux_sym_numeric_system_function_token2] = ACTIONS(21),
    [aux_sym_numeric_system_function_token3] = ACTIONS(21),
    [aux_sym_numeric_system_function_token4] = ACTIONS(21),
    [aux_sym_numeric_system_function_token5] = ACTIONS(21),
    [aux_sym_numeric_system_function_token6] = ACTIONS(21),
    [aux_sym_numeric_system_function_token7] = ACTIONS(21),
    [aux_sym_numeric_system_function_token8] = ACTIONS(21),
    [aux_sym_numeric_system_function_token9] = ACTIONS(21),
    [aux_sym_numeric_system_function_token10] = ACTIONS(21),
    [aux_sym_numeric_system_function_token11] = ACTIONS(21),
    [aux_sym_numeric_system_function_token12] = ACTIONS(21),
    [aux_sym_numeric_system_function_token13] = ACTIONS(21),
    [aux_sym_numeric_system_function_token14] = ACTIONS(21),
    [aux_sym_numeric_system_function_token15] = ACTIONS(21),
    [aux_sym_numeric_system_function_token16] = ACTIONS(21),
    [aux_sym_numeric_system_function_token17] = ACTIONS(21),
    [aux_sym_numeric_system_function_token18] = ACTIONS(21),
    [aux_sym_numeric_system_function_token19] = ACTIONS(21),
    [aux_sym_numeric_system_function_token20] = ACTIONS(21),
    [aux_sym_numeric_system_function_token21] = ACTIONS(21),
    [aux_sym_numeric_system_function_token22] = ACTIONS(21),
    [aux_sym_numeric_system_function_token23] = ACTIONS(21),
    [aux_sym_numeric_system_function_token24] = ACTIONS(21),
    [aux_sym_numeric_system_function_token25] = ACTIONS(21),
    [aux_sym_numeric_system_function_token26] = ACTIONS(21),
    [aux_sym_numeric_system_function_token27] = ACTIONS(21),
    [aux_sym_numeric_system_function_token28] = ACTIONS(21),
    [aux_sym_numeric_system_function_token29] = ACTIONS(21),
    [aux_sym_numeric_system_function_token30] = ACTIONS(21),
    [aux_sym_numeric_system_function_token31] = ACTIONS(21),
    [aux_sym_numeric_system_function_token32] = ACTIONS(21),
    [aux_sym_numeric_system_function_token33] = ACTIONS(21),
    [aux_sym_numeric_system_function_token34] = ACTIONS(21),
    [aux_sym_numeric_system_function_token35] = ACTIONS(21),
    [aux_sym_numeric_system_function_token36] = ACTIONS(21),
    [aux_sym_numeric_system_function_token37] = ACTIONS(21),
    [aux_sym_numeric_system_function_token38] = ACTIONS(21),
    [aux_sym_numeric_system_function_token39] = ACTIONS(21),
    [aux_sym_numeric_system_function_token40] = ACTIONS(21),
    [aux_sym_numeric_system_function_token41] = ACTIONS(21),
    [aux_sym_numeric_system_function_token42] = ACTIONS(21),
    [aux_sym_numeric_system_function_token43] = ACTIONS(21),
    [aux_sym_numeric_system_function_token44] = ACTIONS(21),
    [aux_sym_numeric_system_function_token45] = ACTIONS(21),
    [aux_sym_numeric_system_function_token46] = ACTIONS(21),
    [aux_sym_numeric_system_function_token47] = ACTIONS(21),
    [aux_sym_numeric_system_function_token48] = ACTIONS(21),
    [aux_sym_numeric_system_function_token49] = ACTIONS(21),
    [aux_sym_numeric_system_function_token50] = ACTIONS(21),
    [aux_sym_numeric_system_function_token51] = ACTIONS(21),
    [aux_sym_numeric_system_function_token52] = ACTIONS(21),
    [aux_sym_numeric_system_function_token53] = ACTIONS(21),
    [aux_sym_numeric_system_function_token54] = ACTIONS(21),
    [aux_sym_numeric_system_function_token55] = ACTIONS(21),
    [aux_sym_numeric_system_function_token56] = ACTIONS(21),
    [aux_sym_numeric_system_function_token57] = ACTIONS(21),
    [aux_sym_numeric_system_function_token58] = ACTIONS(21),
    [aux_sym_numeric_system_function_token59] = ACTIONS(21),
    [aux_sym_numeric_system_function_token60] = ACTIONS(21),
    [aux_sym_numeric_system_function_token61] = ACTIONS(21),
    [aux_sym_numeric_system_function_token62] = ACTIONS(21),
    [aux_sym_numeric_system_function_token63] = ACTIONS(21),
    [aux_sym_numeric_system_function_token64] = ACTIONS(21),
    [aux_sym_numeric_system_function_token65] = ACTIONS(21),
    [aux_sym_numeric_system_function_token66] = ACTIONS(21),
    [aux_sym_numeric_system_function_token67] = ACTIONS(21),
    [aux_sym_numeric_system_function_token68] = ACTIONS(21),
    [aux_sym_numeric_system_function_token69] = ACTIONS(21),
    [aux_sym_numeric_system_function_token70] = ACTIONS(21),
    [aux_sym_numeric_system_function_token71] = ACTIONS(21),
    [aux_sym_numeric_system_function_token72] = ACTIONS(21),
    [aux_sym_numeric_system_function_token73] = ACTIONS(21),
    [aux_sym_numeric_system_function_token74] = ACTIONS(21),
    [aux_sym_numeric_system_function_token75] = ACTIONS(21),
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(37),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [30] = {
    [sym_numeric_expression] = STATE(90),
    [sym_numeric_binary_expression] = STATE(89),
    [sym_numeric_unary_expression] = STATE(89),
    [sym_numeric_primary_expression] = STATE(89),
    [sym_numeric_call_expression] = STATE(78),
    [sym_numeric_system_function] = STATE(93),
    [sym_numeric_user_function] = STATE(93),
    [sym_parenthesized_expression] = STATE(78),
    [sym_numeric_forced_assignment_expression] = STATE(89),
    [sym__numeric_reference] = STATE(65),
    [sym_numberelement] = STATE(65),
    [sym_numberreference] = STATE(65),
    [sym_number] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(19),
    [aux_sym_numeric_system_function_token1] = ACTIONS(21),
    [aux_sym_numeric_system_function_token2] = ACTIONS(21),
    [aux_sym_numeric_system_function_token3] = ACTIONS(21),
    [aux_sym_numeric_system_function_token4] = ACTIONS(21),
    [aux_sym_numeric_system_function_token5] = ACTIONS(21),
    [aux_sym_numeric_system_function_token6] = ACTIONS(21),
    [aux_sym_numeric_system_function_token7] = ACTIONS(21),
    [aux_sym_numeric_system_function_token8] = ACTIONS(21),
    [aux_sym_numeric_system_function_token9] = ACTIONS(21),
    [aux_sym_numeric_system_function_token10] = ACTIONS(21),
    [aux_sym_numeric_system_function_token11] = ACTIONS(21),
    [aux_sym_numeric_system_function_token12] = ACTIONS(21),
    [aux_sym_numeric_system_function_token13] = ACTIONS(21),
    [aux_sym_numeric_system_function_token14] = ACTIONS(21),
    [aux_sym_numeric_system_function_token15] = ACTIONS(21),
    [aux_sym_numeric_system_function_token16] = ACTIONS(21),
    [aux_sym_numeric_system_function_token17] = ACTIONS(21),
    [aux_sym_numeric_system_function_token18] = ACTIONS(21),
    [aux_sym_numeric_system_function_token19] = ACTIONS(21),
    [aux_sym_numeric_system_function_token20] = ACTIONS(21),
    [aux_sym_numeric_system_function_token21] = ACTIONS(21),
    [aux_sym_numeric_system_function_token22] = ACTIONS(21),
    [aux_sym_numeric_system_function_token23] = ACTIONS(21),
    [aux_sym_numeric_system_function_token24] = ACTIONS(21),
    [aux_sym_numeric_system_function_token25] = ACTIONS(21),
    [aux_sym_numeric_system_function_token26] = ACTIONS(21),
    [aux_sym_numeric_system_function_token27] = ACTIONS(21),
    [aux_sym_numeric_system_function_token28] = ACTIONS(21),
    [aux_sym_numeric_system_function_token29] = ACTIONS(21),
    [aux_sym_numeric_system_function_token30] = ACTIONS(21),
    [aux_sym_numeric_system_function_token31] = ACTIONS(21),
    [aux_sym_numeric_system_function_token32] = ACTIONS(21),
    [aux_sym_numeric_system_function_token33] = ACTIONS(21),
    [aux_sym_numeric_system_function_token34] = ACTIONS(21),
    [aux_sym_numeric_system_function_token35] = ACTIONS(21),
    [aux_sym_numeric_system_function_token36] = ACTIONS(21),
    [aux_sym_numeric_system_function_token37] = ACTIONS(21),
    [aux_sym_numeric_system_function_token38] = ACTIONS(21),
    [aux_sym_numeric_system_function_token39] = ACTIONS(21),
    [aux_sym_numeric_system_function_token40] = ACTIONS(21),
    [aux_sym_numeric_system_function_token41] = ACTIONS(21),
    [aux_sym_numeric_system_function_token42] = ACTIONS(21),
    [aux_sym_numeric_system_function_token43] = ACTIONS(21),
    [aux_sym_numeric_system_function_token44] = ACTIONS(21),
    [aux_sym_numeric_system_function_token45] = ACTIONS(21),
    [aux_sym_numeric_system_function_token46] = ACTIONS(21),
    [aux_sym_numeric_system_function_token47] = ACTIONS(21),
    [aux_sym_numeric_system_function_token48] = ACTIONS(21),
    [aux_sym_numeric_system_function_token49] = ACTIONS(21),
    [aux_sym_numeric_system_function_token50] = ACTIONS(21),
    [aux_sym_numeric_system_function_token51] = ACTIONS(21),
    [aux_sym_numeric_system_function_token52] = ACTIONS(21),
    [aux_sym_numeric_system_function_token53] = ACTIONS(21),
    [aux_sym_numeric_system_function_token54] = ACTIONS(21),
    [aux_sym_numeric_system_function_token55] = ACTIONS(21),
    [aux_sym_numeric_system_function_token56] = ACTIONS(21),
    [aux_sym_numeric_system_function_token57] = ACTIONS(21),
    [aux_sym_numeric_system_function_token58] = ACTIONS(21),
    [aux_sym_numeric_system_function_token59] = ACTIONS(21),
    [aux_sym_numeric_system_function_token60] = ACTIONS(21),
    [aux_sym_numeric_system_function_token61] = ACTIONS(21),
    [aux_sym_numeric_system_function_token62] = ACTIONS(21),
    [aux_sym_numeric_system_function_token63] = ACTIONS(21),
    [aux_sym_numeric_system_function_token64] = ACTIONS(21),
    [aux_sym_numeric_system_function_token65] = ACTIONS(21),
    [aux_sym_numeric_system_function_token66] = ACTIONS(21),
    [aux_sym_numeric_system_function_token67] = ACTIONS(21),
    [aux_sym_numeric_system_function_token68] = ACTIONS(21),
    [aux_sym_numeric_system_function_token69] = ACTIONS(21),
    [aux_sym_numeric_system_function_token70] = ACTIONS(21),
    [aux_sym_numeric_system_function_token71] = ACTIONS(21),
    [aux_sym_numeric_system_function_token72] = ACTIONS(21),
    [aux_sym_numeric_system_function_token73] = ACTIONS(21),
    [aux_sym_numeric_system_function_token74] = ACTIONS(21),
    [aux_sym_numeric_system_function_token75] = ACTIONS(21),
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(37),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [31] = {
    [sym_numeric_expression] = STATE(133),
    [sym_numeric_binary_expression] = STATE(89),
    [sym_numeric_unary_expression] = STATE(89),
    [sym_numeric_primary_expression] = STATE(89),
    [sym_numeric_call_expression] = STATE(78),
    [sym_numeric_system_function] = STATE(93),
    [sym_numeric_user_function] = STATE(93),
    [sym_parenthesized_expression] = STATE(78),
    [sym_numeric_forced_assignment_expression] = STATE(89),
    [sym__numeric_reference] = STATE(65),
    [sym_numberelement] = STATE(65),
    [sym_numberreference] = STATE(65),
    [sym_number] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(19),
    [aux_sym_numeric_system_function_token1] = ACTIONS(21),
    [aux_sym_numeric_system_function_token2] = ACTIONS(21),
    [aux_sym_numeric_system_function_token3] = ACTIONS(21),
    [aux_sym_numeric_system_function_token4] = ACTIONS(21),
    [aux_sym_numeric_system_function_token5] = ACTIONS(21),
    [aux_sym_numeric_system_function_token6] = ACTIONS(21),
    [aux_sym_numeric_system_function_token7] = ACTIONS(21),
    [aux_sym_numeric_system_function_token8] = ACTIONS(21),
    [aux_sym_numeric_system_function_token9] = ACTIONS(21),
    [aux_sym_numeric_system_function_token10] = ACTIONS(21),
    [aux_sym_numeric_system_function_token11] = ACTIONS(21),
    [aux_sym_numeric_system_function_token12] = ACTIONS(21),
    [aux_sym_numeric_system_function_token13] = ACTIONS(21),
    [aux_sym_numeric_system_function_token14] = ACTIONS(21),
    [aux_sym_numeric_system_function_token15] = ACTIONS(21),
    [aux_sym_numeric_system_function_token16] = ACTIONS(21),
    [aux_sym_numeric_system_function_token17] = ACTIONS(21),
    [aux_sym_numeric_system_function_token18] = ACTIONS(21),
    [aux_sym_numeric_system_function_token19] = ACTIONS(21),
    [aux_sym_numeric_system_function_token20] = ACTIONS(21),
    [aux_sym_numeric_system_function_token21] = ACTIONS(21),
    [aux_sym_numeric_system_function_token22] = ACTIONS(21),
    [aux_sym_numeric_system_function_token23] = ACTIONS(21),
    [aux_sym_numeric_system_function_token24] = ACTIONS(21),
    [aux_sym_numeric_system_function_token25] = ACTIONS(21),
    [aux_sym_numeric_system_function_token26] = ACTIONS(21),
    [aux_sym_numeric_system_function_token27] = ACTIONS(21),
    [aux_sym_numeric_system_function_token28] = ACTIONS(21),
    [aux_sym_numeric_system_function_token29] = ACTIONS(21),
    [aux_sym_numeric_system_function_token30] = ACTIONS(21),
    [aux_sym_numeric_system_function_token31] = ACTIONS(21),
    [aux_sym_numeric_system_function_token32] = ACTIONS(21),
    [aux_sym_numeric_system_function_token33] = ACTIONS(21),
    [aux_sym_numeric_system_function_token34] = ACTIONS(21),
    [aux_sym_numeric_system_function_token35] = ACTIONS(21),
    [aux_sym_numeric_system_function_token36] = ACTIONS(21),
    [aux_sym_numeric_system_function_token37] = ACTIONS(21),
    [aux_sym_numeric_system_function_token38] = ACTIONS(21),
    [aux_sym_numeric_system_function_token39] = ACTIONS(21),
    [aux_sym_numeric_system_function_token40] = ACTIONS(21),
    [aux_sym_numeric_system_function_token41] = ACTIONS(21),
    [aux_sym_numeric_system_function_token42] = ACTIONS(21),
    [aux_sym_numeric_system_function_token43] = ACTIONS(21),
    [aux_sym_numeric_system_function_token44] = ACTIONS(21),
    [aux_sym_numeric_system_function_token45] = ACTIONS(21),
    [aux_sym_numeric_system_function_token46] = ACTIONS(21),
    [aux_sym_numeric_system_function_token47] = ACTIONS(21),
    [aux_sym_numeric_system_function_token48] = ACTIONS(21),
    [aux_sym_numeric_system_function_token49] = ACTIONS(21),
    [aux_sym_numeric_system_function_token50] = ACTIONS(21),
    [aux_sym_numeric_system_function_token51] = ACTIONS(21),
    [aux_sym_numeric_system_function_token52] = ACTIONS(21),
    [aux_sym_numeric_system_function_token53] = ACTIONS(21),
    [aux_sym_numeric_system_function_token54] = ACTIONS(21),
    [aux_sym_numeric_system_function_token55] = ACTIONS(21),
    [aux_sym_numeric_system_function_token56] = ACTIONS(21),
    [aux_sym_numeric_system_function_token57] = ACTIONS(21),
    [aux_sym_numeric_system_function_token58] = ACTIONS(21),
    [aux_sym_numeric_system_function_token59] = ACTIONS(21),
    [aux_sym_numeric_system_function_token60] = ACTIONS(21),
    [aux_sym_numeric_system_function_token61] = ACTIONS(21),
    [aux_sym_numeric_system_function_token62] = ACTIONS(21),
    [aux_sym_numeric_system_function_token63] = ACTIONS(21),
    [aux_sym_numeric_system_function_token64] = ACTIONS(21),
    [aux_sym_numeric_system_function_token65] = ACTIONS(21),
    [aux_sym_numeric_system_function_token66] = ACTIONS(21),
    [aux_sym_numeric_system_function_token67] = ACTIONS(21),
    [aux_sym_numeric_system_function_token68] = ACTIONS(21),
    [aux_sym_numeric_system_function_token69] = ACTIONS(21),
    [aux_sym_numeric_system_function_token70] = ACTIONS(21),
    [aux_sym_numeric_system_function_token71] = ACTIONS(21),
    [aux_sym_numeric_system_function_token72] = ACTIONS(21),
    [aux_sym_numeric_system_function_token73] = ACTIONS(21),
    [aux_sym_numeric_system_function_token74] = ACTIONS(21),
    [aux_sym_numeric_system_function_token75] = ACTIONS(21),
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(37),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [32] = {
    [sym_numeric_expression] = STATE(104),
    [sym_numeric_binary_expression] = STATE(101),
    [sym_numeric_unary_expression] = STATE(101),
    [sym_numeric_primary_expression] = STATE(101),
    [sym_numeric_call_expression] = STATE(100),
    [sym_numeric_system_function] = STATE(99),
    [sym_numeric_user_function] = STATE(99),
    [sym_parenthesized_expression] = STATE(100),
    [sym_numeric_forced_assignment_expression] = STATE(101),
    [sym__numeric_reference] = STATE(66),
    [sym_numberelement] = STATE(66),
    [sym_numberreference] = STATE(66),
    [sym_number] = STATE(100),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(45),
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(47),
    [aux_sym_numeric_system_function_token1] = ACTIONS(49),
    [aux_sym_numeric_system_function_token2] = ACTIONS(49),
    [aux_sym_numeric_system_function_token3] = ACTIONS(49),
    [aux_sym_numeric_system_function_token4] = ACTIONS(49),
    [aux_sym_numeric_system_function_token5] = ACTIONS(49),
    [aux_sym_numeric_system_function_token6] = ACTIONS(49),
    [aux_sym_numeric_system_function_token7] = ACTIONS(49),
    [aux_sym_numeric_system_function_token8] = ACTIONS(49),
    [aux_sym_numeric_system_function_token9] = ACTIONS(49),
    [aux_sym_numeric_system_function_token10] = ACTIONS(49),
    [aux_sym_numeric_system_function_token11] = ACTIONS(49),
    [aux_sym_numeric_system_function_token12] = ACTIONS(49),
    [aux_sym_numeric_system_function_token13] = ACTIONS(49),
    [aux_sym_numeric_system_function_token14] = ACTIONS(49),
    [aux_sym_numeric_system_function_token15] = ACTIONS(49),
    [aux_sym_numeric_system_function_token16] = ACTIONS(49),
    [aux_sym_numeric_system_function_token17] = ACTIONS(49),
    [aux_sym_numeric_system_function_token18] = ACTIONS(49),
    [aux_sym_numeric_system_function_token19] = ACTIONS(49),
    [aux_sym_numeric_system_function_token20] = ACTIONS(49),
    [aux_sym_numeric_system_function_token21] = ACTIONS(49),
    [aux_sym_numeric_system_function_token22] = ACTIONS(49),
    [aux_sym_numeric_system_function_token23] = ACTIONS(49),
    [aux_sym_numeric_system_function_token24] = ACTIONS(49),
    [aux_sym_numeric_system_function_token25] = ACTIONS(49),
    [aux_sym_numeric_system_function_token26] = ACTIONS(49),
    [aux_sym_numeric_system_function_token27] = ACTIONS(49),
    [aux_sym_numeric_system_function_token28] = ACTIONS(49),
    [aux_sym_numeric_system_function_token29] = ACTIONS(49),
    [aux_sym_numeric_system_function_token30] = ACTIONS(49),
    [aux_sym_numeric_system_function_token31] = ACTIONS(49),
    [aux_sym_numeric_system_function_token32] = ACTIONS(49),
    [aux_sym_numeric_system_function_token33] = ACTIONS(49),
    [aux_sym_numeric_system_function_token34] = ACTIONS(49),
    [aux_sym_numeric_system_function_token35] = ACTIONS(49),
    [aux_sym_numeric_system_function_token36] = ACTIONS(49),
    [aux_sym_numeric_system_function_token37] = ACTIONS(49),
    [aux_sym_numeric_system_function_token38] = ACTIONS(49),
    [aux_sym_numeric_system_function_token39] = ACTIONS(49),
    [aux_sym_numeric_system_function_token40] = ACTIONS(49),
    [aux_sym_numeric_system_function_token41] = ACTIONS(49),
    [aux_sym_numeric_system_function_token42] = ACTIONS(49),
    [aux_sym_numeric_system_function_token43] = ACTIONS(49),
    [aux_sym_numeric_system_function_token44] = ACTIONS(49),
    [aux_sym_numeric_system_function_token45] = ACTIONS(49),
    [aux_sym_numeric_system_function_token46] = ACTIONS(49),
    [aux_sym_numeric_system_function_token47] = ACTIONS(49),
    [aux_sym_numeric_system_function_token48] = ACTIONS(49),
    [aux_sym_numeric_system_function_token49] = ACTIONS(49),
    [aux_sym_numeric_system_function_token50] = ACTIONS(49),
    [aux_sym_numeric_system_function_token51] = ACTIONS(49),
    [aux_sym_numeric_system_function_token52] = ACTIONS(49),
    [aux_sym_numeric_system_function_token53] = ACTIONS(49),
    [aux_sym_numeric_system_function_token54] = ACTIONS(49),
    [aux_sym_numeric_system_function_token55] = ACTIONS(49),
    [aux_sym_numeric_system_function_token56] = ACTIONS(49),
    [aux_sym_numeric_system_function_token57] = ACTIONS(49),
    [aux_sym_numeric_system_function_token58] = ACTIONS(49),
    [aux_sym_numeric_system_function_token59] = ACTIONS(49),
    [aux_sym_numeric_system_function_token60] = ACTIONS(49),
    [aux_sym_numeric_system_function_token61] = ACTIONS(49),
    [aux_sym_numeric_system_function_token62] = ACTIONS(49),
    [aux_sym_numeric_system_function_token63] = ACTIONS(49),
    [aux_sym_numeric_system_function_token64] = ACTIONS(49),
    [aux_sym_numeric_system_function_token65] = ACTIONS(49),
    [aux_sym_numeric_system_function_token66] = ACTIONS(49),
    [aux_sym_numeric_system_function_token67] = ACTIONS(49),
    [aux_sym_numeric_system_function_token68] = ACTIONS(49),
    [aux_sym_numeric_system_function_token69] = ACTIONS(49),
    [aux_sym_numeric_system_function_token70] = ACTIONS(49),
    [aux_sym_numeric_system_function_token71] = ACTIONS(49),
    [aux_sym_numeric_system_function_token72] = ACTIONS(49),
    [aux_sym_numeric_system_function_token73] = ACTIONS(49),
    [aux_sym_numeric_system_function_token74] = ACTIONS(49),
    [aux_sym_numeric_system_function_token75] = ACTIONS(49),
    [sym__numeric_function_identifier] = ACTIONS(75),
    [sym_numberidentifier] = ACTIONS(65),
    [aux_sym_number_token1] = ACTIONS(69),
  },
  [33] = {
    [sym_numeric_expression] = STATE(126),
    [sym_numeric_binary_expression] = STATE(89),
    [sym_numeric_unary_expression] = STATE(89),
    [sym_numeric_primary_expression] = STATE(89),
    [sym_numeric_call_expression] = STATE(78),
    [sym_numeric_system_function] = STATE(93),
    [sym_numeric_user_function] = STATE(93),
    [sym_parenthesized_expression] = STATE(78),
    [sym_numeric_forced_assignment_expression] = STATE(89),
    [sym__numeric_reference] = STATE(65),
    [sym_numberelement] = STATE(65),
    [sym_numberreference] = STATE(65),
    [sym_number] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(19),
    [aux_sym_numeric_system_function_token1] = ACTIONS(21),
    [aux_sym_numeric_system_function_token2] = ACTIONS(21),
    [aux_sym_numeric_system_function_token3] = ACTIONS(21),
    [aux_sym_numeric_system_function_token4] = ACTIONS(21),
    [aux_sym_numeric_system_function_token5] = ACTIONS(21),
    [aux_sym_numeric_system_function_token6] = ACTIONS(21),
    [aux_sym_numeric_system_function_token7] = ACTIONS(21),
    [aux_sym_numeric_system_function_token8] = ACTIONS(21),
    [aux_sym_numeric_system_function_token9] = ACTIONS(21),
    [aux_sym_numeric_system_function_token10] = ACTIONS(21),
    [aux_sym_numeric_system_function_token11] = ACTIONS(21),
    [aux_sym_numeric_system_function_token12] = ACTIONS(21),
    [aux_sym_numeric_system_function_token13] = ACTIONS(21),
    [aux_sym_numeric_system_function_token14] = ACTIONS(21),
    [aux_sym_numeric_system_function_token15] = ACTIONS(21),
    [aux_sym_numeric_system_function_token16] = ACTIONS(21),
    [aux_sym_numeric_system_function_token17] = ACTIONS(21),
    [aux_sym_numeric_system_function_token18] = ACTIONS(21),
    [aux_sym_numeric_system_function_token19] = ACTIONS(21),
    [aux_sym_numeric_system_function_token20] = ACTIONS(21),
    [aux_sym_numeric_system_function_token21] = ACTIONS(21),
    [aux_sym_numeric_system_function_token22] = ACTIONS(21),
    [aux_sym_numeric_system_function_token23] = ACTIONS(21),
    [aux_sym_numeric_system_function_token24] = ACTIONS(21),
    [aux_sym_numeric_system_function_token25] = ACTIONS(21),
    [aux_sym_numeric_system_function_token26] = ACTIONS(21),
    [aux_sym_numeric_system_function_token27] = ACTIONS(21),
    [aux_sym_numeric_system_function_token28] = ACTIONS(21),
    [aux_sym_numeric_system_function_token29] = ACTIONS(21),
    [aux_sym_numeric_system_function_token30] = ACTIONS(21),
    [aux_sym_numeric_system_function_token31] = ACTIONS(21),
    [aux_sym_numeric_system_function_token32] = ACTIONS(21),
    [aux_sym_numeric_system_function_token33] = ACTIONS(21),
    [aux_sym_numeric_system_function_token34] = ACTIONS(21),
    [aux_sym_numeric_system_function_token35] = ACTIONS(21),
    [aux_sym_numeric_system_function_token36] = ACTIONS(21),
    [aux_sym_numeric_system_function_token37] = ACTIONS(21),
    [aux_sym_numeric_system_function_token38] = ACTIONS(21),
    [aux_sym_numeric_system_function_token39] = ACTIONS(21),
    [aux_sym_numeric_system_function_token40] = ACTIONS(21),
    [aux_sym_numeric_system_function_token41] = ACTIONS(21),
    [aux_sym_numeric_system_function_token42] = ACTIONS(21),
    [aux_sym_numeric_system_function_token43] = ACTIONS(21),
    [aux_sym_numeric_system_function_token44] = ACTIONS(21),
    [aux_sym_numeric_system_function_token45] = ACTIONS(21),
    [aux_sym_numeric_system_function_token46] = ACTIONS(21),
    [aux_sym_numeric_system_function_token47] = ACTIONS(21),
    [aux_sym_numeric_system_function_token48] = ACTIONS(21),
    [aux_sym_numeric_system_function_token49] = ACTIONS(21),
    [aux_sym_numeric_system_function_token50] = ACTIONS(21),
    [aux_sym_numeric_system_function_token51] = ACTIONS(21),
    [aux_sym_numeric_system_function_token52] = ACTIONS(21),
    [aux_sym_numeric_system_function_token53] = ACTIONS(21),
    [aux_sym_numeric_system_function_token54] = ACTIONS(21),
    [aux_sym_numeric_system_function_token55] = ACTIONS(21),
    [aux_sym_numeric_system_function_token56] = ACTIONS(21),
    [aux_sym_numeric_system_function_token57] = ACTIONS(21),
    [aux_sym_numeric_system_function_token58] = ACTIONS(21),
    [aux_sym_numeric_system_function_token59] = ACTIONS(21),
    [aux_sym_numeric_system_function_token60] = ACTIONS(21),
    [aux_sym_numeric_system_function_token61] = ACTIONS(21),
    [aux_sym_numeric_system_function_token62] = ACTIONS(21),
    [aux_sym_numeric_system_function_token63] = ACTIONS(21),
    [aux_sym_numeric_system_function_token64] = ACTIONS(21),
    [aux_sym_numeric_system_function_token65] = ACTIONS(21),
    [aux_sym_numeric_system_function_token66] = ACTIONS(21),
    [aux_sym_numeric_system_function_token67] = ACTIONS(21),
    [aux_sym_numeric_system_function_token68] = ACTIONS(21),
    [aux_sym_numeric_system_function_token69] = ACTIONS(21),
    [aux_sym_numeric_system_function_token70] = ACTIONS(21),
    [aux_sym_numeric_system_function_token71] = ACTIONS(21),
    [aux_sym_numeric_system_function_token72] = ACTIONS(21),
    [aux_sym_numeric_system_function_token73] = ACTIONS(21),
    [aux_sym_numeric_system_function_token74] = ACTIONS(21),
    [aux_sym_numeric_system_function_token75] = ACTIONS(21),
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(37),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [34] = {
    [sym_numeric_expression] = STATE(132),
    [sym_numeric_binary_expression] = STATE(89),
    [sym_numeric_unary_expression] = STATE(89),
    [sym_numeric_primary_expression] = STATE(89),
    [sym_numeric_call_expression] = STATE(78),
    [sym_numeric_system_function] = STATE(93),
    [sym_numeric_user_function] = STATE(93),
    [sym_parenthesized_expression] = STATE(78),
    [sym_numeric_forced_assignment_expression] = STATE(89),
    [sym__numeric_reference] = STATE(65),
    [sym_numberelement] = STATE(65),
    [sym_numberreference] = STATE(65),
    [sym_number] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(19),
    [aux_sym_numeric_system_function_token1] = ACTIONS(21),
    [aux_sym_numeric_system_function_token2] = ACTIONS(21),
    [aux_sym_numeric_system_function_token3] = ACTIONS(21),
    [aux_sym_numeric_system_function_token4] = ACTIONS(21),
    [aux_sym_numeric_system_function_token5] = ACTIONS(21),
    [aux_sym_numeric_system_function_token6] = ACTIONS(21),
    [aux_sym_numeric_system_function_token7] = ACTIONS(21),
    [aux_sym_numeric_system_function_token8] = ACTIONS(21),
    [aux_sym_numeric_system_function_token9] = ACTIONS(21),
    [aux_sym_numeric_system_function_token10] = ACTIONS(21),
    [aux_sym_numeric_system_function_token11] = ACTIONS(21),
    [aux_sym_numeric_system_function_token12] = ACTIONS(21),
    [aux_sym_numeric_system_function_token13] = ACTIONS(21),
    [aux_sym_numeric_system_function_token14] = ACTIONS(21),
    [aux_sym_numeric_system_function_token15] = ACTIONS(21),
    [aux_sym_numeric_system_function_token16] = ACTIONS(21),
    [aux_sym_numeric_system_function_token17] = ACTIONS(21),
    [aux_sym_numeric_system_function_token18] = ACTIONS(21),
    [aux_sym_numeric_system_function_token19] = ACTIONS(21),
    [aux_sym_numeric_system_function_token20] = ACTIONS(21),
    [aux_sym_numeric_system_function_token21] = ACTIONS(21),
    [aux_sym_numeric_system_function_token22] = ACTIONS(21),
    [aux_sym_numeric_system_function_token23] = ACTIONS(21),
    [aux_sym_numeric_system_function_token24] = ACTIONS(21),
    [aux_sym_numeric_system_function_token25] = ACTIONS(21),
    [aux_sym_numeric_system_function_token26] = ACTIONS(21),
    [aux_sym_numeric_system_function_token27] = ACTIONS(21),
    [aux_sym_numeric_system_function_token28] = ACTIONS(21),
    [aux_sym_numeric_system_function_token29] = ACTIONS(21),
    [aux_sym_numeric_system_function_token30] = ACTIONS(21),
    [aux_sym_numeric_system_function_token31] = ACTIONS(21),
    [aux_sym_numeric_system_function_token32] = ACTIONS(21),
    [aux_sym_numeric_system_function_token33] = ACTIONS(21),
    [aux_sym_numeric_system_function_token34] = ACTIONS(21),
    [aux_sym_numeric_system_function_token35] = ACTIONS(21),
    [aux_sym_numeric_system_function_token36] = ACTIONS(21),
    [aux_sym_numeric_system_function_token37] = ACTIONS(21),
    [aux_sym_numeric_system_function_token38] = ACTIONS(21),
    [aux_sym_numeric_system_function_token39] = ACTIONS(21),
    [aux_sym_numeric_system_function_token40] = ACTIONS(21),
    [aux_sym_numeric_system_function_token41] = ACTIONS(21),
    [aux_sym_numeric_system_function_token42] = ACTIONS(21),
    [aux_sym_numeric_system_function_token43] = ACTIONS(21),
    [aux_sym_numeric_system_function_token44] = ACTIONS(21),
    [aux_sym_numeric_system_function_token45] = ACTIONS(21),
    [aux_sym_numeric_system_function_token46] = ACTIONS(21),
    [aux_sym_numeric_system_function_token47] = ACTIONS(21),
    [aux_sym_numeric_system_function_token48] = ACTIONS(21),
    [aux_sym_numeric_system_function_token49] = ACTIONS(21),
    [aux_sym_numeric_system_function_token50] = ACTIONS(21),
    [aux_sym_numeric_system_function_token51] = ACTIONS(21),
    [aux_sym_numeric_system_function_token52] = ACTIONS(21),
    [aux_sym_numeric_system_function_token53] = ACTIONS(21),
    [aux_sym_numeric_system_function_token54] = ACTIONS(21),
    [aux_sym_numeric_system_function_token55] = ACTIONS(21),
    [aux_sym_numeric_system_function_token56] = ACTIONS(21),
    [aux_sym_numeric_system_function_token57] = ACTIONS(21),
    [aux_sym_numeric_system_function_token58] = ACTIONS(21),
    [aux_sym_numeric_system_function_token59] = ACTIONS(21),
    [aux_sym_numeric_system_function_token60] = ACTIONS(21),
    [aux_sym_numeric_system_function_token61] = ACTIONS(21),
    [aux_sym_numeric_system_function_token62] = ACTIONS(21),
    [aux_sym_numeric_system_function_token63] = ACTIONS(21),
    [aux_sym_numeric_system_function_token64] = ACTIONS(21),
    [aux_sym_numeric_system_function_token65] = ACTIONS(21),
    [aux_sym_numeric_system_function_token66] = ACTIONS(21),
    [aux_sym_numeric_system_function_token67] = ACTIONS(21),
    [aux_sym_numeric_system_function_token68] = ACTIONS(21),
    [aux_sym_numeric_system_function_token69] = ACTIONS(21),
    [aux_sym_numeric_system_function_token70] = ACTIONS(21),
    [aux_sym_numeric_system_function_token71] = ACTIONS(21),
    [aux_sym_numeric_system_function_token72] = ACTIONS(21),
    [aux_sym_numeric_system_function_token73] = ACTIONS(21),
    [aux_sym_numeric_system_function_token74] = ACTIONS(21),
    [aux_sym_numeric_system_function_token75] = ACTIONS(21),
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(37),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [35] = {
    [sym_numeric_expression] = STATE(96),
    [sym_numeric_binary_expression] = STATE(101),
    [sym_numeric_unary_expression] = STATE(101),
    [sym_numeric_primary_expression] = STATE(101),
    [sym_numeric_call_expression] = STATE(100),
    [sym_numeric_system_function] = STATE(99),
    [sym_numeric_user_function] = STATE(99),
    [sym_parenthesized_expression] = STATE(100),
    [sym_numeric_forced_assignment_expression] = STATE(101),
    [sym__numeric_reference] = STATE(66),
    [sym_numberelement] = STATE(66),
    [sym_numberreference] = STATE(66),
    [sym_number] = STATE(100),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(45),
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(47),
    [aux_sym_numeric_system_function_token1] = ACTIONS(49),
    [aux_sym_numeric_system_function_token2] = ACTIONS(49),
    [aux_sym_numeric_system_function_token3] = ACTIONS(49),
    [aux_sym_numeric_system_function_token4] = ACTIONS(49),
    [aux_sym_numeric_system_function_token5] = ACTIONS(49),
    [aux_sym_numeric_system_function_token6] = ACTIONS(49),
    [aux_sym_numeric_system_function_token7] = ACTIONS(49),
    [aux_sym_numeric_system_function_token8] = ACTIONS(49),
    [aux_sym_numeric_system_function_token9] = ACTIONS(49),
    [aux_sym_numeric_system_function_token10] = ACTIONS(49),
    [aux_sym_numeric_system_function_token11] = ACTIONS(49),
    [aux_sym_numeric_system_function_token12] = ACTIONS(49),
    [aux_sym_numeric_system_function_token13] = ACTIONS(49),
    [aux_sym_numeric_system_function_token14] = ACTIONS(49),
    [aux_sym_numeric_system_function_token15] = ACTIONS(49),
    [aux_sym_numeric_system_function_token16] = ACTIONS(49),
    [aux_sym_numeric_system_function_token17] = ACTIONS(49),
    [aux_sym_numeric_system_function_token18] = ACTIONS(49),
    [aux_sym_numeric_system_function_token19] = ACTIONS(49),
    [aux_sym_numeric_system_function_token20] = ACTIONS(49),
    [aux_sym_numeric_system_function_token21] = ACTIONS(49),
    [aux_sym_numeric_system_function_token22] = ACTIONS(49),
    [aux_sym_numeric_system_function_token23] = ACTIONS(49),
    [aux_sym_numeric_system_function_token24] = ACTIONS(49),
    [aux_sym_numeric_system_function_token25] = ACTIONS(49),
    [aux_sym_numeric_system_function_token26] = ACTIONS(49),
    [aux_sym_numeric_system_function_token27] = ACTIONS(49),
    [aux_sym_numeric_system_function_token28] = ACTIONS(49),
    [aux_sym_numeric_system_function_token29] = ACTIONS(49),
    [aux_sym_numeric_system_function_token30] = ACTIONS(49),
    [aux_sym_numeric_system_function_token31] = ACTIONS(49),
    [aux_sym_numeric_system_function_token32] = ACTIONS(49),
    [aux_sym_numeric_system_function_token33] = ACTIONS(49),
    [aux_sym_numeric_system_function_token34] = ACTIONS(49),
    [aux_sym_numeric_system_function_token35] = ACTIONS(49),
    [aux_sym_numeric_system_function_token36] = ACTIONS(49),
    [aux_sym_numeric_system_function_token37] = ACTIONS(49),
    [aux_sym_numeric_system_function_token38] = ACTIONS(49),
    [aux_sym_numeric_system_function_token39] = ACTIONS(49),
    [aux_sym_numeric_system_function_token40] = ACTIONS(49),
    [aux_sym_numeric_system_function_token41] = ACTIONS(49),
    [aux_sym_numeric_system_function_token42] = ACTIONS(49),
    [aux_sym_numeric_system_function_token43] = ACTIONS(49),
    [aux_sym_numeric_system_function_token44] = ACTIONS(49),
    [aux_sym_numeric_system_function_token45] = ACTIONS(49),
    [aux_sym_numeric_system_function_token46] = ACTIONS(49),
    [aux_sym_numeric_system_function_token47] = ACTIONS(49),
    [aux_sym_numeric_system_function_token48] = ACTIONS(49),
    [aux_sym_numeric_system_function_token49] = ACTIONS(49),
    [aux_sym_numeric_system_function_token50] = ACTIONS(49),
    [aux_sym_numeric_system_function_token51] = ACTIONS(49),
    [aux_sym_numeric_system_function_token52] = ACTIONS(49),
    [aux_sym_numeric_system_function_token53] = ACTIONS(49),
    [aux_sym_numeric_system_function_token54] = ACTIONS(49),
    [aux_sym_numeric_system_function_token55] = ACTIONS(49),
    [aux_sym_numeric_system_function_token56] = ACTIONS(49),
    [aux_sym_numeric_system_function_token57] = ACTIONS(49),
    [aux_sym_numeric_system_function_token58] = ACTIONS(49),
    [aux_sym_numeric_system_function_token59] = ACTIONS(49),
    [aux_sym_numeric_system_function_token60] = ACTIONS(49),
    [aux_sym_numeric_system_function_token61] = ACTIONS(49),
    [aux_sym_numeric_system_function_token62] = ACTIONS(49),
    [aux_sym_numeric_system_function_token63] = ACTIONS(49),
    [aux_sym_numeric_system_function_token64] = ACTIONS(49),
    [aux_sym_numeric_system_function_token65] = ACTIONS(49),
    [aux_sym_numeric_system_function_token66] = ACTIONS(49),
    [aux_sym_numeric_system_function_token67] = ACTIONS(49),
    [aux_sym_numeric_system_function_token68] = ACTIONS(49),
    [aux_sym_numeric_system_function_token69] = ACTIONS(49),
    [aux_sym_numeric_system_function_token70] = ACTIONS(49),
    [aux_sym_numeric_system_function_token71] = ACTIONS(49),
    [aux_sym_numeric_system_function_token72] = ACTIONS(49),
    [aux_sym_numeric_system_function_token73] = ACTIONS(49),
    [aux_sym_numeric_system_function_token74] = ACTIONS(49),
    [aux_sym_numeric_system_function_token75] = ACTIONS(49),
    [sym__numeric_function_identifier] = ACTIONS(75),
    [sym_numberidentifier] = ACTIONS(65),
    [aux_sym_number_token1] = ACTIONS(69),
  },
  [36] = {
    [sym_numeric_expression] = STATE(88),
    [sym_numeric_binary_expression] = STATE(89),
    [sym_numeric_unary_expression] = STATE(89),
    [sym_numeric_primary_expression] = STATE(89),
    [sym_numeric_call_expression] = STATE(78),
    [sym_numeric_system_function] = STATE(93),
    [sym_numeric_user_function] = STATE(93),
    [sym_parenthesized_expression] = STATE(78),
    [sym_numeric_forced_assignment_expression] = STATE(89),
    [sym__numeric_reference] = STATE(65),
    [sym_numberelement] = STATE(65),
    [sym_numberreference] = STATE(65),
    [sym_number] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(19),
    [aux_sym_numeric_system_function_token1] = ACTIONS(21),
    [aux_sym_numeric_system_function_token2] = ACTIONS(21),
    [aux_sym_numeric_system_function_token3] = ACTIONS(21),
    [aux_sym_numeric_system_function_token4] = ACTIONS(21),
    [aux_sym_numeric_system_function_token5] = ACTIONS(21),
    [aux_sym_numeric_system_function_token6] = ACTIONS(21),
    [aux_sym_numeric_system_function_token7] = ACTIONS(21),
    [aux_sym_numeric_system_function_token8] = ACTIONS(21),
    [aux_sym_numeric_system_function_token9] = ACTIONS(21),
    [aux_sym_numeric_system_function_token10] = ACTIONS(21),
    [aux_sym_numeric_system_function_token11] = ACTIONS(21),
    [aux_sym_numeric_system_function_token12] = ACTIONS(21),
    [aux_sym_numeric_system_function_token13] = ACTIONS(21),
    [aux_sym_numeric_system_function_token14] = ACTIONS(21),
    [aux_sym_numeric_system_function_token15] = ACTIONS(21),
    [aux_sym_numeric_system_function_token16] = ACTIONS(21),
    [aux_sym_numeric_system_function_token17] = ACTIONS(21),
    [aux_sym_numeric_system_function_token18] = ACTIONS(21),
    [aux_sym_numeric_system_function_token19] = ACTIONS(21),
    [aux_sym_numeric_system_function_token20] = ACTIONS(21),
    [aux_sym_numeric_system_function_token21] = ACTIONS(21),
    [aux_sym_numeric_system_function_token22] = ACTIONS(21),
    [aux_sym_numeric_system_function_token23] = ACTIONS(21),
    [aux_sym_numeric_system_function_token24] = ACTIONS(21),
    [aux_sym_numeric_system_function_token25] = ACTIONS(21),
    [aux_sym_numeric_system_function_token26] = ACTIONS(21),
    [aux_sym_numeric_system_function_token27] = ACTIONS(21),
    [aux_sym_numeric_system_function_token28] = ACTIONS(21),
    [aux_sym_numeric_system_function_token29] = ACTIONS(21),
    [aux_sym_numeric_system_function_token30] = ACTIONS(21),
    [aux_sym_numeric_system_function_token31] = ACTIONS(21),
    [aux_sym_numeric_system_function_token32] = ACTIONS(21),
    [aux_sym_numeric_system_function_token33] = ACTIONS(21),
    [aux_sym_numeric_system_function_token34] = ACTIONS(21),
    [aux_sym_numeric_system_function_token35] = ACTIONS(21),
    [aux_sym_numeric_system_function_token36] = ACTIONS(21),
    [aux_sym_numeric_system_function_token37] = ACTIONS(21),
    [aux_sym_numeric_system_function_token38] = ACTIONS(21),
    [aux_sym_numeric_system_function_token39] = ACTIONS(21),
    [aux_sym_numeric_system_function_token40] = ACTIONS(21),
    [aux_sym_numeric_system_function_token41] = ACTIONS(21),
    [aux_sym_numeric_system_function_token42] = ACTIONS(21),
    [aux_sym_numeric_system_function_token43] = ACTIONS(21),
    [aux_sym_numeric_system_function_token44] = ACTIONS(21),
    [aux_sym_numeric_system_function_token45] = ACTIONS(21),
    [aux_sym_numeric_system_function_token46] = ACTIONS(21),
    [aux_sym_numeric_system_function_token47] = ACTIONS(21),
    [aux_sym_numeric_system_function_token48] = ACTIONS(21),
    [aux_sym_numeric_system_function_token49] = ACTIONS(21),
    [aux_sym_numeric_system_function_token50] = ACTIONS(21),
    [aux_sym_numeric_system_function_token51] = ACTIONS(21),
    [aux_sym_numeric_system_function_token52] = ACTIONS(21),
    [aux_sym_numeric_system_function_token53] = ACTIONS(21),
    [aux_sym_numeric_system_function_token54] = ACTIONS(21),
    [aux_sym_numeric_system_function_token55] = ACTIONS(21),
    [aux_sym_numeric_system_function_token56] = ACTIONS(21),
    [aux_sym_numeric_system_function_token57] = ACTIONS(21),
    [aux_sym_numeric_system_function_token58] = ACTIONS(21),
    [aux_sym_numeric_system_function_token59] = ACTIONS(21),
    [aux_sym_numeric_system_function_token60] = ACTIONS(21),
    [aux_sym_numeric_system_function_token61] = ACTIONS(21),
    [aux_sym_numeric_system_function_token62] = ACTIONS(21),
    [aux_sym_numeric_system_function_token63] = ACTIONS(21),
    [aux_sym_numeric_system_function_token64] = ACTIONS(21),
    [aux_sym_numeric_system_function_token65] = ACTIONS(21),
    [aux_sym_numeric_system_function_token66] = ACTIONS(21),
    [aux_sym_numeric_system_function_token67] = ACTIONS(21),
    [aux_sym_numeric_system_function_token68] = ACTIONS(21),
    [aux_sym_numeric_system_function_token69] = ACTIONS(21),
    [aux_sym_numeric_system_function_token70] = ACTIONS(21),
    [aux_sym_numeric_system_function_token71] = ACTIONS(21),
    [aux_sym_numeric_system_function_token72] = ACTIONS(21),
    [aux_sym_numeric_system_function_token73] = ACTIONS(21),
    [aux_sym_numeric_system_function_token74] = ACTIONS(21),
    [aux_sym_numeric_system_function_token75] = ACTIONS(21),
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(37),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [37] = {
    [sym_numeric_expression] = STATE(87),
    [sym_numeric_binary_expression] = STATE(89),
    [sym_numeric_unary_expression] = STATE(89),
    [sym_numeric_primary_expression] = STATE(89),
    [sym_numeric_call_expression] = STATE(78),
    [sym_numeric_system_function] = STATE(93),
    [sym_numeric_user_function] = STATE(93),
    [sym_parenthesized_expression] = STATE(78),
    [sym_numeric_forced_assignment_expression] = STATE(89),
    [sym__numeric_reference] = STATE(65),
    [sym_numberelement] = STATE(65),
    [sym_numberreference] = STATE(65),
    [sym_number] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(19),
    [aux_sym_numeric_system_function_token1] = ACTIONS(21),
    [aux_sym_numeric_system_function_token2] = ACTIONS(21),
    [aux_sym_numeric_system_function_token3] = ACTIONS(21),
    [aux_sym_numeric_system_function_token4] = ACTIONS(21),
    [aux_sym_numeric_system_function_token5] = ACTIONS(21),
    [aux_sym_numeric_system_function_token6] = ACTIONS(21),
    [aux_sym_numeric_system_function_token7] = ACTIONS(21),
    [aux_sym_numeric_system_function_token8] = ACTIONS(21),
    [aux_sym_numeric_system_function_token9] = ACTIONS(21),
    [aux_sym_numeric_system_function_token10] = ACTIONS(21),
    [aux_sym_numeric_system_function_token11] = ACTIONS(21),
    [aux_sym_numeric_system_function_token12] = ACTIONS(21),
    [aux_sym_numeric_system_function_token13] = ACTIONS(21),
    [aux_sym_numeric_system_function_token14] = ACTIONS(21),
    [aux_sym_numeric_system_function_token15] = ACTIONS(21),
    [aux_sym_numeric_system_function_token16] = ACTIONS(21),
    [aux_sym_numeric_system_function_token17] = ACTIONS(21),
    [aux_sym_numeric_system_function_token18] = ACTIONS(21),
    [aux_sym_numeric_system_function_token19] = ACTIONS(21),
    [aux_sym_numeric_system_function_token20] = ACTIONS(21),
    [aux_sym_numeric_system_function_token21] = ACTIONS(21),
    [aux_sym_numeric_system_function_token22] = ACTIONS(21),
    [aux_sym_numeric_system_function_token23] = ACTIONS(21),
    [aux_sym_numeric_system_function_token24] = ACTIONS(21),
    [aux_sym_numeric_system_function_token25] = ACTIONS(21),
    [aux_sym_numeric_system_function_token26] = ACTIONS(21),
    [aux_sym_numeric_system_function_token27] = ACTIONS(21),
    [aux_sym_numeric_system_function_token28] = ACTIONS(21),
    [aux_sym_numeric_system_function_token29] = ACTIONS(21),
    [aux_sym_numeric_system_function_token30] = ACTIONS(21),
    [aux_sym_numeric_system_function_token31] = ACTIONS(21),
    [aux_sym_numeric_system_function_token32] = ACTIONS(21),
    [aux_sym_numeric_system_function_token33] = ACTIONS(21),
    [aux_sym_numeric_system_function_token34] = ACTIONS(21),
    [aux_sym_numeric_system_function_token35] = ACTIONS(21),
    [aux_sym_numeric_system_function_token36] = ACTIONS(21),
    [aux_sym_numeric_system_function_token37] = ACTIONS(21),
    [aux_sym_numeric_system_function_token38] = ACTIONS(21),
    [aux_sym_numeric_system_function_token39] = ACTIONS(21),
    [aux_sym_numeric_system_function_token40] = ACTIONS(21),
    [aux_sym_numeric_system_function_token41] = ACTIONS(21),
    [aux_sym_numeric_system_function_token42] = ACTIONS(21),
    [aux_sym_numeric_system_function_token43] = ACTIONS(21),
    [aux_sym_numeric_system_function_token44] = ACTIONS(21),
    [aux_sym_numeric_system_function_token45] = ACTIONS(21),
    [aux_sym_numeric_system_function_token46] = ACTIONS(21),
    [aux_sym_numeric_system_function_token47] = ACTIONS(21),
    [aux_sym_numeric_system_function_token48] = ACTIONS(21),
    [aux_sym_numeric_system_function_token49] = ACTIONS(21),
    [aux_sym_numeric_system_function_token50] = ACTIONS(21),
    [aux_sym_numeric_system_function_token51] = ACTIONS(21),
    [aux_sym_numeric_system_function_token52] = ACTIONS(21),
    [aux_sym_numeric_system_function_token53] = ACTIONS(21),
    [aux_sym_numeric_system_function_token54] = ACTIONS(21),
    [aux_sym_numeric_system_function_token55] = ACTIONS(21),
    [aux_sym_numeric_system_function_token56] = ACTIONS(21),
    [aux_sym_numeric_system_function_token57] = ACTIONS(21),
    [aux_sym_numeric_system_function_token58] = ACTIONS(21),
    [aux_sym_numeric_system_function_token59] = ACTIONS(21),
    [aux_sym_numeric_system_function_token60] = ACTIONS(21),
    [aux_sym_numeric_system_function_token61] = ACTIONS(21),
    [aux_sym_numeric_system_function_token62] = ACTIONS(21),
    [aux_sym_numeric_system_function_token63] = ACTIONS(21),
    [aux_sym_numeric_system_function_token64] = ACTIONS(21),
    [aux_sym_numeric_system_function_token65] = ACTIONS(21),
    [aux_sym_numeric_system_function_token66] = ACTIONS(21),
    [aux_sym_numeric_system_function_token67] = ACTIONS(21),
    [aux_sym_numeric_system_function_token68] = ACTIONS(21),
    [aux_sym_numeric_system_function_token69] = ACTIONS(21),
    [aux_sym_numeric_system_function_token70] = ACTIONS(21),
    [aux_sym_numeric_system_function_token71] = ACTIONS(21),
    [aux_sym_numeric_system_function_token72] = ACTIONS(21),
    [aux_sym_numeric_system_function_token73] = ACTIONS(21),
    [aux_sym_numeric_system_function_token74] = ACTIONS(21),
    [aux_sym_numeric_system_function_token75] = ACTIONS(21),
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(37),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [38] = {
    [sym_numeric_expression] = STATE(125),
    [sym_numeric_binary_expression] = STATE(89),
    [sym_numeric_unary_expression] = STATE(89),
    [sym_numeric_primary_expression] = STATE(89),
    [sym_numeric_call_expression] = STATE(78),
    [sym_numeric_system_function] = STATE(93),
    [sym_numeric_user_function] = STATE(93),
    [sym_parenthesized_expression] = STATE(78),
    [sym_numeric_forced_assignment_expression] = STATE(89),
    [sym__numeric_reference] = STATE(65),
    [sym_numberelement] = STATE(65),
    [sym_numberreference] = STATE(65),
    [sym_number] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(19),
    [aux_sym_numeric_system_function_token1] = ACTIONS(21),
    [aux_sym_numeric_system_function_token2] = ACTIONS(21),
    [aux_sym_numeric_system_function_token3] = ACTIONS(21),
    [aux_sym_numeric_system_function_token4] = ACTIONS(21),
    [aux_sym_numeric_system_function_token5] = ACTIONS(21),
    [aux_sym_numeric_system_function_token6] = ACTIONS(21),
    [aux_sym_numeric_system_function_token7] = ACTIONS(21),
    [aux_sym_numeric_system_function_token8] = ACTIONS(21),
    [aux_sym_numeric_system_function_token9] = ACTIONS(21),
    [aux_sym_numeric_system_function_token10] = ACTIONS(21),
    [aux_sym_numeric_system_function_token11] = ACTIONS(21),
    [aux_sym_numeric_system_function_token12] = ACTIONS(21),
    [aux_sym_numeric_system_function_token13] = ACTIONS(21),
    [aux_sym_numeric_system_function_token14] = ACTIONS(21),
    [aux_sym_numeric_system_function_token15] = ACTIONS(21),
    [aux_sym_numeric_system_function_token16] = ACTIONS(21),
    [aux_sym_numeric_system_function_token17] = ACTIONS(21),
    [aux_sym_numeric_system_function_token18] = ACTIONS(21),
    [aux_sym_numeric_system_function_token19] = ACTIONS(21),
    [aux_sym_numeric_system_function_token20] = ACTIONS(21),
    [aux_sym_numeric_system_function_token21] = ACTIONS(21),
    [aux_sym_numeric_system_function_token22] = ACTIONS(21),
    [aux_sym_numeric_system_function_token23] = ACTIONS(21),
    [aux_sym_numeric_system_function_token24] = ACTIONS(21),
    [aux_sym_numeric_system_function_token25] = ACTIONS(21),
    [aux_sym_numeric_system_function_token26] = ACTIONS(21),
    [aux_sym_numeric_system_function_token27] = ACTIONS(21),
    [aux_sym_numeric_system_function_token28] = ACTIONS(21),
    [aux_sym_numeric_system_function_token29] = ACTIONS(21),
    [aux_sym_numeric_system_function_token30] = ACTIONS(21),
    [aux_sym_numeric_system_function_token31] = ACTIONS(21),
    [aux_sym_numeric_system_function_token32] = ACTIONS(21),
    [aux_sym_numeric_system_function_token33] = ACTIONS(21),
    [aux_sym_numeric_system_function_token34] = ACTIONS(21),
    [aux_sym_numeric_system_function_token35] = ACTIONS(21),
    [aux_sym_numeric_system_function_token36] = ACTIONS(21),
    [aux_sym_numeric_system_function_token37] = ACTIONS(21),
    [aux_sym_numeric_system_function_token38] = ACTIONS(21),
    [aux_sym_numeric_system_function_token39] = ACTIONS(21),
    [aux_sym_numeric_system_function_token40] = ACTIONS(21),
    [aux_sym_numeric_system_function_token41] = ACTIONS(21),
    [aux_sym_numeric_system_function_token42] = ACTIONS(21),
    [aux_sym_numeric_system_function_token43] = ACTIONS(21),
    [aux_sym_numeric_system_function_token44] = ACTIONS(21),
    [aux_sym_numeric_system_function_token45] = ACTIONS(21),
    [aux_sym_numeric_system_function_token46] = ACTIONS(21),
    [aux_sym_numeric_system_function_token47] = ACTIONS(21),
    [aux_sym_numeric_system_function_token48] = ACTIONS(21),
    [aux_sym_numeric_system_function_token49] = ACTIONS(21),
    [aux_sym_numeric_system_function_token50] = ACTIONS(21),
    [aux_sym_numeric_system_function_token51] = ACTIONS(21),
    [aux_sym_numeric_system_function_token52] = ACTIONS(21),
    [aux_sym_numeric_system_function_token53] = ACTIONS(21),
    [aux_sym_numeric_system_function_token54] = ACTIONS(21),
    [aux_sym_numeric_system_function_token55] = ACTIONS(21),
    [aux_sym_numeric_system_function_token56] = ACTIONS(21),
    [aux_sym_numeric_system_function_token57] = ACTIONS(21),
    [aux_sym_numeric_system_function_token58] = ACTIONS(21),
    [aux_sym_numeric_system_function_token59] = ACTIONS(21),
    [aux_sym_numeric_system_function_token60] = ACTIONS(21),
    [aux_sym_numeric_system_function_token61] = ACTIONS(21),
    [aux_sym_numeric_system_function_token62] = ACTIONS(21),
    [aux_sym_numeric_system_function_token63] = ACTIONS(21),
    [aux_sym_numeric_system_function_token64] = ACTIONS(21),
    [aux_sym_numeric_system_function_token65] = ACTIONS(21),
    [aux_sym_numeric_system_function_token66] = ACTIONS(21),
    [aux_sym_numeric_system_function_token67] = ACTIONS(21),
    [aux_sym_numeric_system_function_token68] = ACTIONS(21),
    [aux_sym_numeric_system_function_token69] = ACTIONS(21),
    [aux_sym_numeric_system_function_token70] = ACTIONS(21),
    [aux_sym_numeric_system_function_token71] = ACTIONS(21),
    [aux_sym_numeric_system_function_token72] = ACTIONS(21),
    [aux_sym_numeric_system_function_token73] = ACTIONS(21),
    [aux_sym_numeric_system_function_token74] = ACTIONS(21),
    [aux_sym_numeric_system_function_token75] = ACTIONS(21),
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(37),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [39] = {
    [sym_numeric_expression] = STATE(110),
    [sym_numeric_binary_expression] = STATE(101),
    [sym_numeric_unary_expression] = STATE(101),
    [sym_numeric_primary_expression] = STATE(101),
    [sym_numeric_call_expression] = STATE(100),
    [sym_numeric_system_function] = STATE(99),
    [sym_numeric_user_function] = STATE(99),
    [sym_parenthesized_expression] = STATE(100),
    [sym_numeric_forced_assignment_expression] = STATE(101),
    [sym__numeric_reference] = STATE(66),
    [sym_numberelement] = STATE(66),
    [sym_numberreference] = STATE(66),
    [sym_number] = STATE(100),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(45),
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(47),
    [aux_sym_numeric_system_function_token1] = ACTIONS(49),
    [aux_sym_numeric_system_function_token2] = ACTIONS(49),
    [aux_sym_numeric_system_function_token3] = ACTIONS(49),
    [aux_sym_numeric_system_function_token4] = ACTIONS(49),
    [aux_sym_numeric_system_function_token5] = ACTIONS(49),
    [aux_sym_numeric_system_function_token6] = ACTIONS(49),
    [aux_sym_numeric_system_function_token7] = ACTIONS(49),
    [aux_sym_numeric_system_function_token8] = ACTIONS(49),
    [aux_sym_numeric_system_function_token9] = ACTIONS(49),
    [aux_sym_numeric_system_function_token10] = ACTIONS(49),
    [aux_sym_numeric_system_function_token11] = ACTIONS(49),
    [aux_sym_numeric_system_function_token12] = ACTIONS(49),
    [aux_sym_numeric_system_function_token13] = ACTIONS(49),
    [aux_sym_numeric_system_function_token14] = ACTIONS(49),
    [aux_sym_numeric_system_function_token15] = ACTIONS(49),
    [aux_sym_numeric_system_function_token16] = ACTIONS(49),
    [aux_sym_numeric_system_function_token17] = ACTIONS(49),
    [aux_sym_numeric_system_function_token18] = ACTIONS(49),
    [aux_sym_numeric_system_function_token19] = ACTIONS(49),
    [aux_sym_numeric_system_function_token20] = ACTIONS(49),
    [aux_sym_numeric_system_function_token21] = ACTIONS(49),
    [aux_sym_numeric_system_function_token22] = ACTIONS(49),
    [aux_sym_numeric_system_function_token23] = ACTIONS(49),
    [aux_sym_numeric_system_function_token24] = ACTIONS(49),
    [aux_sym_numeric_system_function_token25] = ACTIONS(49),
    [aux_sym_numeric_system_function_token26] = ACTIONS(49),
    [aux_sym_numeric_system_function_token27] = ACTIONS(49),
    [aux_sym_numeric_system_function_token28] = ACTIONS(49),
    [aux_sym_numeric_system_function_token29] = ACTIONS(49),
    [aux_sym_numeric_system_function_token30] = ACTIONS(49),
    [aux_sym_numeric_system_function_token31] = ACTIONS(49),
    [aux_sym_numeric_system_function_token32] = ACTIONS(49),
    [aux_sym_numeric_system_function_token33] = ACTIONS(49),
    [aux_sym_numeric_system_function_token34] = ACTIONS(49),
    [aux_sym_numeric_system_function_token35] = ACTIONS(49),
    [aux_sym_numeric_system_function_token36] = ACTIONS(49),
    [aux_sym_numeric_system_function_token37] = ACTIONS(49),
    [aux_sym_numeric_system_function_token38] = ACTIONS(49),
    [aux_sym_numeric_system_function_token39] = ACTIONS(49),
    [aux_sym_numeric_system_function_token40] = ACTIONS(49),
    [aux_sym_numeric_system_function_token41] = ACTIONS(49),
    [aux_sym_numeric_system_function_token42] = ACTIONS(49),
    [aux_sym_numeric_system_function_token43] = ACTIONS(49),
    [aux_sym_numeric_system_function_token44] = ACTIONS(49),
    [aux_sym_numeric_system_function_token45] = ACTIONS(49),
    [aux_sym_numeric_system_function_token46] = ACTIONS(49),
    [aux_sym_numeric_system_function_token47] = ACTIONS(49),
    [aux_sym_numeric_system_function_token48] = ACTIONS(49),
    [aux_sym_numeric_system_function_token49] = ACTIONS(49),
    [aux_sym_numeric_system_function_token50] = ACTIONS(49),
    [aux_sym_numeric_system_function_token51] = ACTIONS(49),
    [aux_sym_numeric_system_function_token52] = ACTIONS(49),
    [aux_sym_numeric_system_function_token53] = ACTIONS(49),
    [aux_sym_numeric_system_function_token54] = ACTIONS(49),
    [aux_sym_numeric_system_function_token55] = ACTIONS(49),
    [aux_sym_numeric_system_function_token56] = ACTIONS(49),
    [aux_sym_numeric_system_function_token57] = ACTIONS(49),
    [aux_sym_numeric_system_function_token58] = ACTIONS(49),
    [aux_sym_numeric_system_function_token59] = ACTIONS(49),
    [aux_sym_numeric_system_function_token60] = ACTIONS(49),
    [aux_sym_numeric_system_function_token61] = ACTIONS(49),
    [aux_sym_numeric_system_function_token62] = ACTIONS(49),
    [aux_sym_numeric_system_function_token63] = ACTIONS(49),
    [aux_sym_numeric_system_function_token64] = ACTIONS(49),
    [aux_sym_numeric_system_function_token65] = ACTIONS(49),
    [aux_sym_numeric_system_function_token66] = ACTIONS(49),
    [aux_sym_numeric_system_function_token67] = ACTIONS(49),
    [aux_sym_numeric_system_function_token68] = ACTIONS(49),
    [aux_sym_numeric_system_function_token69] = ACTIONS(49),
    [aux_sym_numeric_system_function_token70] = ACTIONS(49),
    [aux_sym_numeric_system_function_token71] = ACTIONS(49),
    [aux_sym_numeric_system_function_token72] = ACTIONS(49),
    [aux_sym_numeric_system_function_token73] = ACTIONS(49),
    [aux_sym_numeric_system_function_token74] = ACTIONS(49),
    [aux_sym_numeric_system_function_token75] = ACTIONS(49),
    [sym__numeric_function_identifier] = ACTIONS(75),
    [sym_numberidentifier] = ACTIONS(65),
    [aux_sym_number_token1] = ACTIONS(69),
  },
  [40] = {
    [sym_numeric_expression] = STATE(84),
    [sym_numeric_binary_expression] = STATE(89),
    [sym_numeric_unary_expression] = STATE(89),
    [sym_numeric_primary_expression] = STATE(89),
    [sym_numeric_call_expression] = STATE(78),
    [sym_numeric_system_function] = STATE(93),
    [sym_numeric_user_function] = STATE(93),
    [sym_parenthesized_expression] = STATE(78),
    [sym_numeric_forced_assignment_expression] = STATE(89),
    [sym__numeric_reference] = STATE(65),
    [sym_numberelement] = STATE(65),
    [sym_numberreference] = STATE(65),
    [sym_number] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(19),
    [aux_sym_numeric_system_function_token1] = ACTIONS(21),
    [aux_sym_numeric_system_function_token2] = ACTIONS(21),
    [aux_sym_numeric_system_function_token3] = ACTIONS(21),
    [aux_sym_numeric_system_function_token4] = ACTIONS(21),
    [aux_sym_numeric_system_function_token5] = ACTIONS(21),
    [aux_sym_numeric_system_function_token6] = ACTIONS(21),
    [aux_sym_numeric_system_function_token7] = ACTIONS(21),
    [aux_sym_numeric_system_function_token8] = ACTIONS(21),
    [aux_sym_numeric_system_function_token9] = ACTIONS(21),
    [aux_sym_numeric_system_function_token10] = ACTIONS(21),
    [aux_sym_numeric_system_function_token11] = ACTIONS(21),
    [aux_sym_numeric_system_function_token12] = ACTIONS(21),
    [aux_sym_numeric_system_function_token13] = ACTIONS(21),
    [aux_sym_numeric_system_function_token14] = ACTIONS(21),
    [aux_sym_numeric_system_function_token15] = ACTIONS(21),
    [aux_sym_numeric_system_function_token16] = ACTIONS(21),
    [aux_sym_numeric_system_function_token17] = ACTIONS(21),
    [aux_sym_numeric_system_function_token18] = ACTIONS(21),
    [aux_sym_numeric_system_function_token19] = ACTIONS(21),
    [aux_sym_numeric_system_function_token20] = ACTIONS(21),
    [aux_sym_numeric_system_function_token21] = ACTIONS(21),
    [aux_sym_numeric_system_function_token22] = ACTIONS(21),
    [aux_sym_numeric_system_function_token23] = ACTIONS(21),
    [aux_sym_numeric_system_function_token24] = ACTIONS(21),
    [aux_sym_numeric_system_function_token25] = ACTIONS(21),
    [aux_sym_numeric_system_function_token26] = ACTIONS(21),
    [aux_sym_numeric_system_function_token27] = ACTIONS(21),
    [aux_sym_numeric_system_function_token28] = ACTIONS(21),
    [aux_sym_numeric_system_function_token29] = ACTIONS(21),
    [aux_sym_numeric_system_function_token30] = ACTIONS(21),
    [aux_sym_numeric_system_function_token31] = ACTIONS(21),
    [aux_sym_numeric_system_function_token32] = ACTIONS(21),
    [aux_sym_numeric_system_function_token33] = ACTIONS(21),
    [aux_sym_numeric_system_function_token34] = ACTIONS(21),
    [aux_sym_numeric_system_function_token35] = ACTIONS(21),
    [aux_sym_numeric_system_function_token36] = ACTIONS(21),
    [aux_sym_numeric_system_function_token37] = ACTIONS(21),
    [aux_sym_numeric_system_function_token38] = ACTIONS(21),
    [aux_sym_numeric_system_function_token39] = ACTIONS(21),
    [aux_sym_numeric_system_function_token40] = ACTIONS(21),
    [aux_sym_numeric_system_function_token41] = ACTIONS(21),
    [aux_sym_numeric_system_function_token42] = ACTIONS(21),
    [aux_sym_numeric_system_function_token43] = ACTIONS(21),
    [aux_sym_numeric_system_function_token44] = ACTIONS(21),
    [aux_sym_numeric_system_function_token45] = ACTIONS(21),
    [aux_sym_numeric_system_function_token46] = ACTIONS(21),
    [aux_sym_numeric_system_function_token47] = ACTIONS(21),
    [aux_sym_numeric_system_function_token48] = ACTIONS(21),
    [aux_sym_numeric_system_function_token49] = ACTIONS(21),
    [aux_sym_numeric_system_function_token50] = ACTIONS(21),
    [aux_sym_numeric_system_function_token51] = ACTIONS(21),
    [aux_sym_numeric_system_function_token52] = ACTIONS(21),
    [aux_sym_numeric_system_function_token53] = ACTIONS(21),
    [aux_sym_numeric_system_function_token54] = ACTIONS(21),
    [aux_sym_numeric_system_function_token55] = ACTIONS(21),
    [aux_sym_numeric_system_function_token56] = ACTIONS(21),
    [aux_sym_numeric_system_function_token57] = ACTIONS(21),
    [aux_sym_numeric_system_function_token58] = ACTIONS(21),
    [aux_sym_numeric_system_function_token59] = ACTIONS(21),
    [aux_sym_numeric_system_function_token60] = ACTIONS(21),
    [aux_sym_numeric_system_function_token61] = ACTIONS(21),
    [aux_sym_numeric_system_function_token62] = ACTIONS(21),
    [aux_sym_numeric_system_function_token63] = ACTIONS(21),
    [aux_sym_numeric_system_function_token64] = ACTIONS(21),
    [aux_sym_numeric_system_function_token65] = ACTIONS(21),
    [aux_sym_numeric_system_function_token66] = ACTIONS(21),
    [aux_sym_numeric_system_function_token67] = ACTIONS(21),
    [aux_sym_numeric_system_function_token68] = ACTIONS(21),
    [aux_sym_numeric_system_function_token69] = ACTIONS(21),
    [aux_sym_numeric_system_function_token70] = ACTIONS(21),
    [aux_sym_numeric_system_function_token71] = ACTIONS(21),
    [aux_sym_numeric_system_function_token72] = ACTIONS(21),
    [aux_sym_numeric_system_function_token73] = ACTIONS(21),
    [aux_sym_numeric_system_function_token74] = ACTIONS(21),
    [aux_sym_numeric_system_function_token75] = ACTIONS(21),
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(37),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [41] = {
    [sym_numeric_expression] = STATE(83),
    [sym_numeric_binary_expression] = STATE(89),
    [sym_numeric_unary_expression] = STATE(89),
    [sym_numeric_primary_expression] = STATE(89),
    [sym_numeric_call_expression] = STATE(78),
    [sym_numeric_system_function] = STATE(93),
    [sym_numeric_user_function] = STATE(93),
    [sym_parenthesized_expression] = STATE(78),
    [sym_numeric_forced_assignment_expression] = STATE(89),
    [sym__numeric_reference] = STATE(65),
    [sym_numberelement] = STATE(65),
    [sym_numberreference] = STATE(65),
    [sym_number] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(19),
    [aux_sym_numeric_system_function_token1] = ACTIONS(21),
    [aux_sym_numeric_system_function_token2] = ACTIONS(21),
    [aux_sym_numeric_system_function_token3] = ACTIONS(21),
    [aux_sym_numeric_system_function_token4] = ACTIONS(21),
    [aux_sym_numeric_system_function_token5] = ACTIONS(21),
    [aux_sym_numeric_system_function_token6] = ACTIONS(21),
    [aux_sym_numeric_system_function_token7] = ACTIONS(21),
    [aux_sym_numeric_system_function_token8] = ACTIONS(21),
    [aux_sym_numeric_system_function_token9] = ACTIONS(21),
    [aux_sym_numeric_system_function_token10] = ACTIONS(21),
    [aux_sym_numeric_system_function_token11] = ACTIONS(21),
    [aux_sym_numeric_system_function_token12] = ACTIONS(21),
    [aux_sym_numeric_system_function_token13] = ACTIONS(21),
    [aux_sym_numeric_system_function_token14] = ACTIONS(21),
    [aux_sym_numeric_system_function_token15] = ACTIONS(21),
    [aux_sym_numeric_system_function_token16] = ACTIONS(21),
    [aux_sym_numeric_system_function_token17] = ACTIONS(21),
    [aux_sym_numeric_system_function_token18] = ACTIONS(21),
    [aux_sym_numeric_system_function_token19] = ACTIONS(21),
    [aux_sym_numeric_system_function_token20] = ACTIONS(21),
    [aux_sym_numeric_system_function_token21] = ACTIONS(21),
    [aux_sym_numeric_system_function_token22] = ACTIONS(21),
    [aux_sym_numeric_system_function_token23] = ACTIONS(21),
    [aux_sym_numeric_system_function_token24] = ACTIONS(21),
    [aux_sym_numeric_system_function_token25] = ACTIONS(21),
    [aux_sym_numeric_system_function_token26] = ACTIONS(21),
    [aux_sym_numeric_system_function_token27] = ACTIONS(21),
    [aux_sym_numeric_system_function_token28] = ACTIONS(21),
    [aux_sym_numeric_system_function_token29] = ACTIONS(21),
    [aux_sym_numeric_system_function_token30] = ACTIONS(21),
    [aux_sym_numeric_system_function_token31] = ACTIONS(21),
    [aux_sym_numeric_system_function_token32] = ACTIONS(21),
    [aux_sym_numeric_system_function_token33] = ACTIONS(21),
    [aux_sym_numeric_system_function_token34] = ACTIONS(21),
    [aux_sym_numeric_system_function_token35] = ACTIONS(21),
    [aux_sym_numeric_system_function_token36] = ACTIONS(21),
    [aux_sym_numeric_system_function_token37] = ACTIONS(21),
    [aux_sym_numeric_system_function_token38] = ACTIONS(21),
    [aux_sym_numeric_system_function_token39] = ACTIONS(21),
    [aux_sym_numeric_system_function_token40] = ACTIONS(21),
    [aux_sym_numeric_system_function_token41] = ACTIONS(21),
    [aux_sym_numeric_system_function_token42] = ACTIONS(21),
    [aux_sym_numeric_system_function_token43] = ACTIONS(21),
    [aux_sym_numeric_system_function_token44] = ACTIONS(21),
    [aux_sym_numeric_system_function_token45] = ACTIONS(21),
    [aux_sym_numeric_system_function_token46] = ACTIONS(21),
    [aux_sym_numeric_system_function_token47] = ACTIONS(21),
    [aux_sym_numeric_system_function_token48] = ACTIONS(21),
    [aux_sym_numeric_system_function_token49] = ACTIONS(21),
    [aux_sym_numeric_system_function_token50] = ACTIONS(21),
    [aux_sym_numeric_system_function_token51] = ACTIONS(21),
    [aux_sym_numeric_system_function_token52] = ACTIONS(21),
    [aux_sym_numeric_system_function_token53] = ACTIONS(21),
    [aux_sym_numeric_system_function_token54] = ACTIONS(21),
    [aux_sym_numeric_system_function_token55] = ACTIONS(21),
    [aux_sym_numeric_system_function_token56] = ACTIONS(21),
    [aux_sym_numeric_system_function_token57] = ACTIONS(21),
    [aux_sym_numeric_system_function_token58] = ACTIONS(21),
    [aux_sym_numeric_system_function_token59] = ACTIONS(21),
    [aux_sym_numeric_system_function_token60] = ACTIONS(21),
    [aux_sym_numeric_system_function_token61] = ACTIONS(21),
    [aux_sym_numeric_system_function_token62] = ACTIONS(21),
    [aux_sym_numeric_system_function_token63] = ACTIONS(21),
    [aux_sym_numeric_system_function_token64] = ACTIONS(21),
    [aux_sym_numeric_system_function_token65] = ACTIONS(21),
    [aux_sym_numeric_system_function_token66] = ACTIONS(21),
    [aux_sym_numeric_system_function_token67] = ACTIONS(21),
    [aux_sym_numeric_system_function_token68] = ACTIONS(21),
    [aux_sym_numeric_system_function_token69] = ACTIONS(21),
    [aux_sym_numeric_system_function_token70] = ACTIONS(21),
    [aux_sym_numeric_system_function_token71] = ACTIONS(21),
    [aux_sym_numeric_system_function_token72] = ACTIONS(21),
    [aux_sym_numeric_system_function_token73] = ACTIONS(21),
    [aux_sym_numeric_system_function_token74] = ACTIONS(21),
    [aux_sym_numeric_system_function_token75] = ACTIONS(21),
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(37),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [42] = {
    [sym_numeric_expression] = STATE(115),
    [sym_numeric_binary_expression] = STATE(101),
    [sym_numeric_unary_expression] = STATE(101),
    [sym_numeric_primary_expression] = STATE(101),
    [sym_numeric_call_expression] = STATE(100),
    [sym_numeric_system_function] = STATE(99),
    [sym_numeric_user_function] = STATE(99),
    [sym_parenthesized_expression] = STATE(100),
    [sym_numeric_forced_assignment_expression] = STATE(101),
    [sym__numeric_reference] = STATE(66),
    [sym_numberelement] = STATE(66),
    [sym_numberreference] = STATE(66),
    [sym_number] = STATE(100),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(45),
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(47),
    [aux_sym_numeric_system_function_token1] = ACTIONS(49),
    [aux_sym_numeric_system_function_token2] = ACTIONS(49),
    [aux_sym_numeric_system_function_token3] = ACTIONS(49),
    [aux_sym_numeric_system_function_token4] = ACTIONS(49),
    [aux_sym_numeric_system_function_token5] = ACTIONS(49),
    [aux_sym_numeric_system_function_token6] = ACTIONS(49),
    [aux_sym_numeric_system_function_token7] = ACTIONS(49),
    [aux_sym_numeric_system_function_token8] = ACTIONS(49),
    [aux_sym_numeric_system_function_token9] = ACTIONS(49),
    [aux_sym_numeric_system_function_token10] = ACTIONS(49),
    [aux_sym_numeric_system_function_token11] = ACTIONS(49),
    [aux_sym_numeric_system_function_token12] = ACTIONS(49),
    [aux_sym_numeric_system_function_token13] = ACTIONS(49),
    [aux_sym_numeric_system_function_token14] = ACTIONS(49),
    [aux_sym_numeric_system_function_token15] = ACTIONS(49),
    [aux_sym_numeric_system_function_token16] = ACTIONS(49),
    [aux_sym_numeric_system_function_token17] = ACTIONS(49),
    [aux_sym_numeric_system_function_token18] = ACTIONS(49),
    [aux_sym_numeric_system_function_token19] = ACTIONS(49),
    [aux_sym_numeric_system_function_token20] = ACTIONS(49),
    [aux_sym_numeric_system_function_token21] = ACTIONS(49),
    [aux_sym_numeric_system_function_token22] = ACTIONS(49),
    [aux_sym_numeric_system_function_token23] = ACTIONS(49),
    [aux_sym_numeric_system_function_token24] = ACTIONS(49),
    [aux_sym_numeric_system_function_token25] = ACTIONS(49),
    [aux_sym_numeric_system_function_token26] = ACTIONS(49),
    [aux_sym_numeric_system_function_token27] = ACTIONS(49),
    [aux_sym_numeric_system_function_token28] = ACTIONS(49),
    [aux_sym_numeric_system_function_token29] = ACTIONS(49),
    [aux_sym_numeric_system_function_token30] = ACTIONS(49),
    [aux_sym_numeric_system_function_token31] = ACTIONS(49),
    [aux_sym_numeric_system_function_token32] = ACTIONS(49),
    [aux_sym_numeric_system_function_token33] = ACTIONS(49),
    [aux_sym_numeric_system_function_token34] = ACTIONS(49),
    [aux_sym_numeric_system_function_token35] = ACTIONS(49),
    [aux_sym_numeric_system_function_token36] = ACTIONS(49),
    [aux_sym_numeric_system_function_token37] = ACTIONS(49),
    [aux_sym_numeric_system_function_token38] = ACTIONS(49),
    [aux_sym_numeric_system_function_token39] = ACTIONS(49),
    [aux_sym_numeric_system_function_token40] = ACTIONS(49),
    [aux_sym_numeric_system_function_token41] = ACTIONS(49),
    [aux_sym_numeric_system_function_token42] = ACTIONS(49),
    [aux_sym_numeric_system_function_token43] = ACTIONS(49),
    [aux_sym_numeric_system_function_token44] = ACTIONS(49),
    [aux_sym_numeric_system_function_token45] = ACTIONS(49),
    [aux_sym_numeric_system_function_token46] = ACTIONS(49),
    [aux_sym_numeric_system_function_token47] = ACTIONS(49),
    [aux_sym_numeric_system_function_token48] = ACTIONS(49),
    [aux_sym_numeric_system_function_token49] = ACTIONS(49),
    [aux_sym_numeric_system_function_token50] = ACTIONS(49),
    [aux_sym_numeric_system_function_token51] = ACTIONS(49),
    [aux_sym_numeric_system_function_token52] = ACTIONS(49),
    [aux_sym_numeric_system_function_token53] = ACTIONS(49),
    [aux_sym_numeric_system_function_token54] = ACTIONS(49),
    [aux_sym_numeric_system_function_token55] = ACTIONS(49),
    [aux_sym_numeric_system_function_token56] = ACTIONS(49),
    [aux_sym_numeric_system_function_token57] = ACTIONS(49),
    [aux_sym_numeric_system_function_token58] = ACTIONS(49),
    [aux_sym_numeric_system_function_token59] = ACTIONS(49),
    [aux_sym_numeric_system_function_token60] = ACTIONS(49),
    [aux_sym_numeric_system_function_token61] = ACTIONS(49),
    [aux_sym_numeric_system_function_token62] = ACTIONS(49),
    [aux_sym_numeric_system_function_token63] = ACTIONS(49),
    [aux_sym_numeric_system_function_token64] = ACTIONS(49),
    [aux_sym_numeric_system_function_token65] = ACTIONS(49),
    [aux_sym_numeric_system_function_token66] = ACTIONS(49),
    [aux_sym_numeric_system_function_token67] = ACTIONS(49),
    [aux_sym_numeric_system_function_token68] = ACTIONS(49),
    [aux_sym_numeric_system_function_token69] = ACTIONS(49),
    [aux_sym_numeric_system_function_token70] = ACTIONS(49),
    [aux_sym_numeric_system_function_token71] = ACTIONS(49),
    [aux_sym_numeric_system_function_token72] = ACTIONS(49),
    [aux_sym_numeric_system_function_token73] = ACTIONS(49),
    [aux_sym_numeric_system_function_token74] = ACTIONS(49),
    [aux_sym_numeric_system_function_token75] = ACTIONS(49),
    [sym__numeric_function_identifier] = ACTIONS(75),
    [sym_numberidentifier] = ACTIONS(65),
    [aux_sym_number_token1] = ACTIONS(69),
  },
  [43] = {
    [sym_numeric_expression] = STATE(106),
    [sym_numeric_binary_expression] = STATE(101),
    [sym_numeric_unary_expression] = STATE(101),
    [sym_numeric_primary_expression] = STATE(101),
    [sym_numeric_call_expression] = STATE(100),
    [sym_numeric_system_function] = STATE(99),
    [sym_numeric_user_function] = STATE(99),
    [sym_parenthesized_expression] = STATE(100),
    [sym_numeric_forced_assignment_expression] = STATE(101),
    [sym__numeric_reference] = STATE(66),
    [sym_numberelement] = STATE(66),
    [sym_numberreference] = STATE(66),
    [sym_number] = STATE(100),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(45),
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(47),
    [aux_sym_numeric_system_function_token1] = ACTIONS(49),
    [aux_sym_numeric_system_function_token2] = ACTIONS(49),
    [aux_sym_numeric_system_function_token3] = ACTIONS(49),
    [aux_sym_numeric_system_function_token4] = ACTIONS(49),
    [aux_sym_numeric_system_function_token5] = ACTIONS(49),
    [aux_sym_numeric_system_function_token6] = ACTIONS(49),
    [aux_sym_numeric_system_function_token7] = ACTIONS(49),
    [aux_sym_numeric_system_function_token8] = ACTIONS(49),
    [aux_sym_numeric_system_function_token9] = ACTIONS(49),
    [aux_sym_numeric_system_function_token10] = ACTIONS(49),
    [aux_sym_numeric_system_function_token11] = ACTIONS(49),
    [aux_sym_numeric_system_function_token12] = ACTIONS(49),
    [aux_sym_numeric_system_function_token13] = ACTIONS(49),
    [aux_sym_numeric_system_function_token14] = ACTIONS(49),
    [aux_sym_numeric_system_function_token15] = ACTIONS(49),
    [aux_sym_numeric_system_function_token16] = ACTIONS(49),
    [aux_sym_numeric_system_function_token17] = ACTIONS(49),
    [aux_sym_numeric_system_function_token18] = ACTIONS(49),
    [aux_sym_numeric_system_function_token19] = ACTIONS(49),
    [aux_sym_numeric_system_function_token20] = ACTIONS(49),
    [aux_sym_numeric_system_function_token21] = ACTIONS(49),
    [aux_sym_numeric_system_function_token22] = ACTIONS(49),
    [aux_sym_numeric_system_function_token23] = ACTIONS(49),
    [aux_sym_numeric_system_function_token24] = ACTIONS(49),
    [aux_sym_numeric_system_function_token25] = ACTIONS(49),
    [aux_sym_numeric_system_function_token26] = ACTIONS(49),
    [aux_sym_numeric_system_function_token27] = ACTIONS(49),
    [aux_sym_numeric_system_function_token28] = ACTIONS(49),
    [aux_sym_numeric_system_function_token29] = ACTIONS(49),
    [aux_sym_numeric_system_function_token30] = ACTIONS(49),
    [aux_sym_numeric_system_function_token31] = ACTIONS(49),
    [aux_sym_numeric_system_function_token32] = ACTIONS(49),
    [aux_sym_numeric_system_function_token33] = ACTIONS(49),
    [aux_sym_numeric_system_function_token34] = ACTIONS(49),
    [aux_sym_numeric_system_function_token35] = ACTIONS(49),
    [aux_sym_numeric_system_function_token36] = ACTIONS(49),
    [aux_sym_numeric_system_function_token37] = ACTIONS(49),
    [aux_sym_numeric_system_function_token38] = ACTIONS(49),
    [aux_sym_numeric_system_function_token39] = ACTIONS(49),
    [aux_sym_numeric_system_function_token40] = ACTIONS(49),
    [aux_sym_numeric_system_function_token41] = ACTIONS(49),
    [aux_sym_numeric_system_function_token42] = ACTIONS(49),
    [aux_sym_numeric_system_function_token43] = ACTIONS(49),
    [aux_sym_numeric_system_function_token44] = ACTIONS(49),
    [aux_sym_numeric_system_function_token45] = ACTIONS(49),
    [aux_sym_numeric_system_function_token46] = ACTIONS(49),
    [aux_sym_numeric_system_function_token47] = ACTIONS(49),
    [aux_sym_numeric_system_function_token48] = ACTIONS(49),
    [aux_sym_numeric_system_function_token49] = ACTIONS(49),
    [aux_sym_numeric_system_function_token50] = ACTIONS(49),
    [aux_sym_numeric_system_function_token51] = ACTIONS(49),
    [aux_sym_numeric_system_function_token52] = ACTIONS(49),
    [aux_sym_numeric_system_function_token53] = ACTIONS(49),
    [aux_sym_numeric_system_function_token54] = ACTIONS(49),
    [aux_sym_numeric_system_function_token55] = ACTIONS(49),
    [aux_sym_numeric_system_function_token56] = ACTIONS(49),
    [aux_sym_numeric_system_function_token57] = ACTIONS(49),
    [aux_sym_numeric_system_function_token58] = ACTIONS(49),
    [aux_sym_numeric_system_function_token59] = ACTIONS(49),
    [aux_sym_numeric_system_function_token60] = ACTIONS(49),
    [aux_sym_numeric_system_function_token61] = ACTIONS(49),
    [aux_sym_numeric_system_function_token62] = ACTIONS(49),
    [aux_sym_numeric_system_function_token63] = ACTIONS(49),
    [aux_sym_numeric_system_function_token64] = ACTIONS(49),
    [aux_sym_numeric_system_function_token65] = ACTIONS(49),
    [aux_sym_numeric_system_function_token66] = ACTIONS(49),
    [aux_sym_numeric_system_function_token67] = ACTIONS(49),
    [aux_sym_numeric_system_function_token68] = ACTIONS(49),
    [aux_sym_numeric_system_function_token69] = ACTIONS(49),
    [aux_sym_numeric_system_function_token70] = ACTIONS(49),
    [aux_sym_numeric_system_function_token71] = ACTIONS(49),
    [aux_sym_numeric_system_function_token72] = ACTIONS(49),
    [aux_sym_numeric_system_function_token73] = ACTIONS(49),
    [aux_sym_numeric_system_function_token74] = ACTIONS(49),
    [aux_sym_numeric_system_function_token75] = ACTIONS(49),
    [sym__numeric_function_identifier] = ACTIONS(75),
    [sym_numberidentifier] = ACTIONS(65),
    [aux_sym_number_token1] = ACTIONS(69),
  },
  [44] = {
    [sym_numeric_expression] = STATE(117),
    [sym_numeric_binary_expression] = STATE(101),
    [sym_numeric_unary_expression] = STATE(101),
    [sym_numeric_primary_expression] = STATE(101),
    [sym_numeric_call_expression] = STATE(100),
    [sym_numeric_system_function] = STATE(99),
    [sym_numeric_user_function] = STATE(99),
    [sym_parenthesized_expression] = STATE(100),
    [sym_numeric_forced_assignment_expression] = STATE(101),
    [sym__numeric_reference] = STATE(66),
    [sym_numberelement] = STATE(66),
    [sym_numberreference] = STATE(66),
    [sym_number] = STATE(100),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(45),
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(47),
    [aux_sym_numeric_system_function_token1] = ACTIONS(49),
    [aux_sym_numeric_system_function_token2] = ACTIONS(49),
    [aux_sym_numeric_system_function_token3] = ACTIONS(49),
    [aux_sym_numeric_system_function_token4] = ACTIONS(49),
    [aux_sym_numeric_system_function_token5] = ACTIONS(49),
    [aux_sym_numeric_system_function_token6] = ACTIONS(49),
    [aux_sym_numeric_system_function_token7] = ACTIONS(49),
    [aux_sym_numeric_system_function_token8] = ACTIONS(49),
    [aux_sym_numeric_system_function_token9] = ACTIONS(49),
    [aux_sym_numeric_system_function_token10] = ACTIONS(49),
    [aux_sym_numeric_system_function_token11] = ACTIONS(49),
    [aux_sym_numeric_system_function_token12] = ACTIONS(49),
    [aux_sym_numeric_system_function_token13] = ACTIONS(49),
    [aux_sym_numeric_system_function_token14] = ACTIONS(49),
    [aux_sym_numeric_system_function_token15] = ACTIONS(49),
    [aux_sym_numeric_system_function_token16] = ACTIONS(49),
    [aux_sym_numeric_system_function_token17] = ACTIONS(49),
    [aux_sym_numeric_system_function_token18] = ACTIONS(49),
    [aux_sym_numeric_system_function_token19] = ACTIONS(49),
    [aux_sym_numeric_system_function_token20] = ACTIONS(49),
    [aux_sym_numeric_system_function_token21] = ACTIONS(49),
    [aux_sym_numeric_system_function_token22] = ACTIONS(49),
    [aux_sym_numeric_system_function_token23] = ACTIONS(49),
    [aux_sym_numeric_system_function_token24] = ACTIONS(49),
    [aux_sym_numeric_system_function_token25] = ACTIONS(49),
    [aux_sym_numeric_system_function_token26] = ACTIONS(49),
    [aux_sym_numeric_system_function_token27] = ACTIONS(49),
    [aux_sym_numeric_system_function_token28] = ACTIONS(49),
    [aux_sym_numeric_system_function_token29] = ACTIONS(49),
    [aux_sym_numeric_system_function_token30] = ACTIONS(49),
    [aux_sym_numeric_system_function_token31] = ACTIONS(49),
    [aux_sym_numeric_system_function_token32] = ACTIONS(49),
    [aux_sym_numeric_system_function_token33] = ACTIONS(49),
    [aux_sym_numeric_system_function_token34] = ACTIONS(49),
    [aux_sym_numeric_system_function_token35] = ACTIONS(49),
    [aux_sym_numeric_system_function_token36] = ACTIONS(49),
    [aux_sym_numeric_system_function_token37] = ACTIONS(49),
    [aux_sym_numeric_system_function_token38] = ACTIONS(49),
    [aux_sym_numeric_system_function_token39] = ACTIONS(49),
    [aux_sym_numeric_system_function_token40] = ACTIONS(49),
    [aux_sym_numeric_system_function_token41] = ACTIONS(49),
    [aux_sym_numeric_system_function_token42] = ACTIONS(49),
    [aux_sym_numeric_system_function_token43] = ACTIONS(49),
    [aux_sym_numeric_system_function_token44] = ACTIONS(49),
    [aux_sym_numeric_system_function_token45] = ACTIONS(49),
    [aux_sym_numeric_system_function_token46] = ACTIONS(49),
    [aux_sym_numeric_system_function_token47] = ACTIONS(49),
    [aux_sym_numeric_system_function_token48] = ACTIONS(49),
    [aux_sym_numeric_system_function_token49] = ACTIONS(49),
    [aux_sym_numeric_system_function_token50] = ACTIONS(49),
    [aux_sym_numeric_system_function_token51] = ACTIONS(49),
    [aux_sym_numeric_system_function_token52] = ACTIONS(49),
    [aux_sym_numeric_system_function_token53] = ACTIONS(49),
    [aux_sym_numeric_system_function_token54] = ACTIONS(49),
    [aux_sym_numeric_system_function_token55] = ACTIONS(49),
    [aux_sym_numeric_system_function_token56] = ACTIONS(49),
    [aux_sym_numeric_system_function_token57] = ACTIONS(49),
    [aux_sym_numeric_system_function_token58] = ACTIONS(49),
    [aux_sym_numeric_system_function_token59] = ACTIONS(49),
    [aux_sym_numeric_system_function_token60] = ACTIONS(49),
    [aux_sym_numeric_system_function_token61] = ACTIONS(49),
    [aux_sym_numeric_system_function_token62] = ACTIONS(49),
    [aux_sym_numeric_system_function_token63] = ACTIONS(49),
    [aux_sym_numeric_system_function_token64] = ACTIONS(49),
    [aux_sym_numeric_system_function_token65] = ACTIONS(49),
    [aux_sym_numeric_system_function_token66] = ACTIONS(49),
    [aux_sym_numeric_system_function_token67] = ACTIONS(49),
    [aux_sym_numeric_system_function_token68] = ACTIONS(49),
    [aux_sym_numeric_system_function_token69] = ACTIONS(49),
    [aux_sym_numeric_system_function_token70] = ACTIONS(49),
    [aux_sym_numeric_system_function_token71] = ACTIONS(49),
    [aux_sym_numeric_system_function_token72] = ACTIONS(49),
    [aux_sym_numeric_system_function_token73] = ACTIONS(49),
    [aux_sym_numeric_system_function_token74] = ACTIONS(49),
    [aux_sym_numeric_system_function_token75] = ACTIONS(49),
    [sym__numeric_function_identifier] = ACTIONS(75),
    [sym_numberidentifier] = ACTIONS(65),
    [aux_sym_number_token1] = ACTIONS(69),
  },
  [45] = {
    [sym_numeric_expression] = STATE(116),
    [sym_numeric_binary_expression] = STATE(101),
    [sym_numeric_unary_expression] = STATE(101),
    [sym_numeric_primary_expression] = STATE(101),
    [sym_numeric_call_expression] = STATE(100),
    [sym_numeric_system_function] = STATE(99),
    [sym_numeric_user_function] = STATE(99),
    [sym_parenthesized_expression] = STATE(100),
    [sym_numeric_forced_assignment_expression] = STATE(101),
    [sym__numeric_reference] = STATE(66),
    [sym_numberelement] = STATE(66),
    [sym_numberreference] = STATE(66),
    [sym_number] = STATE(100),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(45),
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(47),
    [aux_sym_numeric_system_function_token1] = ACTIONS(49),
    [aux_sym_numeric_system_function_token2] = ACTIONS(49),
    [aux_sym_numeric_system_function_token3] = ACTIONS(49),
    [aux_sym_numeric_system_function_token4] = ACTIONS(49),
    [aux_sym_numeric_system_function_token5] = ACTIONS(49),
    [aux_sym_numeric_system_function_token6] = ACTIONS(49),
    [aux_sym_numeric_system_function_token7] = ACTIONS(49),
    [aux_sym_numeric_system_function_token8] = ACTIONS(49),
    [aux_sym_numeric_system_function_token9] = ACTIONS(49),
    [aux_sym_numeric_system_function_token10] = ACTIONS(49),
    [aux_sym_numeric_system_function_token11] = ACTIONS(49),
    [aux_sym_numeric_system_function_token12] = ACTIONS(49),
    [aux_sym_numeric_system_function_token13] = ACTIONS(49),
    [aux_sym_numeric_system_function_token14] = ACTIONS(49),
    [aux_sym_numeric_system_function_token15] = ACTIONS(49),
    [aux_sym_numeric_system_function_token16] = ACTIONS(49),
    [aux_sym_numeric_system_function_token17] = ACTIONS(49),
    [aux_sym_numeric_system_function_token18] = ACTIONS(49),
    [aux_sym_numeric_system_function_token19] = ACTIONS(49),
    [aux_sym_numeric_system_function_token20] = ACTIONS(49),
    [aux_sym_numeric_system_function_token21] = ACTIONS(49),
    [aux_sym_numeric_system_function_token22] = ACTIONS(49),
    [aux_sym_numeric_system_function_token23] = ACTIONS(49),
    [aux_sym_numeric_system_function_token24] = ACTIONS(49),
    [aux_sym_numeric_system_function_token25] = ACTIONS(49),
    [aux_sym_numeric_system_function_token26] = ACTIONS(49),
    [aux_sym_numeric_system_function_token27] = ACTIONS(49),
    [aux_sym_numeric_system_function_token28] = ACTIONS(49),
    [aux_sym_numeric_system_function_token29] = ACTIONS(49),
    [aux_sym_numeric_system_function_token30] = ACTIONS(49),
    [aux_sym_numeric_system_function_token31] = ACTIONS(49),
    [aux_sym_numeric_system_function_token32] = ACTIONS(49),
    [aux_sym_numeric_system_function_token33] = ACTIONS(49),
    [aux_sym_numeric_system_function_token34] = ACTIONS(49),
    [aux_sym_numeric_system_function_token35] = ACTIONS(49),
    [aux_sym_numeric_system_function_token36] = ACTIONS(49),
    [aux_sym_numeric_system_function_token37] = ACTIONS(49),
    [aux_sym_numeric_system_function_token38] = ACTIONS(49),
    [aux_sym_numeric_system_function_token39] = ACTIONS(49),
    [aux_sym_numeric_system_function_token40] = ACTIONS(49),
    [aux_sym_numeric_system_function_token41] = ACTIONS(49),
    [aux_sym_numeric_system_function_token42] = ACTIONS(49),
    [aux_sym_numeric_system_function_token43] = ACTIONS(49),
    [aux_sym_numeric_system_function_token44] = ACTIONS(49),
    [aux_sym_numeric_system_function_token45] = ACTIONS(49),
    [aux_sym_numeric_system_function_token46] = ACTIONS(49),
    [aux_sym_numeric_system_function_token47] = ACTIONS(49),
    [aux_sym_numeric_system_function_token48] = ACTIONS(49),
    [aux_sym_numeric_system_function_token49] = ACTIONS(49),
    [aux_sym_numeric_system_function_token50] = ACTIONS(49),
    [aux_sym_numeric_system_function_token51] = ACTIONS(49),
    [aux_sym_numeric_system_function_token52] = ACTIONS(49),
    [aux_sym_numeric_system_function_token53] = ACTIONS(49),
    [aux_sym_numeric_system_function_token54] = ACTIONS(49),
    [aux_sym_numeric_system_function_token55] = ACTIONS(49),
    [aux_sym_numeric_system_function_token56] = ACTIONS(49),
    [aux_sym_numeric_system_function_token57] = ACTIONS(49),
    [aux_sym_numeric_system_function_token58] = ACTIONS(49),
    [aux_sym_numeric_system_function_token59] = ACTIONS(49),
    [aux_sym_numeric_system_function_token60] = ACTIONS(49),
    [aux_sym_numeric_system_function_token61] = ACTIONS(49),
    [aux_sym_numeric_system_function_token62] = ACTIONS(49),
    [aux_sym_numeric_system_function_token63] = ACTIONS(49),
    [aux_sym_numeric_system_function_token64] = ACTIONS(49),
    [aux_sym_numeric_system_function_token65] = ACTIONS(49),
    [aux_sym_numeric_system_function_token66] = ACTIONS(49),
    [aux_sym_numeric_system_function_token67] = ACTIONS(49),
    [aux_sym_numeric_system_function_token68] = ACTIONS(49),
    [aux_sym_numeric_system_function_token69] = ACTIONS(49),
    [aux_sym_numeric_system_function_token70] = ACTIONS(49),
    [aux_sym_numeric_system_function_token71] = ACTIONS(49),
    [aux_sym_numeric_system_function_token72] = ACTIONS(49),
    [aux_sym_numeric_system_function_token73] = ACTIONS(49),
    [aux_sym_numeric_system_function_token74] = ACTIONS(49),
    [aux_sym_numeric_system_function_token75] = ACTIONS(49),
    [sym__numeric_function_identifier] = ACTIONS(75),
    [sym_numberidentifier] = ACTIONS(65),
    [aux_sym_number_token1] = ACTIONS(69),
  },
  [46] = {
    [sym_numeric_expression] = STATE(79),
    [sym_numeric_binary_expression] = STATE(89),
    [sym_numeric_unary_expression] = STATE(89),
    [sym_numeric_primary_expression] = STATE(89),
    [sym_numeric_call_expression] = STATE(78),
    [sym_numeric_system_function] = STATE(93),
    [sym_numeric_user_function] = STATE(93),
    [sym_parenthesized_expression] = STATE(78),
    [sym_numeric_forced_assignment_expression] = STATE(89),
    [sym__numeric_reference] = STATE(65),
    [sym_numberelement] = STATE(65),
    [sym_numberreference] = STATE(65),
    [sym_number] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(19),
    [aux_sym_numeric_system_function_token1] = ACTIONS(21),
    [aux_sym_numeric_system_function_token2] = ACTIONS(21),
    [aux_sym_numeric_system_function_token3] = ACTIONS(21),
    [aux_sym_numeric_system_function_token4] = ACTIONS(21),
    [aux_sym_numeric_system_function_token5] = ACTIONS(21),
    [aux_sym_numeric_system_function_token6] = ACTIONS(21),
    [aux_sym_numeric_system_function_token7] = ACTIONS(21),
    [aux_sym_numeric_system_function_token8] = ACTIONS(21),
    [aux_sym_numeric_system_function_token9] = ACTIONS(21),
    [aux_sym_numeric_system_function_token10] = ACTIONS(21),
    [aux_sym_numeric_system_function_token11] = ACTIONS(21),
    [aux_sym_numeric_system_function_token12] = ACTIONS(21),
    [aux_sym_numeric_system_function_token13] = ACTIONS(21),
    [aux_sym_numeric_system_function_token14] = ACTIONS(21),
    [aux_sym_numeric_system_function_token15] = ACTIONS(21),
    [aux_sym_numeric_system_function_token16] = ACTIONS(21),
    [aux_sym_numeric_system_function_token17] = ACTIONS(21),
    [aux_sym_numeric_system_function_token18] = ACTIONS(21),
    [aux_sym_numeric_system_function_token19] = ACTIONS(21),
    [aux_sym_numeric_system_function_token20] = ACTIONS(21),
    [aux_sym_numeric_system_function_token21] = ACTIONS(21),
    [aux_sym_numeric_system_function_token22] = ACTIONS(21),
    [aux_sym_numeric_system_function_token23] = ACTIONS(21),
    [aux_sym_numeric_system_function_token24] = ACTIONS(21),
    [aux_sym_numeric_system_function_token25] = ACTIONS(21),
    [aux_sym_numeric_system_function_token26] = ACTIONS(21),
    [aux_sym_numeric_system_function_token27] = ACTIONS(21),
    [aux_sym_numeric_system_function_token28] = ACTIONS(21),
    [aux_sym_numeric_system_function_token29] = ACTIONS(21),
    [aux_sym_numeric_system_function_token30] = ACTIONS(21),
    [aux_sym_numeric_system_function_token31] = ACTIONS(21),
    [aux_sym_numeric_system_function_token32] = ACTIONS(21),
    [aux_sym_numeric_system_function_token33] = ACTIONS(21),
    [aux_sym_numeric_system_function_token34] = ACTIONS(21),
    [aux_sym_numeric_system_function_token35] = ACTIONS(21),
    [aux_sym_numeric_system_function_token36] = ACTIONS(21),
    [aux_sym_numeric_system_function_token37] = ACTIONS(21),
    [aux_sym_numeric_system_function_token38] = ACTIONS(21),
    [aux_sym_numeric_system_function_token39] = ACTIONS(21),
    [aux_sym_numeric_system_function_token40] = ACTIONS(21),
    [aux_sym_numeric_system_function_token41] = ACTIONS(21),
    [aux_sym_numeric_system_function_token42] = ACTIONS(21),
    [aux_sym_numeric_system_function_token43] = ACTIONS(21),
    [aux_sym_numeric_system_function_token44] = ACTIONS(21),
    [aux_sym_numeric_system_function_token45] = ACTIONS(21),
    [aux_sym_numeric_system_function_token46] = ACTIONS(21),
    [aux_sym_numeric_system_function_token47] = ACTIONS(21),
    [aux_sym_numeric_system_function_token48] = ACTIONS(21),
    [aux_sym_numeric_system_function_token49] = ACTIONS(21),
    [aux_sym_numeric_system_function_token50] = ACTIONS(21),
    [aux_sym_numeric_system_function_token51] = ACTIONS(21),
    [aux_sym_numeric_system_function_token52] = ACTIONS(21),
    [aux_sym_numeric_system_function_token53] = ACTIONS(21),
    [aux_sym_numeric_system_function_token54] = ACTIONS(21),
    [aux_sym_numeric_system_function_token55] = ACTIONS(21),
    [aux_sym_numeric_system_function_token56] = ACTIONS(21),
    [aux_sym_numeric_system_function_token57] = ACTIONS(21),
    [aux_sym_numeric_system_function_token58] = ACTIONS(21),
    [aux_sym_numeric_system_function_token59] = ACTIONS(21),
    [aux_sym_numeric_system_function_token60] = ACTIONS(21),
    [aux_sym_numeric_system_function_token61] = ACTIONS(21),
    [aux_sym_numeric_system_function_token62] = ACTIONS(21),
    [aux_sym_numeric_system_function_token63] = ACTIONS(21),
    [aux_sym_numeric_system_function_token64] = ACTIONS(21),
    [aux_sym_numeric_system_function_token65] = ACTIONS(21),
    [aux_sym_numeric_system_function_token66] = ACTIONS(21),
    [aux_sym_numeric_system_function_token67] = ACTIONS(21),
    [aux_sym_numeric_system_function_token68] = ACTIONS(21),
    [aux_sym_numeric_system_function_token69] = ACTIONS(21),
    [aux_sym_numeric_system_function_token70] = ACTIONS(21),
    [aux_sym_numeric_system_function_token71] = ACTIONS(21),
    [aux_sym_numeric_system_function_token72] = ACTIONS(21),
    [aux_sym_numeric_system_function_token73] = ACTIONS(21),
    [aux_sym_numeric_system_function_token74] = ACTIONS(21),
    [aux_sym_numeric_system_function_token75] = ACTIONS(21),
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(37),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [47] = {
    [sym_numeric_expression] = STATE(113),
    [sym_numeric_binary_expression] = STATE(101),
    [sym_numeric_unary_expression] = STATE(101),
    [sym_numeric_primary_expression] = STATE(101),
    [sym_numeric_call_expression] = STATE(100),
    [sym_numeric_system_function] = STATE(99),
    [sym_numeric_user_function] = STATE(99),
    [sym_parenthesized_expression] = STATE(100),
    [sym_numeric_forced_assignment_expression] = STATE(101),
    [sym__numeric_reference] = STATE(66),
    [sym_numberelement] = STATE(66),
    [sym_numberreference] = STATE(66),
    [sym_number] = STATE(100),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(45),
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(47),
    [aux_sym_numeric_system_function_token1] = ACTIONS(49),
    [aux_sym_numeric_system_function_token2] = ACTIONS(49),
    [aux_sym_numeric_system_function_token3] = ACTIONS(49),
    [aux_sym_numeric_system_function_token4] = ACTIONS(49),
    [aux_sym_numeric_system_function_token5] = ACTIONS(49),
    [aux_sym_numeric_system_function_token6] = ACTIONS(49),
    [aux_sym_numeric_system_function_token7] = ACTIONS(49),
    [aux_sym_numeric_system_function_token8] = ACTIONS(49),
    [aux_sym_numeric_system_function_token9] = ACTIONS(49),
    [aux_sym_numeric_system_function_token10] = ACTIONS(49),
    [aux_sym_numeric_system_function_token11] = ACTIONS(49),
    [aux_sym_numeric_system_function_token12] = ACTIONS(49),
    [aux_sym_numeric_system_function_token13] = ACTIONS(49),
    [aux_sym_numeric_system_function_token14] = ACTIONS(49),
    [aux_sym_numeric_system_function_token15] = ACTIONS(49),
    [aux_sym_numeric_system_function_token16] = ACTIONS(49),
    [aux_sym_numeric_system_function_token17] = ACTIONS(49),
    [aux_sym_numeric_system_function_token18] = ACTIONS(49),
    [aux_sym_numeric_system_function_token19] = ACTIONS(49),
    [aux_sym_numeric_system_function_token20] = ACTIONS(49),
    [aux_sym_numeric_system_function_token21] = ACTIONS(49),
    [aux_sym_numeric_system_function_token22] = ACTIONS(49),
    [aux_sym_numeric_system_function_token23] = ACTIONS(49),
    [aux_sym_numeric_system_function_token24] = ACTIONS(49),
    [aux_sym_numeric_system_function_token25] = ACTIONS(49),
    [aux_sym_numeric_system_function_token26] = ACTIONS(49),
    [aux_sym_numeric_system_function_token27] = ACTIONS(49),
    [aux_sym_numeric_system_function_token28] = ACTIONS(49),
    [aux_sym_numeric_system_function_token29] = ACTIONS(49),
    [aux_sym_numeric_system_function_token30] = ACTIONS(49),
    [aux_sym_numeric_system_function_token31] = ACTIONS(49),
    [aux_sym_numeric_system_function_token32] = ACTIONS(49),
    [aux_sym_numeric_system_function_token33] = ACTIONS(49),
    [aux_sym_numeric_system_function_token34] = ACTIONS(49),
    [aux_sym_numeric_system_function_token35] = ACTIONS(49),
    [aux_sym_numeric_system_function_token36] = ACTIONS(49),
    [aux_sym_numeric_system_function_token37] = ACTIONS(49),
    [aux_sym_numeric_system_function_token38] = ACTIONS(49),
    [aux_sym_numeric_system_function_token39] = ACTIONS(49),
    [aux_sym_numeric_system_function_token40] = ACTIONS(49),
    [aux_sym_numeric_system_function_token41] = ACTIONS(49),
    [aux_sym_numeric_system_function_token42] = ACTIONS(49),
    [aux_sym_numeric_system_function_token43] = ACTIONS(49),
    [aux_sym_numeric_system_function_token44] = ACTIONS(49),
    [aux_sym_numeric_system_function_token45] = ACTIONS(49),
    [aux_sym_numeric_system_function_token46] = ACTIONS(49),
    [aux_sym_numeric_system_function_token47] = ACTIONS(49),
    [aux_sym_numeric_system_function_token48] = ACTIONS(49),
    [aux_sym_numeric_system_function_token49] = ACTIONS(49),
    [aux_sym_numeric_system_function_token50] = ACTIONS(49),
    [aux_sym_numeric_system_function_token51] = ACTIONS(49),
    [aux_sym_numeric_system_function_token52] = ACTIONS(49),
    [aux_sym_numeric_system_function_token53] = ACTIONS(49),
    [aux_sym_numeric_system_function_token54] = ACTIONS(49),
    [aux_sym_numeric_system_function_token55] = ACTIONS(49),
    [aux_sym_numeric_system_function_token56] = ACTIONS(49),
    [aux_sym_numeric_system_function_token57] = ACTIONS(49),
    [aux_sym_numeric_system_function_token58] = ACTIONS(49),
    [aux_sym_numeric_system_function_token59] = ACTIONS(49),
    [aux_sym_numeric_system_function_token60] = ACTIONS(49),
    [aux_sym_numeric_system_function_token61] = ACTIONS(49),
    [aux_sym_numeric_system_function_token62] = ACTIONS(49),
    [aux_sym_numeric_system_function_token63] = ACTIONS(49),
    [aux_sym_numeric_system_function_token64] = ACTIONS(49),
    [aux_sym_numeric_system_function_token65] = ACTIONS(49),
    [aux_sym_numeric_system_function_token66] = ACTIONS(49),
    [aux_sym_numeric_system_function_token67] = ACTIONS(49),
    [aux_sym_numeric_system_function_token68] = ACTIONS(49),
    [aux_sym_numeric_system_function_token69] = ACTIONS(49),
    [aux_sym_numeric_system_function_token70] = ACTIONS(49),
    [aux_sym_numeric_system_function_token71] = ACTIONS(49),
    [aux_sym_numeric_system_function_token72] = ACTIONS(49),
    [aux_sym_numeric_system_function_token73] = ACTIONS(49),
    [aux_sym_numeric_system_function_token74] = ACTIONS(49),
    [aux_sym_numeric_system_function_token75] = ACTIONS(49),
    [sym__numeric_function_identifier] = ACTIONS(75),
    [sym_numberidentifier] = ACTIONS(65),
    [aux_sym_number_token1] = ACTIONS(69),
  },
  [48] = {
    [sym_numeric_expression] = STATE(112),
    [sym_numeric_binary_expression] = STATE(101),
    [sym_numeric_unary_expression] = STATE(101),
    [sym_numeric_primary_expression] = STATE(101),
    [sym_numeric_call_expression] = STATE(100),
    [sym_numeric_system_function] = STATE(99),
    [sym_numeric_user_function] = STATE(99),
    [sym_parenthesized_expression] = STATE(100),
    [sym_numeric_forced_assignment_expression] = STATE(101),
    [sym__numeric_reference] = STATE(66),
    [sym_numberelement] = STATE(66),
    [sym_numberreference] = STATE(66),
    [sym_number] = STATE(100),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(45),
    [anon_sym_TILDE] = ACTIONS(45),
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(47),
    [aux_sym_numeric_system_function_token1] = ACTIONS(49),
    [aux_sym_numeric_system_function_token2] = ACTIONS(49),
    [aux_sym_numeric_system_function_token3] = ACTIONS(49),
    [aux_sym_numeric_system_function_token4] = ACTIONS(49),
    [aux_sym_numeric_system_function_token5] = ACTIONS(49),
    [aux_sym_numeric_system_function_token6] = ACTIONS(49),
    [aux_sym_numeric_system_function_token7] = ACTIONS(49),
    [aux_sym_numeric_system_function_token8] = ACTIONS(49),
    [aux_sym_numeric_system_function_token9] = ACTIONS(49),
    [aux_sym_numeric_system_function_token10] = ACTIONS(49),
    [aux_sym_numeric_system_function_token11] = ACTIONS(49),
    [aux_sym_numeric_system_function_token12] = ACTIONS(49),
    [aux_sym_numeric_system_function_token13] = ACTIONS(49),
    [aux_sym_numeric_system_function_token14] = ACTIONS(49),
    [aux_sym_numeric_system_function_token15] = ACTIONS(49),
    [aux_sym_numeric_system_function_token16] = ACTIONS(49),
    [aux_sym_numeric_system_function_token17] = ACTIONS(49),
    [aux_sym_numeric_system_function_token18] = ACTIONS(49),
    [aux_sym_numeric_system_function_token19] = ACTIONS(49),
    [aux_sym_numeric_system_function_token20] = ACTIONS(49),
    [aux_sym_numeric_system_function_token21] = ACTIONS(49),
    [aux_sym_numeric_system_function_token22] = ACTIONS(49),
    [aux_sym_numeric_system_function_token23] = ACTIONS(49),
    [aux_sym_numeric_system_function_token24] = ACTIONS(49),
    [aux_sym_numeric_system_function_token25] = ACTIONS(49),
    [aux_sym_numeric_system_function_token26] = ACTIONS(49),
    [aux_sym_numeric_system_function_token27] = ACTIONS(49),
    [aux_sym_numeric_system_function_token28] = ACTIONS(49),
    [aux_sym_numeric_system_function_token29] = ACTIONS(49),
    [aux_sym_numeric_system_function_token30] = ACTIONS(49),
    [aux_sym_numeric_system_function_token31] = ACTIONS(49),
    [aux_sym_numeric_system_function_token32] = ACTIONS(49),
    [aux_sym_numeric_system_function_token33] = ACTIONS(49),
    [aux_sym_numeric_system_function_token34] = ACTIONS(49),
    [aux_sym_numeric_system_function_token35] = ACTIONS(49),
    [aux_sym_numeric_system_function_token36] = ACTIONS(49),
    [aux_sym_numeric_system_function_token37] = ACTIONS(49),
    [aux_sym_numeric_system_function_token38] = ACTIONS(49),
    [aux_sym_numeric_system_function_token39] = ACTIONS(49),
    [aux_sym_numeric_system_function_token40] = ACTIONS(49),
    [aux_sym_numeric_system_function_token41] = ACTIONS(49),
    [aux_sym_numeric_system_function_token42] = ACTIONS(49),
    [aux_sym_numeric_system_function_token43] = ACTIONS(49),
    [aux_sym_numeric_system_function_token44] = ACTIONS(49),
    [aux_sym_numeric_system_function_token45] = ACTIONS(49),
    [aux_sym_numeric_system_function_token46] = ACTIONS(49),
    [aux_sym_numeric_system_function_token47] = ACTIONS(49),
    [aux_sym_numeric_system_function_token48] = ACTIONS(49),
    [aux_sym_numeric_system_function_token49] = ACTIONS(49),
    [aux_sym_numeric_system_function_token50] = ACTIONS(49),
    [aux_sym_numeric_system_function_token51] = ACTIONS(49),
    [aux_sym_numeric_system_function_token52] = ACTIONS(49),
    [aux_sym_numeric_system_function_token53] = ACTIONS(49),
    [aux_sym_numeric_system_function_token54] = ACTIONS(49),
    [aux_sym_numeric_system_function_token55] = ACTIONS(49),
    [aux_sym_numeric_system_function_token56] = ACTIONS(49),
    [aux_sym_numeric_system_function_token57] = ACTIONS(49),
    [aux_sym_numeric_system_function_token58] = ACTIONS(49),
    [aux_sym_numeric_system_function_token59] = ACTIONS(49),
    [aux_sym_numeric_system_function_token60] = ACTIONS(49),
    [aux_sym_numeric_system_function_token61] = ACTIONS(49),
    [aux_sym_numeric_system_function_token62] = ACTIONS(49),
    [aux_sym_numeric_system_function_token63] = ACTIONS(49),
    [aux_sym_numeric_system_function_token64] = ACTIONS(49),
    [aux_sym_numeric_system_function_token65] = ACTIONS(49),
    [aux_sym_numeric_system_function_token66] = ACTIONS(49),
    [aux_sym_numeric_system_function_token67] = ACTIONS(49),
    [aux_sym_numeric_system_function_token68] = ACTIONS(49),
    [aux_sym_numeric_system_function_token69] = ACTIONS(49),
    [aux_sym_numeric_system_function_token70] = ACTIONS(49),
    [aux_sym_numeric_system_function_token71] = ACTIONS(49),
    [aux_sym_numeric_system_function_token72] = ACTIONS(49),
    [aux_sym_numeric_system_function_token73] = ACTIONS(49),
    [aux_sym_numeric_system_function_token74] = ACTIONS(49),
    [aux_sym_numeric_system_function_token75] = ACTIONS(49),
    [sym__numeric_function_identifier] = ACTIONS(75),
    [sym_numberidentifier] = ACTIONS(65),
    [aux_sym_number_token1] = ACTIONS(69),
  },
  [49] = {
    [sym_numeric_expression] = STATE(121),
    [sym_numeric_binary_expression] = STATE(89),
    [sym_numeric_unary_expression] = STATE(89),
    [sym_numeric_primary_expression] = STATE(89),
    [sym_numeric_call_expression] = STATE(78),
    [sym_numeric_system_function] = STATE(93),
    [sym_numeric_user_function] = STATE(93),
    [sym_parenthesized_expression] = STATE(78),
    [sym_numeric_forced_assignment_expression] = STATE(89),
    [sym__numeric_reference] = STATE(65),
    [sym_numberelement] = STATE(65),
    [sym_numberreference] = STATE(65),
    [sym_number] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(19),
    [aux_sym_numeric_system_function_token1] = ACTIONS(21),
    [aux_sym_numeric_system_function_token2] = ACTIONS(21),
    [aux_sym_numeric_system_function_token3] = ACTIONS(21),
    [aux_sym_numeric_system_function_token4] = ACTIONS(21),
    [aux_sym_numeric_system_function_token5] = ACTIONS(21),
    [aux_sym_numeric_system_function_token6] = ACTIONS(21),
    [aux_sym_numeric_system_function_token7] = ACTIONS(21),
    [aux_sym_numeric_system_function_token8] = ACTIONS(21),
    [aux_sym_numeric_system_function_token9] = ACTIONS(21),
    [aux_sym_numeric_system_function_token10] = ACTIONS(21),
    [aux_sym_numeric_system_function_token11] = ACTIONS(21),
    [aux_sym_numeric_system_function_token12] = ACTIONS(21),
    [aux_sym_numeric_system_function_token13] = ACTIONS(21),
    [aux_sym_numeric_system_function_token14] = ACTIONS(21),
    [aux_sym_numeric_system_function_token15] = ACTIONS(21),
    [aux_sym_numeric_system_function_token16] = ACTIONS(21),
    [aux_sym_numeric_system_function_token17] = ACTIONS(21),
    [aux_sym_numeric_system_function_token18] = ACTIONS(21),
    [aux_sym_numeric_system_function_token19] = ACTIONS(21),
    [aux_sym_numeric_system_function_token20] = ACTIONS(21),
    [aux_sym_numeric_system_function_token21] = ACTIONS(21),
    [aux_sym_numeric_system_function_token22] = ACTIONS(21),
    [aux_sym_numeric_system_function_token23] = ACTIONS(21),
    [aux_sym_numeric_system_function_token24] = ACTIONS(21),
    [aux_sym_numeric_system_function_token25] = ACTIONS(21),
    [aux_sym_numeric_system_function_token26] = ACTIONS(21),
    [aux_sym_numeric_system_function_token27] = ACTIONS(21),
    [aux_sym_numeric_system_function_token28] = ACTIONS(21),
    [aux_sym_numeric_system_function_token29] = ACTIONS(21),
    [aux_sym_numeric_system_function_token30] = ACTIONS(21),
    [aux_sym_numeric_system_function_token31] = ACTIONS(21),
    [aux_sym_numeric_system_function_token32] = ACTIONS(21),
    [aux_sym_numeric_system_function_token33] = ACTIONS(21),
    [aux_sym_numeric_system_function_token34] = ACTIONS(21),
    [aux_sym_numeric_system_function_token35] = ACTIONS(21),
    [aux_sym_numeric_system_function_token36] = ACTIONS(21),
    [aux_sym_numeric_system_function_token37] = ACTIONS(21),
    [aux_sym_numeric_system_function_token38] = ACTIONS(21),
    [aux_sym_numeric_system_function_token39] = ACTIONS(21),
    [aux_sym_numeric_system_function_token40] = ACTIONS(21),
    [aux_sym_numeric_system_function_token41] = ACTIONS(21),
    [aux_sym_numeric_system_function_token42] = ACTIONS(21),
    [aux_sym_numeric_system_function_token43] = ACTIONS(21),
    [aux_sym_numeric_system_function_token44] = ACTIONS(21),
    [aux_sym_numeric_system_function_token45] = ACTIONS(21),
    [aux_sym_numeric_system_function_token46] = ACTIONS(21),
    [aux_sym_numeric_system_function_token47] = ACTIONS(21),
    [aux_sym_numeric_system_function_token48] = ACTIONS(21),
    [aux_sym_numeric_system_function_token49] = ACTIONS(21),
    [aux_sym_numeric_system_function_token50] = ACTIONS(21),
    [aux_sym_numeric_system_function_token51] = ACTIONS(21),
    [aux_sym_numeric_system_function_token52] = ACTIONS(21),
    [aux_sym_numeric_system_function_token53] = ACTIONS(21),
    [aux_sym_numeric_system_function_token54] = ACTIONS(21),
    [aux_sym_numeric_system_function_token55] = ACTIONS(21),
    [aux_sym_numeric_system_function_token56] = ACTIONS(21),
    [aux_sym_numeric_system_function_token57] = ACTIONS(21),
    [aux_sym_numeric_system_function_token58] = ACTIONS(21),
    [aux_sym_numeric_system_function_token59] = ACTIONS(21),
    [aux_sym_numeric_system_function_token60] = ACTIONS(21),
    [aux_sym_numeric_system_function_token61] = ACTIONS(21),
    [aux_sym_numeric_system_function_token62] = ACTIONS(21),
    [aux_sym_numeric_system_function_token63] = ACTIONS(21),
    [aux_sym_numeric_system_function_token64] = ACTIONS(21),
    [aux_sym_numeric_system_function_token65] = ACTIONS(21),
    [aux_sym_numeric_system_function_token66] = ACTIONS(21),
    [aux_sym_numeric_system_function_token67] = ACTIONS(21),
    [aux_sym_numeric_system_function_token68] = ACTIONS(21),
    [aux_sym_numeric_system_function_token69] = ACTIONS(21),
    [aux_sym_numeric_system_function_token70] = ACTIONS(21),
    [aux_sym_numeric_system_function_token71] = ACTIONS(21),
    [aux_sym_numeric_system_function_token72] = ACTIONS(21),
    [aux_sym_numeric_system_function_token73] = ACTIONS(21),
    [aux_sym_numeric_system_function_token74] = ACTIONS(21),
    [aux_sym_numeric_system_function_token75] = ACTIONS(21),
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(37),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [50] = {
    [sym_numeric_expression] = STATE(127),
    [sym_numeric_binary_expression] = STATE(89),
    [sym_numeric_unary_expression] = STATE(89),
    [sym_numeric_primary_expression] = STATE(89),
    [sym_numeric_call_expression] = STATE(78),
    [sym_numeric_system_function] = STATE(93),
    [sym_numeric_user_function] = STATE(93),
    [sym_parenthesized_expression] = STATE(78),
    [sym_numeric_forced_assignment_expression] = STATE(89),
    [sym__numeric_reference] = STATE(65),
    [sym_numberelement] = STATE(65),
    [sym_numberreference] = STATE(65),
    [sym_number] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(19),
    [aux_sym_numeric_system_function_token1] = ACTIONS(21),
    [aux_sym_numeric_system_function_token2] = ACTIONS(21),
    [aux_sym_numeric_system_function_token3] = ACTIONS(21),
    [aux_sym_numeric_system_function_token4] = ACTIONS(21),
    [aux_sym_numeric_system_function_token5] = ACTIONS(21),
    [aux_sym_numeric_system_function_token6] = ACTIONS(21),
    [aux_sym_numeric_system_function_token7] = ACTIONS(21),
    [aux_sym_numeric_system_function_token8] = ACTIONS(21),
    [aux_sym_numeric_system_function_token9] = ACTIONS(21),
    [aux_sym_numeric_system_function_token10] = ACTIONS(21),
    [aux_sym_numeric_system_function_token11] = ACTIONS(21),
    [aux_sym_numeric_system_function_token12] = ACTIONS(21),
    [aux_sym_numeric_system_function_token13] = ACTIONS(21),
    [aux_sym_numeric_system_function_token14] = ACTIONS(21),
    [aux_sym_numeric_system_function_token15] = ACTIONS(21),
    [aux_sym_numeric_system_function_token16] = ACTIONS(21),
    [aux_sym_numeric_system_function_token17] = ACTIONS(21),
    [aux_sym_numeric_system_function_token18] = ACTIONS(21),
    [aux_sym_numeric_system_function_token19] = ACTIONS(21),
    [aux_sym_numeric_system_function_token20] = ACTIONS(21),
    [aux_sym_numeric_system_function_token21] = ACTIONS(21),
    [aux_sym_numeric_system_function_token22] = ACTIONS(21),
    [aux_sym_numeric_system_function_token23] = ACTIONS(21),
    [aux_sym_numeric_system_function_token24] = ACTIONS(21),
    [aux_sym_numeric_system_function_token25] = ACTIONS(21),
    [aux_sym_numeric_system_function_token26] = ACTIONS(21),
    [aux_sym_numeric_system_function_token27] = ACTIONS(21),
    [aux_sym_numeric_system_function_token28] = ACTIONS(21),
    [aux_sym_numeric_system_function_token29] = ACTIONS(21),
    [aux_sym_numeric_system_function_token30] = ACTIONS(21),
    [aux_sym_numeric_system_function_token31] = ACTIONS(21),
    [aux_sym_numeric_system_function_token32] = ACTIONS(21),
    [aux_sym_numeric_system_function_token33] = ACTIONS(21),
    [aux_sym_numeric_system_function_token34] = ACTIONS(21),
    [aux_sym_numeric_system_function_token35] = ACTIONS(21),
    [aux_sym_numeric_system_function_token36] = ACTIONS(21),
    [aux_sym_numeric_system_function_token37] = ACTIONS(21),
    [aux_sym_numeric_system_function_token38] = ACTIONS(21),
    [aux_sym_numeric_system_function_token39] = ACTIONS(21),
    [aux_sym_numeric_system_function_token40] = ACTIONS(21),
    [aux_sym_numeric_system_function_token41] = ACTIONS(21),
    [aux_sym_numeric_system_function_token42] = ACTIONS(21),
    [aux_sym_numeric_system_function_token43] = ACTIONS(21),
    [aux_sym_numeric_system_function_token44] = ACTIONS(21),
    [aux_sym_numeric_system_function_token45] = ACTIONS(21),
    [aux_sym_numeric_system_function_token46] = ACTIONS(21),
    [aux_sym_numeric_system_function_token47] = ACTIONS(21),
    [aux_sym_numeric_system_function_token48] = ACTIONS(21),
    [aux_sym_numeric_system_function_token49] = ACTIONS(21),
    [aux_sym_numeric_system_function_token50] = ACTIONS(21),
    [aux_sym_numeric_system_function_token51] = ACTIONS(21),
    [aux_sym_numeric_system_function_token52] = ACTIONS(21),
    [aux_sym_numeric_system_function_token53] = ACTIONS(21),
    [aux_sym_numeric_system_function_token54] = ACTIONS(21),
    [aux_sym_numeric_system_function_token55] = ACTIONS(21),
    [aux_sym_numeric_system_function_token56] = ACTIONS(21),
    [aux_sym_numeric_system_function_token57] = ACTIONS(21),
    [aux_sym_numeric_system_function_token58] = ACTIONS(21),
    [aux_sym_numeric_system_function_token59] = ACTIONS(21),
    [aux_sym_numeric_system_function_token60] = ACTIONS(21),
    [aux_sym_numeric_system_function_token61] = ACTIONS(21),
    [aux_sym_numeric_system_function_token62] = ACTIONS(21),
    [aux_sym_numeric_system_function_token63] = ACTIONS(21),
    [aux_sym_numeric_system_function_token64] = ACTIONS(21),
    [aux_sym_numeric_system_function_token65] = ACTIONS(21),
    [aux_sym_numeric_system_function_token66] = ACTIONS(21),
    [aux_sym_numeric_system_function_token67] = ACTIONS(21),
    [aux_sym_numeric_system_function_token68] = ACTIONS(21),
    [aux_sym_numeric_system_function_token69] = ACTIONS(21),
    [aux_sym_numeric_system_function_token70] = ACTIONS(21),
    [aux_sym_numeric_system_function_token71] = ACTIONS(21),
    [aux_sym_numeric_system_function_token72] = ACTIONS(21),
    [aux_sym_numeric_system_function_token73] = ACTIONS(21),
    [aux_sym_numeric_system_function_token74] = ACTIONS(21),
    [aux_sym_numeric_system_function_token75] = ACTIONS(21),
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(37),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [51] = {
    [sym_numeric_expression] = STATE(128),
    [sym_numeric_binary_expression] = STATE(89),
    [sym_numeric_unary_expression] = STATE(89),
    [sym_numeric_primary_expression] = STATE(89),
    [sym_numeric_call_expression] = STATE(78),
    [sym_numeric_system_function] = STATE(93),
    [sym_numeric_user_function] = STATE(93),
    [sym_parenthesized_expression] = STATE(78),
    [sym_numeric_forced_assignment_expression] = STATE(89),
    [sym__numeric_reference] = STATE(65),
    [sym_numberelement] = STATE(65),
    [sym_numberreference] = STATE(65),
    [sym_number] = STATE(78),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_TILDE] = ACTIONS(17),
    [aux_sym_numeric_unary_expression_token1] = ACTIONS(19),
    [aux_sym_numeric_system_function_token1] = ACTIONS(21),
    [aux_sym_numeric_system_function_token2] = ACTIONS(21),
    [aux_sym_numeric_system_function_token3] = ACTIONS(21),
    [aux_sym_numeric_system_function_token4] = ACTIONS(21),
    [aux_sym_numeric_system_function_token5] = ACTIONS(21),
    [aux_sym_numeric_system_function_token6] = ACTIONS(21),
    [aux_sym_numeric_system_function_token7] = ACTIONS(21),
    [aux_sym_numeric_system_function_token8] = ACTIONS(21),
    [aux_sym_numeric_system_function_token9] = ACTIONS(21),
    [aux_sym_numeric_system_function_token10] = ACTIONS(21),
    [aux_sym_numeric_system_function_token11] = ACTIONS(21),
    [aux_sym_numeric_system_function_token12] = ACTIONS(21),
    [aux_sym_numeric_system_function_token13] = ACTIONS(21),
    [aux_sym_numeric_system_function_token14] = ACTIONS(21),
    [aux_sym_numeric_system_function_token15] = ACTIONS(21),
    [aux_sym_numeric_system_function_token16] = ACTIONS(21),
    [aux_sym_numeric_system_function_token17] = ACTIONS(21),
    [aux_sym_numeric_system_function_token18] = ACTIONS(21),
    [aux_sym_numeric_system_function_token19] = ACTIONS(21),
    [aux_sym_numeric_system_function_token20] = ACTIONS(21),
    [aux_sym_numeric_system_function_token21] = ACTIONS(21),
    [aux_sym_numeric_system_function_token22] = ACTIONS(21),
    [aux_sym_numeric_system_function_token23] = ACTIONS(21),
    [aux_sym_numeric_system_function_token24] = ACTIONS(21),
    [aux_sym_numeric_system_function_token25] = ACTIONS(21),
    [aux_sym_numeric_system_function_token26] = ACTIONS(21),
    [aux_sym_numeric_system_function_token27] = ACTIONS(21),
    [aux_sym_numeric_system_function_token28] = ACTIONS(21),
    [aux_sym_numeric_system_function_token29] = ACTIONS(21),
    [aux_sym_numeric_system_function_token30] = ACTIONS(21),
    [aux_sym_numeric_system_function_token31] = ACTIONS(21),
    [aux_sym_numeric_system_function_token32] = ACTIONS(21),
    [aux_sym_numeric_system_function_token33] = ACTIONS(21),
    [aux_sym_numeric_system_function_token34] = ACTIONS(21),
    [aux_sym_numeric_system_function_token35] = ACTIONS(21),
    [aux_sym_numeric_system_function_token36] = ACTIONS(21),
    [aux_sym_numeric_system_function_token37] = ACTIONS(21),
    [aux_sym_numeric_system_function_token38] = ACTIONS(21),
    [aux_sym_numeric_system_function_token39] = ACTIONS(21),
    [aux_sym_numeric_system_function_token40] = ACTIONS(21),
    [aux_sym_numeric_system_function_token41] = ACTIONS(21),
    [aux_sym_numeric_system_function_token42] = ACTIONS(21),
    [aux_sym_numeric_system_function_token43] = ACTIONS(21),
    [aux_sym_numeric_system_function_token44] = ACTIONS(21),
    [aux_sym_numeric_system_function_token45] = ACTIONS(21),
    [aux_sym_numeric_system_function_token46] = ACTIONS(21),
    [aux_sym_numeric_system_function_token47] = ACTIONS(21),
    [aux_sym_numeric_system_function_token48] = ACTIONS(21),
    [aux_sym_numeric_system_function_token49] = ACTIONS(21),
    [aux_sym_numeric_system_function_token50] = ACTIONS(21),
    [aux_sym_numeric_system_function_token51] = ACTIONS(21),
    [aux_sym_numeric_system_function_token52] = ACTIONS(21),
    [aux_sym_numeric_system_function_token53] = ACTIONS(21),
    [aux_sym_numeric_system_function_token54] = ACTIONS(21),
    [aux_sym_numeric_system_function_token55] = ACTIONS(21),
    [aux_sym_numeric_system_function_token56] = ACTIONS(21),
    [aux_sym_numeric_system_function_token57] = ACTIONS(21),
    [aux_sym_numeric_system_function_token58] = ACTIONS(21),
    [aux_sym_numeric_system_function_token59] = ACTIONS(21),
    [aux_sym_numeric_system_function_token60] = ACTIONS(21),
    [aux_sym_numeric_system_function_token61] = ACTIONS(21),
    [aux_sym_numeric_system_function_token62] = ACTIONS(21),
    [aux_sym_numeric_system_function_token63] = ACTIONS(21),
    [aux_sym_numeric_system_function_token64] = ACTIONS(21),
    [aux_sym_numeric_system_function_token65] = ACTIONS(21),
    [aux_sym_numeric_system_function_token66] = ACTIONS(21),
    [aux_sym_numeric_system_function_token67] = ACTIONS(21),
    [aux_sym_numeric_system_function_token68] = ACTIONS(21),
    [aux_sym_numeric_system_function_token69] = ACTIONS(21),
    [aux_sym_numeric_system_function_token70] = ACTIONS(21),
    [aux_sym_numeric_system_function_token71] = ACTIONS(21),
    [aux_sym_numeric_system_function_token72] = ACTIONS(21),
    [aux_sym_numeric_system_function_token73] = ACTIONS(21),
    [aux_sym_numeric_system_function_token74] = ACTIONS(21),
    [aux_sym_numeric_system_function_token75] = ACTIONS(21),
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(37),
    [aux_sym_number_token1] = ACTIONS(41),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(25), 1,
      sym__string_function_identifier,
    ACTIONS(29), 1,
      anon_sym_BQUOTE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      sym_stringidentifier,
    ACTIONS(77), 1,
      sym__mat,
    STATE(182), 1,
      sym_stringarray,
    STATE(293), 1,
      sym_string_expression,
    STATE(305), 1,
      sym_string_array_expression,
    STATE(169), 2,
      sym_string_system_function,
      sym_string_user_function,
    STATE(213), 2,
      sym_string_array_primary_expression,
      sym_string_array_forced_assignment_expression,
    STATE(165), 3,
      sym__string_reference,
      sym_stringelement,
      sym_stringreference,
    STATE(170), 3,
      sym_string_call_expression,
      sym_template_string,
      sym_string,
    STATE(172), 3,
      sym_string_binary_expression,
      sym_string_primary_expression,
      sym_string_forced_assignment_expression,
    ACTIONS(23), 39,
      aux_sym_string_system_function_token1,
      aux_sym_string_system_function_token2,
      aux_sym_string_system_function_token3,
      aux_sym_string_system_function_token4,
      aux_sym_string_system_function_token5,
      aux_sym_string_system_function_token6,
      aux_sym_string_system_function_token7,
      aux_sym_string_system_function_token8,
      aux_sym_string_system_function_token9,
      aux_sym_string_system_function_token10,
      aux_sym_string_system_function_token11,
      aux_sym_string_system_function_token12,
      aux_sym_string_system_function_token13,
      aux_sym_string_system_function_token14,
      aux_sym_string_system_function_token15,
      aux_sym_string_system_function_token16,
      aux_sym_string_system_function_token17,
      aux_sym_string_system_function_token18,
      aux_sym_string_system_function_token19,
      aux_sym_string_system_function_token20,
      aux_sym_string_system_function_token21,
      aux_sym_string_system_function_token22,
      aux_sym_string_system_function_token23,
      aux_sym_string_system_function_token24,
      aux_sym_string_system_function_token25,
      aux_sym_string_system_function_token26,
      aux_sym_string_system_function_token27,
      aux_sym_string_system_function_token28,
      aux_sym_string_system_function_token29,
      aux_sym_string_system_function_token30,
      aux_sym_string_system_function_token31,
      aux_sym_string_system_function_token32,
      aux_sym_string_system_function_token33,
      aux_sym_string_system_function_token34,
      aux_sym_string_system_function_token35,
      aux_sym_string_system_function_token36,
      aux_sym_string_system_function_token37,
      aux_sym_string_system_function_token38,
      aux_sym_string_system_function_token39,
  [92] = 15,
    ACTIONS(25), 1,
      sym__string_function_identifier,
    ACTIONS(29), 1,
      anon_sym_BQUOTE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      sym_stringidentifier,
    ACTIONS(77), 1,
      sym__mat,
    STATE(182), 1,
      sym_stringarray,
    STATE(295), 1,
      sym_string_expression,
    STATE(316), 1,
      sym_string_array_expression,
    STATE(169), 2,
      sym_string_system_function,
      sym_string_user_function,
    STATE(213), 2,
      sym_string_array_primary_expression,
      sym_string_array_forced_assignment_expression,
    STATE(165), 3,
      sym__string_reference,
      sym_stringelement,
      sym_stringreference,
    STATE(170), 3,
      sym_string_call_expression,
      sym_template_string,
      sym_string,
    STATE(172), 3,
      sym_string_binary_expression,
      sym_string_primary_expression,
      sym_string_forced_assignment_expression,
    ACTIONS(23), 39,
      aux_sym_string_system_function_token1,
      aux_sym_string_system_function_token2,
      aux_sym_string_system_function_token3,
      aux_sym_string_system_function_token4,
      aux_sym_string_system_function_token5,
      aux_sym_string_system_function_token6,
      aux_sym_string_system_function_token7,
      aux_sym_string_system_function_token8,
      aux_sym_string_system_function_token9,
      aux_sym_string_system_function_token10,
      aux_sym_string_system_function_token11,
      aux_sym_string_system_function_token12,
      aux_sym_string_system_function_token13,
      aux_sym_string_system_function_token14,
      aux_sym_string_system_function_token15,
      aux_sym_string_system_function_token16,
      aux_sym_string_system_function_token17,
      aux_sym_string_system_function_token18,
      aux_sym_string_system_function_token19,
      aux_sym_string_system_function_token20,
      aux_sym_string_system_function_token21,
      aux_sym_string_system_function_token22,
      aux_sym_string_system_function_token23,
      aux_sym_string_system_function_token24,
      aux_sym_string_system_function_token25,
      aux_sym_string_system_function_token26,
      aux_sym_string_system_function_token27,
      aux_sym_string_system_function_token28,
      aux_sym_string_system_function_token29,
      aux_sym_string_system_function_token30,
      aux_sym_string_system_function_token31,
      aux_sym_string_system_function_token32,
      aux_sym_string_system_function_token33,
      aux_sym_string_system_function_token34,
      aux_sym_string_system_function_token35,
      aux_sym_string_system_function_token36,
      aux_sym_string_system_function_token37,
      aux_sym_string_system_function_token38,
      aux_sym_string_system_function_token39,
  [184] = 11,
    ACTIONS(53), 1,
      sym__string_function_identifier,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      sym_stringidentifier,
    STATE(206), 1,
      sym_string_expression,
    STATE(190), 2,
      sym_string_system_function,
      sym_string_user_function,
    STATE(183), 3,
      sym__string_reference,
      sym_stringelement,
      sym_stringreference,
    STATE(189), 3,
      sym_string_call_expression,
      sym_template_string,
      sym_string,
    STATE(215), 3,
      sym_string_binary_expression,
      sym_string_primary_expression,
      sym_string_forced_assignment_expression,
    ACTIONS(51), 39,
      aux_sym_string_system_function_token1,
      aux_sym_string_system_function_token2,
      aux_sym_string_system_function_token3,
      aux_sym_string_system_function_token4,
      aux_sym_string_system_function_token5,
      aux_sym_string_system_function_token6,
      aux_sym_string_system_function_token7,
      aux_sym_string_system_function_token8,
      aux_sym_string_system_function_token9,
      aux_sym_string_system_function_token10,
      aux_sym_string_system_function_token11,
      aux_sym_string_system_function_token12,
      aux_sym_string_system_function_token13,
      aux_sym_string_system_function_token14,
      aux_sym_string_system_function_token15,
      aux_sym_string_system_function_token16,
      aux_sym_string_system_function_token17,
      aux_sym_string_system_function_token18,
      aux_sym_string_system_function_token19,
      aux_sym_string_system_function_token20,
      aux_sym_string_system_function_token21,
      aux_sym_string_system_function_token22,
      aux_sym_string_system_function_token23,
      aux_sym_string_system_function_token24,
      aux_sym_string_system_function_token25,
      aux_sym_string_system_function_token26,
      aux_sym_string_system_function_token27,
      aux_sym_string_system_function_token28,
      aux_sym_string_system_function_token29,
      aux_sym_string_system_function_token30,
      aux_sym_string_system_function_token31,
      aux_sym_string_system_function_token32,
      aux_sym_string_system_function_token33,
      aux_sym_string_system_function_token34,
      aux_sym_string_system_function_token35,
      aux_sym_string_system_function_token36,
      aux_sym_string_system_function_token37,
      aux_sym_string_system_function_token38,
      aux_sym_string_system_function_token39,
  [263] = 11,
    ACTIONS(53), 1,
      sym__string_function_identifier,
    ACTIONS(57), 1,
      anon_sym_BQUOTE,
    ACTIONS(59), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_SQUOTE,
    ACTIONS(63), 1,
      sym_stringidentifier,
    STATE(205), 1,
      sym_string_expression,
    STATE(190), 2,
      sym_string_system_function,
      sym_string_user_function,
    STATE(183), 3,
      sym__string_reference,
      sym_stringelement,
      sym_stringreference,
    STATE(189), 3,
      sym_string_call_expression,
      sym_template_string,
      sym_string,
    STATE(215), 3,
      sym_string_binary_expression,
      sym_string_primary_expression,
      sym_string_forced_assignment_expression,
    ACTIONS(51), 39,
      aux_sym_string_system_function_token1,
      aux_sym_string_system_function_token2,
      aux_sym_string_system_function_token3,
      aux_sym_string_system_function_token4,
      aux_sym_string_system_function_token5,
      aux_sym_string_system_function_token6,
      aux_sym_string_system_function_token7,
      aux_sym_string_system_function_token8,
      aux_sym_string_system_function_token9,
      aux_sym_string_system_function_token10,
      aux_sym_string_system_function_token11,
      aux_sym_string_system_function_token12,
      aux_sym_string_system_function_token13,
      aux_sym_string_system_function_token14,
      aux_sym_string_system_function_token15,
      aux_sym_string_system_function_token16,
      aux_sym_string_system_function_token17,
      aux_sym_string_system_function_token18,
      aux_sym_string_system_function_token19,
      aux_sym_string_system_function_token20,
      aux_sym_string_system_function_token21,
      aux_sym_string_system_function_token22,
      aux_sym_string_system_function_token23,
      aux_sym_string_system_function_token24,
      aux_sym_string_system_function_token25,
      aux_sym_string_system_function_token26,
      aux_sym_string_system_function_token27,
      aux_sym_string_system_function_token28,
      aux_sym_string_system_function_token29,
      aux_sym_string_system_function_token30,
      aux_sym_string_system_function_token31,
      aux_sym_string_system_function_token32,
      aux_sym_string_system_function_token33,
      aux_sym_string_system_function_token34,
      aux_sym_string_system_function_token35,
      aux_sym_string_system_function_token36,
      aux_sym_string_system_function_token37,
      aux_sym_string_system_function_token38,
      aux_sym_string_system_function_token39,
  [342] = 11,
    ACTIONS(25), 1,
      sym__string_function_identifier,
    ACTIONS(29), 1,
      anon_sym_BQUOTE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      sym_stringidentifier,
    STATE(180), 1,
      sym_string_expression,
    STATE(169), 2,
      sym_string_system_function,
      sym_string_user_function,
    STATE(165), 3,
      sym__string_reference,
      sym_stringelement,
      sym_stringreference,
    STATE(170), 3,
      sym_string_call_expression,
      sym_template_string,
      sym_string,
    STATE(172), 3,
      sym_string_binary_expression,
      sym_string_primary_expression,
      sym_string_forced_assignment_expression,
    ACTIONS(23), 39,
      aux_sym_string_system_function_token1,
      aux_sym_string_system_function_token2,
      aux_sym_string_system_function_token3,
      aux_sym_string_system_function_token4,
      aux_sym_string_system_function_token5,
      aux_sym_string_system_function_token6,
      aux_sym_string_system_function_token7,
      aux_sym_string_system_function_token8,
      aux_sym_string_system_function_token9,
      aux_sym_string_system_function_token10,
      aux_sym_string_system_function_token11,
      aux_sym_string_system_function_token12,
      aux_sym_string_system_function_token13,
      aux_sym_string_system_function_token14,
      aux_sym_string_system_function_token15,
      aux_sym_string_system_function_token16,
      aux_sym_string_system_function_token17,
      aux_sym_string_system_function_token18,
      aux_sym_string_system_function_token19,
      aux_sym_string_system_function_token20,
      aux_sym_string_system_function_token21,
      aux_sym_string_system_function_token22,
      aux_sym_string_system_function_token23,
      aux_sym_string_system_function_token24,
      aux_sym_string_system_function_token25,
      aux_sym_string_system_function_token26,
      aux_sym_string_system_function_token27,
      aux_sym_string_system_function_token28,
      aux_sym_string_system_function_token29,
      aux_sym_string_system_function_token30,
      aux_sym_string_system_function_token31,
      aux_sym_string_system_function_token32,
      aux_sym_string_system_function_token33,
      aux_sym_string_system_function_token34,
      aux_sym_string_system_function_token35,
      aux_sym_string_system_function_token36,
      aux_sym_string_system_function_token37,
      aux_sym_string_system_function_token38,
      aux_sym_string_system_function_token39,
  [421] = 11,
    ACTIONS(25), 1,
      sym__string_function_identifier,
    ACTIONS(29), 1,
      anon_sym_BQUOTE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      sym_stringidentifier,
    STATE(177), 1,
      sym_string_expression,
    STATE(169), 2,
      sym_string_system_function,
      sym_string_user_function,
    STATE(165), 3,
      sym__string_reference,
      sym_stringelement,
      sym_stringreference,
    STATE(170), 3,
      sym_string_call_expression,
      sym_template_string,
      sym_string,
    STATE(172), 3,
      sym_string_binary_expression,
      sym_string_primary_expression,
      sym_string_forced_assignment_expression,
    ACTIONS(23), 39,
      aux_sym_string_system_function_token1,
      aux_sym_string_system_function_token2,
      aux_sym_string_system_function_token3,
      aux_sym_string_system_function_token4,
      aux_sym_string_system_function_token5,
      aux_sym_string_system_function_token6,
      aux_sym_string_system_function_token7,
      aux_sym_string_system_function_token8,
      aux_sym_string_system_function_token9,
      aux_sym_string_system_function_token10,
      aux_sym_string_system_function_token11,
      aux_sym_string_system_function_token12,
      aux_sym_string_system_function_token13,
      aux_sym_string_system_function_token14,
      aux_sym_string_system_function_token15,
      aux_sym_string_system_function_token16,
      aux_sym_string_system_function_token17,
      aux_sym_string_system_function_token18,
      aux_sym_string_system_function_token19,
      aux_sym_string_system_function_token20,
      aux_sym_string_system_function_token21,
      aux_sym_string_system_function_token22,
      aux_sym_string_system_function_token23,
      aux_sym_string_system_function_token24,
      aux_sym_string_system_function_token25,
      aux_sym_string_system_function_token26,
      aux_sym_string_system_function_token27,
      aux_sym_string_system_function_token28,
      aux_sym_string_system_function_token29,
      aux_sym_string_system_function_token30,
      aux_sym_string_system_function_token31,
      aux_sym_string_system_function_token32,
      aux_sym_string_system_function_token33,
      aux_sym_string_system_function_token34,
      aux_sym_string_system_function_token35,
      aux_sym_string_system_function_token36,
      aux_sym_string_system_function_token37,
      aux_sym_string_system_function_token38,
      aux_sym_string_system_function_token39,
  [500] = 11,
    ACTIONS(25), 1,
      sym__string_function_identifier,
    ACTIONS(29), 1,
      anon_sym_BQUOTE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      sym_stringidentifier,
    STATE(296), 1,
      sym_string_expression,
    STATE(169), 2,
      sym_string_system_function,
      sym_string_user_function,
    STATE(165), 3,
      sym__string_reference,
      sym_stringelement,
      sym_stringreference,
    STATE(170), 3,
      sym_string_call_expression,
      sym_template_string,
      sym_string,
    STATE(172), 3,
      sym_string_binary_expression,
      sym_string_primary_expression,
      sym_string_forced_assignment_expression,
    ACTIONS(23), 39,
      aux_sym_string_system_function_token1,
      aux_sym_string_system_function_token2,
      aux_sym_string_system_function_token3,
      aux_sym_string_system_function_token4,
      aux_sym_string_system_function_token5,
      aux_sym_string_system_function_token6,
      aux_sym_string_system_function_token7,
      aux_sym_string_system_function_token8,
      aux_sym_string_system_function_token9,
      aux_sym_string_system_function_token10,
      aux_sym_string_system_function_token11,
      aux_sym_string_system_function_token12,
      aux_sym_string_system_function_token13,
      aux_sym_string_system_function_token14,
      aux_sym_string_system_function_token15,
      aux_sym_string_system_function_token16,
      aux_sym_string_system_function_token17,
      aux_sym_string_system_function_token18,
      aux_sym_string_system_function_token19,
      aux_sym_string_system_function_token20,
      aux_sym_string_system_function_token21,
      aux_sym_string_system_function_token22,
      aux_sym_string_system_function_token23,
      aux_sym_string_system_function_token24,
      aux_sym_string_system_function_token25,
      aux_sym_string_system_function_token26,
      aux_sym_string_system_function_token27,
      aux_sym_string_system_function_token28,
      aux_sym_string_system_function_token29,
      aux_sym_string_system_function_token30,
      aux_sym_string_system_function_token31,
      aux_sym_string_system_function_token32,
      aux_sym_string_system_function_token33,
      aux_sym_string_system_function_token34,
      aux_sym_string_system_function_token35,
      aux_sym_string_system_function_token36,
      aux_sym_string_system_function_token37,
      aux_sym_string_system_function_token38,
      aux_sym_string_system_function_token39,
  [579] = 3,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 13,
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
    ACTIONS(79), 21,
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
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [621] = 3,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 12,
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
    ACTIONS(79), 21,
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
  [662] = 2,
    ACTIONS(89), 13,
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
    ACTIONS(87), 21,
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
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [701] = 2,
    ACTIONS(93), 13,
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
    ACTIONS(91), 21,
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
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [740] = 2,
    ACTIONS(89), 12,
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
    ACTIONS(87), 21,
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
  [778] = 2,
    ACTIONS(93), 12,
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
    ACTIONS(91), 21,
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
  [816] = 3,
    ACTIONS(99), 5,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(97), 12,
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
    ACTIONS(95), 16,
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
  [856] = 3,
    ACTIONS(101), 5,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(97), 11,
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
    ACTIONS(95), 16,
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
  [895] = 4,
    ACTIONS(103), 1,
      anon_sym_EQ,
    ACTIONS(99), 5,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(97), 12,
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
    ACTIONS(95), 13,
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
  [935] = 4,
    ACTIONS(105), 1,
      anon_sym_EQ,
    ACTIONS(101), 5,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(97), 11,
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
    ACTIONS(95), 14,
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
  [975] = 4,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_arguments,
    ACTIONS(109), 8,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(107), 20,
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
  [1014] = 4,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    STATE(81), 1,
      sym_arguments,
    ACTIONS(115), 8,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 20,
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
  [1053] = 3,
    ACTIONS(121), 1,
      anon_sym_DOT,
    ACTIONS(119), 8,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 21,
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
  [1090] = 2,
    ACTIONS(125), 8,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 21,
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
  [1124] = 2,
    ACTIONS(129), 8,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 21,
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
  [1158] = 2,
    ACTIONS(133), 8,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 21,
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
  [1192] = 4,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    STATE(107), 1,
      sym_arguments,
    ACTIONS(115), 7,
      anon_sym_def,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(113), 20,
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
  [1230] = 4,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    STATE(105), 1,
      sym_arguments,
    ACTIONS(109), 7,
      anon_sym_def,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(107), 20,
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
  [1268] = 2,
    ACTIONS(139), 8,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(137), 20,
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
  [1301] = 2,
    ACTIONS(97), 8,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 20,
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
  [1334] = 2,
    ACTIONS(143), 8,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 20,
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
  [1367] = 2,
    ACTIONS(147), 8,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(145), 20,
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
  [1400] = 2,
    ACTIONS(151), 8,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 20,
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
  [1433] = 3,
    ACTIONS(153), 1,
      anon_sym_DOT,
    ACTIONS(119), 7,
      anon_sym_def,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(117), 20,
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
  [1468] = 3,
    ACTIONS(159), 1,
      anon_sym_STAR_STAR,
    ACTIONS(157), 8,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(155), 19,
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
  [1503] = 10,
    ACTIONS(159), 1,
      anon_sym_STAR_STAR,
    ACTIONS(161), 1,
      anon_sym_STAR,
    ACTIONS(163), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(165), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(167), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(173), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(157), 5,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(155), 9,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1552] = 11,
    ACTIONS(159), 1,
      anon_sym_STAR_STAR,
    ACTIONS(161), 1,
      anon_sym_STAR,
    ACTIONS(175), 1,
      anon_sym_AMP,
    ACTIONS(163), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(165), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(167), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(173), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(157), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(155), 9,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1603] = 12,
    ACTIONS(159), 1,
      anon_sym_STAR_STAR,
    ACTIONS(161), 1,
      anon_sym_STAR,
    ACTIONS(175), 1,
      anon_sym_AMP,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(163), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(165), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(167), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(173), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(157), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(155), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
  [1656] = 6,
    ACTIONS(159), 1,
      anon_sym_STAR_STAR,
    ACTIONS(161), 1,
      anon_sym_STAR,
    ACTIONS(165), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(167), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(157), 7,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(155), 15,
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
  [1697] = 5,
    ACTIONS(159), 1,
      anon_sym_STAR_STAR,
    ACTIONS(161), 1,
      anon_sym_STAR,
    ACTIONS(167), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(157), 7,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(155), 17,
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
  [1736] = 2,
    ACTIONS(181), 8,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(179), 20,
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
  [1769] = 3,
    ACTIONS(159), 1,
      anon_sym_STAR_STAR,
    ACTIONS(157), 8,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(155), 19,
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
  [1804] = 7,
    ACTIONS(159), 1,
      anon_sym_STAR_STAR,
    ACTIONS(161), 1,
      anon_sym_STAR,
    ACTIONS(163), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(165), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(167), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(157), 7,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(155), 13,
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
  [1847] = 9,
    ACTIONS(159), 1,
      anon_sym_STAR_STAR,
    ACTIONS(161), 1,
      anon_sym_STAR,
    ACTIONS(163), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(165), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(167), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(157), 5,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(155), 11,
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
  [1894] = 2,
    ACTIONS(185), 8,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(183), 20,
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
  [1927] = 13,
    ACTIONS(159), 1,
      anon_sym_STAR_STAR,
    ACTIONS(161), 1,
      anon_sym_STAR,
    ACTIONS(175), 1,
      anon_sym_AMP,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(191), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(163), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(165), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(167), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(173), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(189), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(187), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1982] = 13,
    ACTIONS(159), 1,
      anon_sym_STAR_STAR,
    ACTIONS(161), 1,
      anon_sym_STAR,
    ACTIONS(175), 1,
      anon_sym_AMP,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(191), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(163), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(165), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(167), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(173), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(195), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(193), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2037] = 10,
    ACTIONS(197), 1,
      anon_sym_STAR,
    ACTIONS(205), 1,
      anon_sym_STAR_STAR,
    ACTIONS(199), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(201), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(203), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(207), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(211), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(157), 4,
      anon_sym_def,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(155), 9,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2085] = 11,
    ACTIONS(197), 1,
      anon_sym_STAR,
    ACTIONS(205), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_AMP,
    ACTIONS(199), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(201), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(203), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(207), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(211), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(157), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(155), 9,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2135] = 13,
    ACTIONS(197), 1,
      anon_sym_STAR,
    ACTIONS(205), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_AMP,
    ACTIONS(215), 1,
      anon_sym_AMP_AMP,
    ACTIONS(217), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(199), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(201), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(203), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(207), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(211), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(195), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(193), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2189] = 2,
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
  [2221] = 2,
    ACTIONS(97), 7,
      anon_sym_def,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 20,
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
  [2253] = 2,
    ACTIONS(181), 7,
      anon_sym_def,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(179), 20,
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
  [2285] = 2,
    ACTIONS(133), 7,
      anon_sym_def,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(131), 20,
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
  [2317] = 2,
    ACTIONS(125), 7,
      anon_sym_def,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(123), 20,
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
  [2349] = 2,
    ACTIONS(143), 7,
      anon_sym_def,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 20,
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
  [2381] = 2,
    ACTIONS(147), 7,
      anon_sym_def,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(145), 20,
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
  [2413] = 13,
    ACTIONS(197), 1,
      anon_sym_STAR,
    ACTIONS(205), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_AMP,
    ACTIONS(215), 1,
      anon_sym_AMP_AMP,
    ACTIONS(217), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(199), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(201), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(203), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(207), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(211), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(189), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(187), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2467] = 2,
    ACTIONS(151), 7,
      anon_sym_def,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(149), 20,
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
  [2499] = 12,
    ACTIONS(197), 1,
      anon_sym_STAR,
    ACTIONS(205), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_AMP,
    ACTIONS(215), 1,
      anon_sym_AMP_AMP,
    ACTIONS(199), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(201), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(203), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(207), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(211), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(157), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(155), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
  [2551] = 6,
    ACTIONS(197), 1,
      anon_sym_STAR,
    ACTIONS(205), 1,
      anon_sym_STAR_STAR,
    ACTIONS(201), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(203), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(157), 6,
      anon_sym_def,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(155), 15,
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
  [2591] = 5,
    ACTIONS(197), 1,
      anon_sym_STAR,
    ACTIONS(205), 1,
      anon_sym_STAR_STAR,
    ACTIONS(203), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(157), 6,
      anon_sym_def,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(155), 17,
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
  [2629] = 2,
    ACTIONS(139), 7,
      anon_sym_def,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(137), 20,
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
  [2661] = 3,
    ACTIONS(205), 1,
      anon_sym_STAR_STAR,
    ACTIONS(157), 7,
      anon_sym_def,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(155), 19,
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
  [2695] = 7,
    ACTIONS(197), 1,
      anon_sym_STAR,
    ACTIONS(205), 1,
      anon_sym_STAR_STAR,
    ACTIONS(199), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(201), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(203), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(157), 6,
      anon_sym_def,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(155), 13,
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
  [2737] = 2,
    ACTIONS(129), 7,
      anon_sym_def,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(127), 20,
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
  [2769] = 3,
    ACTIONS(205), 1,
      anon_sym_STAR_STAR,
    ACTIONS(157), 7,
      anon_sym_def,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(155), 19,
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
  [2803] = 9,
    ACTIONS(197), 1,
      anon_sym_STAR,
    ACTIONS(205), 1,
      anon_sym_STAR_STAR,
    ACTIONS(199), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(201), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(203), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(207), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(157), 4,
      anon_sym_def,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(155), 11,
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
  [2849] = 13,
    ACTIONS(197), 1,
      anon_sym_STAR,
    ACTIONS(205), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_AMP,
    ACTIONS(215), 1,
      anon_sym_AMP_AMP,
    ACTIONS(217), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(199), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(201), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(203), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(207), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(211), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(221), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(219), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [2901] = 13,
    ACTIONS(159), 1,
      anon_sym_STAR_STAR,
    ACTIONS(161), 1,
      anon_sym_STAR,
    ACTIONS(175), 1,
      anon_sym_AMP,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(191), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(163), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(165), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(167), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(173), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(219), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
    ACTIONS(221), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2953] = 13,
    ACTIONS(197), 1,
      anon_sym_STAR,
    ACTIONS(205), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_AMP,
    ACTIONS(215), 1,
      anon_sym_AMP_AMP,
    ACTIONS(217), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(199), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(201), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(203), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(207), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(211), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(225), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(223), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [3005] = 13,
    ACTIONS(159), 1,
      anon_sym_STAR_STAR,
    ACTIONS(161), 1,
      anon_sym_STAR,
    ACTIONS(175), 1,
      anon_sym_AMP,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(191), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(163), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(165), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(167), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(173), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(223), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
    ACTIONS(225), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [3057] = 13,
    ACTIONS(159), 1,
      anon_sym_STAR_STAR,
    ACTIONS(161), 1,
      anon_sym_STAR,
    ACTIONS(175), 1,
      anon_sym_AMP,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(191), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(163), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(165), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(167), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(173), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(227), 2,
      sym_line_number,
      sym_label,
    ACTIONS(229), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [3107] = 13,
    ACTIONS(197), 1,
      anon_sym_STAR,
    ACTIONS(205), 1,
      anon_sym_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_AMP,
    ACTIONS(215), 1,
      anon_sym_AMP_AMP,
    ACTIONS(217), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(199), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(201), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(203), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(207), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(209), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(211), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(227), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(229), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [3157] = 15,
    ACTIONS(159), 1,
      anon_sym_STAR_STAR,
    ACTIONS(161), 1,
      anon_sym_STAR,
    ACTIONS(175), 1,
      anon_sym_AMP,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(191), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(231), 1,
      anon_sym_COLON,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    STATE(291), 1,
      aux_sym_numberelement_repeat1,
    ACTIONS(163), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(165), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(167), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(173), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
  [3209] = 15,
    ACTIONS(159), 1,
      anon_sym_STAR_STAR,
    ACTIONS(161), 1,
      anon_sym_STAR,
    ACTIONS(175), 1,
      anon_sym_AMP,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(191), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(231), 1,
      anon_sym_COLON,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    ACTIONS(237), 1,
      anon_sym_RPAREN,
    STATE(274), 1,
      aux_sym_numberelement_repeat1,
    ACTIONS(163), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(165), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(167), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(173), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
  [3261] = 14,
    ACTIONS(159), 1,
      anon_sym_STAR_STAR,
    ACTIONS(161), 1,
      anon_sym_STAR,
    ACTIONS(175), 1,
      anon_sym_AMP,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(191), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    STATE(285), 1,
      aux_sym_numberelement_repeat1,
    ACTIONS(163), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(165), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(167), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(173), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
  [3310] = 14,
    ACTIONS(159), 1,
      anon_sym_STAR_STAR,
    ACTIONS(161), 1,
      anon_sym_STAR,
    ACTIONS(175), 1,
      anon_sym_AMP,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(191), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    STATE(289), 1,
      aux_sym_numberelement_repeat1,
    ACTIONS(163), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(165), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(167), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(173), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
  [3359] = 12,
    ACTIONS(159), 1,
      anon_sym_STAR_STAR,
    ACTIONS(161), 1,
      anon_sym_STAR,
    ACTIONS(175), 1,
      anon_sym_AMP,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(191), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(163), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(165), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(167), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(173), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(243), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3403] = 12,
    ACTIONS(159), 1,
      anon_sym_STAR_STAR,
    ACTIONS(161), 1,
      anon_sym_STAR,
    ACTIONS(175), 1,
      anon_sym_AMP,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(191), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(163), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(165), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(167), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(173), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(245), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3447] = 12,
    ACTIONS(159), 1,
      anon_sym_STAR_STAR,
    ACTIONS(161), 1,
      anon_sym_STAR,
    ACTIONS(175), 1,
      anon_sym_AMP,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(191), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    ACTIONS(163), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(165), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(167), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(173), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
  [3490] = 12,
    ACTIONS(159), 1,
      anon_sym_STAR_STAR,
    ACTIONS(161), 1,
      anon_sym_STAR,
    ACTIONS(175), 1,
      anon_sym_AMP,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(191), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(231), 1,
      anon_sym_COLON,
    ACTIONS(163), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(165), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(167), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(173), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
  [3533] = 12,
    ACTIONS(159), 1,
      anon_sym_STAR_STAR,
    ACTIONS(161), 1,
      anon_sym_STAR,
    ACTIONS(175), 1,
      anon_sym_AMP,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(191), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    ACTIONS(163), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(165), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(167), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(173), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
  [3576] = 12,
    ACTIONS(159), 1,
      anon_sym_STAR_STAR,
    ACTIONS(161), 1,
      anon_sym_STAR,
    ACTIONS(175), 1,
      anon_sym_AMP,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(191), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
    ACTIONS(163), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(165), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(167), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(173), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
  [3619] = 12,
    ACTIONS(159), 1,
      anon_sym_STAR_STAR,
    ACTIONS(161), 1,
      anon_sym_STAR,
    ACTIONS(175), 1,
      anon_sym_AMP,
    ACTIONS(177), 1,
      anon_sym_AMP_AMP,
    ACTIONS(191), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
    ACTIONS(163), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(165), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(167), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(169), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(173), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
  [3662] = 4,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    STATE(137), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(257), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(255), 9,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_EQ,
  [3687] = 4,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    STATE(142), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(263), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(261), 9,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_EQ,
  [3712] = 11,
    ACTIONS(267), 1,
      sym_line_number,
    ACTIONS(269), 1,
      sym_label,
    ACTIONS(271), 1,
      anon_sym_def,
    ACTIONS(273), 1,
      anon_sym_EQ,
    ACTIONS(275), 1,
      anon_sym_fnend,
    ACTIONS(277), 1,
      aux_sym_let_statement_token1,
    ACTIONS(279), 1,
      aux_sym_print_statement_token1,
    STATE(233), 1,
      sym_statement,
    STATE(144), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(237), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(256), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [3751] = 4,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    STATE(142), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(283), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(281), 9,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_EQ,
  [3776] = 4,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    STATE(141), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(287), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(285), 9,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_EQ,
  [3801] = 4,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    STATE(135), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(291), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(289), 9,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_EQ,
  [3826] = 11,
    ACTIONS(267), 1,
      sym_line_number,
    ACTIONS(269), 1,
      sym_label,
    ACTIONS(271), 1,
      anon_sym_def,
    ACTIONS(277), 1,
      aux_sym_let_statement_token1,
    ACTIONS(279), 1,
      aux_sym_print_statement_token1,
    ACTIONS(293), 1,
      anon_sym_EQ,
    ACTIONS(295), 1,
      anon_sym_fnend,
    STATE(233), 1,
      sym_statement,
    STATE(147), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(237), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(256), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [3865] = 4,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    STATE(142), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(291), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(289), 9,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_EQ,
  [3890] = 4,
    ACTIONS(301), 1,
      anon_sym_LPAREN,
    STATE(142), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(299), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(297), 9,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_EQ,
  [3915] = 10,
    ACTIONS(304), 1,
      sym_line_number,
    ACTIONS(307), 1,
      sym_label,
    ACTIONS(310), 1,
      anon_sym_def,
    ACTIONS(313), 1,
      anon_sym_fnend,
    ACTIONS(315), 1,
      aux_sym_let_statement_token1,
    ACTIONS(318), 1,
      aux_sym_print_statement_token1,
    STATE(233), 1,
      sym_statement,
    STATE(143), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(237), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(256), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [3951] = 10,
    ACTIONS(267), 1,
      sym_line_number,
    ACTIONS(269), 1,
      sym_label,
    ACTIONS(271), 1,
      anon_sym_def,
    ACTIONS(277), 1,
      aux_sym_let_statement_token1,
    ACTIONS(279), 1,
      aux_sym_print_statement_token1,
    ACTIONS(321), 1,
      anon_sym_fnend,
    STATE(233), 1,
      sym_statement,
    STATE(143), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(237), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(256), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [3987] = 10,
    ACTIONS(323), 1,
      ts_builtin_sym_end,
    ACTIONS(325), 1,
      sym_line_number,
    ACTIONS(328), 1,
      sym_label,
    ACTIONS(331), 1,
      anon_sym_def,
    ACTIONS(334), 1,
      aux_sym_let_statement_token1,
    ACTIONS(337), 1,
      aux_sym_print_statement_token1,
    STATE(232), 1,
      sym_statement,
    STATE(145), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(241), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(257), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [4023] = 4,
    ACTIONS(344), 1,
      anon_sym_LPAREN,
    STATE(153), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(342), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(340), 7,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [4047] = 10,
    ACTIONS(267), 1,
      sym_line_number,
    ACTIONS(269), 1,
      sym_label,
    ACTIONS(271), 1,
      anon_sym_def,
    ACTIONS(277), 1,
      aux_sym_let_statement_token1,
    ACTIONS(279), 1,
      aux_sym_print_statement_token1,
    ACTIONS(346), 1,
      anon_sym_fnend,
    STATE(233), 1,
      sym_statement,
    STATE(143), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(237), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(256), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [4083] = 10,
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
    ACTIONS(348), 1,
      ts_builtin_sym_end,
    STATE(232), 1,
      sym_statement,
    STATE(145), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(241), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(257), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [4119] = 2,
    ACTIONS(352), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(350), 10,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_EQ,
  [4139] = 4,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
    STATE(150), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(356), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(354), 7,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [4163] = 4,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    STATE(176), 1,
      sym_arguments,
    ACTIONS(363), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(361), 9,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
  [4187] = 4,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    STATE(175), 1,
      sym_arguments,
    ACTIONS(367), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(365), 9,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
  [4211] = 4,
    ACTIONS(344), 1,
      anon_sym_LPAREN,
    STATE(150), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(371), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(369), 7,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [4235] = 4,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    STATE(154), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(299), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(297), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [4258] = 4,
    ACTIONS(376), 1,
      anon_sym_LPAREN,
    STATE(162), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(371), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(369), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [4281] = 4,
    ACTIONS(378), 1,
      anon_sym_LPAREN,
    STATE(158), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(257), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(255), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [4304] = 4,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    STATE(164), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(287), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(285), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [4327] = 4,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    STATE(154), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(283), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(281), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [4350] = 4,
    ACTIONS(376), 1,
      anon_sym_LPAREN,
    STATE(155), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(342), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(340), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [4373] = 4,
    ACTIONS(344), 1,
      anon_sym_LPAREN,
    STATE(185), 1,
      sym_dimension,
    ACTIONS(384), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(382), 7,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [4396] = 4,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    STATE(154), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(263), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(261), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [4419] = 4,
    ACTIONS(386), 1,
      anon_sym_LPAREN,
    STATE(162), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(356), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(354), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [4442] = 4,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    STATE(161), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(291), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(289), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [4465] = 4,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    STATE(154), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(291), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(289), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [4488] = 3,
    ACTIONS(393), 1,
      anon_sym_COLON_EQ,
    ACTIONS(391), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(389), 8,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
  [4509] = 4,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    STATE(196), 1,
      sym_arguments,
    ACTIONS(367), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(365), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [4531] = 4,
    ACTIONS(135), 1,
      anon_sym_LPAREN,
    STATE(197), 1,
      sym_arguments,
    ACTIONS(363), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(361), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [4553] = 2,
    ACTIONS(397), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(395), 8,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [4571] = 2,
    ACTIONS(401), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(399), 9,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
  [4589] = 2,
    ACTIONS(391), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(389), 9,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
  [4607] = 2,
    ACTIONS(405), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(403), 9,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
  [4625] = 2,
    ACTIONS(409), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(407), 9,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
  [4643] = 2,
    ACTIONS(413), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(411), 8,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [4661] = 2,
    ACTIONS(417), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(415), 9,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
  [4679] = 2,
    ACTIONS(421), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(419), 9,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
  [4697] = 2,
    ACTIONS(425), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(423), 9,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
  [4715] = 3,
    ACTIONS(431), 1,
      anon_sym_AMP,
    ACTIONS(429), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(427), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
  [4735] = 2,
    ACTIONS(435), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(433), 9,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
  [4753] = 2,
    ACTIONS(352), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(350), 9,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [4771] = 2,
    ACTIONS(439), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(437), 9,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
  [4789] = 4,
    ACTIONS(376), 1,
      anon_sym_LPAREN,
    STATE(203), 1,
      sym_dimension,
    ACTIONS(384), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(382), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [4811] = 3,
    ACTIONS(445), 1,
      anon_sym_COLON_EQ,
    ACTIONS(443), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(441), 6,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [4830] = 3,
    ACTIONS(447), 1,
      anon_sym_COLON_EQ,
    ACTIONS(391), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(389), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [4849] = 2,
    ACTIONS(397), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(395), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [4866] = 2,
    ACTIONS(451), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(449), 7,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [4883] = 2,
    ACTIONS(413), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(411), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [4900] = 3,
    ACTIONS(457), 1,
      anon_sym_COLON_EQ,
    ACTIONS(455), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(453), 6,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [4919] = 3,
    ACTIONS(431), 1,
      anon_sym_AMP,
    ACTIONS(195), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(193), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [4938] = 2,
    ACTIONS(391), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(389), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [4954] = 2,
    ACTIONS(401), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(399), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [4970] = 2,
    ACTIONS(461), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(459), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [4986] = 2,
    ACTIONS(465), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(463), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5002] = 4,
    STATE(204), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(471), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(469), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(467), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [5022] = 4,
    STATE(194), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(477), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(473), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
    ACTIONS(475), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5042] = 2,
    ACTIONS(405), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(403), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5058] = 2,
    ACTIONS(421), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(419), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5074] = 2,
    ACTIONS(425), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(423), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5090] = 2,
    ACTIONS(482), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(480), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5106] = 3,
    ACTIONS(484), 1,
      anon_sym_COLON_EQ,
    ACTIONS(443), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(441), 6,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5124] = 2,
    ACTIONS(417), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(415), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5140] = 2,
    ACTIONS(435), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(433), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5156] = 2,
    ACTIONS(488), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(486), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5172] = 2,
    ACTIONS(451), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(449), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [5188] = 4,
    STATE(204), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(490), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(475), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(473), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [5208] = 2,
    ACTIONS(439), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(437), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5224] = 3,
    ACTIONS(493), 1,
      anon_sym_AMP,
    ACTIONS(429), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(427), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5242] = 4,
    STATE(211), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(499), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(495), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
    ACTIONS(497), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5262] = 2,
    ACTIONS(195), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(193), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5278] = 3,
    ACTIONS(501), 1,
      anon_sym_COLON_EQ,
    ACTIONS(455), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(453), 6,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5296] = 4,
    STATE(193), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(471), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(497), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(495), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [5316] = 4,
    STATE(194), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(499), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(467), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
    ACTIONS(469), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5336] = 2,
    ACTIONS(505), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(503), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5352] = 2,
    ACTIONS(509), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(507), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5368] = 7,
    ACTIONS(271), 1,
      anon_sym_def,
    ACTIONS(277), 1,
      aux_sym_let_statement_token1,
    ACTIONS(279), 1,
      aux_sym_print_statement_token1,
    ACTIONS(511), 1,
      sym_label,
    STATE(233), 1,
      sym_statement,
    STATE(237), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(265), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [5394] = 2,
    ACTIONS(409), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(407), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5410] = 7,
    ACTIONS(9), 1,
      anon_sym_def,
    ACTIONS(11), 1,
      aux_sym_let_statement_token1,
    ACTIONS(13), 1,
      aux_sym_print_statement_token1,
    ACTIONS(513), 1,
      sym_label,
    STATE(232), 1,
      sym_statement,
    STATE(241), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(254), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [5436] = 3,
    ACTIONS(493), 1,
      anon_sym_AMP,
    ACTIONS(195), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(193), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5454] = 2,
    ACTIONS(482), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(480), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5469] = 2,
    ACTIONS(195), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(193), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5484] = 2,
    ACTIONS(465), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(463), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5499] = 2,
    ACTIONS(509), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(507), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5514] = 6,
    ACTIONS(515), 1,
      anon_sym_def,
    ACTIONS(517), 1,
      aux_sym_let_statement_token1,
    ACTIONS(519), 1,
      aux_sym_print_statement_token1,
    STATE(233), 1,
      sym_statement,
    STATE(237), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(262), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [5537] = 2,
    ACTIONS(461), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(459), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5552] = 2,
    ACTIONS(475), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(473), 6,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5567] = 6,
    ACTIONS(521), 1,
      anon_sym_def,
    ACTIONS(523), 1,
      aux_sym_let_statement_token1,
    ACTIONS(525), 1,
      aux_sym_print_statement_token1,
    STATE(232), 1,
      sym_statement,
    STATE(241), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(254), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [5590] = 6,
    ACTIONS(515), 1,
      anon_sym_def,
    ACTIONS(517), 1,
      aux_sym_let_statement_token1,
    ACTIONS(519), 1,
      aux_sym_print_statement_token1,
    STATE(233), 1,
      sym_statement,
    STATE(237), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(265), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [5613] = 2,
    ACTIONS(488), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(486), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5628] = 2,
    ACTIONS(475), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(473), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5643] = 6,
    ACTIONS(521), 1,
      anon_sym_def,
    ACTIONS(523), 1,
      aux_sym_let_statement_token1,
    ACTIONS(525), 1,
      aux_sym_print_statement_token1,
    STATE(232), 1,
      sym_statement,
    STATE(241), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(249), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [5666] = 2,
    ACTIONS(505), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(503), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5681] = 4,
    STATE(235), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(529), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(527), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(531), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5699] = 4,
    STATE(231), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(529), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(533), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(535), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5717] = 4,
    STATE(234), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(533), 2,
      sym_line_number,
      sym_label,
    ACTIONS(537), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(535), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5735] = 4,
    STATE(236), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(527), 2,
      sym_line_number,
      sym_label,
    ACTIONS(537), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(531), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5753] = 4,
    STATE(235), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(541), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(539), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(544), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5771] = 4,
    STATE(236), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(539), 2,
      sym_line_number,
      sym_label,
    ACTIONS(546), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(544), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5789] = 2,
    ACTIONS(549), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
    ACTIONS(551), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5802] = 2,
    ACTIONS(225), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(223), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [5815] = 2,
    ACTIONS(223), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
    ACTIONS(225), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5828] = 2,
    ACTIONS(544), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(539), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [5841] = 2,
    ACTIONS(551), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(549), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [5854] = 2,
    ACTIONS(539), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
    ACTIONS(544), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5867] = 2,
    ACTIONS(553), 3,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
    ACTIONS(555), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5879] = 2,
    ACTIONS(557), 3,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
    ACTIONS(559), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5891] = 2,
    ACTIONS(561), 3,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
    ACTIONS(563), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5903] = 2,
    ACTIONS(565), 3,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
    ACTIONS(567), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5915] = 5,
    ACTIONS(569), 1,
      anon_sym_LPAREN,
    ACTIONS(571), 1,
      sym__mat,
    STATE(209), 1,
      sym_numberarray,
    STATE(223), 1,
      sym_numeric_array_expression,
    STATE(230), 2,
      sym_numeric_array_primary_expression,
      sym_numeric_array_forced_assignment_expression,
  [5932] = 2,
    ACTIONS(227), 2,
      sym_line_number,
      sym_label,
    ACTIONS(229), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5943] = 2,
    ACTIONS(573), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(575), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5954] = 5,
    ACTIONS(77), 1,
      sym__mat,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    STATE(182), 1,
      sym_stringarray,
    STATE(192), 1,
      sym_string_array_expression,
    STATE(213), 2,
      sym_string_array_primary_expression,
      sym_string_array_forced_assignment_expression,
  [5971] = 2,
    ACTIONS(579), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(581), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5982] = 4,
    ACTIONS(583), 1,
      anon_sym_BQUOTE,
    ACTIONS(587), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(585), 2,
      anon_sym_BQUOTE_BQUOTE,
      sym__template_chars,
    STATE(253), 2,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [5997] = 4,
    ACTIONS(587), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(589), 1,
      anon_sym_BQUOTE,
    ACTIONS(591), 2,
      anon_sym_BQUOTE_BQUOTE,
      sym__template_chars,
    STATE(255), 2,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [6012] = 2,
    ACTIONS(593), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(595), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [6023] = 4,
    ACTIONS(597), 1,
      anon_sym_BQUOTE,
    ACTIONS(602), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(599), 2,
      anon_sym_BQUOTE_BQUOTE,
      sym__template_chars,
    STATE(255), 2,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [6038] = 2,
    ACTIONS(605), 2,
      sym_line_number,
      sym_label,
    ACTIONS(607), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [6049] = 2,
    ACTIONS(605), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(607), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [6060] = 2,
    ACTIONS(227), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(229), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [6071] = 4,
    ACTIONS(587), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(609), 1,
      anon_sym_BQUOTE,
    ACTIONS(591), 2,
      anon_sym_BQUOTE_BQUOTE,
      sym__template_chars,
    STATE(255), 2,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [6086] = 2,
    ACTIONS(579), 2,
      sym_line_number,
      sym_label,
    ACTIONS(581), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [6097] = 5,
    ACTIONS(73), 1,
      sym__mat,
    ACTIONS(611), 1,
      anon_sym_LPAREN,
    STATE(187), 1,
      sym_numberarray,
    STATE(191), 1,
      sym_numeric_array_expression,
    STATE(212), 2,
      sym_numeric_array_primary_expression,
      sym_numeric_array_forced_assignment_expression,
  [6114] = 2,
    ACTIONS(573), 2,
      sym_line_number,
      sym_label,
    ACTIONS(575), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [6125] = 5,
    ACTIONS(613), 1,
      anon_sym_LPAREN,
    ACTIONS(615), 1,
      sym__mat,
    STATE(199), 1,
      sym_stringarray,
    STATE(220), 1,
      sym_string_array_expression,
    STATE(221), 2,
      sym_string_array_primary_expression,
      sym_string_array_forced_assignment_expression,
  [6142] = 4,
    ACTIONS(587), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(617), 1,
      anon_sym_BQUOTE,
    ACTIONS(619), 2,
      anon_sym_BQUOTE_BQUOTE,
      sym__template_chars,
    STATE(259), 2,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [6157] = 2,
    ACTIONS(593), 2,
      sym_line_number,
      sym_label,
    ACTIONS(595), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [6168] = 4,
    ACTIONS(523), 1,
      aux_sym_let_statement_token1,
    ACTIONS(525), 1,
      aux_sym_print_statement_token1,
    STATE(240), 1,
      sym_statement,
    STATE(241), 2,
      sym_let_statement,
      sym_print_statement,
  [6182] = 4,
    ACTIONS(517), 1,
      aux_sym_let_statement_token1,
    ACTIONS(519), 1,
      aux_sym_print_statement_token1,
    STATE(242), 1,
      sym_statement,
    STATE(237), 2,
      sym_let_statement,
      sym_print_statement,
  [6196] = 3,
    ACTIONS(621), 1,
      sym_string_function_name,
    ACTIONS(623), 1,
      sym_numeric_function_name,
    STATE(140), 2,
      sym_string_function_definition,
      sym_numeric_function_definition,
  [6207] = 4,
    ACTIONS(41), 1,
      aux_sym_number_token1,
    ACTIONS(625), 1,
      anon_sym_STAR,
    ACTIONS(627), 1,
      anon_sym_RPAREN,
    STATE(321), 1,
      sym_number,
  [6220] = 4,
    ACTIONS(41), 1,
      aux_sym_number_token1,
    ACTIONS(629), 1,
      anon_sym_STAR,
    ACTIONS(631), 1,
      anon_sym_RPAREN,
    STATE(313), 1,
      sym_number,
  [6233] = 1,
    ACTIONS(633), 4,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      sym__template_chars,
      anon_sym_LBRACE_LBRACE,
  [6240] = 3,
    ACTIONS(621), 1,
      sym_string_function_name,
    ACTIONS(623), 1,
      sym_numeric_function_name,
    STATE(136), 2,
      sym_string_function_definition,
      sym_numeric_function_definition,
  [6251] = 4,
    ACTIONS(635), 1,
      anon_sym_STAR,
    ACTIONS(637), 1,
      anon_sym_LPAREN,
    STATE(245), 1,
      sym_parameter_list,
    STATE(292), 1,
      sym_function_length,
  [6264] = 3,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    ACTIONS(639), 1,
      anon_sym_RPAREN,
    STATE(283), 1,
      aux_sym_numberelement_repeat1,
  [6274] = 3,
    ACTIONS(41), 1,
      aux_sym_number_token1,
    ACTIONS(641), 1,
      anon_sym_RPAREN,
    STATE(308), 1,
      sym_number,
  [6284] = 3,
    ACTIONS(643), 1,
      anon_sym_RPAREN,
    ACTIONS(645), 1,
      anon_sym_COMMA,
    STATE(276), 1,
      aux_sym_dimension_repeat1,
  [6294] = 3,
    ACTIONS(648), 1,
      anon_sym_RPAREN,
    ACTIONS(650), 1,
      anon_sym_COMMA,
    STATE(287), 1,
      aux_sym_arguments_repeat1,
  [6304] = 3,
    ACTIONS(652), 1,
      anon_sym_RPAREN,
    ACTIONS(654), 1,
      anon_sym_COMMA,
    STATE(276), 1,
      aux_sym_dimension_repeat1,
  [6314] = 3,
    ACTIONS(654), 1,
      anon_sym_COMMA,
    ACTIONS(656), 1,
      anon_sym_RPAREN,
    STATE(278), 1,
      aux_sym_dimension_repeat1,
  [6324] = 3,
    ACTIONS(658), 1,
      anon_sym_RPAREN,
    ACTIONS(660), 1,
      anon_sym_COMMA,
    STATE(280), 1,
      aux_sym_arguments_repeat1,
  [6334] = 3,
    ACTIONS(41), 1,
      aux_sym_number_token1,
    ACTIONS(631), 1,
      anon_sym_RPAREN,
    STATE(313), 1,
      sym_number,
  [6344] = 3,
    ACTIONS(654), 1,
      anon_sym_COMMA,
    ACTIONS(663), 1,
      anon_sym_RPAREN,
    STATE(276), 1,
      aux_sym_dimension_repeat1,
  [6354] = 3,
    ACTIONS(245), 1,
      anon_sym_RPAREN,
    ACTIONS(665), 1,
      anon_sym_COMMA,
    STATE(283), 1,
      aux_sym_numberelement_repeat1,
  [6364] = 3,
    ACTIONS(650), 1,
      anon_sym_COMMA,
    ACTIONS(668), 1,
      anon_sym_RPAREN,
    STATE(286), 1,
      aux_sym_arguments_repeat1,
  [6374] = 3,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    ACTIONS(670), 1,
      anon_sym_RPAREN,
    STATE(283), 1,
      aux_sym_numberelement_repeat1,
  [6384] = 3,
    ACTIONS(650), 1,
      anon_sym_COMMA,
    ACTIONS(672), 1,
      anon_sym_RPAREN,
    STATE(280), 1,
      aux_sym_arguments_repeat1,
  [6394] = 3,
    ACTIONS(650), 1,
      anon_sym_COMMA,
    ACTIONS(674), 1,
      anon_sym_RPAREN,
    STATE(280), 1,
      aux_sym_arguments_repeat1,
  [6404] = 3,
    ACTIONS(676), 1,
      sym_identifier,
    ACTIONS(678), 1,
      anon_sym_AMP,
    STATE(315), 1,
      sym_parameter,
  [6414] = 3,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    ACTIONS(680), 1,
      anon_sym_RPAREN,
    STATE(283), 1,
      aux_sym_numberelement_repeat1,
  [6424] = 3,
    ACTIONS(654), 1,
      anon_sym_COMMA,
    ACTIONS(682), 1,
      anon_sym_RPAREN,
    STATE(282), 1,
      aux_sym_dimension_repeat1,
  [6434] = 3,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    ACTIONS(684), 1,
      anon_sym_RPAREN,
    STATE(283), 1,
      aux_sym_numberelement_repeat1,
  [6444] = 2,
    ACTIONS(637), 1,
      anon_sym_LPAREN,
    STATE(243), 1,
      sym_parameter_list,
  [6451] = 2,
    ACTIONS(431), 1,
      anon_sym_AMP,
    ACTIONS(686), 1,
      anon_sym_RPAREN,
  [6458] = 2,
    ACTIONS(41), 1,
      aux_sym_number_token1,
    STATE(311), 1,
      sym_number,
  [6465] = 2,
    ACTIONS(431), 1,
      anon_sym_AMP,
    ACTIONS(688), 1,
      anon_sym_RPAREN,
  [6472] = 2,
    ACTIONS(431), 1,
      anon_sym_AMP,
    ACTIONS(690), 1,
      anon_sym_RBRACE_RBRACE,
  [6479] = 2,
    ACTIONS(637), 1,
      anon_sym_LPAREN,
    STATE(244), 1,
      sym_parameter_list,
  [6486] = 2,
    ACTIONS(692), 1,
      sym_stringidentifier,
    ACTIONS(694), 1,
      sym_numberidentifier,
  [6493] = 2,
    ACTIONS(696), 1,
      sym_stringidentifier,
    ACTIONS(698), 1,
      sym_numberidentifier,
  [6500] = 1,
    ACTIONS(658), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6505] = 1,
    ACTIONS(643), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6510] = 1,
    ACTIONS(700), 1,
      anon_sym_DQUOTE,
  [6514] = 1,
    ACTIONS(692), 1,
      sym_stringidentifier,
  [6518] = 1,
    ACTIONS(700), 1,
      anon_sym_SQUOTE,
  [6522] = 1,
    ACTIONS(686), 1,
      anon_sym_RPAREN,
  [6526] = 1,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
  [6530] = 1,
    ACTIONS(702), 1,
      anon_sym_SQUOTE,
  [6534] = 1,
    ACTIONS(704), 1,
      anon_sym_RPAREN,
  [6538] = 1,
    ACTIONS(706), 1,
      aux_sym_number_token1,
  [6542] = 1,
    ACTIONS(708), 1,
      anon_sym_RPAREN,
  [6546] = 1,
    ACTIONS(710), 1,
      anon_sym_LPAREN,
  [6550] = 1,
    ACTIONS(712), 1,
      sym_identifier,
  [6554] = 1,
    ACTIONS(641), 1,
      anon_sym_RPAREN,
  [6558] = 1,
    ACTIONS(714), 1,
      sym_numberidentifier,
  [6562] = 1,
    ACTIONS(716), 1,
      anon_sym_RPAREN,
  [6566] = 1,
    ACTIONS(688), 1,
      anon_sym_RPAREN,
  [6570] = 1,
    ACTIONS(696), 1,
      sym_stringidentifier,
  [6574] = 1,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
  [6578] = 1,
    ACTIONS(718), 1,
      anon_sym_RPAREN,
  [6582] = 1,
    ACTIONS(720), 1,
      aux_sym_number_token1,
  [6586] = 1,
    ACTIONS(631), 1,
      anon_sym_RPAREN,
  [6590] = 1,
    ACTIONS(722), 1,
      aux_sym_let_statement_token2,
  [6594] = 1,
    ACTIONS(724), 1,
      aux_sym_let_statement_token2,
  [6598] = 1,
    ACTIONS(726), 1,
      sym_numberidentifier,
  [6602] = 1,
    ACTIONS(728), 1,
      aux_sym_string_token1,
  [6606] = 1,
    ACTIONS(730), 1,
      aux_sym_string_token2,
  [6610] = 1,
    ACTIONS(702), 1,
      anon_sym_DQUOTE,
  [6614] = 1,
    ACTIONS(732), 1,
      ts_builtin_sym_end,
  [6618] = 1,
    ACTIONS(734), 1,
      aux_sym_let_statement_token2,
  [6622] = 1,
    ACTIONS(736), 1,
      aux_sym_let_statement_token2,
  [6626] = 1,
    ACTIONS(738), 1,
      aux_sym_string_token1,
  [6630] = 1,
    ACTIONS(740), 1,
      aux_sym_string_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(52)] = 0,
  [SMALL_STATE(53)] = 92,
  [SMALL_STATE(54)] = 184,
  [SMALL_STATE(55)] = 263,
  [SMALL_STATE(56)] = 342,
  [SMALL_STATE(57)] = 421,
  [SMALL_STATE(58)] = 500,
  [SMALL_STATE(59)] = 579,
  [SMALL_STATE(60)] = 621,
  [SMALL_STATE(61)] = 662,
  [SMALL_STATE(62)] = 701,
  [SMALL_STATE(63)] = 740,
  [SMALL_STATE(64)] = 778,
  [SMALL_STATE(65)] = 816,
  [SMALL_STATE(66)] = 856,
  [SMALL_STATE(67)] = 895,
  [SMALL_STATE(68)] = 935,
  [SMALL_STATE(69)] = 975,
  [SMALL_STATE(70)] = 1014,
  [SMALL_STATE(71)] = 1053,
  [SMALL_STATE(72)] = 1090,
  [SMALL_STATE(73)] = 1124,
  [SMALL_STATE(74)] = 1158,
  [SMALL_STATE(75)] = 1192,
  [SMALL_STATE(76)] = 1230,
  [SMALL_STATE(77)] = 1268,
  [SMALL_STATE(78)] = 1301,
  [SMALL_STATE(79)] = 1334,
  [SMALL_STATE(80)] = 1367,
  [SMALL_STATE(81)] = 1400,
  [SMALL_STATE(82)] = 1433,
  [SMALL_STATE(83)] = 1468,
  [SMALL_STATE(84)] = 1503,
  [SMALL_STATE(85)] = 1552,
  [SMALL_STATE(86)] = 1603,
  [SMALL_STATE(87)] = 1656,
  [SMALL_STATE(88)] = 1697,
  [SMALL_STATE(89)] = 1736,
  [SMALL_STATE(90)] = 1769,
  [SMALL_STATE(91)] = 1804,
  [SMALL_STATE(92)] = 1847,
  [SMALL_STATE(93)] = 1894,
  [SMALL_STATE(94)] = 1927,
  [SMALL_STATE(95)] = 1982,
  [SMALL_STATE(96)] = 2037,
  [SMALL_STATE(97)] = 2085,
  [SMALL_STATE(98)] = 2135,
  [SMALL_STATE(99)] = 2189,
  [SMALL_STATE(100)] = 2221,
  [SMALL_STATE(101)] = 2253,
  [SMALL_STATE(102)] = 2285,
  [SMALL_STATE(103)] = 2317,
  [SMALL_STATE(104)] = 2349,
  [SMALL_STATE(105)] = 2381,
  [SMALL_STATE(106)] = 2413,
  [SMALL_STATE(107)] = 2467,
  [SMALL_STATE(108)] = 2499,
  [SMALL_STATE(109)] = 2551,
  [SMALL_STATE(110)] = 2591,
  [SMALL_STATE(111)] = 2629,
  [SMALL_STATE(112)] = 2661,
  [SMALL_STATE(113)] = 2695,
  [SMALL_STATE(114)] = 2737,
  [SMALL_STATE(115)] = 2769,
  [SMALL_STATE(116)] = 2803,
  [SMALL_STATE(117)] = 2849,
  [SMALL_STATE(118)] = 2901,
  [SMALL_STATE(119)] = 2953,
  [SMALL_STATE(120)] = 3005,
  [SMALL_STATE(121)] = 3057,
  [SMALL_STATE(122)] = 3107,
  [SMALL_STATE(123)] = 3157,
  [SMALL_STATE(124)] = 3209,
  [SMALL_STATE(125)] = 3261,
  [SMALL_STATE(126)] = 3310,
  [SMALL_STATE(127)] = 3359,
  [SMALL_STATE(128)] = 3403,
  [SMALL_STATE(129)] = 3447,
  [SMALL_STATE(130)] = 3490,
  [SMALL_STATE(131)] = 3533,
  [SMALL_STATE(132)] = 3576,
  [SMALL_STATE(133)] = 3619,
  [SMALL_STATE(134)] = 3662,
  [SMALL_STATE(135)] = 3687,
  [SMALL_STATE(136)] = 3712,
  [SMALL_STATE(137)] = 3751,
  [SMALL_STATE(138)] = 3776,
  [SMALL_STATE(139)] = 3801,
  [SMALL_STATE(140)] = 3826,
  [SMALL_STATE(141)] = 3865,
  [SMALL_STATE(142)] = 3890,
  [SMALL_STATE(143)] = 3915,
  [SMALL_STATE(144)] = 3951,
  [SMALL_STATE(145)] = 3987,
  [SMALL_STATE(146)] = 4023,
  [SMALL_STATE(147)] = 4047,
  [SMALL_STATE(148)] = 4083,
  [SMALL_STATE(149)] = 4119,
  [SMALL_STATE(150)] = 4139,
  [SMALL_STATE(151)] = 4163,
  [SMALL_STATE(152)] = 4187,
  [SMALL_STATE(153)] = 4211,
  [SMALL_STATE(154)] = 4235,
  [SMALL_STATE(155)] = 4258,
  [SMALL_STATE(156)] = 4281,
  [SMALL_STATE(157)] = 4304,
  [SMALL_STATE(158)] = 4327,
  [SMALL_STATE(159)] = 4350,
  [SMALL_STATE(160)] = 4373,
  [SMALL_STATE(161)] = 4396,
  [SMALL_STATE(162)] = 4419,
  [SMALL_STATE(163)] = 4442,
  [SMALL_STATE(164)] = 4465,
  [SMALL_STATE(165)] = 4488,
  [SMALL_STATE(166)] = 4509,
  [SMALL_STATE(167)] = 4531,
  [SMALL_STATE(168)] = 4553,
  [SMALL_STATE(169)] = 4571,
  [SMALL_STATE(170)] = 4589,
  [SMALL_STATE(171)] = 4607,
  [SMALL_STATE(172)] = 4625,
  [SMALL_STATE(173)] = 4643,
  [SMALL_STATE(174)] = 4661,
  [SMALL_STATE(175)] = 4679,
  [SMALL_STATE(176)] = 4697,
  [SMALL_STATE(177)] = 4715,
  [SMALL_STATE(178)] = 4735,
  [SMALL_STATE(179)] = 4753,
  [SMALL_STATE(180)] = 4771,
  [SMALL_STATE(181)] = 4789,
  [SMALL_STATE(182)] = 4811,
  [SMALL_STATE(183)] = 4830,
  [SMALL_STATE(184)] = 4849,
  [SMALL_STATE(185)] = 4866,
  [SMALL_STATE(186)] = 4883,
  [SMALL_STATE(187)] = 4900,
  [SMALL_STATE(188)] = 4919,
  [SMALL_STATE(189)] = 4938,
  [SMALL_STATE(190)] = 4954,
  [SMALL_STATE(191)] = 4970,
  [SMALL_STATE(192)] = 4986,
  [SMALL_STATE(193)] = 5002,
  [SMALL_STATE(194)] = 5022,
  [SMALL_STATE(195)] = 5042,
  [SMALL_STATE(196)] = 5058,
  [SMALL_STATE(197)] = 5074,
  [SMALL_STATE(198)] = 5090,
  [SMALL_STATE(199)] = 5106,
  [SMALL_STATE(200)] = 5124,
  [SMALL_STATE(201)] = 5140,
  [SMALL_STATE(202)] = 5156,
  [SMALL_STATE(203)] = 5172,
  [SMALL_STATE(204)] = 5188,
  [SMALL_STATE(205)] = 5208,
  [SMALL_STATE(206)] = 5224,
  [SMALL_STATE(207)] = 5242,
  [SMALL_STATE(208)] = 5262,
  [SMALL_STATE(209)] = 5278,
  [SMALL_STATE(210)] = 5296,
  [SMALL_STATE(211)] = 5316,
  [SMALL_STATE(212)] = 5336,
  [SMALL_STATE(213)] = 5352,
  [SMALL_STATE(214)] = 5368,
  [SMALL_STATE(215)] = 5394,
  [SMALL_STATE(216)] = 5410,
  [SMALL_STATE(217)] = 5436,
  [SMALL_STATE(218)] = 5454,
  [SMALL_STATE(219)] = 5469,
  [SMALL_STATE(220)] = 5484,
  [SMALL_STATE(221)] = 5499,
  [SMALL_STATE(222)] = 5514,
  [SMALL_STATE(223)] = 5537,
  [SMALL_STATE(224)] = 5552,
  [SMALL_STATE(225)] = 5567,
  [SMALL_STATE(226)] = 5590,
  [SMALL_STATE(227)] = 5613,
  [SMALL_STATE(228)] = 5628,
  [SMALL_STATE(229)] = 5643,
  [SMALL_STATE(230)] = 5666,
  [SMALL_STATE(231)] = 5681,
  [SMALL_STATE(232)] = 5699,
  [SMALL_STATE(233)] = 5717,
  [SMALL_STATE(234)] = 5735,
  [SMALL_STATE(235)] = 5753,
  [SMALL_STATE(236)] = 5771,
  [SMALL_STATE(237)] = 5789,
  [SMALL_STATE(238)] = 5802,
  [SMALL_STATE(239)] = 5815,
  [SMALL_STATE(240)] = 5828,
  [SMALL_STATE(241)] = 5841,
  [SMALL_STATE(242)] = 5854,
  [SMALL_STATE(243)] = 5867,
  [SMALL_STATE(244)] = 5879,
  [SMALL_STATE(245)] = 5891,
  [SMALL_STATE(246)] = 5903,
  [SMALL_STATE(247)] = 5915,
  [SMALL_STATE(248)] = 5932,
  [SMALL_STATE(249)] = 5943,
  [SMALL_STATE(250)] = 5954,
  [SMALL_STATE(251)] = 5971,
  [SMALL_STATE(252)] = 5982,
  [SMALL_STATE(253)] = 5997,
  [SMALL_STATE(254)] = 6012,
  [SMALL_STATE(255)] = 6023,
  [SMALL_STATE(256)] = 6038,
  [SMALL_STATE(257)] = 6049,
  [SMALL_STATE(258)] = 6060,
  [SMALL_STATE(259)] = 6071,
  [SMALL_STATE(260)] = 6086,
  [SMALL_STATE(261)] = 6097,
  [SMALL_STATE(262)] = 6114,
  [SMALL_STATE(263)] = 6125,
  [SMALL_STATE(264)] = 6142,
  [SMALL_STATE(265)] = 6157,
  [SMALL_STATE(266)] = 6168,
  [SMALL_STATE(267)] = 6182,
  [SMALL_STATE(268)] = 6196,
  [SMALL_STATE(269)] = 6207,
  [SMALL_STATE(270)] = 6220,
  [SMALL_STATE(271)] = 6233,
  [SMALL_STATE(272)] = 6240,
  [SMALL_STATE(273)] = 6251,
  [SMALL_STATE(274)] = 6264,
  [SMALL_STATE(275)] = 6274,
  [SMALL_STATE(276)] = 6284,
  [SMALL_STATE(277)] = 6294,
  [SMALL_STATE(278)] = 6304,
  [SMALL_STATE(279)] = 6314,
  [SMALL_STATE(280)] = 6324,
  [SMALL_STATE(281)] = 6334,
  [SMALL_STATE(282)] = 6344,
  [SMALL_STATE(283)] = 6354,
  [SMALL_STATE(284)] = 6364,
  [SMALL_STATE(285)] = 6374,
  [SMALL_STATE(286)] = 6384,
  [SMALL_STATE(287)] = 6394,
  [SMALL_STATE(288)] = 6404,
  [SMALL_STATE(289)] = 6414,
  [SMALL_STATE(290)] = 6424,
  [SMALL_STATE(291)] = 6434,
  [SMALL_STATE(292)] = 6444,
  [SMALL_STATE(293)] = 6451,
  [SMALL_STATE(294)] = 6458,
  [SMALL_STATE(295)] = 6465,
  [SMALL_STATE(296)] = 6472,
  [SMALL_STATE(297)] = 6479,
  [SMALL_STATE(298)] = 6486,
  [SMALL_STATE(299)] = 6493,
  [SMALL_STATE(300)] = 6500,
  [SMALL_STATE(301)] = 6505,
  [SMALL_STATE(302)] = 6510,
  [SMALL_STATE(303)] = 6514,
  [SMALL_STATE(304)] = 6518,
  [SMALL_STATE(305)] = 6522,
  [SMALL_STATE(306)] = 6526,
  [SMALL_STATE(307)] = 6530,
  [SMALL_STATE(308)] = 6534,
  [SMALL_STATE(309)] = 6538,
  [SMALL_STATE(310)] = 6542,
  [SMALL_STATE(311)] = 6546,
  [SMALL_STATE(312)] = 6550,
  [SMALL_STATE(313)] = 6554,
  [SMALL_STATE(314)] = 6558,
  [SMALL_STATE(315)] = 6562,
  [SMALL_STATE(316)] = 6566,
  [SMALL_STATE(317)] = 6570,
  [SMALL_STATE(318)] = 6574,
  [SMALL_STATE(319)] = 6578,
  [SMALL_STATE(320)] = 6582,
  [SMALL_STATE(321)] = 6586,
  [SMALL_STATE(322)] = 6590,
  [SMALL_STATE(323)] = 6594,
  [SMALL_STATE(324)] = 6598,
  [SMALL_STATE(325)] = 6602,
  [SMALL_STATE(326)] = 6606,
  [SMALL_STATE(327)] = 6610,
  [SMALL_STATE(328)] = 6614,
  [SMALL_STATE(329)] = 6618,
  [SMALL_STATE(330)] = 6622,
  [SMALL_STATE(331)] = 6626,
  [SMALL_STATE(332)] = 6630,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numberreference, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numberreference, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numberelement, 5),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numberelement, 5),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numberelement, 4),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numberelement, 4),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_primary_expression, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_primary_expression, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_system_function, 1, .production_id = 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_system_function, 1, .production_id = 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_user_function, 1, .production_id = 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_user_function, 1, .production_id = 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 3),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_unary_expression, 2, .production_id = 3),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_unary_expression, 2, .production_id = 3),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_system_function, 2, .production_id = 4),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_system_function, 2, .production_id = 4),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_user_function, 2, .production_id = 4),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_user_function, 2, .production_id = 4),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_binary_expression, 3, .production_id = 5),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_binary_expression, 3, .production_id = 5),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_expression, 1),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_expression, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_call_expression, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_call_expression, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_forced_assignment_expression, 3, .production_id = 6),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_forced_assignment_expression, 3, .production_id = 6),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3, .production_id = 6),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_expression, 3, .production_id = 6),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 3),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numberelement_repeat1, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringreference, 1),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringreference, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringelement, 6),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringelement, 6),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringreference, 2),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringreference, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringelement, 4),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringelement, 4),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringelement, 5),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringelement, 5),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stringelement_repeat1, 2),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stringelement_repeat1, 2),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringelement_repeat1, 2), SHIFT_REPEAT(14),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(214),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(226),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(272),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(322),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(323),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(216),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(225),
  [331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(268),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(330),
  [337] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(329),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringarray, 2),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringarray, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stringelement_repeat1, 3),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stringelement_repeat1, 3),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stringarray_repeat1, 2),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stringarray_repeat1, 2),
  [358] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringarray_repeat1, 2), SHIFT_REPEAT(12),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_system_function, 1, .production_id = 1),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_system_function, 1, .production_id = 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_user_function, 1, .production_id = 1),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_user_function, 1, .production_id = 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringarray, 3),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringarray, 3),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringelement_repeat1, 2), SHIFT_REPEAT(15),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numberarray, 2),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numberarray, 2),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringarray_repeat1, 2), SHIFT_REPEAT(16),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_primary_expression, 1),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_primary_expression, 1),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 4),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dimension, 4),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_call_expression, 1),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_call_expression, 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_string, 2),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_string, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_expression, 1),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_expression, 1),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 3),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dimension, 3),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_string, 3),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_string, 3),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_user_function, 2, .production_id = 4),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_user_function, 2, .production_id = 4),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_system_function, 2, .production_id = 4),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_system_function, 2, .production_id = 4),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_forced_assignment_expression, 3, .production_id = 6),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_forced_assignment_expression, 3, .production_id = 6),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_binary_expression, 3, .production_id = 5),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_binary_expression, 3, .production_id = 5),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array_primary_expression, 1),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_array_primary_expression, 1),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numberarray, 3),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numberarray, 3),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_array_primary_expression, 1),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_array_primary_expression, 1),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_array_forced_assignment_expression, 3, .production_id = 6),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_array_forced_assignment_expression, 3, .production_id = 6),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array_forced_assignment_expression, 3, .production_id = 6),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_array_forced_assignment_expression, 3, .production_id = 6),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_statement, 4),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print_statement, 4),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_print_statement_repeat1, 2),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_print_statement_repeat1, 2),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT_REPEAT(2),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array_forced_assignment_expression, 5, .production_id = 7),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_array_forced_assignment_expression, 5, .production_id = 7),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_array_forced_assignment_expression, 5, .production_id = 7),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_array_forced_assignment_expression, 5, .production_id = 7),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT_REPEAT(5),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_statement, 3),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print_statement, 3),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_array_expression, 1),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_array_expression, 1),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_array_expression, 1),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_array_expression, 1),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_line_statement, 2),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_line_statement, 2),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_line_statement, 1),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_line_statement, 1),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__multi_line_statement_repeat1, 2),
  [541] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multi_line_statement_repeat1, 2), SHIFT_REPEAT(266),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__multi_line_statement_repeat1, 2),
  [546] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multi_line_statement_repeat1, 2), SHIFT_REPEAT(267),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_function_definition, 3),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_function_definition, 3),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_function_definition, 2),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_function_definition, 2),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_function_definition, 2),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_function_definition, 2),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 3),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 3),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_template_string_repeat1, 2),
  [599] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_string_repeat1, 2), SHIFT_REPEAT(255),
  [602] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_string_repeat1, 2), SHIFT_REPEAT(58),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_substitution, 3),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dimension_repeat1, 2),
  [645] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimension_repeat1, 2), SHIFT_REPEAT(18),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [660] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(7),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [665] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numberelement_repeat1, 2), SHIFT_REPEAT(51),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_length, 2, .production_id = 2),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [732] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
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
