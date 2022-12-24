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
#define STATE_COUNT 295
#define LARGE_STATE_COUNT 50
#define SYMBOL_COUNT 229
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
  sym_numeric_expression = 188,
  sym_string_expression = 189,
  sym_string_binary_expression = 190,
  sym_numeric_binary_expression = 191,
  sym_numeric_unary_expression = 192,
  sym_numeric_primary_expression = 193,
  sym_string_primary_expression = 194,
  sym_numeric_call_expression = 195,
  sym_string_call_expression = 196,
  sym_numeric_system_function = 197,
  sym_string_system_function = 198,
  sym_numeric_user_function = 199,
  sym_string_user_function = 200,
  sym_arguments = 201,
  sym_template_string = 202,
  sym_template_substitution = 203,
  sym_string = 204,
  sym_parenthesized_expression = 205,
  sym_assignment_expression = 206,
  sym_numeric_forced_assignment_expression = 207,
  sym_string_forced_assignment_expression = 208,
  sym__numeric_reference = 209,
  sym__string_reference = 210,
  sym_numberelement = 211,
  sym_stringelement = 212,
  sym_stringarray = 213,
  sym_dimension = 214,
  sym_stringreference = 215,
  sym_numberreference = 216,
  sym_range = 217,
  sym_numberarray = 218,
  sym_number = 219,
  aux_sym_source_file_repeat1 = 220,
  aux_sym__multi_line_statement_repeat1 = 221,
  aux_sym_print_statement_repeat1 = 222,
  aux_sym_arguments_repeat1 = 223,
  aux_sym_template_string_repeat1 = 224,
  aux_sym_numberelement_repeat1 = 225,
  aux_sym_stringelement_repeat1 = 226,
  aux_sym_stringarray_repeat1 = 227,
  aux_sym_dimension_repeat1 = 228,
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
  [sym_numeric_expression] = "numeric_expression",
  [sym_string_expression] = "string_expression",
  [sym_string_binary_expression] = "string_binary_expression",
  [sym_numeric_binary_expression] = "numeric_binary_expression",
  [sym_numeric_unary_expression] = "numeric_unary_expression",
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
  [sym_numeric_expression] = sym_numeric_expression,
  [sym_string_expression] = sym_string_expression,
  [sym_string_binary_expression] = sym_string_binary_expression,
  [sym_numeric_binary_expression] = sym_numeric_binary_expression,
  [sym_numeric_unary_expression] = sym_numeric_unary_expression,
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
      if (eof) ADVANCE(46);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '"') ADVANCE(370);
      if (lookahead == '%') ADVANCE(81);
      if (lookahead == '&') ADVANCE(62);
      if (lookahead == '\'') ADVANCE(372);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead == '+') ADVANCE(77);
      if (lookahead == ',') ADVANCE(70);
      if (lookahead == '-') ADVANCE(79);
      if (lookahead == '.') ADVANCE(1167);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == ':') ADVANCE(48);
      if (lookahead == ';') ADVANCE(71);
      if (lookahead == '<') ADVANCE(83);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '>') ADVANCE(88);
      if (lookahead == 'D') ADVANCE(869);
      if (lookahead == 'F') ADVANCE(962);
      if (lookahead == '`') ADVANCE(363);
      if (lookahead == 'd') ADVANCE(857);
      if (lookahead == 'f') ADVANCE(866);
      if (lookahead == '{') ADVANCE(28);
      if (lookahead == '|') ADVANCE(29);
      if (lookahead == '}') ADVANCE(30);
      if (lookahead == '~') ADVANCE(90);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(887);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(933);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(919);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1013);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(920);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1014);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(988);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(921);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(870);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(922);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1066);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(961);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(923);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(924);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(871);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(918);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(872);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(888);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(989);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1166);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(47);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(47);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(370);
      if (lookahead == '\'') ADVANCE(372);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == '+') ADVANCE(76);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == '`') ADVANCE(362);
      if (lookahead == '~') ADVANCE(89);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(438);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(482);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(470);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(420);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(565);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(514);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(471);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(566);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(540);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(484);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(421);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(472);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(618);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(513);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(473);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(474);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(422);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(469);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(423);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(439);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(541);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1166);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(371);
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(373);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == '+') ADVANCE(76);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == '~') ADVANCE(89);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(696);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(719);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(720);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(688);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(811);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(748);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(776);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(765);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(733);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(689);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(721);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(813);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(747);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(722);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(723);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(690);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(715);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(692);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1166);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(2);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == 'd') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == 'e') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == 'f') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == 'n') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == 'n') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(43);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(86);
      END_STATE();
    case 23:
      if (lookahead == '`') ADVANCE(363);
      if (lookahead == '{') ADVANCE(366);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(367);
      if (lookahead != 0) ADVANCE(365);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(25);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(37);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 'f') ADVANCE(51);
      END_STATE();
    case 27:
      if (lookahead == 'f') ADVANCE(868);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 28:
      if (lookahead == '{') ADVANCE(368);
      END_STATE();
    case 29:
      if (lookahead == '|') ADVANCE(73);
      END_STATE();
    case 30:
      if (lookahead == '}') ADVANCE(369);
      END_STATE();
    case 31:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(49);
      END_STATE();
    case 32:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(36)
      END_STATE();
    case 37:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 38:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 41:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(63);
      END_STATE();
    case 42:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(67);
      END_STATE();
    case 43:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      END_STATE();
    case 44:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(44)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 45:
      if (eof) ADVANCE(46);
      if (lookahead == '!') ADVANCE(8);
      if (lookahead == '%') ADVANCE(81);
      if (lookahead == '&') ADVANCE(62);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead == '+') ADVANCE(77);
      if (lookahead == ',') ADVANCE(70);
      if (lookahead == '-') ADVANCE(79);
      if (lookahead == '.') ADVANCE(1167);
      if (lookahead == '/') ADVANCE(80);
      if (lookahead == ':') ADVANCE(48);
      if (lookahead == ';') ADVANCE(71);
      if (lookahead == '<') ADVANCE(83);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '>') ADVANCE(88);
      if (lookahead == 'd') ADVANCE(10);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == '|') ADVANCE(29);
      if (lookahead == '}') ADVANCE(30);
      if (lookahead == '~') ADVANCE(22);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(15);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(45)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym__multi_line_statement_token1);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(374);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_line_number);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_label);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(85);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_fnend);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_fnend);
      if (lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(82);
      if (lookahead == '=') ADVANCE(377);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_numeric_function_name);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(72);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_let_statement_token1);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_let_statement_token1);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_let_statement_token1);
      if (lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_let_statement_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_print_statement_token1);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_print_statement_token1);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1068);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_print_statement_token1);
      if (lookahead == ':') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(375);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(376);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(378);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '=') ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == '>') ADVANCE(74);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=') ADVANCE(86);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_numeric_unary_expression_token1);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_numeric_unary_expression_token1);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_numeric_unary_expression_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_numeric_unary_expression_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token1);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token1);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token2);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token2);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token3);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token3);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token4);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token4);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token5);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token5);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token6);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token6);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token7);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token7);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token8);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token8);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token9);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token9);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token10);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token10);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token11);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token11);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token12);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token12);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token13);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token13);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token14);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token14);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token15);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token15);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token16);
      if (lookahead == '$') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token16);
      if (lookahead == '$') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token17);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token17);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token18);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token18);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token19);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token19);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token20);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token20);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token21);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token21);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token22);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token22);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token23);
      if (lookahead == '$') ADVANCE(329);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token23);
      if (lookahead == '$') ADVANCE(329);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(667);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token23);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(840);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token24);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token24);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token25);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token25);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token26);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token26);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token27);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token27);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token28);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token28);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token29);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token29);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token30);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token30);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token31);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token31);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token32);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token32);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token33);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token33);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token34);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token34);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token35);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token35);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token35);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token36);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1049);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token36);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(601);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token36);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token37);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token37);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token38);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1025);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token38);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token39);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token39);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token40);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token40);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token41);
      if (lookahead == '$') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token41);
      if (lookahead == '$') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token42);
      if (lookahead == '$') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token42);
      if (lookahead == '$') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token43);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token43);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token44);
      if (lookahead == '$') ADVANCE(339);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1038);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token44);
      if (lookahead == '$') ADVANCE(339);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token44);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(793);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token45);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token45);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token46);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token46);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token47);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token47);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token48);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token48);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token49);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token49);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token50);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token50);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token51);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token51);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token52);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token52);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token53);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token53);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token54);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token54);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token55);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token55);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token56);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token56);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token57);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token57);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token58);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token58);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token59);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token59);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token60);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token60);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token61);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token61);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token62);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token62);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token63);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token63);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token64);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token64);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token65);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token65);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token66);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token66);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token67);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token67);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token68);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token68);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token69);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token69);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token70);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token70);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token71);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token71);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token72);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token72);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token73);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token73);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token74);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token74);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token75);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token75);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_numeric_system_function_token75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_string_system_function_token1);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_string_system_function_token2);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_string_system_function_token3);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_string_system_function_token4);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_string_system_function_token5);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_string_system_function_token6);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_string_system_function_token7);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_string_system_function_token8);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_string_system_function_token9);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_string_system_function_token10);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_string_system_function_token11);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_string_system_function_token12);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_string_system_function_token13);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_string_system_function_token14);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_string_system_function_token15);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_string_system_function_token16);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_string_system_function_token17);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_string_system_function_token18);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_string_system_function_token19);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_string_system_function_token20);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_string_system_function_token21);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_string_system_function_token22);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_string_system_function_token23);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_string_system_function_token24);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_string_system_function_token25);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_string_system_function_token26);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_string_system_function_token27);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_string_system_function_token28);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_string_system_function_token29);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_string_system_function_token30);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_string_system_function_token31);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_string_system_function_token32);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_string_system_function_token33);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_string_system_function_token34);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_string_system_function_token35);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_string_system_function_token36);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_string_system_function_token37);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_string_system_function_token38);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_string_system_function_token39);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__string_function_identifier);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__numeric_function_identifier);
      if (lookahead == '$') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__numeric_function_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '`') ADVANCE(364);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__template_chars);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__template_chars);
      if (lookahead == '{') ADVANCE(368);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__template_chars);
      if (lookahead == '{') ADVANCE(366);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(365);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_stringidentifier);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(348);
      if (lookahead == '2') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(349);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == '2') ADVANCE(642);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == '_') ADVANCE(504);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == '_') ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == '_') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == '_') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == '_') ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(655);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(442);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(647);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(571);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(456);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(440);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(560);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(526);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(534);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(510);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(658);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(654);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(466);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(558);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(633);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(454);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(607);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(527);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(303);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(666);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(548);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(261);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(591);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(544);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(593);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(587);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(424);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(522);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(511);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(592);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(546);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(523);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(630);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(674);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(479);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(515);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(512);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(626);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(516);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(597);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(615);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(455);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(649);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(463);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(533);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(673);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(650);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(444);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(572);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(458);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(668);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(433);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(619);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(573);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(574);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(492);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(611);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(448);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(609);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(678);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(542);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(570);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(581);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(507);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(428);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(483);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(616);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(677);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(679);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(585);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(177);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(524);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(531);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(249);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(635);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(521);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(545);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(475);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(683);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(171);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(536);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(641);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(584);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(580);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(603);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(315);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(519);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(569);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(634);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(476);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(664);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(535);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(528);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(478);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(453);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(610);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(503);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(665);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(670);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(671);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(672);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(676);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(537);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(538);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(662);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(663);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(549);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(680);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(457);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(518);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(640);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(660);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(559);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(529);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(681);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(659);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(525);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(530);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(414);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(114);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(477);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(509);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(602);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(682);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(360);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '2') ADVANCE(774);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '2') ADVANCE(824);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '_') ADVANCE(767);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '_') ADVANCE(826);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(834);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(699);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(716);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(828);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(780);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(709);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(743);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(697);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(698);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(759);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(745);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(764);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(815);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(707);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(777);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(304);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(839);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(262);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(746);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(795);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(769);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(796);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(791);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(691);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(755);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(797);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(770);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(756);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(847);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(758);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(749);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(725);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(794);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(766);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(752);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(708);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(827);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(717);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(843);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(829);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(700);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(781);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(711);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(812);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(782);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(783);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(740);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(805);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(701);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(806);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(850);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(703);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(851);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(779);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(789);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(742);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(734);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(704);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(821);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(736);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(732);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(178);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(687);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(729);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(250);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(817);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(754);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(768);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(724);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(853);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(172);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(737);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(772);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(823);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(761);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(787);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(706);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(825);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(731);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(778);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(816);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(730);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(760);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(757);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(727);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(713);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(714);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(694);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(735);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(741);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(842);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(712);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(728);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(718);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(849);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(763);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(693);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(702);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(684);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(686);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(804);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(751);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(750);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(739);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(710);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(753);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(836);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(685);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(705);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(726);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(808);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(738);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(744);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(773);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(802);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(852);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(361);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym__mat);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == '2') ADVANCE(1090);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'E') ADVANCE(891);
      if (lookahead == 'e') ADVANCE(865);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1104);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(903);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == '_') ADVANCE(952);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1072);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == '_') ADVANCE(991);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == '_') ADVANCE(1028);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == '_') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == '_') ADVANCE(954);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'd') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'e') ADVANCE(867);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'f') ADVANCE(52);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1114);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1063);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'n') ADVANCE(864);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(992);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(925);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(170);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(938);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'n') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'n') ADVANCE(1131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1104);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(891);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(903);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1096);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1018);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(905);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(956);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(889);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1008);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(974);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(982);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1079);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(892);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(958);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(912);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(987);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1009);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(915);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1006);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1011);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(1012);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1081);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(911);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1015);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1055);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(975);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(302);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(1114);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1063);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(996);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(260);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1039);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(993);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1041);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1035);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(873);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(970);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(959);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1040);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(994);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1036);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(971);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1070);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(1078);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(980);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1037);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(929);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(1155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(963);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(960);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1074);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(940);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(964);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1045);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(1062);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(904);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1095);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(914);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1056);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(981);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1017);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1030);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(955);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(877);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(932);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1064);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1065);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1121);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1097);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1098);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(893);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1019);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(907);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1116);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(882);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1073);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1067);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(1020);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1021);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(941);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(1058);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(897);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1059);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(999);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(895);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(990);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1047);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1087);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(937);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1022);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1077);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(936);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1080);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1033);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(1034);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(176);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(972);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(1046);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(979);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(931);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(934);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(248);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1083);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(969);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(992);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(925);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(170);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(938);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1000);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(984);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1089);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(878);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(874);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1042);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1027);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1029);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1023);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(995);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1043);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1004);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(916);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1091);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(917);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(1044);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(998);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(935);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1051);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(314);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(967);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(1016);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1082);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(926);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(876);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(983);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(976);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(928);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(909);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(910);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(949);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(944);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(879);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(950);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(1163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(942);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(945);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(946);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(947);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(902);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1057);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(965);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(951);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(194);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(908);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(881);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(913);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(930);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(1161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(885);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(886);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(985);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(986);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1085);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1031);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1024);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1032);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1075);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(1076);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(875);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(997);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(948);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1002);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(898);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(906);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(862);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(966);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1088);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(939);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(884);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1071);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1003);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(899);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1005);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(977);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1093);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(1094);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1048);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(968);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(1108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(973);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(978);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(113);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(1069);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(856);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(900);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(953);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(927);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1084);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1086);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1060);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(943);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1061);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(1157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(957);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1001);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(1026);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(1050);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1099);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(1153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1053);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(1054);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(855);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(348);
      if (lookahead == '2') ADVANCE(1010);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(349);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1130);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1166);
      END_STATE();
    case 1167:
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
  [1] = {.lex_state = 45},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 45},
  [56] = {.lex_state = 45},
  [57] = {.lex_state = 45},
  [58] = {.lex_state = 45},
  [59] = {.lex_state = 45},
  [60] = {.lex_state = 45},
  [61] = {.lex_state = 45},
  [62] = {.lex_state = 45},
  [63] = {.lex_state = 45},
  [64] = {.lex_state = 45},
  [65] = {.lex_state = 45},
  [66] = {.lex_state = 45},
  [67] = {.lex_state = 45},
  [68] = {.lex_state = 45},
  [69] = {.lex_state = 45},
  [70] = {.lex_state = 45},
  [71] = {.lex_state = 45},
  [72] = {.lex_state = 45},
  [73] = {.lex_state = 45},
  [74] = {.lex_state = 45},
  [75] = {.lex_state = 45},
  [76] = {.lex_state = 45},
  [77] = {.lex_state = 45},
  [78] = {.lex_state = 45},
  [79] = {.lex_state = 45},
  [80] = {.lex_state = 45},
  [81] = {.lex_state = 45},
  [82] = {.lex_state = 45},
  [83] = {.lex_state = 45},
  [84] = {.lex_state = 45},
  [85] = {.lex_state = 45},
  [86] = {.lex_state = 45},
  [87] = {.lex_state = 45},
  [88] = {.lex_state = 45},
  [89] = {.lex_state = 45},
  [90] = {.lex_state = 45},
  [91] = {.lex_state = 45},
  [92] = {.lex_state = 45},
  [93] = {.lex_state = 45},
  [94] = {.lex_state = 45},
  [95] = {.lex_state = 45},
  [96] = {.lex_state = 45},
  [97] = {.lex_state = 45},
  [98] = {.lex_state = 45},
  [99] = {.lex_state = 45},
  [100] = {.lex_state = 45},
  [101] = {.lex_state = 45},
  [102] = {.lex_state = 45},
  [103] = {.lex_state = 45},
  [104] = {.lex_state = 45},
  [105] = {.lex_state = 45},
  [106] = {.lex_state = 45},
  [107] = {.lex_state = 45},
  [108] = {.lex_state = 45},
  [109] = {.lex_state = 45},
  [110] = {.lex_state = 45},
  [111] = {.lex_state = 45},
  [112] = {.lex_state = 45},
  [113] = {.lex_state = 45},
  [114] = {.lex_state = 45},
  [115] = {.lex_state = 45},
  [116] = {.lex_state = 45},
  [117] = {.lex_state = 45},
  [118] = {.lex_state = 45},
  [119] = {.lex_state = 45},
  [120] = {.lex_state = 45},
  [121] = {.lex_state = 45},
  [122] = {.lex_state = 45},
  [123] = {.lex_state = 45},
  [124] = {.lex_state = 45},
  [125] = {.lex_state = 45},
  [126] = {.lex_state = 45},
  [127] = {.lex_state = 45},
  [128] = {.lex_state = 45},
  [129] = {.lex_state = 45},
  [130] = {.lex_state = 45},
  [131] = {.lex_state = 45},
  [132] = {.lex_state = 45},
  [133] = {.lex_state = 45},
  [134] = {.lex_state = 45},
  [135] = {.lex_state = 45},
  [136] = {.lex_state = 45},
  [137] = {.lex_state = 45},
  [138] = {.lex_state = 45},
  [139] = {.lex_state = 45},
  [140] = {.lex_state = 45},
  [141] = {.lex_state = 45},
  [142] = {.lex_state = 45},
  [143] = {.lex_state = 45},
  [144] = {.lex_state = 45},
  [145] = {.lex_state = 45},
  [146] = {.lex_state = 45},
  [147] = {.lex_state = 45},
  [148] = {.lex_state = 45},
  [149] = {.lex_state = 45},
  [150] = {.lex_state = 45},
  [151] = {.lex_state = 45},
  [152] = {.lex_state = 45},
  [153] = {.lex_state = 45},
  [154] = {.lex_state = 45},
  [155] = {.lex_state = 45},
  [156] = {.lex_state = 45},
  [157] = {.lex_state = 45},
  [158] = {.lex_state = 45},
  [159] = {.lex_state = 45},
  [160] = {.lex_state = 45},
  [161] = {.lex_state = 45},
  [162] = {.lex_state = 45},
  [163] = {.lex_state = 45},
  [164] = {.lex_state = 45},
  [165] = {.lex_state = 45},
  [166] = {.lex_state = 45},
  [167] = {.lex_state = 45},
  [168] = {.lex_state = 45},
  [169] = {.lex_state = 45},
  [170] = {.lex_state = 45},
  [171] = {.lex_state = 45},
  [172] = {.lex_state = 45},
  [173] = {.lex_state = 45},
  [174] = {.lex_state = 45},
  [175] = {.lex_state = 45},
  [176] = {.lex_state = 45},
  [177] = {.lex_state = 45},
  [178] = {.lex_state = 45},
  [179] = {.lex_state = 45},
  [180] = {.lex_state = 45},
  [181] = {.lex_state = 45},
  [182] = {.lex_state = 45},
  [183] = {.lex_state = 45},
  [184] = {.lex_state = 45},
  [185] = {.lex_state = 45},
  [186] = {.lex_state = 45},
  [187] = {.lex_state = 45},
  [188] = {.lex_state = 45},
  [189] = {.lex_state = 45},
  [190] = {.lex_state = 45},
  [191] = {.lex_state = 45},
  [192] = {.lex_state = 45},
  [193] = {.lex_state = 45},
  [194] = {.lex_state = 45},
  [195] = {.lex_state = 45},
  [196] = {.lex_state = 45},
  [197] = {.lex_state = 45},
  [198] = {.lex_state = 45},
  [199] = {.lex_state = 45},
  [200] = {.lex_state = 45},
  [201] = {.lex_state = 24},
  [202] = {.lex_state = 45},
  [203] = {.lex_state = 24},
  [204] = {.lex_state = 45},
  [205] = {.lex_state = 24},
  [206] = {.lex_state = 24},
  [207] = {.lex_state = 45},
  [208] = {.lex_state = 45},
  [209] = {.lex_state = 45},
  [210] = {.lex_state = 45},
  [211] = {.lex_state = 45},
  [212] = {.lex_state = 45},
  [213] = {.lex_state = 45},
  [214] = {.lex_state = 45},
  [215] = {.lex_state = 45},
  [216] = {.lex_state = 45},
  [217] = {.lex_state = 45},
  [218] = {.lex_state = 45},
  [219] = {.lex_state = 45},
  [220] = {.lex_state = 45},
  [221] = {.lex_state = 45},
  [222] = {.lex_state = 45},
  [223] = {.lex_state = 45},
  [224] = {.lex_state = 45},
  [225] = {.lex_state = 23},
  [226] = {.lex_state = 45},
  [227] = {.lex_state = 45},
  [228] = {.lex_state = 45},
  [229] = {.lex_state = 45},
  [230] = {.lex_state = 23},
  [231] = {.lex_state = 23},
  [232] = {.lex_state = 45},
  [233] = {.lex_state = 23},
  [234] = {.lex_state = 45},
  [235] = {.lex_state = 23},
  [236] = {.lex_state = 45},
  [237] = {.lex_state = 45},
  [238] = {.lex_state = 45},
  [239] = {.lex_state = 45},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 23},
  [243] = {.lex_state = 27},
  [244] = {.lex_state = 27},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 5},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 44},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 44},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 371},
  [277] = {.lex_state = 373},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 5},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 36},
  [287] = {.lex_state = 36},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 371},
  [290] = {.lex_state = 373},
  [291] = {.lex_state = 36},
  [292] = {.lex_state = 36},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
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
    [sym_source_file] = STATE(288),
    [sym_line] = STATE(152),
    [sym__single_line_statement] = STATE(228),
    [sym__multi_line_statement] = STATE(228),
    [sym_statement] = STATE(208),
    [sym__definition] = STATE(228),
    [sym_function_definition] = STATE(228),
    [sym_let_statement] = STATE(218),
    [sym_print_statement] = STATE(218),
    [aux_sym_source_file_repeat1] = STATE(152),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_line_number] = ACTIONS(5),
    [sym_label] = ACTIONS(7),
    [anon_sym_def] = ACTIONS(9),
    [aux_sym_let_statement_token1] = ACTIONS(11),
    [aux_sym_print_statement_token1] = ACTIONS(13),
  },
  [2] = {
    [sym_expression] = STATE(196),
    [sym_numeric_expression] = STATE(107),
    [sym_string_expression] = STATE(197),
    [sym_string_binary_expression] = STATE(183),
    [sym_numeric_binary_expression] = STATE(109),
    [sym_numeric_unary_expression] = STATE(109),
    [sym_numeric_primary_expression] = STATE(109),
    [sym_string_primary_expression] = STATE(183),
    [sym_numeric_call_expression] = STATE(120),
    [sym_string_call_expression] = STATE(184),
    [sym_numeric_system_function] = STATE(122),
    [sym_string_system_function] = STATE(190),
    [sym_numeric_user_function] = STATE(122),
    [sym_string_user_function] = STATE(190),
    [sym_template_string] = STATE(184),
    [sym_string] = STATE(184),
    [sym_parenthesized_expression] = STATE(120),
    [sym_numeric_forced_assignment_expression] = STATE(109),
    [sym_string_forced_assignment_expression] = STATE(183),
    [sym__numeric_reference] = STATE(76),
    [sym__string_reference] = STATE(180),
    [sym_numberelement] = STATE(76),
    [sym_stringelement] = STATE(180),
    [sym_stringarray] = STATE(76),
    [sym_stringreference] = STATE(180),
    [sym_numberreference] = STATE(76),
    [sym_numberarray] = STATE(76),
    [sym_number] = STATE(120),
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
    [sym_expression] = STATE(252),
    [sym_numeric_expression] = STATE(99),
    [sym_string_expression] = STATE(181),
    [sym_string_binary_expression] = STATE(175),
    [sym_numeric_binary_expression] = STATE(103),
    [sym_numeric_unary_expression] = STATE(103),
    [sym_numeric_primary_expression] = STATE(103),
    [sym_string_primary_expression] = STATE(175),
    [sym_numeric_call_expression] = STATE(102),
    [sym_string_call_expression] = STATE(176),
    [sym_numeric_system_function] = STATE(101),
    [sym_string_system_function] = STATE(168),
    [sym_numeric_user_function] = STATE(101),
    [sym_string_user_function] = STATE(168),
    [sym_template_string] = STATE(176),
    [sym_string] = STATE(176),
    [sym_parenthesized_expression] = STATE(102),
    [sym_numeric_forced_assignment_expression] = STATE(103),
    [sym_string_forced_assignment_expression] = STATE(175),
    [sym__numeric_reference] = STATE(74),
    [sym__string_reference] = STATE(166),
    [sym_numberelement] = STATE(74),
    [sym_stringelement] = STATE(166),
    [sym_stringarray] = STATE(74),
    [sym_stringreference] = STATE(166),
    [sym_numberreference] = STATE(74),
    [sym_numberarray] = STATE(74),
    [sym_number] = STATE(102),
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
  [4] = {
    [sym_expression] = STATE(269),
    [sym_numeric_expression] = STATE(99),
    [sym_string_expression] = STATE(181),
    [sym_string_binary_expression] = STATE(175),
    [sym_numeric_binary_expression] = STATE(103),
    [sym_numeric_unary_expression] = STATE(103),
    [sym_numeric_primary_expression] = STATE(103),
    [sym_string_primary_expression] = STATE(175),
    [sym_numeric_call_expression] = STATE(102),
    [sym_string_call_expression] = STATE(176),
    [sym_numeric_system_function] = STATE(101),
    [sym_string_system_function] = STATE(168),
    [sym_numeric_user_function] = STATE(101),
    [sym_string_user_function] = STATE(168),
    [sym_template_string] = STATE(176),
    [sym_string] = STATE(176),
    [sym_parenthesized_expression] = STATE(102),
    [sym_numeric_forced_assignment_expression] = STATE(103),
    [sym_string_forced_assignment_expression] = STATE(175),
    [sym__numeric_reference] = STATE(74),
    [sym__string_reference] = STATE(166),
    [sym_numberelement] = STATE(74),
    [sym_stringelement] = STATE(166),
    [sym_stringarray] = STATE(74),
    [sym_stringreference] = STATE(166),
    [sym_numberreference] = STATE(74),
    [sym_numberarray] = STATE(74),
    [sym_number] = STATE(102),
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
  [5] = {
    [sym_expression] = STATE(204),
    [sym_numeric_expression] = STATE(107),
    [sym_string_expression] = STATE(197),
    [sym_string_binary_expression] = STATE(183),
    [sym_numeric_binary_expression] = STATE(109),
    [sym_numeric_unary_expression] = STATE(109),
    [sym_numeric_primary_expression] = STATE(109),
    [sym_string_primary_expression] = STATE(183),
    [sym_numeric_call_expression] = STATE(120),
    [sym_string_call_expression] = STATE(184),
    [sym_numeric_system_function] = STATE(122),
    [sym_string_system_function] = STATE(190),
    [sym_numeric_user_function] = STATE(122),
    [sym_string_user_function] = STATE(190),
    [sym_template_string] = STATE(184),
    [sym_string] = STATE(184),
    [sym_parenthesized_expression] = STATE(120),
    [sym_numeric_forced_assignment_expression] = STATE(109),
    [sym_string_forced_assignment_expression] = STATE(183),
    [sym__numeric_reference] = STATE(76),
    [sym__string_reference] = STATE(180),
    [sym_numberelement] = STATE(76),
    [sym_stringelement] = STATE(180),
    [sym_stringarray] = STATE(76),
    [sym_stringreference] = STATE(180),
    [sym_numberreference] = STATE(76),
    [sym_numberarray] = STATE(76),
    [sym_number] = STATE(120),
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
  [6] = {
    [sym_expression] = STATE(259),
    [sym_numeric_expression] = STATE(99),
    [sym_string_expression] = STATE(181),
    [sym_string_binary_expression] = STATE(175),
    [sym_numeric_binary_expression] = STATE(103),
    [sym_numeric_unary_expression] = STATE(103),
    [sym_numeric_primary_expression] = STATE(103),
    [sym_string_primary_expression] = STATE(175),
    [sym_numeric_call_expression] = STATE(102),
    [sym_string_call_expression] = STATE(176),
    [sym_numeric_system_function] = STATE(101),
    [sym_string_system_function] = STATE(168),
    [sym_numeric_user_function] = STATE(101),
    [sym_string_user_function] = STATE(168),
    [sym_template_string] = STATE(176),
    [sym_string] = STATE(176),
    [sym_parenthesized_expression] = STATE(102),
    [sym_numeric_forced_assignment_expression] = STATE(103),
    [sym_string_forced_assignment_expression] = STATE(175),
    [sym__numeric_reference] = STATE(74),
    [sym__string_reference] = STATE(166),
    [sym_numberelement] = STATE(74),
    [sym_stringelement] = STATE(166),
    [sym_stringarray] = STATE(74),
    [sym_stringreference] = STATE(166),
    [sym_numberreference] = STATE(74),
    [sym_numberarray] = STATE(74),
    [sym_number] = STATE(102),
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
  [7] = {
    [sym_expression] = STATE(182),
    [sym_numeric_expression] = STATE(99),
    [sym_string_expression] = STATE(181),
    [sym_string_binary_expression] = STATE(175),
    [sym_numeric_binary_expression] = STATE(103),
    [sym_numeric_unary_expression] = STATE(103),
    [sym_numeric_primary_expression] = STATE(103),
    [sym_string_primary_expression] = STATE(175),
    [sym_numeric_call_expression] = STATE(102),
    [sym_string_call_expression] = STATE(176),
    [sym_numeric_system_function] = STATE(101),
    [sym_string_system_function] = STATE(168),
    [sym_numeric_user_function] = STATE(101),
    [sym_string_user_function] = STATE(168),
    [sym_template_string] = STATE(176),
    [sym_string] = STATE(176),
    [sym_parenthesized_expression] = STATE(102),
    [sym_numeric_forced_assignment_expression] = STATE(103),
    [sym_string_forced_assignment_expression] = STATE(175),
    [sym__numeric_reference] = STATE(74),
    [sym__string_reference] = STATE(166),
    [sym_numberelement] = STATE(74),
    [sym_stringelement] = STATE(166),
    [sym_stringarray] = STATE(74),
    [sym_stringreference] = STATE(166),
    [sym_numberreference] = STATE(74),
    [sym_numberarray] = STATE(74),
    [sym_number] = STATE(102),
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
  [8] = {
    [sym_expression] = STATE(202),
    [sym_numeric_expression] = STATE(99),
    [sym_string_expression] = STATE(181),
    [sym_string_binary_expression] = STATE(175),
    [sym_numeric_binary_expression] = STATE(103),
    [sym_numeric_unary_expression] = STATE(103),
    [sym_numeric_primary_expression] = STATE(103),
    [sym_string_primary_expression] = STATE(175),
    [sym_numeric_call_expression] = STATE(102),
    [sym_string_call_expression] = STATE(176),
    [sym_numeric_system_function] = STATE(101),
    [sym_string_system_function] = STATE(168),
    [sym_numeric_user_function] = STATE(101),
    [sym_string_user_function] = STATE(168),
    [sym_template_string] = STATE(176),
    [sym_string] = STATE(176),
    [sym_parenthesized_expression] = STATE(102),
    [sym_numeric_forced_assignment_expression] = STATE(103),
    [sym_string_forced_assignment_expression] = STATE(175),
    [sym__numeric_reference] = STATE(74),
    [sym__string_reference] = STATE(166),
    [sym_numberelement] = STATE(74),
    [sym_stringelement] = STATE(166),
    [sym_stringarray] = STATE(74),
    [sym_stringreference] = STATE(166),
    [sym_numberreference] = STATE(74),
    [sym_numberarray] = STATE(74),
    [sym_number] = STATE(102),
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
    [sym_numeric_expression] = STATE(140),
    [sym_numeric_binary_expression] = STATE(103),
    [sym_numeric_unary_expression] = STATE(103),
    [sym_numeric_primary_expression] = STATE(103),
    [sym_numeric_call_expression] = STATE(102),
    [sym_numeric_system_function] = STATE(101),
    [sym_numeric_user_function] = STATE(101),
    [sym_parenthesized_expression] = STATE(102),
    [sym_numeric_forced_assignment_expression] = STATE(103),
    [sym__numeric_reference] = STATE(74),
    [sym_numberelement] = STATE(74),
    [sym_stringarray] = STATE(74),
    [sym_numberreference] = STATE(74),
    [sym_range] = STATE(257),
    [sym_numberarray] = STATE(74),
    [sym_number] = STATE(102),
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
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(65),
    [sym__mat] = ACTIONS(67),
    [aux_sym_number_token1] = ACTIONS(69),
  },
  [10] = {
    [sym_numeric_expression] = STATE(134),
    [sym_numeric_binary_expression] = STATE(103),
    [sym_numeric_unary_expression] = STATE(103),
    [sym_numeric_primary_expression] = STATE(103),
    [sym_numeric_call_expression] = STATE(102),
    [sym_numeric_system_function] = STATE(101),
    [sym_numeric_user_function] = STATE(101),
    [sym_parenthesized_expression] = STATE(102),
    [sym_numeric_forced_assignment_expression] = STATE(103),
    [sym__numeric_reference] = STATE(74),
    [sym_numberelement] = STATE(74),
    [sym_stringarray] = STATE(74),
    [sym_numberreference] = STATE(74),
    [sym_range] = STATE(278),
    [sym_numberarray] = STATE(74),
    [sym_number] = STATE(102),
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
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(65),
    [sym__mat] = ACTIONS(67),
    [aux_sym_number_token1] = ACTIONS(69),
  },
  [11] = {
    [sym_numeric_expression] = STATE(140),
    [sym_numeric_binary_expression] = STATE(103),
    [sym_numeric_unary_expression] = STATE(103),
    [sym_numeric_primary_expression] = STATE(103),
    [sym_numeric_call_expression] = STATE(102),
    [sym_numeric_system_function] = STATE(101),
    [sym_numeric_user_function] = STATE(101),
    [sym_parenthesized_expression] = STATE(102),
    [sym_numeric_forced_assignment_expression] = STATE(103),
    [sym__numeric_reference] = STATE(74),
    [sym_numberelement] = STATE(74),
    [sym_stringarray] = STATE(74),
    [sym_numberreference] = STATE(74),
    [sym_range] = STATE(278),
    [sym_numberarray] = STATE(74),
    [sym_number] = STATE(102),
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
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(65),
    [sym__mat] = ACTIONS(67),
    [aux_sym_number_token1] = ACTIONS(69),
  },
  [12] = {
    [sym_numeric_expression] = STATE(140),
    [sym_numeric_binary_expression] = STATE(103),
    [sym_numeric_unary_expression] = STATE(103),
    [sym_numeric_primary_expression] = STATE(103),
    [sym_numeric_call_expression] = STATE(102),
    [sym_numeric_system_function] = STATE(101),
    [sym_numeric_user_function] = STATE(101),
    [sym_parenthesized_expression] = STATE(102),
    [sym_numeric_forced_assignment_expression] = STATE(103),
    [sym__numeric_reference] = STATE(74),
    [sym_numberelement] = STATE(74),
    [sym_stringarray] = STATE(74),
    [sym_numberreference] = STATE(74),
    [sym_range] = STATE(264),
    [sym_numberarray] = STATE(74),
    [sym_number] = STATE(102),
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
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(65),
    [sym__mat] = ACTIONS(67),
    [aux_sym_number_token1] = ACTIONS(69),
  },
  [13] = {
    [sym_numeric_expression] = STATE(140),
    [sym_numeric_binary_expression] = STATE(103),
    [sym_numeric_unary_expression] = STATE(103),
    [sym_numeric_primary_expression] = STATE(103),
    [sym_numeric_call_expression] = STATE(102),
    [sym_numeric_system_function] = STATE(101),
    [sym_numeric_user_function] = STATE(101),
    [sym_parenthesized_expression] = STATE(102),
    [sym_numeric_forced_assignment_expression] = STATE(103),
    [sym__numeric_reference] = STATE(74),
    [sym_numberelement] = STATE(74),
    [sym_stringarray] = STATE(74),
    [sym_numberreference] = STATE(74),
    [sym_range] = STATE(262),
    [sym_numberarray] = STATE(74),
    [sym_number] = STATE(102),
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
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(65),
    [sym__mat] = ACTIONS(67),
    [aux_sym_number_token1] = ACTIONS(69),
  },
  [14] = {
    [sym_numeric_expression] = STATE(140),
    [sym_numeric_binary_expression] = STATE(103),
    [sym_numeric_unary_expression] = STATE(103),
    [sym_numeric_primary_expression] = STATE(103),
    [sym_numeric_call_expression] = STATE(102),
    [sym_numeric_system_function] = STATE(101),
    [sym_numeric_user_function] = STATE(101),
    [sym_parenthesized_expression] = STATE(102),
    [sym_numeric_forced_assignment_expression] = STATE(103),
    [sym__numeric_reference] = STATE(74),
    [sym_numberelement] = STATE(74),
    [sym_stringarray] = STATE(74),
    [sym_numberreference] = STATE(74),
    [sym_range] = STATE(294),
    [sym_numberarray] = STATE(74),
    [sym_number] = STATE(102),
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
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(65),
    [sym__mat] = ACTIONS(67),
    [aux_sym_number_token1] = ACTIONS(69),
  },
  [15] = {
    [sym_numeric_expression] = STATE(127),
    [sym_numeric_binary_expression] = STATE(103),
    [sym_numeric_unary_expression] = STATE(103),
    [sym_numeric_primary_expression] = STATE(103),
    [sym_numeric_call_expression] = STATE(102),
    [sym_numeric_system_function] = STATE(101),
    [sym_numeric_user_function] = STATE(101),
    [sym_parenthesized_expression] = STATE(102),
    [sym_assignment_expression] = STATE(217),
    [sym_numeric_forced_assignment_expression] = STATE(103),
    [sym__numeric_reference] = STATE(78),
    [sym_numberelement] = STATE(78),
    [sym_stringarray] = STATE(78),
    [sym_numberreference] = STATE(78),
    [sym_numberarray] = STATE(78),
    [sym_number] = STATE(102),
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
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(65),
    [sym__mat] = ACTIONS(67),
    [aux_sym_number_token1] = ACTIONS(69),
  },
  [16] = {
    [sym_numeric_expression] = STATE(133),
    [sym_numeric_binary_expression] = STATE(103),
    [sym_numeric_unary_expression] = STATE(103),
    [sym_numeric_primary_expression] = STATE(103),
    [sym_numeric_call_expression] = STATE(102),
    [sym_numeric_system_function] = STATE(101),
    [sym_numeric_user_function] = STATE(101),
    [sym_parenthesized_expression] = STATE(102),
    [sym_numeric_forced_assignment_expression] = STATE(103),
    [sym__numeric_reference] = STATE(74),
    [sym_numberelement] = STATE(74),
    [sym_stringarray] = STATE(74),
    [sym_numberreference] = STATE(74),
    [sym_range] = STATE(294),
    [sym_numberarray] = STATE(74),
    [sym_number] = STATE(102),
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
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(65),
    [sym__mat] = ACTIONS(67),
    [aux_sym_number_token1] = ACTIONS(69),
  },
  [17] = {
    [sym_numeric_expression] = STATE(129),
    [sym_numeric_binary_expression] = STATE(109),
    [sym_numeric_unary_expression] = STATE(109),
    [sym_numeric_primary_expression] = STATE(109),
    [sym_numeric_call_expression] = STATE(120),
    [sym_numeric_system_function] = STATE(122),
    [sym_numeric_user_function] = STATE(122),
    [sym_parenthesized_expression] = STATE(120),
    [sym_assignment_expression] = STATE(216),
    [sym_numeric_forced_assignment_expression] = STATE(109),
    [sym__numeric_reference] = STATE(77),
    [sym_numberelement] = STATE(77),
    [sym_stringarray] = STATE(77),
    [sym_numberreference] = STATE(77),
    [sym_numberarray] = STATE(77),
    [sym_number] = STATE(120),
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
    [sym__numeric_function_identifier] = ACTIONS(73),
    [sym_numberidentifier] = ACTIONS(37),
    [sym__mat] = ACTIONS(39),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [18] = {
    [sym_numeric_expression] = STATE(116),
    [sym_numeric_binary_expression] = STATE(109),
    [sym_numeric_unary_expression] = STATE(109),
    [sym_numeric_primary_expression] = STATE(109),
    [sym_numeric_call_expression] = STATE(120),
    [sym_numeric_system_function] = STATE(122),
    [sym_numeric_user_function] = STATE(122),
    [sym_parenthesized_expression] = STATE(120),
    [sym_numeric_forced_assignment_expression] = STATE(109),
    [sym__numeric_reference] = STATE(76),
    [sym_numberelement] = STATE(76),
    [sym_stringarray] = STATE(76),
    [sym_numberreference] = STATE(76),
    [sym_numberarray] = STATE(76),
    [sym_number] = STATE(120),
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
    [sym__numeric_function_identifier] = ACTIONS(73),
    [sym_numberidentifier] = ACTIONS(37),
    [sym__mat] = ACTIONS(39),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [19] = {
    [sym_numeric_expression] = STATE(111),
    [sym_numeric_binary_expression] = STATE(109),
    [sym_numeric_unary_expression] = STATE(109),
    [sym_numeric_primary_expression] = STATE(109),
    [sym_numeric_call_expression] = STATE(120),
    [sym_numeric_system_function] = STATE(122),
    [sym_numeric_user_function] = STATE(122),
    [sym_parenthesized_expression] = STATE(120),
    [sym_numeric_forced_assignment_expression] = STATE(109),
    [sym__numeric_reference] = STATE(76),
    [sym_numberelement] = STATE(76),
    [sym_stringarray] = STATE(76),
    [sym_numberreference] = STATE(76),
    [sym_numberarray] = STATE(76),
    [sym_number] = STATE(120),
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
    [sym__numeric_function_identifier] = ACTIONS(73),
    [sym_numberidentifier] = ACTIONS(37),
    [sym__mat] = ACTIONS(39),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [20] = {
    [sym_numeric_expression] = STATE(121),
    [sym_numeric_binary_expression] = STATE(109),
    [sym_numeric_unary_expression] = STATE(109),
    [sym_numeric_primary_expression] = STATE(109),
    [sym_numeric_call_expression] = STATE(120),
    [sym_numeric_system_function] = STATE(122),
    [sym_numeric_user_function] = STATE(122),
    [sym_parenthesized_expression] = STATE(120),
    [sym_numeric_forced_assignment_expression] = STATE(109),
    [sym__numeric_reference] = STATE(76),
    [sym_numberelement] = STATE(76),
    [sym_stringarray] = STATE(76),
    [sym_numberreference] = STATE(76),
    [sym_numberarray] = STATE(76),
    [sym_number] = STATE(120),
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
    [sym__numeric_function_identifier] = ACTIONS(73),
    [sym_numberidentifier] = ACTIONS(37),
    [sym__mat] = ACTIONS(39),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [21] = {
    [sym_numeric_expression] = STATE(128),
    [sym_numeric_binary_expression] = STATE(109),
    [sym_numeric_unary_expression] = STATE(109),
    [sym_numeric_primary_expression] = STATE(109),
    [sym_numeric_call_expression] = STATE(120),
    [sym_numeric_system_function] = STATE(122),
    [sym_numeric_user_function] = STATE(122),
    [sym_parenthesized_expression] = STATE(120),
    [sym_numeric_forced_assignment_expression] = STATE(109),
    [sym__numeric_reference] = STATE(76),
    [sym_numberelement] = STATE(76),
    [sym_stringarray] = STATE(76),
    [sym_numberreference] = STATE(76),
    [sym_numberarray] = STATE(76),
    [sym_number] = STATE(120),
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
    [sym__numeric_function_identifier] = ACTIONS(73),
    [sym_numberidentifier] = ACTIONS(37),
    [sym__mat] = ACTIONS(39),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [22] = {
    [sym_numeric_expression] = STATE(119),
    [sym_numeric_binary_expression] = STATE(109),
    [sym_numeric_unary_expression] = STATE(109),
    [sym_numeric_primary_expression] = STATE(109),
    [sym_numeric_call_expression] = STATE(120),
    [sym_numeric_system_function] = STATE(122),
    [sym_numeric_user_function] = STATE(122),
    [sym_parenthesized_expression] = STATE(120),
    [sym_numeric_forced_assignment_expression] = STATE(109),
    [sym__numeric_reference] = STATE(76),
    [sym_numberelement] = STATE(76),
    [sym_stringarray] = STATE(76),
    [sym_numberreference] = STATE(76),
    [sym_numberarray] = STATE(76),
    [sym_number] = STATE(120),
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
    [sym__numeric_function_identifier] = ACTIONS(73),
    [sym_numberidentifier] = ACTIONS(37),
    [sym__mat] = ACTIONS(39),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [23] = {
    [sym_numeric_expression] = STATE(118),
    [sym_numeric_binary_expression] = STATE(109),
    [sym_numeric_unary_expression] = STATE(109),
    [sym_numeric_primary_expression] = STATE(109),
    [sym_numeric_call_expression] = STATE(120),
    [sym_numeric_system_function] = STATE(122),
    [sym_numeric_user_function] = STATE(122),
    [sym_parenthesized_expression] = STATE(120),
    [sym_numeric_forced_assignment_expression] = STATE(109),
    [sym__numeric_reference] = STATE(76),
    [sym_numberelement] = STATE(76),
    [sym_stringarray] = STATE(76),
    [sym_numberreference] = STATE(76),
    [sym_numberarray] = STATE(76),
    [sym_number] = STATE(120),
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
    [sym__numeric_function_identifier] = ACTIONS(73),
    [sym_numberidentifier] = ACTIONS(37),
    [sym__mat] = ACTIONS(39),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [24] = {
    [sym_numeric_expression] = STATE(117),
    [sym_numeric_binary_expression] = STATE(109),
    [sym_numeric_unary_expression] = STATE(109),
    [sym_numeric_primary_expression] = STATE(109),
    [sym_numeric_call_expression] = STATE(120),
    [sym_numeric_system_function] = STATE(122),
    [sym_numeric_user_function] = STATE(122),
    [sym_parenthesized_expression] = STATE(120),
    [sym_numeric_forced_assignment_expression] = STATE(109),
    [sym__numeric_reference] = STATE(76),
    [sym_numberelement] = STATE(76),
    [sym_stringarray] = STATE(76),
    [sym_numberreference] = STATE(76),
    [sym_numberarray] = STATE(76),
    [sym_number] = STATE(120),
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
    [sym__numeric_function_identifier] = ACTIONS(73),
    [sym_numberidentifier] = ACTIONS(37),
    [sym__mat] = ACTIONS(39),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [25] = {
    [sym_numeric_expression] = STATE(137),
    [sym_numeric_binary_expression] = STATE(103),
    [sym_numeric_unary_expression] = STATE(103),
    [sym_numeric_primary_expression] = STATE(103),
    [sym_numeric_call_expression] = STATE(102),
    [sym_numeric_system_function] = STATE(101),
    [sym_numeric_user_function] = STATE(101),
    [sym_parenthesized_expression] = STATE(102),
    [sym_numeric_forced_assignment_expression] = STATE(103),
    [sym__numeric_reference] = STATE(74),
    [sym_numberelement] = STATE(74),
    [sym_stringarray] = STATE(74),
    [sym_numberreference] = STATE(74),
    [sym_numberarray] = STATE(74),
    [sym_number] = STATE(102),
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
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(65),
    [sym__mat] = ACTIONS(67),
    [aux_sym_number_token1] = ACTIONS(69),
  },
  [26] = {
    [sym_numeric_expression] = STATE(115),
    [sym_numeric_binary_expression] = STATE(109),
    [sym_numeric_unary_expression] = STATE(109),
    [sym_numeric_primary_expression] = STATE(109),
    [sym_numeric_call_expression] = STATE(120),
    [sym_numeric_system_function] = STATE(122),
    [sym_numeric_user_function] = STATE(122),
    [sym_parenthesized_expression] = STATE(120),
    [sym_numeric_forced_assignment_expression] = STATE(109),
    [sym__numeric_reference] = STATE(76),
    [sym_numberelement] = STATE(76),
    [sym_stringarray] = STATE(76),
    [sym_numberreference] = STATE(76),
    [sym_numberarray] = STATE(76),
    [sym_number] = STATE(120),
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
    [sym__numeric_function_identifier] = ACTIONS(73),
    [sym_numberidentifier] = ACTIONS(37),
    [sym__mat] = ACTIONS(39),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [27] = {
    [sym_numeric_expression] = STATE(114),
    [sym_numeric_binary_expression] = STATE(109),
    [sym_numeric_unary_expression] = STATE(109),
    [sym_numeric_primary_expression] = STATE(109),
    [sym_numeric_call_expression] = STATE(120),
    [sym_numeric_system_function] = STATE(122),
    [sym_numeric_user_function] = STATE(122),
    [sym_parenthesized_expression] = STATE(120),
    [sym_numeric_forced_assignment_expression] = STATE(109),
    [sym__numeric_reference] = STATE(76),
    [sym_numberelement] = STATE(76),
    [sym_stringarray] = STATE(76),
    [sym_numberreference] = STATE(76),
    [sym_numberarray] = STATE(76),
    [sym_number] = STATE(120),
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
    [sym__numeric_function_identifier] = ACTIONS(73),
    [sym_numberidentifier] = ACTIONS(37),
    [sym__mat] = ACTIONS(39),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [28] = {
    [sym_numeric_expression] = STATE(131),
    [sym_numeric_binary_expression] = STATE(109),
    [sym_numeric_unary_expression] = STATE(109),
    [sym_numeric_primary_expression] = STATE(109),
    [sym_numeric_call_expression] = STATE(120),
    [sym_numeric_system_function] = STATE(122),
    [sym_numeric_user_function] = STATE(122),
    [sym_parenthesized_expression] = STATE(120),
    [sym_numeric_forced_assignment_expression] = STATE(109),
    [sym__numeric_reference] = STATE(76),
    [sym_numberelement] = STATE(76),
    [sym_stringarray] = STATE(76),
    [sym_numberreference] = STATE(76),
    [sym_numberarray] = STATE(76),
    [sym_number] = STATE(120),
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
    [sym__numeric_function_identifier] = ACTIONS(73),
    [sym_numberidentifier] = ACTIONS(37),
    [sym__mat] = ACTIONS(39),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [29] = {
    [sym_numeric_expression] = STATE(113),
    [sym_numeric_binary_expression] = STATE(109),
    [sym_numeric_unary_expression] = STATE(109),
    [sym_numeric_primary_expression] = STATE(109),
    [sym_numeric_call_expression] = STATE(120),
    [sym_numeric_system_function] = STATE(122),
    [sym_numeric_user_function] = STATE(122),
    [sym_parenthesized_expression] = STATE(120),
    [sym_numeric_forced_assignment_expression] = STATE(109),
    [sym__numeric_reference] = STATE(76),
    [sym_numberelement] = STATE(76),
    [sym_stringarray] = STATE(76),
    [sym_numberreference] = STATE(76),
    [sym_numberarray] = STATE(76),
    [sym_number] = STATE(120),
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
    [sym__numeric_function_identifier] = ACTIONS(73),
    [sym_numberidentifier] = ACTIONS(37),
    [sym__mat] = ACTIONS(39),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [30] = {
    [sym_numeric_expression] = STATE(112),
    [sym_numeric_binary_expression] = STATE(109),
    [sym_numeric_unary_expression] = STATE(109),
    [sym_numeric_primary_expression] = STATE(109),
    [sym_numeric_call_expression] = STATE(120),
    [sym_numeric_system_function] = STATE(122),
    [sym_numeric_user_function] = STATE(122),
    [sym_parenthesized_expression] = STATE(120),
    [sym_numeric_forced_assignment_expression] = STATE(109),
    [sym__numeric_reference] = STATE(76),
    [sym_numberelement] = STATE(76),
    [sym_stringarray] = STATE(76),
    [sym_numberreference] = STATE(76),
    [sym_numberarray] = STATE(76),
    [sym_number] = STATE(120),
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
    [sym__numeric_function_identifier] = ACTIONS(73),
    [sym_numberidentifier] = ACTIONS(37),
    [sym__mat] = ACTIONS(39),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [31] = {
    [sym_numeric_expression] = STATE(139),
    [sym_numeric_binary_expression] = STATE(103),
    [sym_numeric_unary_expression] = STATE(103),
    [sym_numeric_primary_expression] = STATE(103),
    [sym_numeric_call_expression] = STATE(102),
    [sym_numeric_system_function] = STATE(101),
    [sym_numeric_user_function] = STATE(101),
    [sym_parenthesized_expression] = STATE(102),
    [sym_numeric_forced_assignment_expression] = STATE(103),
    [sym__numeric_reference] = STATE(74),
    [sym_numberelement] = STATE(74),
    [sym_stringarray] = STATE(74),
    [sym_numberreference] = STATE(74),
    [sym_numberarray] = STATE(74),
    [sym_number] = STATE(102),
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
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(65),
    [sym__mat] = ACTIONS(67),
    [aux_sym_number_token1] = ACTIONS(69),
  },
  [32] = {
    [sym_numeric_expression] = STATE(126),
    [sym_numeric_binary_expression] = STATE(109),
    [sym_numeric_unary_expression] = STATE(109),
    [sym_numeric_primary_expression] = STATE(109),
    [sym_numeric_call_expression] = STATE(120),
    [sym_numeric_system_function] = STATE(122),
    [sym_numeric_user_function] = STATE(122),
    [sym_parenthesized_expression] = STATE(120),
    [sym_numeric_forced_assignment_expression] = STATE(109),
    [sym__numeric_reference] = STATE(76),
    [sym_numberelement] = STATE(76),
    [sym_stringarray] = STATE(76),
    [sym_numberreference] = STATE(76),
    [sym_numberarray] = STATE(76),
    [sym_number] = STATE(120),
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
    [sym__numeric_function_identifier] = ACTIONS(73),
    [sym_numberidentifier] = ACTIONS(37),
    [sym__mat] = ACTIONS(39),
    [aux_sym_number_token1] = ACTIONS(41),
  },
  [33] = {
    [sym_numeric_expression] = STATE(104),
    [sym_numeric_binary_expression] = STATE(103),
    [sym_numeric_unary_expression] = STATE(103),
    [sym_numeric_primary_expression] = STATE(103),
    [sym_numeric_call_expression] = STATE(102),
    [sym_numeric_system_function] = STATE(101),
    [sym_numeric_user_function] = STATE(101),
    [sym_parenthesized_expression] = STATE(102),
    [sym_numeric_forced_assignment_expression] = STATE(103),
    [sym__numeric_reference] = STATE(74),
    [sym_numberelement] = STATE(74),
    [sym_stringarray] = STATE(74),
    [sym_numberreference] = STATE(74),
    [sym_numberarray] = STATE(74),
    [sym_number] = STATE(102),
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
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(65),
    [sym__mat] = ACTIONS(67),
    [aux_sym_number_token1] = ACTIONS(69),
  },
  [34] = {
    [sym_numeric_expression] = STATE(98),
    [sym_numeric_binary_expression] = STATE(103),
    [sym_numeric_unary_expression] = STATE(103),
    [sym_numeric_primary_expression] = STATE(103),
    [sym_numeric_call_expression] = STATE(102),
    [sym_numeric_system_function] = STATE(101),
    [sym_numeric_user_function] = STATE(101),
    [sym_parenthesized_expression] = STATE(102),
    [sym_numeric_forced_assignment_expression] = STATE(103),
    [sym__numeric_reference] = STATE(74),
    [sym_numberelement] = STATE(74),
    [sym_stringarray] = STATE(74),
    [sym_numberreference] = STATE(74),
    [sym_numberarray] = STATE(74),
    [sym_number] = STATE(102),
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
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(65),
    [sym__mat] = ACTIONS(67),
    [aux_sym_number_token1] = ACTIONS(69),
  },
  [35] = {
    [sym_numeric_expression] = STATE(135),
    [sym_numeric_binary_expression] = STATE(103),
    [sym_numeric_unary_expression] = STATE(103),
    [sym_numeric_primary_expression] = STATE(103),
    [sym_numeric_call_expression] = STATE(102),
    [sym_numeric_system_function] = STATE(101),
    [sym_numeric_user_function] = STATE(101),
    [sym_parenthesized_expression] = STATE(102),
    [sym_numeric_forced_assignment_expression] = STATE(103),
    [sym__numeric_reference] = STATE(74),
    [sym_numberelement] = STATE(74),
    [sym_stringarray] = STATE(74),
    [sym_numberreference] = STATE(74),
    [sym_numberarray] = STATE(74),
    [sym_number] = STATE(102),
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
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(65),
    [sym__mat] = ACTIONS(67),
    [aux_sym_number_token1] = ACTIONS(69),
  },
  [36] = {
    [sym_numeric_expression] = STATE(136),
    [sym_numeric_binary_expression] = STATE(103),
    [sym_numeric_unary_expression] = STATE(103),
    [sym_numeric_primary_expression] = STATE(103),
    [sym_numeric_call_expression] = STATE(102),
    [sym_numeric_system_function] = STATE(101),
    [sym_numeric_user_function] = STATE(101),
    [sym_parenthesized_expression] = STATE(102),
    [sym_numeric_forced_assignment_expression] = STATE(103),
    [sym__numeric_reference] = STATE(74),
    [sym_numberelement] = STATE(74),
    [sym_stringarray] = STATE(74),
    [sym_numberreference] = STATE(74),
    [sym_numberarray] = STATE(74),
    [sym_number] = STATE(102),
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
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(65),
    [sym__mat] = ACTIONS(67),
    [aux_sym_number_token1] = ACTIONS(69),
  },
  [37] = {
    [sym_numeric_expression] = STATE(97),
    [sym_numeric_binary_expression] = STATE(103),
    [sym_numeric_unary_expression] = STATE(103),
    [sym_numeric_primary_expression] = STATE(103),
    [sym_numeric_call_expression] = STATE(102),
    [sym_numeric_system_function] = STATE(101),
    [sym_numeric_user_function] = STATE(101),
    [sym_parenthesized_expression] = STATE(102),
    [sym_numeric_forced_assignment_expression] = STATE(103),
    [sym__numeric_reference] = STATE(74),
    [sym_numberelement] = STATE(74),
    [sym_stringarray] = STATE(74),
    [sym_numberreference] = STATE(74),
    [sym_numberarray] = STATE(74),
    [sym_number] = STATE(102),
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
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(65),
    [sym__mat] = ACTIONS(67),
    [aux_sym_number_token1] = ACTIONS(69),
  },
  [38] = {
    [sym_numeric_expression] = STATE(132),
    [sym_numeric_binary_expression] = STATE(103),
    [sym_numeric_unary_expression] = STATE(103),
    [sym_numeric_primary_expression] = STATE(103),
    [sym_numeric_call_expression] = STATE(102),
    [sym_numeric_system_function] = STATE(101),
    [sym_numeric_user_function] = STATE(101),
    [sym_parenthesized_expression] = STATE(102),
    [sym_numeric_forced_assignment_expression] = STATE(103),
    [sym__numeric_reference] = STATE(74),
    [sym_numberelement] = STATE(74),
    [sym_stringarray] = STATE(74),
    [sym_numberreference] = STATE(74),
    [sym_numberarray] = STATE(74),
    [sym_number] = STATE(102),
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
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(65),
    [sym__mat] = ACTIONS(67),
    [aux_sym_number_token1] = ACTIONS(69),
  },
  [39] = {
    [sym_numeric_expression] = STATE(138),
    [sym_numeric_binary_expression] = STATE(103),
    [sym_numeric_unary_expression] = STATE(103),
    [sym_numeric_primary_expression] = STATE(103),
    [sym_numeric_call_expression] = STATE(102),
    [sym_numeric_system_function] = STATE(101),
    [sym_numeric_user_function] = STATE(101),
    [sym_parenthesized_expression] = STATE(102),
    [sym_numeric_forced_assignment_expression] = STATE(103),
    [sym__numeric_reference] = STATE(74),
    [sym_numberelement] = STATE(74),
    [sym_stringarray] = STATE(74),
    [sym_numberreference] = STATE(74),
    [sym_numberarray] = STATE(74),
    [sym_number] = STATE(102),
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
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(65),
    [sym__mat] = ACTIONS(67),
    [aux_sym_number_token1] = ACTIONS(69),
  },
  [40] = {
    [sym_numeric_expression] = STATE(96),
    [sym_numeric_binary_expression] = STATE(103),
    [sym_numeric_unary_expression] = STATE(103),
    [sym_numeric_primary_expression] = STATE(103),
    [sym_numeric_call_expression] = STATE(102),
    [sym_numeric_system_function] = STATE(101),
    [sym_numeric_user_function] = STATE(101),
    [sym_parenthesized_expression] = STATE(102),
    [sym_numeric_forced_assignment_expression] = STATE(103),
    [sym__numeric_reference] = STATE(74),
    [sym_numberelement] = STATE(74),
    [sym_stringarray] = STATE(74),
    [sym_numberreference] = STATE(74),
    [sym_numberarray] = STATE(74),
    [sym_number] = STATE(102),
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
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(65),
    [sym__mat] = ACTIONS(67),
    [aux_sym_number_token1] = ACTIONS(69),
  },
  [41] = {
    [sym_numeric_expression] = STATE(93),
    [sym_numeric_binary_expression] = STATE(103),
    [sym_numeric_unary_expression] = STATE(103),
    [sym_numeric_primary_expression] = STATE(103),
    [sym_numeric_call_expression] = STATE(102),
    [sym_numeric_system_function] = STATE(101),
    [sym_numeric_user_function] = STATE(101),
    [sym_parenthesized_expression] = STATE(102),
    [sym_numeric_forced_assignment_expression] = STATE(103),
    [sym__numeric_reference] = STATE(74),
    [sym_numberelement] = STATE(74),
    [sym_stringarray] = STATE(74),
    [sym_numberreference] = STATE(74),
    [sym_numberarray] = STATE(74),
    [sym_number] = STATE(102),
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
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(65),
    [sym__mat] = ACTIONS(67),
    [aux_sym_number_token1] = ACTIONS(69),
  },
  [42] = {
    [sym_numeric_expression] = STATE(89),
    [sym_numeric_binary_expression] = STATE(103),
    [sym_numeric_unary_expression] = STATE(103),
    [sym_numeric_primary_expression] = STATE(103),
    [sym_numeric_call_expression] = STATE(102),
    [sym_numeric_system_function] = STATE(101),
    [sym_numeric_user_function] = STATE(101),
    [sym_parenthesized_expression] = STATE(102),
    [sym_numeric_forced_assignment_expression] = STATE(103),
    [sym__numeric_reference] = STATE(74),
    [sym_numberelement] = STATE(74),
    [sym_stringarray] = STATE(74),
    [sym_numberreference] = STATE(74),
    [sym_numberarray] = STATE(74),
    [sym_number] = STATE(102),
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
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(65),
    [sym__mat] = ACTIONS(67),
    [aux_sym_number_token1] = ACTIONS(69),
  },
  [43] = {
    [sym_numeric_expression] = STATE(92),
    [sym_numeric_binary_expression] = STATE(103),
    [sym_numeric_unary_expression] = STATE(103),
    [sym_numeric_primary_expression] = STATE(103),
    [sym_numeric_call_expression] = STATE(102),
    [sym_numeric_system_function] = STATE(101),
    [sym_numeric_user_function] = STATE(101),
    [sym_parenthesized_expression] = STATE(102),
    [sym_numeric_forced_assignment_expression] = STATE(103),
    [sym__numeric_reference] = STATE(74),
    [sym_numberelement] = STATE(74),
    [sym_stringarray] = STATE(74),
    [sym_numberreference] = STATE(74),
    [sym_numberarray] = STATE(74),
    [sym_number] = STATE(102),
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
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(65),
    [sym__mat] = ACTIONS(67),
    [aux_sym_number_token1] = ACTIONS(69),
  },
  [44] = {
    [sym_numeric_expression] = STATE(94),
    [sym_numeric_binary_expression] = STATE(103),
    [sym_numeric_unary_expression] = STATE(103),
    [sym_numeric_primary_expression] = STATE(103),
    [sym_numeric_call_expression] = STATE(102),
    [sym_numeric_system_function] = STATE(101),
    [sym_numeric_user_function] = STATE(101),
    [sym_parenthesized_expression] = STATE(102),
    [sym_numeric_forced_assignment_expression] = STATE(103),
    [sym__numeric_reference] = STATE(74),
    [sym_numberelement] = STATE(74),
    [sym_stringarray] = STATE(74),
    [sym_numberreference] = STATE(74),
    [sym_numberarray] = STATE(74),
    [sym_number] = STATE(102),
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
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(65),
    [sym__mat] = ACTIONS(67),
    [aux_sym_number_token1] = ACTIONS(69),
  },
  [45] = {
    [sym_numeric_expression] = STATE(105),
    [sym_numeric_binary_expression] = STATE(103),
    [sym_numeric_unary_expression] = STATE(103),
    [sym_numeric_primary_expression] = STATE(103),
    [sym_numeric_call_expression] = STATE(102),
    [sym_numeric_system_function] = STATE(101),
    [sym_numeric_user_function] = STATE(101),
    [sym_parenthesized_expression] = STATE(102),
    [sym_numeric_forced_assignment_expression] = STATE(103),
    [sym__numeric_reference] = STATE(74),
    [sym_numberelement] = STATE(74),
    [sym_stringarray] = STATE(74),
    [sym_numberreference] = STATE(74),
    [sym_numberarray] = STATE(74),
    [sym_number] = STATE(102),
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
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(65),
    [sym__mat] = ACTIONS(67),
    [aux_sym_number_token1] = ACTIONS(69),
  },
  [46] = {
    [sym_numeric_expression] = STATE(100),
    [sym_numeric_binary_expression] = STATE(103),
    [sym_numeric_unary_expression] = STATE(103),
    [sym_numeric_primary_expression] = STATE(103),
    [sym_numeric_call_expression] = STATE(102),
    [sym_numeric_system_function] = STATE(101),
    [sym_numeric_user_function] = STATE(101),
    [sym_parenthesized_expression] = STATE(102),
    [sym_numeric_forced_assignment_expression] = STATE(103),
    [sym__numeric_reference] = STATE(74),
    [sym_numberelement] = STATE(74),
    [sym_stringarray] = STATE(74),
    [sym_numberreference] = STATE(74),
    [sym_numberarray] = STATE(74),
    [sym_number] = STATE(102),
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
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(65),
    [sym__mat] = ACTIONS(67),
    [aux_sym_number_token1] = ACTIONS(69),
  },
  [47] = {
    [sym_numeric_expression] = STATE(130),
    [sym_numeric_binary_expression] = STATE(103),
    [sym_numeric_unary_expression] = STATE(103),
    [sym_numeric_primary_expression] = STATE(103),
    [sym_numeric_call_expression] = STATE(102),
    [sym_numeric_system_function] = STATE(101),
    [sym_numeric_user_function] = STATE(101),
    [sym_parenthesized_expression] = STATE(102),
    [sym_numeric_forced_assignment_expression] = STATE(103),
    [sym__numeric_reference] = STATE(74),
    [sym_numberelement] = STATE(74),
    [sym_stringarray] = STATE(74),
    [sym_numberreference] = STATE(74),
    [sym_numberarray] = STATE(74),
    [sym_number] = STATE(102),
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
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(65),
    [sym__mat] = ACTIONS(67),
    [aux_sym_number_token1] = ACTIONS(69),
  },
  [48] = {
    [sym_numeric_expression] = STATE(95),
    [sym_numeric_binary_expression] = STATE(103),
    [sym_numeric_unary_expression] = STATE(103),
    [sym_numeric_primary_expression] = STATE(103),
    [sym_numeric_call_expression] = STATE(102),
    [sym_numeric_system_function] = STATE(101),
    [sym_numeric_user_function] = STATE(101),
    [sym_parenthesized_expression] = STATE(102),
    [sym_numeric_forced_assignment_expression] = STATE(103),
    [sym__numeric_reference] = STATE(74),
    [sym_numberelement] = STATE(74),
    [sym_stringarray] = STATE(74),
    [sym_numberreference] = STATE(74),
    [sym_numberarray] = STATE(74),
    [sym_number] = STATE(102),
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
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(65),
    [sym__mat] = ACTIONS(67),
    [aux_sym_number_token1] = ACTIONS(69),
  },
  [49] = {
    [sym_numeric_expression] = STATE(141),
    [sym_numeric_binary_expression] = STATE(103),
    [sym_numeric_unary_expression] = STATE(103),
    [sym_numeric_primary_expression] = STATE(103),
    [sym_numeric_call_expression] = STATE(102),
    [sym_numeric_system_function] = STATE(101),
    [sym_numeric_user_function] = STATE(101),
    [sym_parenthesized_expression] = STATE(102),
    [sym_numeric_forced_assignment_expression] = STATE(103),
    [sym__numeric_reference] = STATE(74),
    [sym_numberelement] = STATE(74),
    [sym_stringarray] = STATE(74),
    [sym_numberreference] = STATE(74),
    [sym_numberarray] = STATE(74),
    [sym_number] = STATE(102),
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
    [sym__numeric_function_identifier] = ACTIONS(71),
    [sym_numberidentifier] = ACTIONS(65),
    [sym__mat] = ACTIONS(67),
    [aux_sym_number_token1] = ACTIONS(69),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
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
    STATE(177), 1,
      sym_string_expression,
    STATE(168), 2,
      sym_string_system_function,
      sym_string_user_function,
    STATE(166), 3,
      sym__string_reference,
      sym_stringelement,
      sym_stringreference,
    STATE(175), 3,
      sym_string_binary_expression,
      sym_string_primary_expression,
      sym_string_forced_assignment_expression,
    STATE(176), 3,
      sym_string_call_expression,
      sym_template_string,
      sym_string,
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
  [79] = 11,
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
    STATE(192), 1,
      sym_string_expression,
    STATE(190), 2,
      sym_string_system_function,
      sym_string_user_function,
    STATE(180), 3,
      sym__string_reference,
      sym_stringelement,
      sym_stringreference,
    STATE(183), 3,
      sym_string_binary_expression,
      sym_string_primary_expression,
      sym_string_forced_assignment_expression,
    STATE(184), 3,
      sym_string_call_expression,
      sym_template_string,
      sym_string,
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
  [158] = 11,
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
    STATE(267), 1,
      sym_string_expression,
    STATE(168), 2,
      sym_string_system_function,
      sym_string_user_function,
    STATE(166), 3,
      sym__string_reference,
      sym_stringelement,
      sym_stringreference,
    STATE(175), 3,
      sym_string_binary_expression,
      sym_string_primary_expression,
      sym_string_forced_assignment_expression,
    STATE(176), 3,
      sym_string_call_expression,
      sym_template_string,
      sym_string,
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
  [237] = 11,
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
    STATE(198), 1,
      sym_string_expression,
    STATE(190), 2,
      sym_string_system_function,
      sym_string_user_function,
    STATE(180), 3,
      sym__string_reference,
      sym_stringelement,
      sym_stringreference,
    STATE(183), 3,
      sym_string_binary_expression,
      sym_string_primary_expression,
      sym_string_forced_assignment_expression,
    STATE(184), 3,
      sym_string_call_expression,
      sym_template_string,
      sym_string,
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
  [316] = 11,
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
    STATE(178), 1,
      sym_string_expression,
    STATE(168), 2,
      sym_string_system_function,
      sym_string_user_function,
    STATE(166), 3,
      sym__string_reference,
      sym_stringelement,
      sym_stringreference,
    STATE(175), 3,
      sym_string_binary_expression,
      sym_string_primary_expression,
      sym_string_forced_assignment_expression,
    STATE(176), 3,
      sym_string_call_expression,
      sym_template_string,
      sym_string,
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
  [395] = 4,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(56), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(77), 13,
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
    ACTIONS(75), 21,
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
  [441] = 4,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(57), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(83), 13,
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
    ACTIONS(81), 21,
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
  [487] = 4,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    STATE(57), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(87), 13,
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
    ACTIONS(85), 21,
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
  [533] = 4,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(66), 1,
      sym_dimension,
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
    ACTIONS(92), 21,
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
  [578] = 4,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    STATE(60), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(83), 12,
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
    ACTIONS(81), 21,
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
  [623] = 4,
    ACTIONS(98), 1,
      anon_sym_LPAREN,
    STATE(60), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(87), 12,
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
    ACTIONS(85), 21,
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
  [668] = 4,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    STATE(59), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(77), 12,
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
    ACTIONS(75), 21,
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
  [713] = 2,
    ACTIONS(103), 13,
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
    ACTIONS(101), 22,
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
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [753] = 2,
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
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [793] = 3,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
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
    ACTIONS(109), 21,
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
  [835] = 4,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    STATE(73), 1,
      sym_dimension,
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
  [879] = 2,
    ACTIONS(117), 13,
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
    ACTIONS(115), 21,
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
  [918] = 2,
    ACTIONS(103), 12,
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
    ACTIONS(101), 22,
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
  [957] = 2,
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
    ACTIONS(119), 21,
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
  [996] = 2,
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
    ACTIONS(123), 21,
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
  [1035] = 3,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
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
  [1076] = 2,
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
    ACTIONS(105), 22,
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
  [1115] = 2,
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
    ACTIONS(123), 21,
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
  [1153] = 2,
    ACTIONS(117), 12,
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
    ACTIONS(115), 21,
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
  [1191] = 3,
    ACTIONS(133), 5,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(131), 12,
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
    ACTIONS(129), 16,
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
  [1231] = 2,
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
  [1269] = 3,
    ACTIONS(135), 5,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(131), 11,
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
    ACTIONS(129), 16,
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
  [1308] = 4,
    ACTIONS(137), 1,
      anon_sym_EQ,
    ACTIONS(135), 5,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(131), 11,
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
    ACTIONS(129), 14,
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
  [1348] = 4,
    ACTIONS(139), 1,
      anon_sym_EQ,
    ACTIONS(133), 5,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(131), 12,
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
    ACTIONS(129), 13,
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
  [1388] = 4,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    STATE(87), 1,
      sym_arguments,
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
  [1427] = 4,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    STATE(91), 1,
      sym_arguments,
    ACTIONS(149), 8,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 20,
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
  [1466] = 3,
    ACTIONS(155), 1,
      anon_sym_DOT,
    ACTIONS(153), 8,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 21,
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
  [1503] = 4,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    STATE(124), 1,
      sym_arguments,
    ACTIONS(149), 7,
      anon_sym_def,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 20,
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
  [1541] = 2,
    ACTIONS(161), 8,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 21,
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
  [1575] = 2,
    ACTIONS(165), 8,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(163), 21,
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
  [1609] = 4,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    STATE(106), 1,
      sym_arguments,
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
  [1647] = 2,
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
  [1681] = 2,
    ACTIONS(173), 8,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 20,
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
  [1714] = 2,
    ACTIONS(177), 8,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(175), 20,
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
  [1747] = 6,
    ACTIONS(183), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_STAR_STAR,
    ACTIONS(185), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(187), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(181), 7,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(179), 15,
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
  [1788] = 3,
    ACTIONS(191), 1,
      anon_sym_DOT,
    ACTIONS(153), 7,
      anon_sym_def,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 20,
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
  [1823] = 2,
    ACTIONS(195), 8,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(193), 20,
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
  [1856] = 5,
    ACTIONS(183), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_STAR_STAR,
    ACTIONS(187), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(181), 7,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(179), 17,
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
  [1895] = 2,
    ACTIONS(199), 8,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(197), 20,
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
  [1928] = 3,
    ACTIONS(189), 1,
      anon_sym_STAR_STAR,
    ACTIONS(181), 8,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(179), 19,
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
  [1963] = 13,
    ACTIONS(183), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_STAR_STAR,
    ACTIONS(205), 1,
      anon_sym_AMP,
    ACTIONS(207), 1,
      anon_sym_AMP_AMP,
    ACTIONS(209), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(185), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(187), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(211), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(213), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(215), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(217), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(203), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(201), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2018] = 12,
    ACTIONS(183), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_STAR_STAR,
    ACTIONS(205), 1,
      anon_sym_AMP,
    ACTIONS(207), 1,
      anon_sym_AMP_AMP,
    ACTIONS(185), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(187), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(211), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(213), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(215), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(217), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(181), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(179), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
  [2071] = 11,
    ACTIONS(183), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_STAR_STAR,
    ACTIONS(205), 1,
      anon_sym_AMP,
    ACTIONS(185), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(187), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(211), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(213), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(215), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(217), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(181), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(179), 9,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2122] = 10,
    ACTIONS(183), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_STAR_STAR,
    ACTIONS(185), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(187), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(211), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(213), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(215), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(217), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(181), 5,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(179), 9,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2171] = 13,
    ACTIONS(183), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_STAR_STAR,
    ACTIONS(205), 1,
      anon_sym_AMP,
    ACTIONS(207), 1,
      anon_sym_AMP_AMP,
    ACTIONS(209), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(185), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(187), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(211), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(213), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(215), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(217), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(221), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(219), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2226] = 9,
    ACTIONS(183), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_STAR_STAR,
    ACTIONS(185), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(187), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(211), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(213), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(215), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(181), 5,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(179), 11,
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
  [2273] = 2,
    ACTIONS(225), 8,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(223), 20,
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
  [2306] = 2,
    ACTIONS(131), 8,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(129), 20,
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
  [2339] = 2,
    ACTIONS(229), 8,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(227), 20,
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
  [2372] = 3,
    ACTIONS(189), 1,
      anon_sym_STAR_STAR,
    ACTIONS(181), 8,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(179), 19,
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
  [2407] = 7,
    ACTIONS(183), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_STAR_STAR,
    ACTIONS(185), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(187), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(211), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(181), 7,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(179), 13,
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
  [2450] = 2,
    ACTIONS(173), 7,
      anon_sym_def,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 20,
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
  [2482] = 13,
    ACTIONS(231), 1,
      anon_sym_STAR,
    ACTIONS(233), 1,
      anon_sym_AMP,
    ACTIONS(235), 1,
      anon_sym_AMP_AMP,
    ACTIONS(237), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(245), 1,
      anon_sym_STAR_STAR,
    ACTIONS(239), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(241), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(243), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(247), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(249), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(251), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(221), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(219), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2536] = 2,
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
  [2568] = 2,
    ACTIONS(229), 7,
      anon_sym_def,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(227), 20,
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
  [2600] = 2,
    ACTIONS(161), 7,
      anon_sym_def,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 20,
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
  [2632] = 3,
    ACTIONS(245), 1,
      anon_sym_STAR_STAR,
    ACTIONS(181), 7,
      anon_sym_def,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(179), 19,
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
  [2666] = 10,
    ACTIONS(231), 1,
      anon_sym_STAR,
    ACTIONS(245), 1,
      anon_sym_STAR_STAR,
    ACTIONS(239), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(241), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(243), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(247), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(249), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(251), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(181), 4,
      anon_sym_def,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(179), 9,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2714] = 11,
    ACTIONS(231), 1,
      anon_sym_STAR,
    ACTIONS(233), 1,
      anon_sym_AMP,
    ACTIONS(245), 1,
      anon_sym_STAR_STAR,
    ACTIONS(239), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(241), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(243), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(247), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(249), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(251), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(181), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(179), 9,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2764] = 12,
    ACTIONS(231), 1,
      anon_sym_STAR,
    ACTIONS(233), 1,
      anon_sym_AMP,
    ACTIONS(235), 1,
      anon_sym_AMP_AMP,
    ACTIONS(245), 1,
      anon_sym_STAR_STAR,
    ACTIONS(239), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(241), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(243), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(247), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(249), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(251), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(181), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(179), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_PIPE_PIPE,
  [2816] = 6,
    ACTIONS(231), 1,
      anon_sym_STAR,
    ACTIONS(245), 1,
      anon_sym_STAR_STAR,
    ACTIONS(241), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(243), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(181), 6,
      anon_sym_def,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(179), 15,
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
  [2856] = 5,
    ACTIONS(231), 1,
      anon_sym_STAR,
    ACTIONS(245), 1,
      anon_sym_STAR_STAR,
    ACTIONS(243), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(181), 6,
      anon_sym_def,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(179), 17,
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
  [2894] = 3,
    ACTIONS(245), 1,
      anon_sym_STAR_STAR,
    ACTIONS(181), 7,
      anon_sym_def,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(179), 19,
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
  [2928] = 7,
    ACTIONS(231), 1,
      anon_sym_STAR,
    ACTIONS(245), 1,
      anon_sym_STAR_STAR,
    ACTIONS(239), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(241), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(243), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(181), 6,
      anon_sym_def,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(179), 13,
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
  [2970] = 9,
    ACTIONS(231), 1,
      anon_sym_STAR,
    ACTIONS(245), 1,
      anon_sym_STAR_STAR,
    ACTIONS(239), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(241), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(243), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(247), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(249), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(181), 4,
      anon_sym_def,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(179), 11,
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
  [3016] = 2,
    ACTIONS(131), 7,
      anon_sym_def,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(129), 20,
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
  [3048] = 13,
    ACTIONS(231), 1,
      anon_sym_STAR,
    ACTIONS(233), 1,
      anon_sym_AMP,
    ACTIONS(235), 1,
      anon_sym_AMP_AMP,
    ACTIONS(237), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(245), 1,
      anon_sym_STAR_STAR,
    ACTIONS(239), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(241), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(243), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(247), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(249), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(251), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(203), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(201), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [3102] = 2,
    ACTIONS(225), 7,
      anon_sym_def,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(223), 20,
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
  [3134] = 2,
    ACTIONS(177), 7,
      anon_sym_def,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(175), 20,
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
  [3166] = 2,
    ACTIONS(195), 7,
      anon_sym_def,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(193), 20,
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
  [3198] = 2,
    ACTIONS(165), 7,
      anon_sym_def,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(163), 20,
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
  [3230] = 2,
    ACTIONS(199), 7,
      anon_sym_def,
      anon_sym_STAR,
      anon_sym_AMP,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(197), 20,
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
  [3262] = 13,
    ACTIONS(183), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_STAR_STAR,
    ACTIONS(205), 1,
      anon_sym_AMP,
    ACTIONS(207), 1,
      anon_sym_AMP_AMP,
    ACTIONS(209), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(185), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(187), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(211), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(213), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(215), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(217), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(253), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
    ACTIONS(255), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [3314] = 13,
    ACTIONS(231), 1,
      anon_sym_STAR,
    ACTIONS(233), 1,
      anon_sym_AMP,
    ACTIONS(235), 1,
      anon_sym_AMP_AMP,
    ACTIONS(237), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(245), 1,
      anon_sym_STAR_STAR,
    ACTIONS(239), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(241), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(243), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(247), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(249), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(251), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(259), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(257), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [3366] = 13,
    ACTIONS(231), 1,
      anon_sym_STAR,
    ACTIONS(233), 1,
      anon_sym_AMP,
    ACTIONS(235), 1,
      anon_sym_AMP_AMP,
    ACTIONS(237), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(245), 1,
      anon_sym_STAR_STAR,
    ACTIONS(239), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(241), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(243), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(247), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(249), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(251), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(255), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(253), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [3418] = 13,
    ACTIONS(183), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_STAR_STAR,
    ACTIONS(205), 1,
      anon_sym_AMP,
    ACTIONS(207), 1,
      anon_sym_AMP_AMP,
    ACTIONS(209), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(185), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(187), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(211), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(213), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(215), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(217), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(257), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
    ACTIONS(259), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [3470] = 13,
    ACTIONS(231), 1,
      anon_sym_STAR,
    ACTIONS(233), 1,
      anon_sym_AMP,
    ACTIONS(235), 1,
      anon_sym_AMP_AMP,
    ACTIONS(237), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(245), 1,
      anon_sym_STAR_STAR,
    ACTIONS(239), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(241), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(243), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(247), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(249), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(251), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(261), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(263), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [3520] = 13,
    ACTIONS(183), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_STAR_STAR,
    ACTIONS(205), 1,
      anon_sym_AMP,
    ACTIONS(207), 1,
      anon_sym_AMP_AMP,
    ACTIONS(209), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(185), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(187), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(211), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(213), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(215), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(217), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(261), 2,
      sym_line_number,
      sym_label,
    ACTIONS(263), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [3570] = 15,
    ACTIONS(183), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_STAR_STAR,
    ACTIONS(205), 1,
      anon_sym_AMP,
    ACTIONS(207), 1,
      anon_sym_AMP_AMP,
    ACTIONS(209), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(265), 1,
      anon_sym_COLON,
    ACTIONS(267), 1,
      anon_sym_RPAREN,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    STATE(261), 1,
      aux_sym_numberelement_repeat1,
    ACTIONS(185), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(187), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(211), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(213), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(215), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(217), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
  [3622] = 15,
    ACTIONS(183), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_STAR_STAR,
    ACTIONS(205), 1,
      anon_sym_AMP,
    ACTIONS(207), 1,
      anon_sym_AMP_AMP,
    ACTIONS(209), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(265), 1,
      anon_sym_COLON,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
    STATE(255), 1,
      aux_sym_numberelement_repeat1,
    ACTIONS(185), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(187), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(211), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(213), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(215), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(217), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
  [3674] = 14,
    ACTIONS(183), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_STAR_STAR,
    ACTIONS(205), 1,
      anon_sym_AMP,
    ACTIONS(207), 1,
      anon_sym_AMP_AMP,
    ACTIONS(209), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
    STATE(249), 1,
      aux_sym_numberelement_repeat1,
    ACTIONS(185), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(187), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(211), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(213), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(215), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(217), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
  [3723] = 14,
    ACTIONS(183), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_STAR_STAR,
    ACTIONS(205), 1,
      anon_sym_AMP,
    ACTIONS(207), 1,
      anon_sym_AMP_AMP,
    ACTIONS(209), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    STATE(247), 1,
      aux_sym_numberelement_repeat1,
    ACTIONS(185), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(187), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(211), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(213), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(215), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(217), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
  [3772] = 12,
    ACTIONS(183), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_STAR_STAR,
    ACTIONS(205), 1,
      anon_sym_AMP,
    ACTIONS(207), 1,
      anon_sym_AMP_AMP,
    ACTIONS(209), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(185), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(187), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(211), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(213), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(215), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(217), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(277), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3816] = 12,
    ACTIONS(183), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_STAR_STAR,
    ACTIONS(205), 1,
      anon_sym_AMP,
    ACTIONS(207), 1,
      anon_sym_AMP_AMP,
    ACTIONS(209), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(185), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(187), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(211), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(213), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(215), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(217), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
    ACTIONS(279), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3860] = 12,
    ACTIONS(183), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_STAR_STAR,
    ACTIONS(205), 1,
      anon_sym_AMP,
    ACTIONS(207), 1,
      anon_sym_AMP_AMP,
    ACTIONS(209), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
    ACTIONS(185), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(187), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(211), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(213), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(215), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(217), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
  [3903] = 12,
    ACTIONS(183), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_STAR_STAR,
    ACTIONS(205), 1,
      anon_sym_AMP,
    ACTIONS(207), 1,
      anon_sym_AMP_AMP,
    ACTIONS(209), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(265), 1,
      anon_sym_COLON,
    ACTIONS(185), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(187), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(211), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(213), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(215), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(217), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
  [3946] = 12,
    ACTIONS(183), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      anon_sym_STAR_STAR,
    ACTIONS(205), 1,
      anon_sym_AMP,
    ACTIONS(207), 1,
      anon_sym_AMP_AMP,
    ACTIONS(209), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
    ACTIONS(185), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(187), 2,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(211), 2,
      anon_sym_GT_GT,
      anon_sym_LT_LT,
    ACTIONS(213), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(215), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(217), 2,
      anon_sym_EQ_EQ,
      anon_sym_TILDE_EQ,
  [3989] = 4,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    STATE(150), 1,
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
  [4014] = 11,
    ACTIONS(291), 1,
      sym_line_number,
    ACTIONS(293), 1,
      sym_label,
    ACTIONS(295), 1,
      anon_sym_def,
    ACTIONS(297), 1,
      anon_sym_EQ,
    ACTIONS(299), 1,
      anon_sym_fnend,
    ACTIONS(301), 1,
      aux_sym_let_statement_token1,
    ACTIONS(303), 1,
      aux_sym_print_statement_token1,
    STATE(212), 1,
      sym_statement,
    STATE(153), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(214), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(224), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [4053] = 4,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
    STATE(142), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(307), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(305), 9,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_EQ,
  [4078] = 4,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    STATE(150), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(313), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(311), 9,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_EQ,
  [4103] = 11,
    ACTIONS(291), 1,
      sym_line_number,
    ACTIONS(293), 1,
      sym_label,
    ACTIONS(295), 1,
      anon_sym_def,
    ACTIONS(301), 1,
      aux_sym_let_statement_token1,
    ACTIONS(303), 1,
      aux_sym_print_statement_token1,
    ACTIONS(315), 1,
      anon_sym_EQ,
    ACTIONS(317), 1,
      anon_sym_fnend,
    STATE(212), 1,
      sym_statement,
    STATE(151), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(214), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(224), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [4142] = 4,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    STATE(145), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(321), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(319), 9,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_EQ,
  [4167] = 4,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    STATE(150), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(321), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(319), 9,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_EQ,
  [4192] = 4,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
    STATE(148), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(325), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(323), 9,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_EQ,
  [4217] = 4,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    STATE(150), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(329), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(327), 9,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COLON_EQ,
  [4242] = 10,
    ACTIONS(291), 1,
      sym_line_number,
    ACTIONS(293), 1,
      sym_label,
    ACTIONS(295), 1,
      anon_sym_def,
    ACTIONS(301), 1,
      aux_sym_let_statement_token1,
    ACTIONS(303), 1,
      aux_sym_print_statement_token1,
    ACTIONS(334), 1,
      anon_sym_fnend,
    STATE(212), 1,
      sym_statement,
    STATE(158), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(214), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(224), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [4278] = 10,
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
    ACTIONS(336), 1,
      ts_builtin_sym_end,
    STATE(208), 1,
      sym_statement,
    STATE(155), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(218), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(228), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [4314] = 10,
    ACTIONS(291), 1,
      sym_line_number,
    ACTIONS(293), 1,
      sym_label,
    ACTIONS(295), 1,
      anon_sym_def,
    ACTIONS(301), 1,
      aux_sym_let_statement_token1,
    ACTIONS(303), 1,
      aux_sym_print_statement_token1,
    ACTIONS(338), 1,
      anon_sym_fnend,
    STATE(212), 1,
      sym_statement,
    STATE(158), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(214), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(224), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [4350] = 4,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    STATE(172), 1,
      sym_arguments,
    ACTIONS(342), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(340), 9,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
  [4374] = 10,
    ACTIONS(344), 1,
      ts_builtin_sym_end,
    ACTIONS(346), 1,
      sym_line_number,
    ACTIONS(349), 1,
      sym_label,
    ACTIONS(352), 1,
      anon_sym_def,
    ACTIONS(355), 1,
      aux_sym_let_statement_token1,
    ACTIONS(358), 1,
      aux_sym_print_statement_token1,
    STATE(208), 1,
      sym_statement,
    STATE(155), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(218), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(228), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [4410] = 2,
    ACTIONS(363), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(361), 10,
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
  [4430] = 4,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    STATE(173), 1,
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
  [4454] = 10,
    ACTIONS(369), 1,
      sym_line_number,
    ACTIONS(372), 1,
      sym_label,
    ACTIONS(375), 1,
      anon_sym_def,
    ACTIONS(378), 1,
      anon_sym_fnend,
    ACTIONS(380), 1,
      aux_sym_let_statement_token1,
    ACTIONS(383), 1,
      aux_sym_print_statement_token1,
    STATE(212), 1,
      sym_statement,
    STATE(158), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(214), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(224), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [4490] = 4,
    ACTIONS(386), 1,
      anon_sym_LPAREN,
    STATE(162), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(321), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(319), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [4513] = 4,
    ACTIONS(386), 1,
      anon_sym_LPAREN,
    STATE(163), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(321), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(319), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [4536] = 4,
    ACTIONS(386), 1,
      anon_sym_LPAREN,
    STATE(159), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(325), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(323), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [4559] = 4,
    ACTIONS(388), 1,
      anon_sym_LPAREN,
    STATE(162), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(329), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(327), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [4582] = 4,
    ACTIONS(386), 1,
      anon_sym_LPAREN,
    STATE(162), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(313), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(311), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [4605] = 4,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    STATE(165), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(307), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(305), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [4628] = 4,
    ACTIONS(386), 1,
      anon_sym_LPAREN,
    STATE(162), 1,
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
  [4651] = 3,
    ACTIONS(397), 1,
      anon_sym_COLON_EQ,
    ACTIONS(395), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(393), 8,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
  [4672] = 2,
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
  [4690] = 2,
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
  [4708] = 4,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    STATE(186), 1,
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
  [4730] = 4,
    ACTIONS(157), 1,
      anon_sym_LPAREN,
    STATE(188), 1,
      sym_arguments,
    ACTIONS(342), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(340), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [4752] = 2,
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
  [4770] = 2,
    ACTIONS(413), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(411), 9,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
  [4788] = 2,
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
  [4806] = 2,
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
  [4824] = 2,
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
  [4842] = 2,
    ACTIONS(395), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(393), 9,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
  [4860] = 2,
    ACTIONS(429), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(427), 9,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
  [4878] = 3,
    ACTIONS(435), 1,
      anon_sym_AMP,
    ACTIONS(433), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(431), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_RBRACE_RBRACE,
  [4898] = 2,
    ACTIONS(363), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(361), 9,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
  [4916] = 3,
    ACTIONS(437), 1,
      anon_sym_COLON_EQ,
    ACTIONS(395), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(393), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [4935] = 3,
    ACTIONS(435), 1,
      anon_sym_AMP,
    ACTIONS(221), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(219), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [4954] = 4,
    STATE(194), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(443), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(439), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
    ACTIONS(441), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [4974] = 2,
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
  [4990] = 2,
    ACTIONS(395), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(393), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5006] = 2,
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
  [5022] = 2,
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
  [5038] = 2,
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
  [5054] = 2,
    ACTIONS(413), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(411), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5070] = 2,
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
  [5086] = 2,
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
  [5102] = 7,
    ACTIONS(295), 1,
      anon_sym_def,
    ACTIONS(301), 1,
      aux_sym_let_statement_token1,
    ACTIONS(303), 1,
      aux_sym_print_statement_token1,
    ACTIONS(445), 1,
      sym_label,
    STATE(212), 1,
      sym_statement,
    STATE(214), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(229), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [5128] = 3,
    ACTIONS(447), 1,
      anon_sym_AMP,
    ACTIONS(433), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(431), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5146] = 4,
    STATE(193), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(453), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(449), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
    ACTIONS(451), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5166] = 4,
    STATE(193), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(443), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(456), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
    ACTIONS(458), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5186] = 7,
    ACTIONS(9), 1,
      anon_sym_def,
    ACTIONS(11), 1,
      aux_sym_let_statement_token1,
    ACTIONS(13), 1,
      aux_sym_print_statement_token1,
    ACTIONS(460), 1,
      sym_label,
    STATE(208), 1,
      sym_statement,
    STATE(218), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(236), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [5212] = 4,
    STATE(199), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(462), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(441), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(439), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [5232] = 3,
    ACTIONS(447), 1,
      anon_sym_AMP,
    ACTIONS(221), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(219), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5250] = 2,
    ACTIONS(429), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(427), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_AMP,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5266] = 4,
    STATE(200), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(462), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(458), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(456), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [5286] = 4,
    STATE(200), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(464), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(451), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(449), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [5306] = 6,
    ACTIONS(467), 1,
      anon_sym_def,
    ACTIONS(469), 1,
      aux_sym_let_statement_token1,
    ACTIONS(471), 1,
      aux_sym_print_statement_token1,
    STATE(208), 1,
      sym_statement,
    STATE(218), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(236), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [5329] = 2,
    ACTIONS(451), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(449), 6,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5344] = 6,
    ACTIONS(473), 1,
      anon_sym_def,
    ACTIONS(475), 1,
      aux_sym_let_statement_token1,
    ACTIONS(477), 1,
      aux_sym_print_statement_token1,
    STATE(212), 1,
      sym_statement,
    STATE(214), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(226), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [5367] = 2,
    ACTIONS(451), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(449), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [5382] = 6,
    ACTIONS(467), 1,
      anon_sym_def,
    ACTIONS(469), 1,
      aux_sym_let_statement_token1,
    ACTIONS(471), 1,
      aux_sym_print_statement_token1,
    STATE(208), 1,
      sym_statement,
    STATE(218), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(232), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [5405] = 6,
    ACTIONS(473), 1,
      anon_sym_def,
    ACTIONS(475), 1,
      aux_sym_let_statement_token1,
    ACTIONS(477), 1,
      aux_sym_print_statement_token1,
    STATE(212), 1,
      sym_statement,
    STATE(214), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(229), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [5428] = 4,
    STATE(210), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(481), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(479), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(483), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5446] = 4,
    STATE(207), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(481), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(485), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(487), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5464] = 4,
    STATE(209), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(489), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(492), 2,
      sym_line_number,
      sym_label,
    ACTIONS(494), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5482] = 4,
    STATE(210), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(496), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(492), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(494), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5500] = 4,
    STATE(209), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(479), 2,
      sym_line_number,
      sym_label,
    ACTIONS(499), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(483), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5518] = 4,
    STATE(211), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(485), 2,
      sym_line_number,
      sym_label,
    ACTIONS(499), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(487), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5536] = 2,
    ACTIONS(492), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
    ACTIONS(494), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5549] = 2,
    ACTIONS(501), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
    ACTIONS(503), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5562] = 2,
    ACTIONS(494), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(492), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [5575] = 2,
    ACTIONS(255), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(253), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [5588] = 2,
    ACTIONS(253), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
    ACTIONS(255), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5601] = 2,
    ACTIONS(503), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(501), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [5614] = 2,
    ACTIONS(505), 3,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
    ACTIONS(507), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5626] = 2,
    ACTIONS(509), 3,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
    ACTIONS(511), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5638] = 2,
    ACTIONS(513), 3,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
    ACTIONS(515), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5650] = 2,
    ACTIONS(517), 3,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
    ACTIONS(519), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5662] = 2,
    ACTIONS(261), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(263), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5673] = 2,
    ACTIONS(521), 2,
      sym_line_number,
      sym_label,
    ACTIONS(523), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5684] = 4,
    ACTIONS(525), 1,
      anon_sym_BQUOTE,
    ACTIONS(529), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(527), 2,
      anon_sym_BQUOTE_BQUOTE,
      sym__template_chars,
    STATE(230), 2,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [5699] = 2,
    ACTIONS(531), 2,
      sym_line_number,
      sym_label,
    ACTIONS(533), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5710] = 2,
    ACTIONS(535), 2,
      sym_line_number,
      sym_label,
    ACTIONS(537), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5721] = 2,
    ACTIONS(521), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(523), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5732] = 2,
    ACTIONS(539), 2,
      sym_line_number,
      sym_label,
    ACTIONS(541), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5743] = 4,
    ACTIONS(543), 1,
      anon_sym_BQUOTE,
    ACTIONS(548), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(545), 2,
      anon_sym_BQUOTE_BQUOTE,
      sym__template_chars,
    STATE(230), 2,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [5758] = 4,
    ACTIONS(529), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(551), 1,
      anon_sym_BQUOTE,
    ACTIONS(527), 2,
      anon_sym_BQUOTE_BQUOTE,
      sym__template_chars,
    STATE(230), 2,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [5773] = 2,
    ACTIONS(531), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(533), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5784] = 4,
    ACTIONS(529), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(553), 1,
      anon_sym_BQUOTE,
    ACTIONS(555), 2,
      anon_sym_BQUOTE_BQUOTE,
      sym__template_chars,
    STATE(225), 2,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [5799] = 2,
    ACTIONS(261), 2,
      sym_line_number,
      sym_label,
    ACTIONS(263), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5810] = 4,
    ACTIONS(529), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(557), 1,
      anon_sym_BQUOTE,
    ACTIONS(559), 2,
      anon_sym_BQUOTE_BQUOTE,
      sym__template_chars,
    STATE(231), 2,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [5825] = 2,
    ACTIONS(539), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(541), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5836] = 2,
    ACTIONS(535), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(537), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [5847] = 4,
    ACTIONS(475), 1,
      aux_sym_let_statement_token1,
    ACTIONS(477), 1,
      aux_sym_print_statement_token1,
    STATE(213), 1,
      sym_statement,
    STATE(214), 2,
      sym_let_statement,
      sym_print_statement,
  [5861] = 4,
    ACTIONS(469), 1,
      aux_sym_let_statement_token1,
    ACTIONS(471), 1,
      aux_sym_print_statement_token1,
    STATE(215), 1,
      sym_statement,
    STATE(218), 2,
      sym_let_statement,
      sym_print_statement,
  [5875] = 4,
    ACTIONS(561), 1,
      anon_sym_STAR,
    ACTIONS(563), 1,
      anon_sym_LPAREN,
    STATE(221), 1,
      sym_parameter_list,
    STATE(265), 1,
      sym_function_length,
  [5888] = 4,
    ACTIONS(69), 1,
      aux_sym_number_token1,
    ACTIONS(565), 1,
      anon_sym_STAR,
    ACTIONS(567), 1,
      anon_sym_RPAREN,
    STATE(285), 1,
      sym_number,
  [5901] = 1,
    ACTIONS(569), 4,
      anon_sym_BQUOTE,
      anon_sym_BQUOTE_BQUOTE,
      sym__template_chars,
      anon_sym_LBRACE_LBRACE,
  [5908] = 3,
    ACTIONS(571), 1,
      sym_string_function_name,
    ACTIONS(573), 1,
      sym_numeric_function_name,
    STATE(143), 2,
      sym_string_function_definition,
      sym_numeric_function_definition,
  [5919] = 3,
    ACTIONS(571), 1,
      sym_string_function_name,
    ACTIONS(573), 1,
      sym_numeric_function_name,
    STATE(146), 2,
      sym_string_function_definition,
      sym_numeric_function_definition,
  [5930] = 4,
    ACTIONS(69), 1,
      aux_sym_number_token1,
    ACTIONS(575), 1,
      anon_sym_STAR,
    ACTIONS(577), 1,
      anon_sym_RPAREN,
    STATE(280), 1,
      sym_number,
  [5943] = 3,
    ACTIONS(69), 1,
      aux_sym_number_token1,
    ACTIONS(579), 1,
      anon_sym_RPAREN,
    STATE(272), 1,
      sym_number,
  [5953] = 3,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(581), 1,
      anon_sym_RPAREN,
    STATE(253), 1,
      aux_sym_numberelement_repeat1,
  [5963] = 3,
    ACTIONS(583), 1,
      anon_sym_RPAREN,
    ACTIONS(585), 1,
      anon_sym_COMMA,
    STATE(258), 1,
      aux_sym_dimension_repeat1,
  [5973] = 3,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(587), 1,
      anon_sym_RPAREN,
    STATE(253), 1,
      aux_sym_numberelement_repeat1,
  [5983] = 3,
    ACTIONS(585), 1,
      anon_sym_COMMA,
    ACTIONS(589), 1,
      anon_sym_RPAREN,
    STATE(258), 1,
      aux_sym_dimension_repeat1,
  [5993] = 3,
    ACTIONS(591), 1,
      sym_identifier,
    ACTIONS(593), 1,
      anon_sym_AMP,
    STATE(282), 1,
      sym_parameter,
  [6003] = 3,
    ACTIONS(595), 1,
      anon_sym_RPAREN,
    ACTIONS(597), 1,
      anon_sym_COMMA,
    STATE(263), 1,
      aux_sym_arguments_repeat1,
  [6013] = 3,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
    ACTIONS(599), 1,
      anon_sym_COMMA,
    STATE(253), 1,
      aux_sym_numberelement_repeat1,
  [6023] = 3,
    ACTIONS(597), 1,
      anon_sym_COMMA,
    ACTIONS(602), 1,
      anon_sym_RPAREN,
    STATE(256), 1,
      aux_sym_arguments_repeat1,
  [6033] = 3,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(604), 1,
      anon_sym_RPAREN,
    STATE(253), 1,
      aux_sym_numberelement_repeat1,
  [6043] = 3,
    ACTIONS(606), 1,
      anon_sym_RPAREN,
    ACTIONS(608), 1,
      anon_sym_COMMA,
    STATE(256), 1,
      aux_sym_arguments_repeat1,
  [6053] = 3,
    ACTIONS(585), 1,
      anon_sym_COMMA,
    ACTIONS(611), 1,
      anon_sym_RPAREN,
    STATE(250), 1,
      aux_sym_dimension_repeat1,
  [6063] = 3,
    ACTIONS(613), 1,
      anon_sym_RPAREN,
    ACTIONS(615), 1,
      anon_sym_COMMA,
    STATE(258), 1,
      aux_sym_dimension_repeat1,
  [6073] = 3,
    ACTIONS(597), 1,
      anon_sym_COMMA,
    ACTIONS(618), 1,
      anon_sym_RPAREN,
    STATE(254), 1,
      aux_sym_arguments_repeat1,
  [6083] = 3,
    ACTIONS(69), 1,
      aux_sym_number_token1,
    ACTIONS(567), 1,
      anon_sym_RPAREN,
    STATE(285), 1,
      sym_number,
  [6093] = 3,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(620), 1,
      anon_sym_RPAREN,
    STATE(253), 1,
      aux_sym_numberelement_repeat1,
  [6103] = 3,
    ACTIONS(585), 1,
      anon_sym_COMMA,
    ACTIONS(622), 1,
      anon_sym_RPAREN,
    STATE(248), 1,
      aux_sym_dimension_repeat1,
  [6113] = 3,
    ACTIONS(597), 1,
      anon_sym_COMMA,
    ACTIONS(624), 1,
      anon_sym_RPAREN,
    STATE(256), 1,
      aux_sym_arguments_repeat1,
  [6123] = 1,
    ACTIONS(613), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6128] = 2,
    ACTIONS(563), 1,
      anon_sym_LPAREN,
    STATE(219), 1,
      sym_parameter_list,
  [6135] = 2,
    ACTIONS(563), 1,
      anon_sym_LPAREN,
    STATE(220), 1,
      sym_parameter_list,
  [6142] = 2,
    ACTIONS(435), 1,
      anon_sym_AMP,
    ACTIONS(626), 1,
      anon_sym_RBRACE_RBRACE,
  [6149] = 2,
    ACTIONS(628), 1,
      sym_stringidentifier,
    ACTIONS(630), 1,
      sym_numberidentifier,
  [6156] = 1,
    ACTIONS(606), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [6161] = 2,
    ACTIONS(632), 1,
      sym_stringidentifier,
    ACTIONS(634), 1,
      sym_numberidentifier,
  [6168] = 2,
    ACTIONS(69), 1,
      aux_sym_number_token1,
    STATE(293), 1,
      sym_number,
  [6175] = 1,
    ACTIONS(636), 1,
      anon_sym_RPAREN,
  [6179] = 1,
    ACTIONS(638), 1,
      anon_sym_DQUOTE,
  [6183] = 1,
    ACTIONS(638), 1,
      anon_sym_SQUOTE,
  [6187] = 1,
    ACTIONS(640), 1,
      aux_sym_number_token1,
  [6191] = 1,
    ACTIONS(642), 1,
      aux_sym_string_token1,
  [6195] = 1,
    ACTIONS(644), 1,
      aux_sym_string_token2,
  [6199] = 1,
    ACTIONS(646), 1,
      anon_sym_RPAREN,
  [6203] = 1,
    ACTIONS(648), 1,
      aux_sym_number_token1,
  [6207] = 1,
    ACTIONS(567), 1,
      anon_sym_RPAREN,
  [6211] = 1,
    ACTIONS(650), 1,
      sym_identifier,
  [6215] = 1,
    ACTIONS(652), 1,
      anon_sym_RPAREN,
  [6219] = 1,
    ACTIONS(654), 1,
      anon_sym_SQUOTE,
  [6223] = 1,
    ACTIONS(654), 1,
      anon_sym_DQUOTE,
  [6227] = 1,
    ACTIONS(579), 1,
      anon_sym_RPAREN,
  [6231] = 1,
    ACTIONS(656), 1,
      aux_sym_let_statement_token2,
  [6235] = 1,
    ACTIONS(658), 1,
      aux_sym_let_statement_token2,
  [6239] = 1,
    ACTIONS(660), 1,
      ts_builtin_sym_end,
  [6243] = 1,
    ACTIONS(662), 1,
      aux_sym_string_token1,
  [6247] = 1,
    ACTIONS(664), 1,
      aux_sym_string_token2,
  [6251] = 1,
    ACTIONS(666), 1,
      aux_sym_let_statement_token2,
  [6255] = 1,
    ACTIONS(668), 1,
      aux_sym_let_statement_token2,
  [6259] = 1,
    ACTIONS(670), 1,
      anon_sym_LPAREN,
  [6263] = 1,
    ACTIONS(672), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(50)] = 0,
  [SMALL_STATE(51)] = 79,
  [SMALL_STATE(52)] = 158,
  [SMALL_STATE(53)] = 237,
  [SMALL_STATE(54)] = 316,
  [SMALL_STATE(55)] = 395,
  [SMALL_STATE(56)] = 441,
  [SMALL_STATE(57)] = 487,
  [SMALL_STATE(58)] = 533,
  [SMALL_STATE(59)] = 578,
  [SMALL_STATE(60)] = 623,
  [SMALL_STATE(61)] = 668,
  [SMALL_STATE(62)] = 713,
  [SMALL_STATE(63)] = 753,
  [SMALL_STATE(64)] = 793,
  [SMALL_STATE(65)] = 835,
  [SMALL_STATE(66)] = 879,
  [SMALL_STATE(67)] = 918,
  [SMALL_STATE(68)] = 957,
  [SMALL_STATE(69)] = 996,
  [SMALL_STATE(70)] = 1035,
  [SMALL_STATE(71)] = 1076,
  [SMALL_STATE(72)] = 1115,
  [SMALL_STATE(73)] = 1153,
  [SMALL_STATE(74)] = 1191,
  [SMALL_STATE(75)] = 1231,
  [SMALL_STATE(76)] = 1269,
  [SMALL_STATE(77)] = 1308,
  [SMALL_STATE(78)] = 1348,
  [SMALL_STATE(79)] = 1388,
  [SMALL_STATE(80)] = 1427,
  [SMALL_STATE(81)] = 1466,
  [SMALL_STATE(82)] = 1503,
  [SMALL_STATE(83)] = 1541,
  [SMALL_STATE(84)] = 1575,
  [SMALL_STATE(85)] = 1609,
  [SMALL_STATE(86)] = 1647,
  [SMALL_STATE(87)] = 1681,
  [SMALL_STATE(88)] = 1714,
  [SMALL_STATE(89)] = 1747,
  [SMALL_STATE(90)] = 1788,
  [SMALL_STATE(91)] = 1823,
  [SMALL_STATE(92)] = 1856,
  [SMALL_STATE(93)] = 1895,
  [SMALL_STATE(94)] = 1928,
  [SMALL_STATE(95)] = 1963,
  [SMALL_STATE(96)] = 2018,
  [SMALL_STATE(97)] = 2071,
  [SMALL_STATE(98)] = 2122,
  [SMALL_STATE(99)] = 2171,
  [SMALL_STATE(100)] = 2226,
  [SMALL_STATE(101)] = 2273,
  [SMALL_STATE(102)] = 2306,
  [SMALL_STATE(103)] = 2339,
  [SMALL_STATE(104)] = 2372,
  [SMALL_STATE(105)] = 2407,
  [SMALL_STATE(106)] = 2450,
  [SMALL_STATE(107)] = 2482,
  [SMALL_STATE(108)] = 2536,
  [SMALL_STATE(109)] = 2568,
  [SMALL_STATE(110)] = 2600,
  [SMALL_STATE(111)] = 2632,
  [SMALL_STATE(112)] = 2666,
  [SMALL_STATE(113)] = 2714,
  [SMALL_STATE(114)] = 2764,
  [SMALL_STATE(115)] = 2816,
  [SMALL_STATE(116)] = 2856,
  [SMALL_STATE(117)] = 2894,
  [SMALL_STATE(118)] = 2928,
  [SMALL_STATE(119)] = 2970,
  [SMALL_STATE(120)] = 3016,
  [SMALL_STATE(121)] = 3048,
  [SMALL_STATE(122)] = 3102,
  [SMALL_STATE(123)] = 3134,
  [SMALL_STATE(124)] = 3166,
  [SMALL_STATE(125)] = 3198,
  [SMALL_STATE(126)] = 3230,
  [SMALL_STATE(127)] = 3262,
  [SMALL_STATE(128)] = 3314,
  [SMALL_STATE(129)] = 3366,
  [SMALL_STATE(130)] = 3418,
  [SMALL_STATE(131)] = 3470,
  [SMALL_STATE(132)] = 3520,
  [SMALL_STATE(133)] = 3570,
  [SMALL_STATE(134)] = 3622,
  [SMALL_STATE(135)] = 3674,
  [SMALL_STATE(136)] = 3723,
  [SMALL_STATE(137)] = 3772,
  [SMALL_STATE(138)] = 3816,
  [SMALL_STATE(139)] = 3860,
  [SMALL_STATE(140)] = 3903,
  [SMALL_STATE(141)] = 3946,
  [SMALL_STATE(142)] = 3989,
  [SMALL_STATE(143)] = 4014,
  [SMALL_STATE(144)] = 4053,
  [SMALL_STATE(145)] = 4078,
  [SMALL_STATE(146)] = 4103,
  [SMALL_STATE(147)] = 4142,
  [SMALL_STATE(148)] = 4167,
  [SMALL_STATE(149)] = 4192,
  [SMALL_STATE(150)] = 4217,
  [SMALL_STATE(151)] = 4242,
  [SMALL_STATE(152)] = 4278,
  [SMALL_STATE(153)] = 4314,
  [SMALL_STATE(154)] = 4350,
  [SMALL_STATE(155)] = 4374,
  [SMALL_STATE(156)] = 4410,
  [SMALL_STATE(157)] = 4430,
  [SMALL_STATE(158)] = 4454,
  [SMALL_STATE(159)] = 4490,
  [SMALL_STATE(160)] = 4513,
  [SMALL_STATE(161)] = 4536,
  [SMALL_STATE(162)] = 4559,
  [SMALL_STATE(163)] = 4582,
  [SMALL_STATE(164)] = 4605,
  [SMALL_STATE(165)] = 4628,
  [SMALL_STATE(166)] = 4651,
  [SMALL_STATE(167)] = 4672,
  [SMALL_STATE(168)] = 4690,
  [SMALL_STATE(169)] = 4708,
  [SMALL_STATE(170)] = 4730,
  [SMALL_STATE(171)] = 4752,
  [SMALL_STATE(172)] = 4770,
  [SMALL_STATE(173)] = 4788,
  [SMALL_STATE(174)] = 4806,
  [SMALL_STATE(175)] = 4824,
  [SMALL_STATE(176)] = 4842,
  [SMALL_STATE(177)] = 4860,
  [SMALL_STATE(178)] = 4878,
  [SMALL_STATE(179)] = 4898,
  [SMALL_STATE(180)] = 4916,
  [SMALL_STATE(181)] = 4935,
  [SMALL_STATE(182)] = 4954,
  [SMALL_STATE(183)] = 4974,
  [SMALL_STATE(184)] = 4990,
  [SMALL_STATE(185)] = 5006,
  [SMALL_STATE(186)] = 5022,
  [SMALL_STATE(187)] = 5038,
  [SMALL_STATE(188)] = 5054,
  [SMALL_STATE(189)] = 5070,
  [SMALL_STATE(190)] = 5086,
  [SMALL_STATE(191)] = 5102,
  [SMALL_STATE(192)] = 5128,
  [SMALL_STATE(193)] = 5146,
  [SMALL_STATE(194)] = 5166,
  [SMALL_STATE(195)] = 5186,
  [SMALL_STATE(196)] = 5212,
  [SMALL_STATE(197)] = 5232,
  [SMALL_STATE(198)] = 5250,
  [SMALL_STATE(199)] = 5266,
  [SMALL_STATE(200)] = 5286,
  [SMALL_STATE(201)] = 5306,
  [SMALL_STATE(202)] = 5329,
  [SMALL_STATE(203)] = 5344,
  [SMALL_STATE(204)] = 5367,
  [SMALL_STATE(205)] = 5382,
  [SMALL_STATE(206)] = 5405,
  [SMALL_STATE(207)] = 5428,
  [SMALL_STATE(208)] = 5446,
  [SMALL_STATE(209)] = 5464,
  [SMALL_STATE(210)] = 5482,
  [SMALL_STATE(211)] = 5500,
  [SMALL_STATE(212)] = 5518,
  [SMALL_STATE(213)] = 5536,
  [SMALL_STATE(214)] = 5549,
  [SMALL_STATE(215)] = 5562,
  [SMALL_STATE(216)] = 5575,
  [SMALL_STATE(217)] = 5588,
  [SMALL_STATE(218)] = 5601,
  [SMALL_STATE(219)] = 5614,
  [SMALL_STATE(220)] = 5626,
  [SMALL_STATE(221)] = 5638,
  [SMALL_STATE(222)] = 5650,
  [SMALL_STATE(223)] = 5662,
  [SMALL_STATE(224)] = 5673,
  [SMALL_STATE(225)] = 5684,
  [SMALL_STATE(226)] = 5699,
  [SMALL_STATE(227)] = 5710,
  [SMALL_STATE(228)] = 5721,
  [SMALL_STATE(229)] = 5732,
  [SMALL_STATE(230)] = 5743,
  [SMALL_STATE(231)] = 5758,
  [SMALL_STATE(232)] = 5773,
  [SMALL_STATE(233)] = 5784,
  [SMALL_STATE(234)] = 5799,
  [SMALL_STATE(235)] = 5810,
  [SMALL_STATE(236)] = 5825,
  [SMALL_STATE(237)] = 5836,
  [SMALL_STATE(238)] = 5847,
  [SMALL_STATE(239)] = 5861,
  [SMALL_STATE(240)] = 5875,
  [SMALL_STATE(241)] = 5888,
  [SMALL_STATE(242)] = 5901,
  [SMALL_STATE(243)] = 5908,
  [SMALL_STATE(244)] = 5919,
  [SMALL_STATE(245)] = 5930,
  [SMALL_STATE(246)] = 5943,
  [SMALL_STATE(247)] = 5953,
  [SMALL_STATE(248)] = 5963,
  [SMALL_STATE(249)] = 5973,
  [SMALL_STATE(250)] = 5983,
  [SMALL_STATE(251)] = 5993,
  [SMALL_STATE(252)] = 6003,
  [SMALL_STATE(253)] = 6013,
  [SMALL_STATE(254)] = 6023,
  [SMALL_STATE(255)] = 6033,
  [SMALL_STATE(256)] = 6043,
  [SMALL_STATE(257)] = 6053,
  [SMALL_STATE(258)] = 6063,
  [SMALL_STATE(259)] = 6073,
  [SMALL_STATE(260)] = 6083,
  [SMALL_STATE(261)] = 6093,
  [SMALL_STATE(262)] = 6103,
  [SMALL_STATE(263)] = 6113,
  [SMALL_STATE(264)] = 6123,
  [SMALL_STATE(265)] = 6128,
  [SMALL_STATE(266)] = 6135,
  [SMALL_STATE(267)] = 6142,
  [SMALL_STATE(268)] = 6149,
  [SMALL_STATE(269)] = 6156,
  [SMALL_STATE(270)] = 6161,
  [SMALL_STATE(271)] = 6168,
  [SMALL_STATE(272)] = 6175,
  [SMALL_STATE(273)] = 6179,
  [SMALL_STATE(274)] = 6183,
  [SMALL_STATE(275)] = 6187,
  [SMALL_STATE(276)] = 6191,
  [SMALL_STATE(277)] = 6195,
  [SMALL_STATE(278)] = 6199,
  [SMALL_STATE(279)] = 6203,
  [SMALL_STATE(280)] = 6207,
  [SMALL_STATE(281)] = 6211,
  [SMALL_STATE(282)] = 6215,
  [SMALL_STATE(283)] = 6219,
  [SMALL_STATE(284)] = 6223,
  [SMALL_STATE(285)] = 6227,
  [SMALL_STATE(286)] = 6231,
  [SMALL_STATE(287)] = 6235,
  [SMALL_STATE(288)] = 6239,
  [SMALL_STATE(289)] = 6243,
  [SMALL_STATE(290)] = 6247,
  [SMALL_STATE(291)] = 6251,
  [SMALL_STATE(292)] = 6255,
  [SMALL_STATE(293)] = 6259,
  [SMALL_STATE(294)] = 6263,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringarray, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringarray, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringarray, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringarray, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stringarray_repeat1, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stringarray_repeat1, 2),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringarray_repeat1, 2), SHIFT_REPEAT(9),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numberarray, 2),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numberarray, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringarray_repeat1, 2), SHIFT_REPEAT(13),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 4),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dimension, 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dimension, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numberreference, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numberreference, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numberarray, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numberarray, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numberelement, 4),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numberelement, 4),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numberelement, 5),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numberelement, 5),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_primary_expression, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_primary_expression, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_system_function, 1, .production_id = 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_system_function, 1, .production_id = 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_user_function, 1, .production_id = 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_user_function, 1, .production_id = 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_system_function, 2, .production_id = 4),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_system_function, 2, .production_id = 4),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_expression, 3),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_expression, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_binary_expression, 3, .production_id = 5),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_binary_expression, 3, .production_id = 5),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_user_function, 2, .production_id = 4),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_user_function, 2, .production_id = 4),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_unary_expression, 2, .production_id = 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_unary_expression, 2, .production_id = 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_forced_assignment_expression, 3, .production_id = 6),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_forced_assignment_expression, 3, .production_id = 6),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_call_expression, 1),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_call_expression, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_expression, 1),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_expression, 1),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 3),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3, .production_id = 6),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_expression, 3, .production_id = 6),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numberelement_repeat1, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringreference, 2),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringreference, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringreference, 1),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringreference, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringelement, 6),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringelement, 6),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringelement, 5),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringelement, 5),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringelement, 4),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringelement, 4),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stringelement_repeat1, 2),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stringelement_repeat1, 2),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringelement_repeat1, 2), SHIFT_REPEAT(11),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_user_function, 1, .production_id = 1),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_user_function, 1, .production_id = 1),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(195),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(201),
  [352] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(244),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(292),
  [358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(291),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stringelement_repeat1, 3),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stringelement_repeat1, 3),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_system_function, 1, .production_id = 1),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_system_function, 1, .production_id = 1),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(191),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(206),
  [375] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(243),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [380] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(286),
  [383] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(287),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringelement_repeat1, 2), SHIFT_REPEAT(14),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_primary_expression, 1),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_primary_expression, 1),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_string, 3),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_string, 3),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_call_expression, 1),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_call_expression, 1),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_string, 2),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_string, 2),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_user_function, 2, .production_id = 4),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_user_function, 2, .production_id = 4),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_system_function, 2, .production_id = 4),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_system_function, 2, .production_id = 4),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_expression, 1),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_expression, 1),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_binary_expression, 3, .production_id = 5),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_binary_expression, 3, .production_id = 5),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_forced_assignment_expression, 3, .production_id = 6),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_forced_assignment_expression, 3, .production_id = 6),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_statement, 3),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print_statement, 3),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_print_statement_repeat1, 2),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_print_statement_repeat1, 2),
  [453] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT_REPEAT(8),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_statement, 4),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print_statement, 4),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT_REPEAT(5),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_line_statement, 2),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_line_statement, 2),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_line_statement, 1),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_line_statement, 1),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multi_line_statement_repeat1, 2), SHIFT_REPEAT(238),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__multi_line_statement_repeat1, 2),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__multi_line_statement_repeat1, 2),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multi_line_statement_repeat1, 2), SHIFT_REPEAT(239),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_function_definition, 3),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_function_definition, 3),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_function_definition, 2),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_function_definition, 2),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_function_definition, 2),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_function_definition, 2),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 3),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 3),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_template_string_repeat1, 2),
  [545] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_string_repeat1, 2), SHIFT_REPEAT(230),
  [548] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_string_repeat1, 2), SHIFT_REPEAT(52),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_substitution, 3),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [599] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numberelement_repeat1, 2), SHIFT_REPEAT(39),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [608] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(4),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dimension_repeat1, 2),
  [615] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimension_repeat1, 2), SHIFT_REPEAT(12),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [660] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_length, 2, .production_id = 2),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
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
