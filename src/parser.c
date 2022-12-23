#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 170
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 66
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 3

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
  anon_sym_COLON_EQ = 21,
  anon_sym_PLUS_EQ = 22,
  anon_sym_DASH_EQ = 23,
  anon_sym_STAR_EQ = 24,
  anon_sym_SLASH_EQ = 25,
  sym_stringidentifier = 26,
  sym_numberidentifier = 27,
  sym__mat = 28,
  aux_sym_number_token1 = 29,
  anon_sym_DOT = 30,
  sym_source_file = 31,
  sym_line = 32,
  sym__single_line_statement = 33,
  sym__multi_line_statement = 34,
  sym_statement = 35,
  sym__definition = 36,
  sym_function_definition = 37,
  sym_string_function_definition = 38,
  sym_numeric_function_definition = 39,
  sym_function_length = 40,
  sym_parameter_list = 41,
  sym_parameter = 42,
  sym_let_statement = 43,
  sym_print_statement = 44,
  sym__expression = 45,
  sym_primary_expression = 46,
  sym_assignment_expression = 47,
  sym_forced_assignment_expression = 48,
  sym__reference = 49,
  sym_numberelement = 50,
  sym_stringelement = 51,
  sym_stringarray = 52,
  sym_dimension = 53,
  sym_stringreference = 54,
  sym_numberreference = 55,
  sym_range = 56,
  sym_numberarray = 57,
  sym_number = 58,
  aux_sym_source_file_repeat1 = 59,
  aux_sym__multi_line_statement_repeat1 = 60,
  aux_sym_print_statement_repeat1 = 61,
  aux_sym_numberelement_repeat1 = 62,
  aux_sym_stringelement_repeat1 = 63,
  aux_sym_stringarray_repeat1 = 64,
  aux_sym_dimension_repeat1 = 65,
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
  [sym_primary_expression] = "primary_expression",
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
  [sym_primary_expression] = sym_primary_expression,
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
  [sym_primary_expression] = {
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
  field_left = 1,
  field_length = 2,
  field_right = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_left] = "left",
  [field_length] = "length",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_length, 1},
  [1] =
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
      if (eof) ADVANCE(42);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '&') ADVANCE(58);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == ')') ADVANCE(57);
      if (lookahead == '*') ADVANCE(54);
      if (lookahead == '+') ADVANCE(20);
      if (lookahead == ',') ADVANCE(66);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '.') ADVANCE(100);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == ';') ADVANCE(67);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(81);
      if (lookahead == 'f') ADVANCE(85);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(88);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(87);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(43);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(43);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == ')') ADVANCE(57);
      if (lookahead == '*') ADVANCE(53);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(2);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == 'd') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == 'e') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == 'e') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == 'f') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(71);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(69);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(70);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(72);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(24);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(28);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(47);
      END_STATE();
    case 26:
      if (lookahead == 'f') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 27:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(27)
      END_STATE();
    case 28:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 29:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 31:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 32:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(59);
      END_STATE();
    case 33:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(63);
      END_STATE();
    case 34:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      END_STATE();
    case 35:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      END_STATE();
    case 36:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 37:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 40:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 41:
      if (eof) ADVANCE(42);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == ')') ADVANCE(57);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '+') ADVANCE(20);
      if (lookahead == ',') ADVANCE(66);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '.') ADVANCE(100);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == ';') ADVANCE(67);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead == 'd') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(12);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym__multi_line_statement_token1);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(68);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_line_number);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_label);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == ':') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == ':') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_fnend);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == ':') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_fnend);
      if (lookahead == ':') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(71);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_numeric_function_name);
      if (lookahead == '$') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_let_statement_token1);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_let_statement_token1);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == ':') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_let_statement_token1);
      if (lookahead == ':') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_let_statement_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_print_statement_token1);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_print_statement_token1);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == ':') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_print_statement_token1);
      if (lookahead == ':') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_stringidentifier);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(73);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(73);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__mat);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == 'd') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == 'e') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == 'e') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == 'f') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == 'n') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == ':') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(79);
      if (lookahead == 'n') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(55);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 100:
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
  [1] = {.lex_state = 41},
  [2] = {.lex_state = 41},
  [3] = {.lex_state = 41},
  [4] = {.lex_state = 41},
  [5] = {.lex_state = 41},
  [6] = {.lex_state = 41},
  [7] = {.lex_state = 41},
  [8] = {.lex_state = 41},
  [9] = {.lex_state = 41},
  [10] = {.lex_state = 41},
  [11] = {.lex_state = 41},
  [12] = {.lex_state = 41},
  [13] = {.lex_state = 41},
  [14] = {.lex_state = 41},
  [15] = {.lex_state = 41},
  [16] = {.lex_state = 41},
  [17] = {.lex_state = 41},
  [18] = {.lex_state = 41},
  [19] = {.lex_state = 41},
  [20] = {.lex_state = 41},
  [21] = {.lex_state = 41},
  [22] = {.lex_state = 41},
  [23] = {.lex_state = 41},
  [24] = {.lex_state = 41},
  [25] = {.lex_state = 41},
  [26] = {.lex_state = 41},
  [27] = {.lex_state = 41},
  [28] = {.lex_state = 41},
  [29] = {.lex_state = 41},
  [30] = {.lex_state = 41},
  [31] = {.lex_state = 41},
  [32] = {.lex_state = 41},
  [33] = {.lex_state = 41},
  [34] = {.lex_state = 41},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 41},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 41},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 41},
  [45] = {.lex_state = 41},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 41},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 41},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 41},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 41},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 41},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 41},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 41},
  [65] = {.lex_state = 41},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 41},
  [71] = {.lex_state = 41},
  [72] = {.lex_state = 41},
  [73] = {.lex_state = 41},
  [74] = {.lex_state = 41},
  [75] = {.lex_state = 41},
  [76] = {.lex_state = 41},
  [77] = {.lex_state = 41},
  [78] = {.lex_state = 41},
  [79] = {.lex_state = 41},
  [80] = {.lex_state = 41},
  [81] = {.lex_state = 41},
  [82] = {.lex_state = 41},
  [83] = {.lex_state = 41},
  [84] = {.lex_state = 41},
  [85] = {.lex_state = 41},
  [86] = {.lex_state = 23},
  [87] = {.lex_state = 41},
  [88] = {.lex_state = 41},
  [89] = {.lex_state = 41},
  [90] = {.lex_state = 23},
  [91] = {.lex_state = 23},
  [92] = {.lex_state = 23},
  [93] = {.lex_state = 41},
  [94] = {.lex_state = 41},
  [95] = {.lex_state = 41},
  [96] = {.lex_state = 41},
  [97] = {.lex_state = 41},
  [98] = {.lex_state = 41},
  [99] = {.lex_state = 41},
  [100] = {.lex_state = 41},
  [101] = {.lex_state = 41},
  [102] = {.lex_state = 41},
  [103] = {.lex_state = 41},
  [104] = {.lex_state = 41},
  [105] = {.lex_state = 41},
  [106] = {.lex_state = 41},
  [107] = {.lex_state = 41},
  [108] = {.lex_state = 41},
  [109] = {.lex_state = 41},
  [110] = {.lex_state = 41},
  [111] = {.lex_state = 41},
  [112] = {.lex_state = 41},
  [113] = {.lex_state = 41},
  [114] = {.lex_state = 41},
  [115] = {.lex_state = 41},
  [116] = {.lex_state = 41},
  [117] = {.lex_state = 41},
  [118] = {.lex_state = 41},
  [119] = {.lex_state = 41},
  [120] = {.lex_state = 41},
  [121] = {.lex_state = 41},
  [122] = {.lex_state = 41},
  [123] = {.lex_state = 41},
  [124] = {.lex_state = 4},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 26},
  [128] = {.lex_state = 4},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 26},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 40},
  [152] = {.lex_state = 40},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 3},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 27},
  [166] = {.lex_state = 27},
  [167] = {.lex_state = 27},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 27},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [aux_sym__multi_line_statement_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_label] = ACTIONS(1),
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
    [sym_source_file] = STATE(168),
    [sym_line] = STATE(59),
    [sym__single_line_statement] = STATE(117),
    [sym__multi_line_statement] = STATE(117),
    [sym_statement] = STATE(97),
    [sym__definition] = STATE(117),
    [sym_function_definition] = STATE(117),
    [sym_let_statement] = STATE(107),
    [sym_print_statement] = STATE(107),
    [aux_sym_source_file_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_line_number] = ACTIONS(5),
    [sym_label] = ACTIONS(7),
    [anon_sym_def] = ACTIONS(9),
    [aux_sym_let_statement_token1] = ACTIONS(11),
    [aux_sym_print_statement_token1] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    STATE(2), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(17), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(15), 12,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [29] = 4,
    ACTIONS(26), 1,
      anon_sym_LPAREN,
    STATE(2), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(24), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(22), 12,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [58] = 4,
    ACTIONS(26), 1,
      anon_sym_LPAREN,
    STATE(3), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(30), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(28), 12,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [87] = 4,
    ACTIONS(32), 1,
      anon_sym_LPAREN,
    STATE(6), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(30), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(28), 12,
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
  [115] = 4,
    ACTIONS(32), 1,
      anon_sym_LPAREN,
    STATE(15), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(24), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(22), 12,
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
  [143] = 4,
    ACTIONS(38), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(36), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(34), 12,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [171] = 4,
    ACTIONS(38), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(42), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(40), 12,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [199] = 4,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(46), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(44), 12,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [227] = 4,
    ACTIONS(26), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_dimension,
    ACTIONS(53), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(51), 12,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [255] = 4,
    ACTIONS(38), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(57), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(55), 12,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [283] = 4,
    ACTIONS(38), 1,
      anon_sym_LPAREN,
    STATE(8), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(61), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(59), 12,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [311] = 4,
    ACTIONS(67), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(65), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(63), 12,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [339] = 4,
    ACTIONS(38), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(61), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(59), 12,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [367] = 4,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    STATE(15), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(17), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(15), 12,
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
  [395] = 4,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(61), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(59), 12,
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
  [422] = 4,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(61), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(59), 12,
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
  [449] = 4,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(42), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(40), 12,
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
  [476] = 4,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(36), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(34), 12,
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
  [503] = 2,
    ACTIONS(76), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(74), 13,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [526] = 3,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(78), 12,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [551] = 2,
    ACTIONS(86), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(84), 13,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [574] = 2,
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
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [597] = 4,
    ACTIONS(32), 1,
      anon_sym_LPAREN,
    STATE(40), 1,
      sym_dimension,
    ACTIONS(53), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(51), 12,
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
  [624] = 4,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(65), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(63), 12,
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
  [651] = 4,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(46), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(44), 12,
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
  [678] = 4,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(57), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(55), 12,
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
  [705] = 2,
    ACTIONS(99), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(97), 12,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [727] = 2,
    ACTIONS(76), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(74), 13,
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
  [749] = 2,
    ACTIONS(86), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(84), 13,
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
  [771] = 2,
    ACTIONS(90), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(88), 13,
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
  [793] = 2,
    ACTIONS(103), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(101), 12,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [815] = 2,
    ACTIONS(107), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(105), 12,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [837] = 3,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(78), 12,
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
  [861] = 8,
    ACTIONS(111), 1,
      sym_stringidentifier,
    ACTIONS(113), 1,
      sym_numberidentifier,
    ACTIONS(115), 1,
      sym__mat,
    ACTIONS(117), 1,
      aux_sym_number_token1,
    STATE(77), 1,
      sym_number,
    STATE(163), 1,
      sym_range,
    STATE(154), 3,
      sym__expression,
      sym_primary_expression,
      sym_forced_assignment_expression,
    STATE(49), 7,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
  [894] = 7,
    ACTIONS(111), 1,
      sym_stringidentifier,
    ACTIONS(113), 1,
      sym_numberidentifier,
    ACTIONS(115), 1,
      sym__mat,
    ACTIONS(117), 1,
      aux_sym_number_token1,
    STATE(77), 1,
      sym_number,
    STATE(104), 4,
      sym__expression,
      sym_primary_expression,
      sym_assignment_expression,
      sym_forced_assignment_expression,
    STATE(71), 7,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
  [925] = 8,
    ACTIONS(111), 1,
      sym_stringidentifier,
    ACTIONS(113), 1,
      sym_numberidentifier,
    ACTIONS(115), 1,
      sym__mat,
    ACTIONS(117), 1,
      aux_sym_number_token1,
    STATE(77), 1,
      sym_number,
    STATE(157), 1,
      sym_range,
    STATE(154), 3,
      sym__expression,
      sym_primary_expression,
      sym_forced_assignment_expression,
    STATE(49), 7,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
  [958] = 2,
    ACTIONS(99), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(97), 12,
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
  [979] = 8,
    ACTIONS(111), 1,
      sym_stringidentifier,
    ACTIONS(113), 1,
      sym_numberidentifier,
    ACTIONS(115), 1,
      sym__mat,
    ACTIONS(117), 1,
      aux_sym_number_token1,
    STATE(77), 1,
      sym_number,
    STATE(139), 1,
      sym_range,
    STATE(154), 3,
      sym__expression,
      sym_primary_expression,
      sym_forced_assignment_expression,
    STATE(49), 7,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
  [1012] = 2,
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
  [1033] = 8,
    ACTIONS(111), 1,
      sym_stringidentifier,
    ACTIONS(113), 1,
      sym_numberidentifier,
    ACTIONS(115), 1,
      sym__mat,
    ACTIONS(117), 1,
      aux_sym_number_token1,
    STATE(77), 1,
      sym_number,
    STATE(140), 1,
      sym_range,
    STATE(154), 3,
      sym__expression,
      sym_primary_expression,
      sym_forced_assignment_expression,
    STATE(49), 7,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
  [1066] = 8,
    ACTIONS(111), 1,
      sym_stringidentifier,
    ACTIONS(113), 1,
      sym_numberidentifier,
    ACTIONS(115), 1,
      sym__mat,
    ACTIONS(117), 1,
      aux_sym_number_token1,
    STATE(77), 1,
      sym_number,
    STATE(157), 1,
      sym_range,
    STATE(125), 3,
      sym__expression,
      sym_primary_expression,
      sym_forced_assignment_expression,
    STATE(49), 7,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
  [1099] = 7,
    ACTIONS(119), 1,
      sym_stringidentifier,
    ACTIONS(121), 1,
      sym_numberidentifier,
    ACTIONS(123), 1,
      sym__mat,
    ACTIONS(125), 1,
      aux_sym_number_token1,
    STATE(85), 1,
      sym_number,
    STATE(101), 4,
      sym__expression,
      sym_primary_expression,
      sym_assignment_expression,
      sym_forced_assignment_expression,
    STATE(70), 7,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
  [1130] = 2,
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
  [1151] = 11,
    ACTIONS(127), 1,
      sym_line_number,
    ACTIONS(129), 1,
      sym_label,
    ACTIONS(131), 1,
      anon_sym_def,
    ACTIONS(133), 1,
      anon_sym_EQ,
    ACTIONS(135), 1,
      anon_sym_fnend,
    ACTIONS(137), 1,
      aux_sym_let_statement_token1,
    ACTIONS(139), 1,
      aux_sym_print_statement_token1,
    STATE(95), 1,
      sym_statement,
    STATE(55), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(100), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(120), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [1190] = 8,
    ACTIONS(111), 1,
      sym_stringidentifier,
    ACTIONS(113), 1,
      sym_numberidentifier,
    ACTIONS(115), 1,
      sym__mat,
    ACTIONS(117), 1,
      aux_sym_number_token1,
    STATE(77), 1,
      sym_number,
    STATE(150), 1,
      sym_range,
    STATE(154), 3,
      sym__expression,
      sym_primary_expression,
      sym_forced_assignment_expression,
    STATE(49), 7,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
  [1223] = 11,
    ACTIONS(127), 1,
      sym_line_number,
    ACTIONS(129), 1,
      sym_label,
    ACTIONS(131), 1,
      anon_sym_def,
    ACTIONS(137), 1,
      aux_sym_let_statement_token1,
    ACTIONS(139), 1,
      aux_sym_print_statement_token1,
    ACTIONS(141), 1,
      anon_sym_EQ,
    ACTIONS(143), 1,
      anon_sym_fnend,
    STATE(95), 1,
      sym_statement,
    STATE(65), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(100), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(120), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [1262] = 8,
    ACTIONS(111), 1,
      sym_stringidentifier,
    ACTIONS(113), 1,
      sym_numberidentifier,
    ACTIONS(115), 1,
      sym__mat,
    ACTIONS(117), 1,
      aux_sym_number_token1,
    STATE(77), 1,
      sym_number,
    STATE(163), 1,
      sym_range,
    STATE(129), 3,
      sym__expression,
      sym_primary_expression,
      sym_forced_assignment_expression,
    STATE(49), 7,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
  [1295] = 3,
    ACTIONS(147), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(149), 5,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(145), 6,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1318] = 7,
    ACTIONS(111), 1,
      sym_stringidentifier,
    ACTIONS(113), 1,
      sym_numberidentifier,
    ACTIONS(115), 1,
      sym__mat,
    ACTIONS(117), 1,
      aux_sym_number_token1,
    STATE(77), 1,
      sym_number,
    STATE(145), 3,
      sym__expression,
      sym_primary_expression,
      sym_forced_assignment_expression,
    STATE(49), 7,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
  [1348] = 7,
    ACTIONS(111), 1,
      sym_stringidentifier,
    ACTIONS(113), 1,
      sym_numberidentifier,
    ACTIONS(115), 1,
      sym__mat,
    ACTIONS(117), 1,
      aux_sym_number_token1,
    STATE(77), 1,
      sym_number,
    STATE(75), 3,
      sym__expression,
      sym_primary_expression,
      sym_forced_assignment_expression,
    STATE(49), 7,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
  [1378] = 7,
    ACTIONS(111), 1,
      sym_stringidentifier,
    ACTIONS(113), 1,
      sym_numberidentifier,
    ACTIONS(115), 1,
      sym__mat,
    ACTIONS(117), 1,
      aux_sym_number_token1,
    STATE(77), 1,
      sym_number,
    STATE(114), 3,
      sym__expression,
      sym_primary_expression,
      sym_forced_assignment_expression,
    STATE(49), 7,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
  [1408] = 10,
    ACTIONS(151), 1,
      sym_line_number,
    ACTIONS(154), 1,
      sym_label,
    ACTIONS(157), 1,
      anon_sym_def,
    ACTIONS(160), 1,
      anon_sym_fnend,
    ACTIONS(162), 1,
      aux_sym_let_statement_token1,
    ACTIONS(165), 1,
      aux_sym_print_statement_token1,
    STATE(95), 1,
      sym_statement,
    STATE(53), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(100), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(120), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [1444] = 7,
    ACTIONS(111), 1,
      sym_stringidentifier,
    ACTIONS(113), 1,
      sym_numberidentifier,
    ACTIONS(115), 1,
      sym__mat,
    ACTIONS(117), 1,
      aux_sym_number_token1,
    STATE(77), 1,
      sym_number,
    STATE(147), 3,
      sym__expression,
      sym_primary_expression,
      sym_forced_assignment_expression,
    STATE(49), 7,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
  [1474] = 10,
    ACTIONS(127), 1,
      sym_line_number,
    ACTIONS(129), 1,
      sym_label,
    ACTIONS(131), 1,
      anon_sym_def,
    ACTIONS(137), 1,
      aux_sym_let_statement_token1,
    ACTIONS(139), 1,
      aux_sym_print_statement_token1,
    ACTIONS(168), 1,
      anon_sym_fnend,
    STATE(95), 1,
      sym_statement,
    STATE(53), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(100), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(120), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [1510] = 7,
    ACTIONS(119), 1,
      sym_stringidentifier,
    ACTIONS(121), 1,
      sym_numberidentifier,
    ACTIONS(123), 1,
      sym__mat,
    ACTIONS(125), 1,
      aux_sym_number_token1,
    STATE(85), 1,
      sym_number,
    STATE(103), 3,
      sym__expression,
      sym_primary_expression,
      sym_forced_assignment_expression,
    STATE(62), 7,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
  [1540] = 7,
    ACTIONS(119), 1,
      sym_stringidentifier,
    ACTIONS(121), 1,
      sym_numberidentifier,
    ACTIONS(123), 1,
      sym__mat,
    ACTIONS(125), 1,
      aux_sym_number_token1,
    STATE(85), 1,
      sym_number,
    STATE(87), 3,
      sym__expression,
      sym_primary_expression,
      sym_forced_assignment_expression,
    STATE(62), 7,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
  [1570] = 7,
    ACTIONS(119), 1,
      sym_stringidentifier,
    ACTIONS(121), 1,
      sym_numberidentifier,
    ACTIONS(123), 1,
      sym__mat,
    ACTIONS(125), 1,
      aux_sym_number_token1,
    STATE(85), 1,
      sym_number,
    STATE(89), 3,
      sym__expression,
      sym_primary_expression,
      sym_forced_assignment_expression,
    STATE(62), 7,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
  [1600] = 10,
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
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    STATE(97), 1,
      sym_statement,
    STATE(64), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(107), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(117), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [1636] = 7,
    ACTIONS(111), 1,
      sym_stringidentifier,
    ACTIONS(113), 1,
      sym_numberidentifier,
    ACTIONS(115), 1,
      sym__mat,
    ACTIONS(117), 1,
      aux_sym_number_token1,
    STATE(77), 1,
      sym_number,
    STATE(106), 3,
      sym__expression,
      sym_primary_expression,
      sym_forced_assignment_expression,
    STATE(49), 7,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
  [1666] = 7,
    ACTIONS(111), 1,
      sym_stringidentifier,
    ACTIONS(113), 1,
      sym_numberidentifier,
    ACTIONS(115), 1,
      sym__mat,
    ACTIONS(117), 1,
      aux_sym_number_token1,
    STATE(77), 1,
      sym_number,
    STATE(76), 3,
      sym__expression,
      sym_primary_expression,
      sym_forced_assignment_expression,
    STATE(49), 7,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
  [1696] = 3,
    ACTIONS(147), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(172), 5,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
    ACTIONS(145), 6,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1718] = 7,
    ACTIONS(119), 1,
      sym_stringidentifier,
    ACTIONS(121), 1,
      sym_numberidentifier,
    ACTIONS(123), 1,
      sym__mat,
    ACTIONS(125), 1,
      aux_sym_number_token1,
    STATE(85), 1,
      sym_number,
    STATE(81), 3,
      sym__expression,
      sym_primary_expression,
      sym_forced_assignment_expression,
    STATE(62), 7,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
  [1748] = 10,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
    ACTIONS(176), 1,
      sym_line_number,
    ACTIONS(179), 1,
      sym_label,
    ACTIONS(182), 1,
      anon_sym_def,
    ACTIONS(185), 1,
      aux_sym_let_statement_token1,
    ACTIONS(188), 1,
      aux_sym_print_statement_token1,
    STATE(97), 1,
      sym_statement,
    STATE(64), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(107), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(117), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [1784] = 10,
    ACTIONS(127), 1,
      sym_line_number,
    ACTIONS(129), 1,
      sym_label,
    ACTIONS(131), 1,
      anon_sym_def,
    ACTIONS(137), 1,
      aux_sym_let_statement_token1,
    ACTIONS(139), 1,
      aux_sym_print_statement_token1,
    ACTIONS(191), 1,
      anon_sym_fnend,
    STATE(95), 1,
      sym_statement,
    STATE(53), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(100), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(120), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [1820] = 7,
    ACTIONS(111), 1,
      sym_stringidentifier,
    ACTIONS(113), 1,
      sym_numberidentifier,
    ACTIONS(115), 1,
      sym__mat,
    ACTIONS(117), 1,
      aux_sym_number_token1,
    STATE(77), 1,
      sym_number,
    STATE(148), 3,
      sym__expression,
      sym_primary_expression,
      sym_forced_assignment_expression,
    STATE(49), 7,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
  [1850] = 7,
    ACTIONS(111), 1,
      sym_stringidentifier,
    ACTIONS(113), 1,
      sym_numberidentifier,
    ACTIONS(115), 1,
      sym__mat,
    ACTIONS(117), 1,
      aux_sym_number_token1,
    STATE(77), 1,
      sym_number,
    STATE(88), 3,
      sym__expression,
      sym_primary_expression,
      sym_forced_assignment_expression,
    STATE(49), 7,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
  [1880] = 7,
    ACTIONS(119), 1,
      sym_stringidentifier,
    ACTIONS(121), 1,
      sym_numberidentifier,
    ACTIONS(123), 1,
      sym__mat,
    ACTIONS(125), 1,
      aux_sym_number_token1,
    STATE(85), 1,
      sym_number,
    STATE(113), 3,
      sym__expression,
      sym_primary_expression,
      sym_forced_assignment_expression,
    STATE(62), 7,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
  [1910] = 7,
    ACTIONS(111), 1,
      sym_stringidentifier,
    ACTIONS(113), 1,
      sym_numberidentifier,
    ACTIONS(115), 1,
      sym__mat,
    ACTIONS(117), 1,
      aux_sym_number_token1,
    STATE(77), 1,
      sym_number,
    STATE(133), 3,
      sym__expression,
      sym_primary_expression,
      sym_forced_assignment_expression,
    STATE(49), 7,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
  [1940] = 4,
    ACTIONS(193), 1,
      anon_sym_EQ,
    ACTIONS(145), 4,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
    ACTIONS(147), 4,
      anon_sym_COLON,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(172), 5,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [1963] = 4,
    ACTIONS(195), 1,
      anon_sym_EQ,
    ACTIONS(145), 3,
      aux_sym__multi_line_statement_token1,
      sym_line_number,
      sym_label,
    ACTIONS(147), 5,
      anon_sym_COLON,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(149), 5,
      anon_sym_COLON_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
  [1986] = 3,
    ACTIONS(201), 1,
      anon_sym_DOT,
    ACTIONS(199), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(197), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2006] = 2,
    ACTIONS(205), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(203), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2023] = 4,
    STATE(84), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(211), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(207), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
    ACTIONS(209), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2043] = 2,
    ACTIONS(215), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(213), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2059] = 4,
    STATE(74), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(211), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(217), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
    ACTIONS(219), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2079] = 2,
    ACTIONS(147), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(145), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2095] = 7,
    ACTIONS(9), 1,
      anon_sym_def,
    ACTIONS(11), 1,
      aux_sym_let_statement_token1,
    ACTIONS(13), 1,
      aux_sym_print_statement_token1,
    ACTIONS(221), 1,
      sym_label,
    STATE(97), 1,
      sym_statement,
    STATE(107), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(116), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [2121] = 4,
    STATE(79), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(227), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
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
  [2141] = 4,
    STATE(79), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(230), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(209), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(207), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [2161] = 4,
    STATE(80), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(230), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(219), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(217), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [2181] = 3,
    ACTIONS(232), 1,
      anon_sym_DOT,
    ACTIONS(199), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(197), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2199] = 7,
    ACTIONS(131), 1,
      anon_sym_def,
    ACTIONS(137), 1,
      aux_sym_let_statement_token1,
    ACTIONS(139), 1,
      aux_sym_print_statement_token1,
    ACTIONS(234), 1,
      sym_label,
    STATE(95), 1,
      sym_statement,
    STATE(100), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(119), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [2225] = 4,
    STATE(84), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(236), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
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
  [2245] = 2,
    ACTIONS(147), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(145), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2260] = 6,
    ACTIONS(239), 1,
      anon_sym_def,
    ACTIONS(241), 1,
      aux_sym_let_statement_token1,
    ACTIONS(243), 1,
      aux_sym_print_statement_token1,
    STATE(97), 1,
      sym_statement,
    STATE(107), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(116), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [2283] = 2,
    ACTIONS(215), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(213), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2298] = 2,
    ACTIONS(225), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(223), 6,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2313] = 2,
    ACTIONS(225), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(223), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2328] = 6,
    ACTIONS(245), 1,
      anon_sym_def,
    ACTIONS(247), 1,
      aux_sym_let_statement_token1,
    ACTIONS(249), 1,
      aux_sym_print_statement_token1,
    STATE(95), 1,
      sym_statement,
    STATE(100), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(119), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [2351] = 6,
    ACTIONS(245), 1,
      anon_sym_def,
    ACTIONS(247), 1,
      aux_sym_let_statement_token1,
    ACTIONS(249), 1,
      aux_sym_print_statement_token1,
    STATE(95), 1,
      sym_statement,
    STATE(100), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(118), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [2374] = 6,
    ACTIONS(239), 1,
      anon_sym_def,
    ACTIONS(241), 1,
      aux_sym_let_statement_token1,
    ACTIONS(243), 1,
      aux_sym_print_statement_token1,
    STATE(97), 1,
      sym_statement,
    STATE(107), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(121), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [2397] = 2,
    ACTIONS(205), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(203), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2412] = 4,
    STATE(99), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(251), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(253), 2,
      sym_line_number,
      sym_label,
    ACTIONS(255), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2430] = 4,
    STATE(94), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(251), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(257), 2,
      sym_line_number,
      sym_label,
    ACTIONS(259), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2448] = 4,
    STATE(98), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(261), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(253), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(255), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2466] = 4,
    STATE(96), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(261), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(257), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(259), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2484] = 4,
    STATE(98), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(265), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(263), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(268), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2502] = 4,
    STATE(99), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(263), 2,
      sym_line_number,
      sym_label,
    ACTIONS(270), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(268), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2520] = 2,
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
  [2533] = 2,
    ACTIONS(279), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(277), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [2546] = 2,
    ACTIONS(268), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(263), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [2559] = 2,
    ACTIONS(283), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(281), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [2572] = 2,
    ACTIONS(277), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
    ACTIONS(279), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2585] = 2,
    ACTIONS(263), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
    ACTIONS(268), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2598] = 2,
    ACTIONS(281), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
    ACTIONS(283), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2611] = 2,
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
  [2624] = 2,
    ACTIONS(285), 3,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
    ACTIONS(287), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2636] = 2,
    ACTIONS(289), 3,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
    ACTIONS(291), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2648] = 2,
    ACTIONS(293), 3,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
    ACTIONS(295), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2660] = 2,
    ACTIONS(297), 3,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
    ACTIONS(299), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2672] = 2,
    ACTIONS(301), 2,
      sym_line_number,
      sym_label,
    ACTIONS(303), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2683] = 2,
    ACTIONS(305), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(307), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2694] = 2,
    ACTIONS(305), 2,
      sym_line_number,
      sym_label,
    ACTIONS(307), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2705] = 2,
    ACTIONS(301), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(303), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2716] = 2,
    ACTIONS(309), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(311), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2727] = 2,
    ACTIONS(313), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(315), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2738] = 2,
    ACTIONS(317), 2,
      sym_line_number,
      sym_label,
    ACTIONS(319), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2749] = 2,
    ACTIONS(309), 2,
      sym_line_number,
      sym_label,
    ACTIONS(311), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2760] = 2,
    ACTIONS(313), 2,
      sym_line_number,
      sym_label,
    ACTIONS(315), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2771] = 2,
    ACTIONS(317), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(319), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2782] = 4,
    ACTIONS(247), 1,
      aux_sym_let_statement_token1,
    ACTIONS(249), 1,
      aux_sym_print_statement_token1,
    STATE(105), 1,
      sym_statement,
    STATE(100), 2,
      sym_let_statement,
      sym_print_statement,
  [2796] = 4,
    ACTIONS(241), 1,
      aux_sym_let_statement_token1,
    ACTIONS(243), 1,
      aux_sym_print_statement_token1,
    STATE(102), 1,
      sym_statement,
    STATE(107), 2,
      sym_let_statement,
      sym_print_statement,
  [2810] = 4,
    ACTIONS(117), 1,
      aux_sym_number_token1,
    ACTIONS(321), 1,
      anon_sym_STAR,
    ACTIONS(323), 1,
      anon_sym_RPAREN,
    STATE(162), 1,
      sym_number,
  [2823] = 4,
    ACTIONS(325), 1,
      anon_sym_COLON,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    STATE(134), 1,
      aux_sym_numberelement_repeat1,
  [2836] = 4,
    ACTIONS(331), 1,
      anon_sym_STAR,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    STATE(108), 1,
      sym_parameter_list,
    STATE(153), 1,
      sym_function_length,
  [2849] = 3,
    ACTIONS(335), 1,
      sym_string_function_name,
    ACTIONS(337), 1,
      sym_numeric_function_name,
    STATE(47), 2,
      sym_string_function_definition,
      sym_numeric_function_definition,
  [2860] = 4,
    ACTIONS(117), 1,
      aux_sym_number_token1,
    ACTIONS(339), 1,
      anon_sym_STAR,
    ACTIONS(341), 1,
      anon_sym_RPAREN,
    STATE(164), 1,
      sym_number,
  [2873] = 4,
    ACTIONS(325), 1,
      anon_sym_COLON,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    ACTIONS(343), 1,
      anon_sym_RPAREN,
    STATE(142), 1,
      aux_sym_numberelement_repeat1,
  [2886] = 3,
    ACTIONS(335), 1,
      sym_string_function_name,
    ACTIONS(337), 1,
      sym_numeric_function_name,
    STATE(45), 2,
      sym_string_function_definition,
      sym_numeric_function_definition,
  [2897] = 3,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    ACTIONS(345), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      aux_sym_numberelement_repeat1,
  [2907] = 3,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    ACTIONS(347), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      aux_sym_numberelement_repeat1,
  [2917] = 3,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    ACTIONS(349), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      aux_sym_numberelement_repeat1,
  [2927] = 3,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    ACTIONS(351), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      aux_sym_numberelement_repeat1,
  [2937] = 3,
    ACTIONS(353), 1,
      anon_sym_RPAREN,
    ACTIONS(355), 1,
      anon_sym_COMMA,
    STATE(135), 1,
      aux_sym_dimension_repeat1,
  [2947] = 3,
    ACTIONS(117), 1,
      aux_sym_number_token1,
    ACTIONS(341), 1,
      anon_sym_RPAREN,
    STATE(164), 1,
      sym_number,
  [2957] = 3,
    ACTIONS(358), 1,
      sym_identifier,
    ACTIONS(360), 1,
      anon_sym_AMP,
    STATE(160), 1,
      sym_parameter,
  [2967] = 3,
    ACTIONS(362), 1,
      anon_sym_RPAREN,
    ACTIONS(364), 1,
      anon_sym_COMMA,
    STATE(135), 1,
      aux_sym_dimension_repeat1,
  [2977] = 3,
    ACTIONS(364), 1,
      anon_sym_COMMA,
    ACTIONS(366), 1,
      anon_sym_RPAREN,
    STATE(143), 1,
      aux_sym_dimension_repeat1,
  [2987] = 3,
    ACTIONS(364), 1,
      anon_sym_COMMA,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
    STATE(138), 1,
      aux_sym_dimension_repeat1,
  [2997] = 3,
    ACTIONS(370), 1,
      anon_sym_RPAREN,
    ACTIONS(372), 1,
      anon_sym_COMMA,
    STATE(141), 1,
      aux_sym_numberelement_repeat1,
  [3007] = 3,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    ACTIONS(375), 1,
      anon_sym_RPAREN,
    STATE(141), 1,
      aux_sym_numberelement_repeat1,
  [3017] = 3,
    ACTIONS(364), 1,
      anon_sym_COMMA,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
    STATE(135), 1,
      aux_sym_dimension_repeat1,
  [3027] = 3,
    ACTIONS(117), 1,
      aux_sym_number_token1,
    ACTIONS(379), 1,
      anon_sym_RPAREN,
    STATE(159), 1,
      sym_number,
  [3037] = 3,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    ACTIONS(381), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      aux_sym_numberelement_repeat1,
  [3047] = 2,
    ACTIONS(117), 1,
      aux_sym_number_token1,
    STATE(158), 1,
      sym_number,
  [3054] = 1,
    ACTIONS(383), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3059] = 1,
    ACTIONS(370), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3064] = 2,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    STATE(109), 1,
      sym_parameter_list,
  [3071] = 1,
    ACTIONS(353), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3076] = 2,
    ACTIONS(385), 1,
      sym_stringidentifier,
    ACTIONS(387), 1,
      sym_numberidentifier,
  [3083] = 2,
    ACTIONS(389), 1,
      sym_stringidentifier,
    ACTIONS(391), 1,
      sym_numberidentifier,
  [3090] = 2,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
    STATE(111), 1,
      sym_parameter_list,
  [3097] = 1,
    ACTIONS(325), 1,
      anon_sym_COLON,
  [3101] = 1,
    ACTIONS(393), 1,
      aux_sym_number_token1,
  [3105] = 1,
    ACTIONS(395), 1,
      sym_identifier,
  [3109] = 1,
    ACTIONS(397), 1,
      anon_sym_RPAREN,
  [3113] = 1,
    ACTIONS(399), 1,
      anon_sym_LPAREN,
  [3117] = 1,
    ACTIONS(401), 1,
      anon_sym_RPAREN,
  [3121] = 1,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
  [3125] = 1,
    ACTIONS(405), 1,
      aux_sym_number_token1,
  [3129] = 1,
    ACTIONS(341), 1,
      anon_sym_RPAREN,
  [3133] = 1,
    ACTIONS(407), 1,
      anon_sym_RPAREN,
  [3137] = 1,
    ACTIONS(379), 1,
      anon_sym_RPAREN,
  [3141] = 1,
    ACTIONS(409), 1,
      aux_sym_let_statement_token2,
  [3145] = 1,
    ACTIONS(411), 1,
      aux_sym_let_statement_token2,
  [3149] = 1,
    ACTIONS(413), 1,
      aux_sym_let_statement_token2,
  [3153] = 1,
    ACTIONS(415), 1,
      ts_builtin_sym_end,
  [3157] = 1,
    ACTIONS(417), 1,
      aux_sym_let_statement_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 87,
  [SMALL_STATE(6)] = 115,
  [SMALL_STATE(7)] = 143,
  [SMALL_STATE(8)] = 171,
  [SMALL_STATE(9)] = 199,
  [SMALL_STATE(10)] = 227,
  [SMALL_STATE(11)] = 255,
  [SMALL_STATE(12)] = 283,
  [SMALL_STATE(13)] = 311,
  [SMALL_STATE(14)] = 339,
  [SMALL_STATE(15)] = 367,
  [SMALL_STATE(16)] = 395,
  [SMALL_STATE(17)] = 422,
  [SMALL_STATE(18)] = 449,
  [SMALL_STATE(19)] = 476,
  [SMALL_STATE(20)] = 503,
  [SMALL_STATE(21)] = 526,
  [SMALL_STATE(22)] = 551,
  [SMALL_STATE(23)] = 574,
  [SMALL_STATE(24)] = 597,
  [SMALL_STATE(25)] = 624,
  [SMALL_STATE(26)] = 651,
  [SMALL_STATE(27)] = 678,
  [SMALL_STATE(28)] = 705,
  [SMALL_STATE(29)] = 727,
  [SMALL_STATE(30)] = 749,
  [SMALL_STATE(31)] = 771,
  [SMALL_STATE(32)] = 793,
  [SMALL_STATE(33)] = 815,
  [SMALL_STATE(34)] = 837,
  [SMALL_STATE(35)] = 861,
  [SMALL_STATE(36)] = 894,
  [SMALL_STATE(37)] = 925,
  [SMALL_STATE(38)] = 958,
  [SMALL_STATE(39)] = 979,
  [SMALL_STATE(40)] = 1012,
  [SMALL_STATE(41)] = 1033,
  [SMALL_STATE(42)] = 1066,
  [SMALL_STATE(43)] = 1099,
  [SMALL_STATE(44)] = 1130,
  [SMALL_STATE(45)] = 1151,
  [SMALL_STATE(46)] = 1190,
  [SMALL_STATE(47)] = 1223,
  [SMALL_STATE(48)] = 1262,
  [SMALL_STATE(49)] = 1295,
  [SMALL_STATE(50)] = 1318,
  [SMALL_STATE(51)] = 1348,
  [SMALL_STATE(52)] = 1378,
  [SMALL_STATE(53)] = 1408,
  [SMALL_STATE(54)] = 1444,
  [SMALL_STATE(55)] = 1474,
  [SMALL_STATE(56)] = 1510,
  [SMALL_STATE(57)] = 1540,
  [SMALL_STATE(58)] = 1570,
  [SMALL_STATE(59)] = 1600,
  [SMALL_STATE(60)] = 1636,
  [SMALL_STATE(61)] = 1666,
  [SMALL_STATE(62)] = 1696,
  [SMALL_STATE(63)] = 1718,
  [SMALL_STATE(64)] = 1748,
  [SMALL_STATE(65)] = 1784,
  [SMALL_STATE(66)] = 1820,
  [SMALL_STATE(67)] = 1850,
  [SMALL_STATE(68)] = 1880,
  [SMALL_STATE(69)] = 1910,
  [SMALL_STATE(70)] = 1940,
  [SMALL_STATE(71)] = 1963,
  [SMALL_STATE(72)] = 1986,
  [SMALL_STATE(73)] = 2006,
  [SMALL_STATE(74)] = 2023,
  [SMALL_STATE(75)] = 2043,
  [SMALL_STATE(76)] = 2059,
  [SMALL_STATE(77)] = 2079,
  [SMALL_STATE(78)] = 2095,
  [SMALL_STATE(79)] = 2121,
  [SMALL_STATE(80)] = 2141,
  [SMALL_STATE(81)] = 2161,
  [SMALL_STATE(82)] = 2181,
  [SMALL_STATE(83)] = 2199,
  [SMALL_STATE(84)] = 2225,
  [SMALL_STATE(85)] = 2245,
  [SMALL_STATE(86)] = 2260,
  [SMALL_STATE(87)] = 2283,
  [SMALL_STATE(88)] = 2298,
  [SMALL_STATE(89)] = 2313,
  [SMALL_STATE(90)] = 2328,
  [SMALL_STATE(91)] = 2351,
  [SMALL_STATE(92)] = 2374,
  [SMALL_STATE(93)] = 2397,
  [SMALL_STATE(94)] = 2412,
  [SMALL_STATE(95)] = 2430,
  [SMALL_STATE(96)] = 2448,
  [SMALL_STATE(97)] = 2466,
  [SMALL_STATE(98)] = 2484,
  [SMALL_STATE(99)] = 2502,
  [SMALL_STATE(100)] = 2520,
  [SMALL_STATE(101)] = 2533,
  [SMALL_STATE(102)] = 2546,
  [SMALL_STATE(103)] = 2559,
  [SMALL_STATE(104)] = 2572,
  [SMALL_STATE(105)] = 2585,
  [SMALL_STATE(106)] = 2598,
  [SMALL_STATE(107)] = 2611,
  [SMALL_STATE(108)] = 2624,
  [SMALL_STATE(109)] = 2636,
  [SMALL_STATE(110)] = 2648,
  [SMALL_STATE(111)] = 2660,
  [SMALL_STATE(112)] = 2672,
  [SMALL_STATE(113)] = 2683,
  [SMALL_STATE(114)] = 2694,
  [SMALL_STATE(115)] = 2705,
  [SMALL_STATE(116)] = 2716,
  [SMALL_STATE(117)] = 2727,
  [SMALL_STATE(118)] = 2738,
  [SMALL_STATE(119)] = 2749,
  [SMALL_STATE(120)] = 2760,
  [SMALL_STATE(121)] = 2771,
  [SMALL_STATE(122)] = 2782,
  [SMALL_STATE(123)] = 2796,
  [SMALL_STATE(124)] = 2810,
  [SMALL_STATE(125)] = 2823,
  [SMALL_STATE(126)] = 2836,
  [SMALL_STATE(127)] = 2849,
  [SMALL_STATE(128)] = 2860,
  [SMALL_STATE(129)] = 2873,
  [SMALL_STATE(130)] = 2886,
  [SMALL_STATE(131)] = 2897,
  [SMALL_STATE(132)] = 2907,
  [SMALL_STATE(133)] = 2917,
  [SMALL_STATE(134)] = 2927,
  [SMALL_STATE(135)] = 2937,
  [SMALL_STATE(136)] = 2947,
  [SMALL_STATE(137)] = 2957,
  [SMALL_STATE(138)] = 2967,
  [SMALL_STATE(139)] = 2977,
  [SMALL_STATE(140)] = 2987,
  [SMALL_STATE(141)] = 2997,
  [SMALL_STATE(142)] = 3007,
  [SMALL_STATE(143)] = 3017,
  [SMALL_STATE(144)] = 3027,
  [SMALL_STATE(145)] = 3037,
  [SMALL_STATE(146)] = 3047,
  [SMALL_STATE(147)] = 3054,
  [SMALL_STATE(148)] = 3059,
  [SMALL_STATE(149)] = 3064,
  [SMALL_STATE(150)] = 3071,
  [SMALL_STATE(151)] = 3076,
  [SMALL_STATE(152)] = 3083,
  [SMALL_STATE(153)] = 3090,
  [SMALL_STATE(154)] = 3097,
  [SMALL_STATE(155)] = 3101,
  [SMALL_STATE(156)] = 3105,
  [SMALL_STATE(157)] = 3109,
  [SMALL_STATE(158)] = 3113,
  [SMALL_STATE(159)] = 3117,
  [SMALL_STATE(160)] = 3121,
  [SMALL_STATE(161)] = 3125,
  [SMALL_STATE(162)] = 3129,
  [SMALL_STATE(163)] = 3133,
  [SMALL_STATE(164)] = 3137,
  [SMALL_STATE(165)] = 3141,
  [SMALL_STATE(166)] = 3145,
  [SMALL_STATE(167)] = 3149,
  [SMALL_STATE(168)] = 3153,
  [SMALL_STATE(169)] = 3157,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stringarray_repeat1, 2),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stringarray_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringarray_repeat1, 2), SHIFT_REPEAT(39),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringarray, 3),
  [24] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringarray, 3),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringarray, 2),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringarray, 2),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringelement, 4),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringelement, 4),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringelement, 6),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringelement, 6),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stringelement_repeat1, 2),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stringelement_repeat1, 2),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringelement_repeat1, 2), SHIFT_REPEAT(37),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numberarray, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numberarray, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringreference, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringreference, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringelement, 5),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringelement, 5),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringreference, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringreference, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringarray_repeat1, 2), SHIFT_REPEAT(41),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 3),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dimension, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numberreference, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numberreference, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 4),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dimension, 4),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stringelement_repeat1, 3),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stringelement_repeat1, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringelement_repeat1, 2), SHIFT_REPEAT(35),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numberelement, 4),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numberelement, 4),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numberelement, 5),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numberelement, 5),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numberarray, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numberarray, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(83),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(90),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(127),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(165),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(166),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(86),
  [182] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(130),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(167),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(169),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 3),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_statement, 4),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print_statement, 4),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forced_assignment_expression, 3, .production_id = 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_forced_assignment_expression, 3, .production_id = 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_statement, 3),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print_statement, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_print_statement_repeat1, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_print_statement_repeat1, 2),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT_REPEAT(58),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT_REPEAT(67),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_line_statement, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_line_statement, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_line_statement, 1),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_line_statement, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__multi_line_statement_repeat1, 2),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multi_line_statement_repeat1, 2), SHIFT_REPEAT(123),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__multi_line_statement_repeat1, 2),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multi_line_statement_repeat1, 2), SHIFT_REPEAT(122),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 3),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3, .production_id = 2),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_expression, 3, .production_id = 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_function_definition, 2),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_function_definition, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_function_definition, 2),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_function_definition, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_function_definition, 3),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_function_definition, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 3),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 3),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dimension_repeat1, 2),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimension_repeat1, 2), SHIFT_REPEAT(46),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numberelement_repeat1, 2),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numberelement_repeat1, 2), SHIFT_REPEAT(66),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_length, 2, .production_id = 1),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [415] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
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
