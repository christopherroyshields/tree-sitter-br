#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 164
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
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
  sym_stringidentifier = 21,
  sym_numberidentifier = 22,
  sym__mat = 23,
  aux_sym_number_token1 = 24,
  anon_sym_DOT = 25,
  sym_source_file = 26,
  sym_line = 27,
  sym__single_line_statement = 28,
  sym__multi_line_statement = 29,
  sym_statement = 30,
  sym__definition = 31,
  sym_function_definition = 32,
  sym_string_function_definition = 33,
  sym_numeric_function_definition = 34,
  sym_function_length = 35,
  sym_parameter_list = 36,
  sym_parameter = 37,
  sym_let_statement = 38,
  sym_print_statement = 39,
  sym__expression = 40,
  sym_primary_expression = 41,
  sym_assignment_expression = 42,
  sym__reference = 43,
  sym_numberelement = 44,
  sym_stringelement = 45,
  sym_stringarray = 46,
  sym_dimension = 47,
  sym_stringreference = 48,
  sym_numberreference = 49,
  sym_range = 50,
  sym_numberarray = 51,
  sym_number = 52,
  aux_sym_source_file_repeat1 = 53,
  aux_sym__multi_line_statement_repeat1 = 54,
  aux_sym_print_statement_repeat1 = 55,
  aux_sym_numberelement_repeat1 = 56,
  aux_sym_stringelement_repeat1 = 57,
  aux_sym_stringarray_repeat1 = 58,
  aux_sym_dimension_repeat1 = 59,
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
      if (eof) ADVANCE(38);
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '&') ADVANCE(53);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == ')') ADVANCE(52);
      if (lookahead == '*') ADVANCE(49);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == ';') ADVANCE(62);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == 'd') ADVANCE(71);
      if (lookahead == 'f') ADVANCE(75);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(78);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(77);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(39);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(39);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(2);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(23);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 'f') ADVANCE(43);
      END_STATE();
    case 21:
      if (lookahead == 'f') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 22:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(22)
      END_STATE();
    case 23:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 26:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 27:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 28:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(54);
      END_STATE();
    case 29:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(58);
      END_STATE();
    case 30:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      END_STATE();
    case 31:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      END_STATE();
    case 32:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 37:
      if (eof) ADVANCE(38);
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == ')') ADVANCE(52);
      if (lookahead == ',') ADVANCE(61);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == ';') ADVANCE(62);
      if (lookahead == '=') ADVANCE(46);
      if (lookahead == 'd') ADVANCE(6);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(11);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym__multi_line_statement_token1);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_line_number);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_label);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == ':') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == ':') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_fnend);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == ':') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_fnend);
      if (lookahead == ':') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_numeric_function_name);
      if (lookahead == '$') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_let_statement_token1);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_let_statement_token1);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == ':') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_let_statement_token1);
      if (lookahead == ':') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_let_statement_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_print_statement_token1);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_print_statement_token1);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == ':') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_print_statement_token1);
      if (lookahead == ':') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_stringidentifier);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(63);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(63);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__mat);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == 'n') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == ':') ADVANCE(30);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == ':') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(69);
      if (lookahead == 'n') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 90:
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
  [1] = {.lex_state = 37},
  [2] = {.lex_state = 25},
  [3] = {.lex_state = 25},
  [4] = {.lex_state = 37},
  [5] = {.lex_state = 25},
  [6] = {.lex_state = 25},
  [7] = {.lex_state = 25},
  [8] = {.lex_state = 25},
  [9] = {.lex_state = 25},
  [10] = {.lex_state = 37},
  [11] = {.lex_state = 25},
  [12] = {.lex_state = 25},
  [13] = {.lex_state = 37},
  [14] = {.lex_state = 37},
  [15] = {.lex_state = 25},
  [16] = {.lex_state = 25},
  [17] = {.lex_state = 37},
  [18] = {.lex_state = 25},
  [19] = {.lex_state = 25},
  [20] = {.lex_state = 25},
  [21] = {.lex_state = 37},
  [22] = {.lex_state = 37},
  [23] = {.lex_state = 25},
  [24] = {.lex_state = 25},
  [25] = {.lex_state = 37},
  [26] = {.lex_state = 37},
  [27] = {.lex_state = 25},
  [28] = {.lex_state = 25},
  [29] = {.lex_state = 25},
  [30] = {.lex_state = 37},
  [31] = {.lex_state = 25},
  [32] = {.lex_state = 25},
  [33] = {.lex_state = 37},
  [34] = {.lex_state = 37},
  [35] = {.lex_state = 37},
  [36] = {.lex_state = 37},
  [37] = {.lex_state = 37},
  [38] = {.lex_state = 37},
  [39] = {.lex_state = 37},
  [40] = {.lex_state = 37},
  [41] = {.lex_state = 37},
  [42] = {.lex_state = 37},
  [43] = {.lex_state = 37},
  [44] = {.lex_state = 37},
  [45] = {.lex_state = 37},
  [46] = {.lex_state = 37},
  [47] = {.lex_state = 37},
  [48] = {.lex_state = 37},
  [49] = {.lex_state = 37},
  [50] = {.lex_state = 37},
  [51] = {.lex_state = 37},
  [52] = {.lex_state = 37},
  [53] = {.lex_state = 37},
  [54] = {.lex_state = 37},
  [55] = {.lex_state = 37},
  [56] = {.lex_state = 37},
  [57] = {.lex_state = 37},
  [58] = {.lex_state = 37},
  [59] = {.lex_state = 37},
  [60] = {.lex_state = 37},
  [61] = {.lex_state = 37},
  [62] = {.lex_state = 37},
  [63] = {.lex_state = 37},
  [64] = {.lex_state = 37},
  [65] = {.lex_state = 37},
  [66] = {.lex_state = 37},
  [67] = {.lex_state = 37},
  [68] = {.lex_state = 37},
  [69] = {.lex_state = 37},
  [70] = {.lex_state = 37},
  [71] = {.lex_state = 37},
  [72] = {.lex_state = 37},
  [73] = {.lex_state = 37},
  [74] = {.lex_state = 37},
  [75] = {.lex_state = 37},
  [76] = {.lex_state = 37},
  [77] = {.lex_state = 37},
  [78] = {.lex_state = 37},
  [79] = {.lex_state = 37},
  [80] = {.lex_state = 37},
  [81] = {.lex_state = 37},
  [82] = {.lex_state = 37},
  [83] = {.lex_state = 18},
  [84] = {.lex_state = 18},
  [85] = {.lex_state = 18},
  [86] = {.lex_state = 18},
  [87] = {.lex_state = 37},
  [88] = {.lex_state = 37},
  [89] = {.lex_state = 37},
  [90] = {.lex_state = 37},
  [91] = {.lex_state = 37},
  [92] = {.lex_state = 37},
  [93] = {.lex_state = 37},
  [94] = {.lex_state = 37},
  [95] = {.lex_state = 37},
  [96] = {.lex_state = 37},
  [97] = {.lex_state = 37},
  [98] = {.lex_state = 37},
  [99] = {.lex_state = 37},
  [100] = {.lex_state = 37},
  [101] = {.lex_state = 37},
  [102] = {.lex_state = 37},
  [103] = {.lex_state = 37},
  [104] = {.lex_state = 37},
  [105] = {.lex_state = 37},
  [106] = {.lex_state = 37},
  [107] = {.lex_state = 37},
  [108] = {.lex_state = 37},
  [109] = {.lex_state = 37},
  [110] = {.lex_state = 37},
  [111] = {.lex_state = 37},
  [112] = {.lex_state = 37},
  [113] = {.lex_state = 37},
  [114] = {.lex_state = 37},
  [115] = {.lex_state = 37},
  [116] = {.lex_state = 37},
  [117] = {.lex_state = 37},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 21},
  [120] = {.lex_state = 21},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 36},
  [147] = {.lex_state = 36},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 3},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 22},
  [160] = {.lex_state = 22},
  [161] = {.lex_state = 22},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 22},
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
    [sym__mat] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(162),
    [sym_line] = STATE(13),
    [sym__single_line_statement] = STATE(112),
    [sym__multi_line_statement] = STATE(112),
    [sym_statement] = STATE(90),
    [sym__definition] = STATE(112),
    [sym_function_definition] = STATE(112),
    [sym_let_statement] = STATE(101),
    [sym_print_statement] = STATE(101),
    [aux_sym_source_file_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_line_number] = ACTIONS(5),
    [sym_label] = ACTIONS(7),
    [anon_sym_def] = ACTIONS(9),
    [aux_sym_let_statement_token1] = ACTIONS(11),
    [aux_sym_print_statement_token1] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(15), 1,
      sym_stringidentifier,
    ACTIONS(17), 1,
      sym_numberidentifier,
    ACTIONS(19), 1,
      sym__mat,
    ACTIONS(21), 1,
      aux_sym_number_token1,
    STATE(72), 1,
      sym_number,
    STATE(144), 1,
      sym_range,
    STATE(148), 3,
      sym__expression,
      sym_primary_expression,
      sym_assignment_expression,
    STATE(57), 7,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
  [33] = 8,
    ACTIONS(15), 1,
      sym_stringidentifier,
    ACTIONS(17), 1,
      sym_numberidentifier,
    ACTIONS(19), 1,
      sym__mat,
    ACTIONS(21), 1,
      aux_sym_number_token1,
    STATE(72), 1,
      sym_number,
    STATE(157), 1,
      sym_range,
    STATE(122), 3,
      sym__expression,
      sym_primary_expression,
      sym_assignment_expression,
    STATE(57), 7,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
  [66] = 11,
    ACTIONS(23), 1,
      sym_line_number,
    ACTIONS(25), 1,
      sym_label,
    ACTIONS(27), 1,
      anon_sym_def,
    ACTIONS(29), 1,
      anon_sym_EQ,
    ACTIONS(31), 1,
      anon_sym_fnend,
    ACTIONS(33), 1,
      aux_sym_let_statement_token1,
    ACTIONS(35), 1,
      aux_sym_print_statement_token1,
    STATE(93), 1,
      sym_statement,
    STATE(25), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(100), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(113), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [105] = 8,
    ACTIONS(15), 1,
      sym_stringidentifier,
    ACTIONS(17), 1,
      sym_numberidentifier,
    ACTIONS(19), 1,
      sym__mat,
    ACTIONS(21), 1,
      aux_sym_number_token1,
    STATE(72), 1,
      sym_number,
    STATE(157), 1,
      sym_range,
    STATE(148), 3,
      sym__expression,
      sym_primary_expression,
      sym_assignment_expression,
    STATE(57), 7,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
  [138] = 8,
    ACTIONS(15), 1,
      sym_stringidentifier,
    ACTIONS(17), 1,
      sym_numberidentifier,
    ACTIONS(19), 1,
      sym__mat,
    ACTIONS(21), 1,
      aux_sym_number_token1,
    STATE(72), 1,
      sym_number,
    STATE(135), 1,
      sym_range,
    STATE(148), 3,
      sym__expression,
      sym_primary_expression,
      sym_assignment_expression,
    STATE(57), 7,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
  [171] = 8,
    ACTIONS(15), 1,
      sym_stringidentifier,
    ACTIONS(17), 1,
      sym_numberidentifier,
    ACTIONS(19), 1,
      sym__mat,
    ACTIONS(21), 1,
      aux_sym_number_token1,
    STATE(72), 1,
      sym_number,
    STATE(134), 1,
      sym_range,
    STATE(148), 3,
      sym__expression,
      sym_primary_expression,
      sym_assignment_expression,
    STATE(57), 7,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
  [204] = 8,
    ACTIONS(15), 1,
      sym_stringidentifier,
    ACTIONS(17), 1,
      sym_numberidentifier,
    ACTIONS(19), 1,
      sym__mat,
    ACTIONS(21), 1,
      aux_sym_number_token1,
    STATE(72), 1,
      sym_number,
    STATE(151), 1,
      sym_range,
    STATE(124), 3,
      sym__expression,
      sym_primary_expression,
      sym_assignment_expression,
    STATE(57), 7,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
  [237] = 8,
    ACTIONS(15), 1,
      sym_stringidentifier,
    ACTIONS(17), 1,
      sym_numberidentifier,
    ACTIONS(19), 1,
      sym__mat,
    ACTIONS(21), 1,
      aux_sym_number_token1,
    STATE(72), 1,
      sym_number,
    STATE(151), 1,
      sym_range,
    STATE(148), 3,
      sym__expression,
      sym_primary_expression,
      sym_assignment_expression,
    STATE(57), 7,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
  [270] = 11,
    ACTIONS(23), 1,
      sym_line_number,
    ACTIONS(25), 1,
      sym_label,
    ACTIONS(27), 1,
      anon_sym_def,
    ACTIONS(33), 1,
      aux_sym_let_statement_token1,
    ACTIONS(35), 1,
      aux_sym_print_statement_token1,
    ACTIONS(37), 1,
      anon_sym_EQ,
    ACTIONS(39), 1,
      anon_sym_fnend,
    STATE(93), 1,
      sym_statement,
    STATE(30), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(100), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(113), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [309] = 7,
    ACTIONS(15), 1,
      sym_stringidentifier,
    ACTIONS(17), 1,
      sym_numberidentifier,
    ACTIONS(19), 1,
      sym__mat,
    ACTIONS(21), 1,
      aux_sym_number_token1,
    STATE(72), 1,
      sym_number,
    STATE(108), 3,
      sym__expression,
      sym_primary_expression,
      sym_assignment_expression,
    STATE(57), 7,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
  [339] = 7,
    ACTIONS(15), 1,
      sym_stringidentifier,
    ACTIONS(17), 1,
      sym_numberidentifier,
    ACTIONS(19), 1,
      sym__mat,
    ACTIONS(21), 1,
      aux_sym_number_token1,
    STATE(72), 1,
      sym_number,
    STATE(130), 3,
      sym__expression,
      sym_primary_expression,
      sym_assignment_expression,
    STATE(57), 7,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
  [369] = 10,
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
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    STATE(90), 1,
      sym_statement,
    STATE(21), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(101), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(112), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [405] = 4,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    STATE(22), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(45), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(43), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [429] = 7,
    ACTIONS(15), 1,
      sym_stringidentifier,
    ACTIONS(17), 1,
      sym_numberidentifier,
    ACTIONS(19), 1,
      sym__mat,
    ACTIONS(21), 1,
      aux_sym_number_token1,
    STATE(72), 1,
      sym_number,
    STATE(68), 3,
      sym__expression,
      sym_primary_expression,
      sym_assignment_expression,
    STATE(57), 7,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
  [459] = 7,
    ACTIONS(15), 1,
      sym_stringidentifier,
    ACTIONS(17), 1,
      sym_numberidentifier,
    ACTIONS(19), 1,
      sym__mat,
    ACTIONS(21), 1,
      aux_sym_number_token1,
    STATE(72), 1,
      sym_number,
    STATE(139), 3,
      sym__expression,
      sym_primary_expression,
      sym_assignment_expression,
    STATE(57), 7,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
  [489] = 10,
    ACTIONS(49), 1,
      sym_line_number,
    ACTIONS(52), 1,
      sym_label,
    ACTIONS(55), 1,
      anon_sym_def,
    ACTIONS(58), 1,
      anon_sym_fnend,
    ACTIONS(60), 1,
      aux_sym_let_statement_token1,
    ACTIONS(63), 1,
      aux_sym_print_statement_token1,
    STATE(93), 1,
      sym_statement,
    STATE(17), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(100), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(113), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [525] = 7,
    ACTIONS(66), 1,
      sym_stringidentifier,
    ACTIONS(68), 1,
      sym_numberidentifier,
    ACTIONS(70), 1,
      sym__mat,
    ACTIONS(72), 1,
      aux_sym_number_token1,
    STATE(89), 1,
      sym_number,
    STATE(96), 3,
      sym__expression,
      sym_primary_expression,
      sym_assignment_expression,
    STATE(71), 7,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
  [555] = 7,
    ACTIONS(66), 1,
      sym_stringidentifier,
    ACTIONS(68), 1,
      sym_numberidentifier,
    ACTIONS(70), 1,
      sym__mat,
    ACTIONS(72), 1,
      aux_sym_number_token1,
    STATE(89), 1,
      sym_number,
    STATE(79), 3,
      sym__expression,
      sym_primary_expression,
      sym_assignment_expression,
    STATE(71), 7,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
  [585] = 7,
    ACTIONS(66), 1,
      sym_stringidentifier,
    ACTIONS(68), 1,
      sym_numberidentifier,
    ACTIONS(70), 1,
      sym__mat,
    ACTIONS(72), 1,
      aux_sym_number_token1,
    STATE(89), 1,
      sym_number,
    STATE(81), 3,
      sym__expression,
      sym_primary_expression,
      sym_assignment_expression,
    STATE(71), 7,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
  [615] = 10,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 1,
      sym_line_number,
    ACTIONS(79), 1,
      sym_label,
    ACTIONS(82), 1,
      anon_sym_def,
    ACTIONS(85), 1,
      aux_sym_let_statement_token1,
    ACTIONS(88), 1,
      aux_sym_print_statement_token1,
    STATE(90), 1,
      sym_statement,
    STATE(21), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(101), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(112), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [651] = 4,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    STATE(26), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(93), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(91), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [675] = 7,
    ACTIONS(66), 1,
      sym_stringidentifier,
    ACTIONS(68), 1,
      sym_numberidentifier,
    ACTIONS(70), 1,
      sym__mat,
    ACTIONS(72), 1,
      aux_sym_number_token1,
    STATE(89), 1,
      sym_number,
    STATE(88), 3,
      sym__expression,
      sym_primary_expression,
      sym_assignment_expression,
    STATE(71), 7,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
  [705] = 7,
    ACTIONS(15), 1,
      sym_stringidentifier,
    ACTIONS(17), 1,
      sym_numberidentifier,
    ACTIONS(19), 1,
      sym__mat,
    ACTIONS(21), 1,
      aux_sym_number_token1,
    STATE(72), 1,
      sym_number,
    STATE(75), 3,
      sym__expression,
      sym_primary_expression,
      sym_assignment_expression,
    STATE(57), 7,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
  [735] = 10,
    ACTIONS(23), 1,
      sym_line_number,
    ACTIONS(25), 1,
      sym_label,
    ACTIONS(27), 1,
      anon_sym_def,
    ACTIONS(33), 1,
      aux_sym_let_statement_token1,
    ACTIONS(35), 1,
      aux_sym_print_statement_token1,
    ACTIONS(95), 1,
      anon_sym_fnend,
    STATE(93), 1,
      sym_statement,
    STATE(17), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(100), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(113), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [771] = 4,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    STATE(26), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(99), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(97), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [795] = 7,
    ACTIONS(15), 1,
      sym_stringidentifier,
    ACTIONS(17), 1,
      sym_numberidentifier,
    ACTIONS(19), 1,
      sym__mat,
    ACTIONS(21), 1,
      aux_sym_number_token1,
    STATE(72), 1,
      sym_number,
    STATE(140), 3,
      sym__expression,
      sym_primary_expression,
      sym_assignment_expression,
    STATE(57), 7,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
  [825] = 7,
    ACTIONS(66), 1,
      sym_stringidentifier,
    ACTIONS(68), 1,
      sym_numberidentifier,
    ACTIONS(70), 1,
      sym__mat,
    ACTIONS(72), 1,
      aux_sym_number_token1,
    STATE(89), 1,
      sym_number,
    STATE(111), 3,
      sym__expression,
      sym_primary_expression,
      sym_assignment_expression,
    STATE(71), 7,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
  [855] = 7,
    ACTIONS(15), 1,
      sym_stringidentifier,
    ACTIONS(17), 1,
      sym_numberidentifier,
    ACTIONS(19), 1,
      sym__mat,
    ACTIONS(21), 1,
      aux_sym_number_token1,
    STATE(72), 1,
      sym_number,
    STATE(145), 3,
      sym__expression,
      sym_primary_expression,
      sym_assignment_expression,
    STATE(57), 7,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
  [885] = 10,
    ACTIONS(23), 1,
      sym_line_number,
    ACTIONS(25), 1,
      sym_label,
    ACTIONS(27), 1,
      anon_sym_def,
    ACTIONS(33), 1,
      aux_sym_let_statement_token1,
    ACTIONS(35), 1,
      aux_sym_print_statement_token1,
    ACTIONS(104), 1,
      anon_sym_fnend,
    STATE(93), 1,
      sym_statement,
    STATE(17), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(100), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(113), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [921] = 7,
    ACTIONS(15), 1,
      sym_stringidentifier,
    ACTIONS(17), 1,
      sym_numberidentifier,
    ACTIONS(19), 1,
      sym__mat,
    ACTIONS(21), 1,
      aux_sym_number_token1,
    STATE(72), 1,
      sym_number,
    STATE(87), 3,
      sym__expression,
      sym_primary_expression,
      sym_assignment_expression,
    STATE(57), 7,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
  [951] = 7,
    ACTIONS(15), 1,
      sym_stringidentifier,
    ACTIONS(17), 1,
      sym_numberidentifier,
    ACTIONS(19), 1,
      sym__mat,
    ACTIONS(21), 1,
      aux_sym_number_token1,
    STATE(72), 1,
      sym_number,
    STATE(97), 3,
      sym__expression,
      sym_primary_expression,
      sym_assignment_expression,
    STATE(57), 7,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
  [981] = 4,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    STATE(40), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(93), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(91), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1004] = 4,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(110), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(108), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1027] = 4,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(116), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(114), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1050] = 4,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    STATE(61), 1,
      sym_dimension,
    ACTIONS(120), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(118), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1073] = 4,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    STATE(39), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(124), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(122), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1096] = 4,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(128), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(126), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1119] = 4,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(116), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(114), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1142] = 4,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    STATE(40), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(99), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(97), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1165] = 4,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    STATE(42), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(138), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(136), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1188] = 4,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(144), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(142), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1211] = 4,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    STATE(33), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(45), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(43), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1234] = 4,
    ACTIONS(146), 1,
      anon_sym_LPAREN,
    STATE(44), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(128), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(126), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1256] = 4,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    STATE(53), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(138), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(136), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1278] = 2,
    ACTIONS(153), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(151), 9,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1296] = 2,
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
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1314] = 4,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    STATE(44), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(116), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(114), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1336] = 4,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    STATE(48), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(124), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(122), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1358] = 2,
    ACTIONS(163), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(161), 9,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1376] = 3,
    ACTIONS(169), 1,
      anon_sym_DOT,
    ACTIONS(167), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(165), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1396] = 3,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(171), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1416] = 4,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    STATE(44), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(144), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(142), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1438] = 4,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    STATE(74), 1,
      sym_dimension,
    ACTIONS(120), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(118), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1460] = 4,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    STATE(44), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(110), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(108), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1482] = 4,
    ACTIONS(159), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(116), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(114), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1504] = 3,
    ACTIONS(181), 1,
      anon_sym_EQ,
    ACTIONS(179), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(177), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1523] = 2,
    ACTIONS(153), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(151), 9,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1540] = 2,
    ACTIONS(163), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(161), 9,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1557] = 2,
    ACTIONS(185), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(183), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1574] = 2,
    ACTIONS(189), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(187), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1591] = 2,
    ACTIONS(193), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(191), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1608] = 2,
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
      anon_sym_EQ,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1625] = 2,
    ACTIONS(197), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(195), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1642] = 3,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(173), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(171), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1661] = 3,
    ACTIONS(201), 1,
      anon_sym_DOT,
    ACTIONS(167), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(165), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1679] = 2,
    ACTIONS(185), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(183), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1695] = 4,
    STATE(76), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(207), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(203), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
    ACTIONS(205), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [1715] = 7,
    ACTIONS(27), 1,
      anon_sym_def,
    ACTIONS(33), 1,
      aux_sym_let_statement_token1,
    ACTIONS(35), 1,
      aux_sym_print_statement_token1,
    ACTIONS(209), 1,
      sym_label,
    STATE(93), 1,
      sym_statement,
    STATE(100), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(106), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [1741] = 7,
    ACTIONS(9), 1,
      anon_sym_def,
    ACTIONS(11), 1,
      aux_sym_let_statement_token1,
    ACTIONS(13), 1,
      aux_sym_print_statement_token1,
    ACTIONS(211), 1,
      sym_label,
    STATE(90), 1,
      sym_statement,
    STATE(101), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(109), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [1767] = 3,
    ACTIONS(213), 1,
      anon_sym_EQ,
    ACTIONS(179), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(177), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1785] = 2,
    ACTIONS(179), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(177), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1801] = 4,
    STATE(78), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(219), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(217), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(215), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [1821] = 2,
    ACTIONS(189), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(187), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1837] = 2,
    ACTIONS(223), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(221), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1853] = 4,
    STATE(80), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(207), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(215), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
    ACTIONS(217), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [1873] = 2,
    ACTIONS(193), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(191), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1889] = 4,
    STATE(78), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(229), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(227), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(225), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [1909] = 4,
    STATE(73), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(219), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(205), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(203), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [1929] = 4,
    STATE(80), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(232), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(225), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
    ACTIONS(227), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [1949] = 2,
    ACTIONS(223), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(221), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1964] = 2,
    ACTIONS(197), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(195), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1979] = 6,
    ACTIONS(235), 1,
      anon_sym_def,
    ACTIONS(237), 1,
      aux_sym_let_statement_token1,
    ACTIONS(239), 1,
      aux_sym_print_statement_token1,
    STATE(90), 1,
      sym_statement,
    STATE(101), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(109), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [2002] = 6,
    ACTIONS(235), 1,
      anon_sym_def,
    ACTIONS(237), 1,
      aux_sym_let_statement_token1,
    ACTIONS(239), 1,
      aux_sym_print_statement_token1,
    STATE(90), 1,
      sym_statement,
    STATE(101), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(114), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [2025] = 6,
    ACTIONS(241), 1,
      anon_sym_def,
    ACTIONS(243), 1,
      aux_sym_let_statement_token1,
    ACTIONS(245), 1,
      aux_sym_print_statement_token1,
    STATE(93), 1,
      sym_statement,
    STATE(100), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(106), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [2048] = 6,
    ACTIONS(241), 1,
      anon_sym_def,
    ACTIONS(243), 1,
      aux_sym_let_statement_token1,
    ACTIONS(245), 1,
      aux_sym_print_statement_token1,
    STATE(93), 1,
      sym_statement,
    STATE(100), 2,
      sym_let_statement,
      sym_print_statement,
    STATE(107), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [2071] = 2,
    ACTIONS(227), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(225), 6,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2086] = 2,
    ACTIONS(227), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(225), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2101] = 2,
    ACTIONS(179), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(177), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [2116] = 4,
    STATE(92), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(249), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(247), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(251), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2134] = 4,
    STATE(91), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(255), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(253), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(258), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2152] = 4,
    STATE(91), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(249), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(260), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(262), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2170] = 4,
    STATE(95), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(247), 2,
      sym_line_number,
      sym_label,
    ACTIONS(264), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(251), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2188] = 4,
    STATE(94), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(253), 2,
      sym_line_number,
      sym_label,
    ACTIONS(266), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(258), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2206] = 4,
    STATE(94), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(260), 2,
      sym_line_number,
      sym_label,
    ACTIONS(264), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(262), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2224] = 2,
    ACTIONS(271), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(269), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [2237] = 2,
    ACTIONS(269), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
    ACTIONS(271), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2250] = 2,
    ACTIONS(258), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
    ACTIONS(253), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [2263] = 2,
    ACTIONS(253), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
    ACTIONS(258), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2276] = 2,
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
  [2289] = 2,
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
  [2302] = 2,
    ACTIONS(277), 3,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
    ACTIONS(279), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2314] = 2,
    ACTIONS(281), 3,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
    ACTIONS(283), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2326] = 2,
    ACTIONS(285), 3,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
    ACTIONS(287), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2338] = 2,
    ACTIONS(289), 3,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
    ACTIONS(291), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2350] = 2,
    ACTIONS(293), 2,
      sym_line_number,
      sym_label,
    ACTIONS(295), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2361] = 2,
    ACTIONS(297), 2,
      sym_line_number,
      sym_label,
    ACTIONS(299), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2372] = 2,
    ACTIONS(301), 2,
      sym_line_number,
      sym_label,
    ACTIONS(303), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2383] = 2,
    ACTIONS(293), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(295), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2394] = 2,
    ACTIONS(305), 2,
      sym_line_number,
      sym_label,
    ACTIONS(307), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2405] = 2,
    ACTIONS(301), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(303), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2416] = 2,
    ACTIONS(309), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(311), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2427] = 2,
    ACTIONS(309), 2,
      sym_line_number,
      sym_label,
    ACTIONS(311), 4,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2438] = 2,
    ACTIONS(297), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(299), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2449] = 2,
    ACTIONS(305), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
    ACTIONS(307), 3,
      anon_sym_def,
      aux_sym_let_statement_token1,
      aux_sym_print_statement_token1,
  [2460] = 4,
    ACTIONS(237), 1,
      aux_sym_let_statement_token1,
    ACTIONS(239), 1,
      aux_sym_print_statement_token1,
    STATE(98), 1,
      sym_statement,
    STATE(101), 2,
      sym_let_statement,
      sym_print_statement,
  [2474] = 4,
    ACTIONS(243), 1,
      aux_sym_let_statement_token1,
    ACTIONS(245), 1,
      aux_sym_print_statement_token1,
    STATE(99), 1,
      sym_statement,
    STATE(100), 2,
      sym_let_statement,
      sym_print_statement,
  [2488] = 4,
    ACTIONS(313), 1,
      anon_sym_STAR,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    STATE(103), 1,
      sym_parameter_list,
    STATE(141), 1,
      sym_function_length,
  [2501] = 3,
    ACTIONS(317), 1,
      sym_string_function_name,
    ACTIONS(319), 1,
      sym_numeric_function_name,
    STATE(4), 2,
      sym_string_function_definition,
      sym_numeric_function_definition,
  [2512] = 3,
    ACTIONS(317), 1,
      sym_string_function_name,
    ACTIONS(319), 1,
      sym_numeric_function_name,
    STATE(10), 2,
      sym_string_function_definition,
      sym_numeric_function_definition,
  [2523] = 4,
    ACTIONS(21), 1,
      aux_sym_number_token1,
    ACTIONS(321), 1,
      anon_sym_STAR,
    ACTIONS(323), 1,
      anon_sym_RPAREN,
    STATE(156), 1,
      sym_number,
  [2536] = 4,
    ACTIONS(325), 1,
      anon_sym_COLON,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    STATE(136), 1,
      aux_sym_numberelement_repeat1,
  [2549] = 4,
    ACTIONS(21), 1,
      aux_sym_number_token1,
    ACTIONS(331), 1,
      anon_sym_STAR,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
    STATE(158), 1,
      sym_number,
  [2562] = 4,
    ACTIONS(325), 1,
      anon_sym_COLON,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      aux_sym_numberelement_repeat1,
  [2575] = 3,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      aux_sym_numberelement_repeat1,
  [2585] = 3,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    ACTIONS(339), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      aux_sym_numberelement_repeat1,
  [2595] = 3,
    ACTIONS(341), 1,
      sym_identifier,
    ACTIONS(343), 1,
      anon_sym_AMP,
    STATE(154), 1,
      sym_parameter,
  [2605] = 3,
    ACTIONS(345), 1,
      anon_sym_RPAREN,
    ACTIONS(347), 1,
      anon_sym_COMMA,
    STATE(132), 1,
      aux_sym_dimension_repeat1,
  [2615] = 3,
    ACTIONS(349), 1,
      anon_sym_RPAREN,
    ACTIONS(351), 1,
      anon_sym_COMMA,
    STATE(129), 1,
      aux_sym_numberelement_repeat1,
  [2625] = 3,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    ACTIONS(354), 1,
      anon_sym_RPAREN,
    STATE(126), 1,
      aux_sym_numberelement_repeat1,
  [2635] = 3,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      aux_sym_numberelement_repeat1,
  [2645] = 3,
    ACTIONS(358), 1,
      anon_sym_RPAREN,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    STATE(132), 1,
      aux_sym_dimension_repeat1,
  [2655] = 3,
    ACTIONS(21), 1,
      aux_sym_number_token1,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
    STATE(158), 1,
      sym_number,
  [2665] = 3,
    ACTIONS(347), 1,
      anon_sym_COMMA,
    ACTIONS(363), 1,
      anon_sym_RPAREN,
    STATE(128), 1,
      aux_sym_dimension_repeat1,
  [2675] = 3,
    ACTIONS(347), 1,
      anon_sym_COMMA,
    ACTIONS(365), 1,
      anon_sym_RPAREN,
    STATE(137), 1,
      aux_sym_dimension_repeat1,
  [2685] = 3,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    ACTIONS(367), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      aux_sym_numberelement_repeat1,
  [2695] = 3,
    ACTIONS(347), 1,
      anon_sym_COMMA,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      aux_sym_dimension_repeat1,
  [2705] = 3,
    ACTIONS(21), 1,
      aux_sym_number_token1,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    STATE(152), 1,
      sym_number,
  [2715] = 3,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    ACTIONS(373), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      aux_sym_numberelement_repeat1,
  [2725] = 1,
    ACTIONS(349), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2730] = 2,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    STATE(102), 1,
      sym_parameter_list,
  [2737] = 2,
    ACTIONS(21), 1,
      aux_sym_number_token1,
    STATE(150), 1,
      sym_number,
  [2744] = 2,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
    STATE(105), 1,
      sym_parameter_list,
  [2751] = 1,
    ACTIONS(358), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2756] = 1,
    ACTIONS(375), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2761] = 2,
    ACTIONS(377), 1,
      sym_stringidentifier,
    ACTIONS(379), 1,
      sym_numberidentifier,
  [2768] = 2,
    ACTIONS(381), 1,
      sym_stringidentifier,
    ACTIONS(383), 1,
      sym_numberidentifier,
  [2775] = 1,
    ACTIONS(325), 1,
      anon_sym_COLON,
  [2779] = 1,
    ACTIONS(385), 1,
      aux_sym_number_token1,
  [2783] = 1,
    ACTIONS(387), 1,
      anon_sym_LPAREN,
  [2787] = 1,
    ACTIONS(389), 1,
      anon_sym_RPAREN,
  [2791] = 1,
    ACTIONS(391), 1,
      anon_sym_RPAREN,
  [2795] = 1,
    ACTIONS(393), 1,
      sym_identifier,
  [2799] = 1,
    ACTIONS(395), 1,
      anon_sym_RPAREN,
  [2803] = 1,
    ACTIONS(397), 1,
      aux_sym_number_token1,
  [2807] = 1,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
  [2811] = 1,
    ACTIONS(399), 1,
      anon_sym_RPAREN,
  [2815] = 1,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
  [2819] = 1,
    ACTIONS(401), 1,
      aux_sym_let_statement_token2,
  [2823] = 1,
    ACTIONS(403), 1,
      aux_sym_let_statement_token2,
  [2827] = 1,
    ACTIONS(405), 1,
      aux_sym_let_statement_token2,
  [2831] = 1,
    ACTIONS(407), 1,
      ts_builtin_sym_end,
  [2835] = 1,
    ACTIONS(409), 1,
      aux_sym_let_statement_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 105,
  [SMALL_STATE(6)] = 138,
  [SMALL_STATE(7)] = 171,
  [SMALL_STATE(8)] = 204,
  [SMALL_STATE(9)] = 237,
  [SMALL_STATE(10)] = 270,
  [SMALL_STATE(11)] = 309,
  [SMALL_STATE(12)] = 339,
  [SMALL_STATE(13)] = 369,
  [SMALL_STATE(14)] = 405,
  [SMALL_STATE(15)] = 429,
  [SMALL_STATE(16)] = 459,
  [SMALL_STATE(17)] = 489,
  [SMALL_STATE(18)] = 525,
  [SMALL_STATE(19)] = 555,
  [SMALL_STATE(20)] = 585,
  [SMALL_STATE(21)] = 615,
  [SMALL_STATE(22)] = 651,
  [SMALL_STATE(23)] = 675,
  [SMALL_STATE(24)] = 705,
  [SMALL_STATE(25)] = 735,
  [SMALL_STATE(26)] = 771,
  [SMALL_STATE(27)] = 795,
  [SMALL_STATE(28)] = 825,
  [SMALL_STATE(29)] = 855,
  [SMALL_STATE(30)] = 885,
  [SMALL_STATE(31)] = 921,
  [SMALL_STATE(32)] = 951,
  [SMALL_STATE(33)] = 981,
  [SMALL_STATE(34)] = 1004,
  [SMALL_STATE(35)] = 1027,
  [SMALL_STATE(36)] = 1050,
  [SMALL_STATE(37)] = 1073,
  [SMALL_STATE(38)] = 1096,
  [SMALL_STATE(39)] = 1119,
  [SMALL_STATE(40)] = 1142,
  [SMALL_STATE(41)] = 1165,
  [SMALL_STATE(42)] = 1188,
  [SMALL_STATE(43)] = 1211,
  [SMALL_STATE(44)] = 1234,
  [SMALL_STATE(45)] = 1256,
  [SMALL_STATE(46)] = 1278,
  [SMALL_STATE(47)] = 1296,
  [SMALL_STATE(48)] = 1314,
  [SMALL_STATE(49)] = 1336,
  [SMALL_STATE(50)] = 1358,
  [SMALL_STATE(51)] = 1376,
  [SMALL_STATE(52)] = 1396,
  [SMALL_STATE(53)] = 1416,
  [SMALL_STATE(54)] = 1438,
  [SMALL_STATE(55)] = 1460,
  [SMALL_STATE(56)] = 1482,
  [SMALL_STATE(57)] = 1504,
  [SMALL_STATE(58)] = 1523,
  [SMALL_STATE(59)] = 1540,
  [SMALL_STATE(60)] = 1557,
  [SMALL_STATE(61)] = 1574,
  [SMALL_STATE(62)] = 1591,
  [SMALL_STATE(63)] = 1608,
  [SMALL_STATE(64)] = 1625,
  [SMALL_STATE(65)] = 1642,
  [SMALL_STATE(66)] = 1661,
  [SMALL_STATE(67)] = 1679,
  [SMALL_STATE(68)] = 1695,
  [SMALL_STATE(69)] = 1715,
  [SMALL_STATE(70)] = 1741,
  [SMALL_STATE(71)] = 1767,
  [SMALL_STATE(72)] = 1785,
  [SMALL_STATE(73)] = 1801,
  [SMALL_STATE(74)] = 1821,
  [SMALL_STATE(75)] = 1837,
  [SMALL_STATE(76)] = 1853,
  [SMALL_STATE(77)] = 1873,
  [SMALL_STATE(78)] = 1889,
  [SMALL_STATE(79)] = 1909,
  [SMALL_STATE(80)] = 1929,
  [SMALL_STATE(81)] = 1949,
  [SMALL_STATE(82)] = 1964,
  [SMALL_STATE(83)] = 1979,
  [SMALL_STATE(84)] = 2002,
  [SMALL_STATE(85)] = 2025,
  [SMALL_STATE(86)] = 2048,
  [SMALL_STATE(87)] = 2071,
  [SMALL_STATE(88)] = 2086,
  [SMALL_STATE(89)] = 2101,
  [SMALL_STATE(90)] = 2116,
  [SMALL_STATE(91)] = 2134,
  [SMALL_STATE(92)] = 2152,
  [SMALL_STATE(93)] = 2170,
  [SMALL_STATE(94)] = 2188,
  [SMALL_STATE(95)] = 2206,
  [SMALL_STATE(96)] = 2224,
  [SMALL_STATE(97)] = 2237,
  [SMALL_STATE(98)] = 2250,
  [SMALL_STATE(99)] = 2263,
  [SMALL_STATE(100)] = 2276,
  [SMALL_STATE(101)] = 2289,
  [SMALL_STATE(102)] = 2302,
  [SMALL_STATE(103)] = 2314,
  [SMALL_STATE(104)] = 2326,
  [SMALL_STATE(105)] = 2338,
  [SMALL_STATE(106)] = 2350,
  [SMALL_STATE(107)] = 2361,
  [SMALL_STATE(108)] = 2372,
  [SMALL_STATE(109)] = 2383,
  [SMALL_STATE(110)] = 2394,
  [SMALL_STATE(111)] = 2405,
  [SMALL_STATE(112)] = 2416,
  [SMALL_STATE(113)] = 2427,
  [SMALL_STATE(114)] = 2438,
  [SMALL_STATE(115)] = 2449,
  [SMALL_STATE(116)] = 2460,
  [SMALL_STATE(117)] = 2474,
  [SMALL_STATE(118)] = 2488,
  [SMALL_STATE(119)] = 2501,
  [SMALL_STATE(120)] = 2512,
  [SMALL_STATE(121)] = 2523,
  [SMALL_STATE(122)] = 2536,
  [SMALL_STATE(123)] = 2549,
  [SMALL_STATE(124)] = 2562,
  [SMALL_STATE(125)] = 2575,
  [SMALL_STATE(126)] = 2585,
  [SMALL_STATE(127)] = 2595,
  [SMALL_STATE(128)] = 2605,
  [SMALL_STATE(129)] = 2615,
  [SMALL_STATE(130)] = 2625,
  [SMALL_STATE(131)] = 2635,
  [SMALL_STATE(132)] = 2645,
  [SMALL_STATE(133)] = 2655,
  [SMALL_STATE(134)] = 2665,
  [SMALL_STATE(135)] = 2675,
  [SMALL_STATE(136)] = 2685,
  [SMALL_STATE(137)] = 2695,
  [SMALL_STATE(138)] = 2705,
  [SMALL_STATE(139)] = 2715,
  [SMALL_STATE(140)] = 2725,
  [SMALL_STATE(141)] = 2730,
  [SMALL_STATE(142)] = 2737,
  [SMALL_STATE(143)] = 2744,
  [SMALL_STATE(144)] = 2751,
  [SMALL_STATE(145)] = 2756,
  [SMALL_STATE(146)] = 2761,
  [SMALL_STATE(147)] = 2768,
  [SMALL_STATE(148)] = 2775,
  [SMALL_STATE(149)] = 2779,
  [SMALL_STATE(150)] = 2783,
  [SMALL_STATE(151)] = 2787,
  [SMALL_STATE(152)] = 2791,
  [SMALL_STATE(153)] = 2795,
  [SMALL_STATE(154)] = 2799,
  [SMALL_STATE(155)] = 2803,
  [SMALL_STATE(156)] = 2807,
  [SMALL_STATE(157)] = 2811,
  [SMALL_STATE(158)] = 2815,
  [SMALL_STATE(159)] = 2819,
  [SMALL_STATE(160)] = 2823,
  [SMALL_STATE(161)] = 2827,
  [SMALL_STATE(162)] = 2831,
  [SMALL_STATE(163)] = 2835,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringarray, 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringarray, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(85),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(119),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(159),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(160),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(70),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(83),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(120),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(161),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(163),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringarray, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringarray, 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stringarray_repeat1, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stringarray_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringarray_repeat1, 2), SHIFT_REPEAT(6),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringelement, 6),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringelement, 6),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringelement, 5),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringelement, 5),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numberarray, 2),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numberarray, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringelement, 4),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringelement, 4),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stringelement_repeat1, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stringelement_repeat1, 2),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringelement_repeat1, 2), SHIFT_REPEAT(9),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringarray_repeat1, 2), SHIFT_REPEAT(7),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringreference, 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringreference, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringreference, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringreference, 2),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringelement_repeat1, 2), SHIFT_REPEAT(5),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 4),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dimension, 4),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stringelement_repeat1, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stringelement_repeat1, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dimension, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numberreference, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numberreference, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primary_expression, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primary_expression, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numberelement, 4),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numberelement, 4),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numberarray, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numberarray, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numberelement, 5),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numberelement, 5),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 3),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_statement, 3),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print_statement, 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_statement, 4),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print_statement, 4),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_expression, 3, .production_id = 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_expression, 3, .production_id = 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_print_statement_repeat1, 2),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_print_statement_repeat1, 2),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT_REPEAT(23),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT_REPEAT(31),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_line_statement, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_line_statement, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__multi_line_statement_repeat1, 2),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multi_line_statement_repeat1, 2), SHIFT_REPEAT(116),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__multi_line_statement_repeat1, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_line_statement, 2),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_line_statement, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multi_line_statement_repeat1, 2), SHIFT_REPEAT(117),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 3),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_statement, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_function_definition, 3),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_function_definition, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_function_definition, 2),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_function_definition, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_function_definition, 2),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_function_definition, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 3),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numberelement_repeat1, 2),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numberelement_repeat1, 2), SHIFT_REPEAT(27),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dimension_repeat1, 2),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimension_repeat1, 2), SHIFT_REPEAT(2),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_length, 2, .production_id = 1),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [407] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
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
