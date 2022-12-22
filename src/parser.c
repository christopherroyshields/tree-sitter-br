#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 150
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 56
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

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
  aux_sym_print_statement_token1 = 16,
  aux_sym_print_statement_token2 = 17,
  anon_sym_COMMA = 18,
  anon_sym_SEMI = 19,
  sym_stringidentifier = 20,
  sym_numberidentifier = 21,
  sym__mat = 22,
  aux_sym_number_token1 = 23,
  anon_sym_DOT = 24,
  sym_source_file = 25,
  sym_line = 26,
  sym__single_line_statement = 27,
  sym__multi_line_statement = 28,
  sym_statement = 29,
  sym__definition = 30,
  sym_function_definition = 31,
  sym_string_function_definition = 32,
  sym_numeric_function_definition = 33,
  sym_function_length = 34,
  sym_parameter_list = 35,
  sym_parameter = 36,
  sym_print_statement = 37,
  sym__expression = 38,
  sym__reference = 39,
  sym_numberelement = 40,
  sym_stringelement = 41,
  sym_stringarray = 42,
  sym_dimension = 43,
  sym_stringreference = 44,
  sym_numberreference = 45,
  sym_range = 46,
  sym_numberarray = 47,
  sym_number = 48,
  aux_sym_source_file_repeat1 = 49,
  aux_sym__multi_line_statement_repeat1 = 50,
  aux_sym_print_statement_repeat1 = 51,
  aux_sym_numberelement_repeat1 = 52,
  aux_sym_stringelement_repeat1 = 53,
  aux_sym_stringarray_repeat1 = 54,
  aux_sym_dimension_repeat1 = 55,
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
  [aux_sym_print_statement_token1] = "print_statement_token1",
  [aux_sym_print_statement_token2] = "print_statement_token2",
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
  [sym_print_statement] = "print_statement",
  [sym__expression] = "_expression",
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
  [aux_sym_print_statement_token1] = aux_sym_print_statement_token1,
  [aux_sym_print_statement_token2] = aux_sym_print_statement_token2,
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
  [sym_print_statement] = sym_print_statement,
  [sym__expression] = sym__expression,
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
  [aux_sym_print_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_print_statement_token2] = {
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
  [sym_print_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
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
  field_length = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_length] = "length",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_length, 1},
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
      if (eof) ADVANCE(34);
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '&') ADVANCE(49);
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == ')') ADVANCE(48);
      if (lookahead == '*') ADVANCE(45);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == ';') ADVANCE(55);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == 'd') ADVANCE(64);
      if (lookahead == 'f') ADVANCE(68);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(70);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(35);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(2);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == 'd') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == 'e') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == 'e') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == 'f') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == 'n') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == 'n') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(17);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(39);
      END_STATE();
    case 19:
      if (lookahead == 'f') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 20:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 23:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 25:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(50);
      END_STATE();
    case 26:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      END_STATE();
    case 27:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 28:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 33:
      if (eof) ADVANCE(34);
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == ')') ADVANCE(48);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == ';') ADVANCE(55);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == 'd') ADVANCE(6);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym__multi_line_statement_token1);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_line_number);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_label);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == '$') ADVANCE(62);
      if (lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_fnend);
      if (lookahead == '$') ADVANCE(62);
      if (lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_fnend);
      if (lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_numeric_function_name);
      if (lookahead == '$') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_print_statement_token1);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_print_statement_token1);
      if (lookahead == '$') ADVANCE(62);
      if (lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_print_statement_token1);
      if (lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_print_statement_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_stringidentifier);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(56);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(56);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__mat);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(62);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == 'd') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(62);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == 'e') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(62);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == 'e') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(62);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == 'f') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(62);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == 'n') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(62);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == 'n') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(62);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(62);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(62);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(62);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(62);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(62);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(62);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(62);
      if (lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(62);
      if (lookahead == 'n') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 81:
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
  [1] = {.lex_state = 33},
  [2] = {.lex_state = 22},
  [3] = {.lex_state = 22},
  [4] = {.lex_state = 33},
  [5] = {.lex_state = 22},
  [6] = {.lex_state = 22},
  [7] = {.lex_state = 22},
  [8] = {.lex_state = 22},
  [9] = {.lex_state = 33},
  [10] = {.lex_state = 22},
  [11] = {.lex_state = 33},
  [12] = {.lex_state = 22},
  [13] = {.lex_state = 33},
  [14] = {.lex_state = 22},
  [15] = {.lex_state = 33},
  [16] = {.lex_state = 22},
  [17] = {.lex_state = 33},
  [18] = {.lex_state = 22},
  [19] = {.lex_state = 33},
  [20] = {.lex_state = 22},
  [21] = {.lex_state = 22},
  [22] = {.lex_state = 22},
  [23] = {.lex_state = 33},
  [24] = {.lex_state = 33},
  [25] = {.lex_state = 22},
  [26] = {.lex_state = 22},
  [27] = {.lex_state = 33},
  [28] = {.lex_state = 22},
  [29] = {.lex_state = 33},
  [30] = {.lex_state = 33},
  [31] = {.lex_state = 33},
  [32] = {.lex_state = 33},
  [33] = {.lex_state = 33},
  [34] = {.lex_state = 33},
  [35] = {.lex_state = 33},
  [36] = {.lex_state = 33},
  [37] = {.lex_state = 33},
  [38] = {.lex_state = 33},
  [39] = {.lex_state = 33},
  [40] = {.lex_state = 33},
  [41] = {.lex_state = 33},
  [42] = {.lex_state = 33},
  [43] = {.lex_state = 33},
  [44] = {.lex_state = 33},
  [45] = {.lex_state = 33},
  [46] = {.lex_state = 33},
  [47] = {.lex_state = 33},
  [48] = {.lex_state = 33},
  [49] = {.lex_state = 33},
  [50] = {.lex_state = 33},
  [51] = {.lex_state = 33},
  [52] = {.lex_state = 33},
  [53] = {.lex_state = 33},
  [54] = {.lex_state = 33},
  [55] = {.lex_state = 33},
  [56] = {.lex_state = 33},
  [57] = {.lex_state = 33},
  [58] = {.lex_state = 33},
  [59] = {.lex_state = 33},
  [60] = {.lex_state = 33},
  [61] = {.lex_state = 33},
  [62] = {.lex_state = 33},
  [63] = {.lex_state = 33},
  [64] = {.lex_state = 33},
  [65] = {.lex_state = 33},
  [66] = {.lex_state = 33},
  [67] = {.lex_state = 33},
  [68] = {.lex_state = 33},
  [69] = {.lex_state = 33},
  [70] = {.lex_state = 33},
  [71] = {.lex_state = 33},
  [72] = {.lex_state = 33},
  [73] = {.lex_state = 33},
  [74] = {.lex_state = 33},
  [75] = {.lex_state = 33},
  [76] = {.lex_state = 33},
  [77] = {.lex_state = 16},
  [78] = {.lex_state = 33},
  [79] = {.lex_state = 33},
  [80] = {.lex_state = 16},
  [81] = {.lex_state = 33},
  [82] = {.lex_state = 16},
  [83] = {.lex_state = 16},
  [84] = {.lex_state = 33},
  [85] = {.lex_state = 33},
  [86] = {.lex_state = 33},
  [87] = {.lex_state = 33},
  [88] = {.lex_state = 33},
  [89] = {.lex_state = 33},
  [90] = {.lex_state = 33},
  [91] = {.lex_state = 33},
  [92] = {.lex_state = 33},
  [93] = {.lex_state = 33},
  [94] = {.lex_state = 33},
  [95] = {.lex_state = 33},
  [96] = {.lex_state = 33},
  [97] = {.lex_state = 33},
  [98] = {.lex_state = 33},
  [99] = {.lex_state = 33},
  [100] = {.lex_state = 33},
  [101] = {.lex_state = 33},
  [102] = {.lex_state = 33},
  [103] = {.lex_state = 33},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 19},
  [109] = {.lex_state = 19},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 33},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 33},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 32},
  [134] = {.lex_state = 32},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 3},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 20},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 20},
  [149] = {.lex_state = 0},
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
    [aux_sym_print_statement_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym__mat] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(149),
    [sym_line] = STATE(13),
    [sym__single_line_statement] = STATE(100),
    [sym__multi_line_statement] = STATE(100),
    [sym_statement] = STATE(78),
    [sym__definition] = STATE(100),
    [sym_function_definition] = STATE(100),
    [sym_print_statement] = STATE(87),
    [aux_sym_source_file_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_line_number] = ACTIONS(5),
    [sym_label] = ACTIONS(7),
    [anon_sym_def] = ACTIONS(9),
    [aux_sym_print_statement_token1] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(13), 1,
      sym_stringidentifier,
    ACTIONS(15), 1,
      sym_numberidentifier,
    ACTIONS(17), 1,
      sym__mat,
    ACTIONS(19), 1,
      aux_sym_number_token1,
    STATE(138), 1,
      sym_range,
    STATE(136), 9,
      sym__expression,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
      sym_number,
  [27] = 6,
    ACTIONS(13), 1,
      sym_stringidentifier,
    ACTIONS(15), 1,
      sym_numberidentifier,
    ACTIONS(17), 1,
      sym__mat,
    ACTIONS(19), 1,
      aux_sym_number_token1,
    STATE(145), 1,
      sym_range,
    STATE(110), 9,
      sym__expression,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
      sym_number,
  [54] = 10,
    ACTIONS(21), 1,
      sym_line_number,
    ACTIONS(23), 1,
      sym_label,
    ACTIONS(25), 1,
      anon_sym_def,
    ACTIONS(27), 1,
      anon_sym_EQ,
    ACTIONS(29), 1,
      anon_sym_fnend,
    ACTIONS(31), 1,
      aux_sym_print_statement_token1,
    STATE(84), 1,
      sym_statement,
    STATE(88), 1,
      sym_print_statement,
    STATE(23), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(99), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [89] = 6,
    ACTIONS(13), 1,
      sym_stringidentifier,
    ACTIONS(15), 1,
      sym_numberidentifier,
    ACTIONS(17), 1,
      sym__mat,
    ACTIONS(19), 1,
      aux_sym_number_token1,
    STATE(127), 1,
      sym_range,
    STATE(136), 9,
      sym__expression,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
      sym_number,
  [116] = 6,
    ACTIONS(13), 1,
      sym_stringidentifier,
    ACTIONS(15), 1,
      sym_numberidentifier,
    ACTIONS(17), 1,
      sym__mat,
    ACTIONS(19), 1,
      aux_sym_number_token1,
    STATE(138), 1,
      sym_range,
    STATE(106), 9,
      sym__expression,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
      sym_number,
  [143] = 6,
    ACTIONS(13), 1,
      sym_stringidentifier,
    ACTIONS(15), 1,
      sym_numberidentifier,
    ACTIONS(17), 1,
      sym__mat,
    ACTIONS(19), 1,
      aux_sym_number_token1,
    STATE(131), 1,
      sym_range,
    STATE(136), 9,
      sym__expression,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
      sym_number,
  [170] = 6,
    ACTIONS(13), 1,
      sym_stringidentifier,
    ACTIONS(15), 1,
      sym_numberidentifier,
    ACTIONS(17), 1,
      sym__mat,
    ACTIONS(19), 1,
      aux_sym_number_token1,
    STATE(145), 1,
      sym_range,
    STATE(136), 9,
      sym__expression,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
      sym_number,
  [197] = 10,
    ACTIONS(21), 1,
      sym_line_number,
    ACTIONS(23), 1,
      sym_label,
    ACTIONS(25), 1,
      anon_sym_def,
    ACTIONS(31), 1,
      aux_sym_print_statement_token1,
    ACTIONS(33), 1,
      anon_sym_EQ,
    ACTIONS(35), 1,
      anon_sym_fnend,
    STATE(84), 1,
      sym_statement,
    STATE(88), 1,
      sym_print_statement,
    STATE(27), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(99), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [232] = 6,
    ACTIONS(13), 1,
      sym_stringidentifier,
    ACTIONS(15), 1,
      sym_numberidentifier,
    ACTIONS(17), 1,
      sym__mat,
    ACTIONS(19), 1,
      aux_sym_number_token1,
    STATE(120), 1,
      sym_range,
    STATE(136), 9,
      sym__expression,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
      sym_number,
  [259] = 4,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    STATE(15), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(39), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(37), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [281] = 5,
    ACTIONS(13), 1,
      sym_stringidentifier,
    ACTIONS(15), 1,
      sym_numberidentifier,
    ACTIONS(17), 1,
      sym__mat,
    ACTIONS(19), 1,
      aux_sym_number_token1,
    STATE(57), 9,
      sym__expression,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
      sym_number,
  [305] = 9,
    ACTIONS(5), 1,
      sym_line_number,
    ACTIONS(7), 1,
      sym_label,
    ACTIONS(9), 1,
      anon_sym_def,
    ACTIONS(11), 1,
      aux_sym_print_statement_token1,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    STATE(78), 1,
      sym_statement,
    STATE(87), 1,
      sym_print_statement,
    STATE(19), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(100), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [337] = 5,
    ACTIONS(45), 1,
      sym_stringidentifier,
    ACTIONS(47), 1,
      sym_numberidentifier,
    ACTIONS(49), 1,
      sym__mat,
    ACTIONS(51), 1,
      aux_sym_number_token1,
    STATE(62), 9,
      sym__expression,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
      sym_number,
  [361] = 4,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    STATE(24), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(55), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(53), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [383] = 5,
    ACTIONS(13), 1,
      sym_stringidentifier,
    ACTIONS(15), 1,
      sym_numberidentifier,
    ACTIONS(17), 1,
      sym__mat,
    ACTIONS(19), 1,
      aux_sym_number_token1,
    STATE(132), 9,
      sym__expression,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
      sym_number,
  [407] = 9,
    ACTIONS(57), 1,
      sym_line_number,
    ACTIONS(60), 1,
      sym_label,
    ACTIONS(63), 1,
      anon_sym_def,
    ACTIONS(66), 1,
      anon_sym_fnend,
    ACTIONS(68), 1,
      aux_sym_print_statement_token1,
    STATE(84), 1,
      sym_statement,
    STATE(88), 1,
      sym_print_statement,
    STATE(17), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(99), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [439] = 5,
    ACTIONS(13), 1,
      sym_stringidentifier,
    ACTIONS(15), 1,
      sym_numberidentifier,
    ACTIONS(17), 1,
      sym__mat,
    ACTIONS(19), 1,
      aux_sym_number_token1,
    STATE(116), 9,
      sym__expression,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
      sym_number,
  [463] = 9,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
      sym_line_number,
    ACTIONS(76), 1,
      sym_label,
    ACTIONS(79), 1,
      anon_sym_def,
    ACTIONS(82), 1,
      aux_sym_print_statement_token1,
    STATE(78), 1,
      sym_statement,
    STATE(87), 1,
      sym_print_statement,
    STATE(19), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(100), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [495] = 5,
    ACTIONS(45), 1,
      sym_stringidentifier,
    ACTIONS(47), 1,
      sym_numberidentifier,
    ACTIONS(49), 1,
      sym__mat,
    ACTIONS(51), 1,
      aux_sym_number_token1,
    STATE(68), 9,
      sym__expression,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
      sym_number,
  [519] = 5,
    ACTIONS(13), 1,
      sym_stringidentifier,
    ACTIONS(15), 1,
      sym_numberidentifier,
    ACTIONS(17), 1,
      sym__mat,
    ACTIONS(19), 1,
      aux_sym_number_token1,
    STATE(97), 9,
      sym__expression,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
      sym_number,
  [543] = 5,
    ACTIONS(13), 1,
      sym_stringidentifier,
    ACTIONS(15), 1,
      sym_numberidentifier,
    ACTIONS(17), 1,
      sym__mat,
    ACTIONS(19), 1,
      aux_sym_number_token1,
    STATE(125), 9,
      sym__expression,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
      sym_number,
  [567] = 9,
    ACTIONS(21), 1,
      sym_line_number,
    ACTIONS(23), 1,
      sym_label,
    ACTIONS(25), 1,
      anon_sym_def,
    ACTIONS(31), 1,
      aux_sym_print_statement_token1,
    ACTIONS(85), 1,
      anon_sym_fnend,
    STATE(84), 1,
      sym_statement,
    STATE(88), 1,
      sym_print_statement,
    STATE(17), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(99), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [599] = 4,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    STATE(24), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(89), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(87), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [621] = 5,
    ACTIONS(45), 1,
      sym_stringidentifier,
    ACTIONS(47), 1,
      sym_numberidentifier,
    ACTIONS(49), 1,
      sym__mat,
    ACTIONS(51), 1,
      aux_sym_number_token1,
    STATE(95), 9,
      sym__expression,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
      sym_number,
  [645] = 5,
    ACTIONS(13), 1,
      sym_stringidentifier,
    ACTIONS(15), 1,
      sym_numberidentifier,
    ACTIONS(17), 1,
      sym__mat,
    ACTIONS(19), 1,
      aux_sym_number_token1,
    STATE(129), 9,
      sym__expression,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
      sym_number,
  [669] = 9,
    ACTIONS(21), 1,
      sym_line_number,
    ACTIONS(23), 1,
      sym_label,
    ACTIONS(25), 1,
      anon_sym_def,
    ACTIONS(31), 1,
      aux_sym_print_statement_token1,
    ACTIONS(94), 1,
      anon_sym_fnend,
    STATE(84), 1,
      sym_statement,
    STATE(88), 1,
      sym_print_statement,
    STATE(17), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(99), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [701] = 5,
    ACTIONS(13), 1,
      sym_stringidentifier,
    ACTIONS(15), 1,
      sym_numberidentifier,
    ACTIONS(17), 1,
      sym__mat,
    ACTIONS(19), 1,
      aux_sym_number_token1,
    STATE(74), 9,
      sym__expression,
      sym__reference,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberreference,
      sym_numberarray,
      sym_number,
  [725] = 4,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    STATE(29), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(87), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [746] = 4,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(101), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(99), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [767] = 4,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    STATE(39), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(101), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(99), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [788] = 4,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    STATE(29), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(53), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [809] = 4,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(109), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(107), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [830] = 4,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(113), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(111), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [851] = 3,
    ACTIONS(121), 1,
      anon_sym_DOT,
    ACTIONS(119), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(117), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [870] = 4,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    STATE(39), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(125), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(123), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [891] = 4,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      sym_dimension,
    ACTIONS(129), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(127), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [912] = 4,
    ACTIONS(103), 1,
      anon_sym_LPAREN,
    STATE(39), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(133), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(131), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [933] = 4,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    STATE(39), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(137), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(135), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [954] = 4,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    STATE(32), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(37), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [975] = 4,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    STATE(52), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(133), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(131), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [995] = 2,
    ACTIONS(146), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(144), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1011] = 2,
    ACTIONS(150), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(148), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1027] = 3,
    ACTIONS(156), 1,
      anon_sym_LPAREN,
    ACTIONS(154), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(152), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1045] = 2,
    ACTIONS(160), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(158), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1061] = 4,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(101), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(99), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1081] = 4,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    STATE(52), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(125), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(123), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1101] = 4,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    STATE(70), 1,
      sym_dimension,
    ACTIONS(129), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(127), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1121] = 4,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    STATE(52), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(101), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(99), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1141] = 4,
    ACTIONS(162), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(113), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(111), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1161] = 4,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    STATE(49), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(109), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(107), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1181] = 4,
    ACTIONS(164), 1,
      anon_sym_LPAREN,
    STATE(52), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(137), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(135), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1201] = 2,
    ACTIONS(169), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(167), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1217] = 2,
    ACTIONS(173), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(171), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1232] = 3,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(154), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(152), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1249] = 2,
    ACTIONS(169), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(167), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1264] = 4,
    STATE(61), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(181), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(179), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(177), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [1283] = 4,
    STATE(58), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(187), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(185), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(183), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [1302] = 4,
    STATE(66), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(192), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(194), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(190), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [1321] = 2,
    ACTIONS(146), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(144), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1336] = 4,
    STATE(58), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(181), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(192), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(190), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [1355] = 4,
    STATE(59), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(179), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(194), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(177), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [1374] = 2,
    ACTIONS(160), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(158), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1389] = 2,
    ACTIONS(198), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(196), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1404] = 3,
    ACTIONS(200), 1,
      anon_sym_DOT,
    ACTIONS(119), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(117), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1421] = 4,
    STATE(66), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(185), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(202), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(183), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [1440] = 2,
    ACTIONS(207), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(205), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1455] = 2,
    ACTIONS(185), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(183), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1469] = 2,
    ACTIONS(150), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(148), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1483] = 2,
    ACTIONS(198), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(196), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1497] = 2,
    ACTIONS(173), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(171), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1511] = 2,
    ACTIONS(207), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(205), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1525] = 6,
    ACTIONS(9), 1,
      anon_sym_def,
    ACTIONS(11), 1,
      aux_sym_print_statement_token1,
    ACTIONS(209), 1,
      sym_label,
    STATE(78), 1,
      sym_statement,
    STATE(87), 1,
      sym_print_statement,
    STATE(94), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [1547] = 2,
    ACTIONS(185), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(183), 6,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1561] = 6,
    ACTIONS(25), 1,
      anon_sym_def,
    ACTIONS(31), 1,
      aux_sym_print_statement_token1,
    ACTIONS(211), 1,
      sym_label,
    STATE(84), 1,
      sym_statement,
    STATE(88), 1,
      sym_print_statement,
    STATE(98), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [1583] = 4,
    STATE(79), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(215), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(217), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(213), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
  [1600] = 5,
    ACTIONS(219), 1,
      anon_sym_def,
    ACTIONS(221), 1,
      aux_sym_print_statement_token1,
    STATE(84), 1,
      sym_statement,
    STATE(88), 1,
      sym_print_statement,
    STATE(103), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [1619] = 4,
    STATE(76), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(215), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(225), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(223), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
  [1636] = 4,
    STATE(79), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(229), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(232), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(227), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
  [1653] = 5,
    ACTIONS(234), 1,
      anon_sym_def,
    ACTIONS(236), 1,
      aux_sym_print_statement_token1,
    STATE(78), 1,
      sym_statement,
    STATE(87), 1,
      sym_print_statement,
    STATE(96), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [1672] = 4,
    STATE(81), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(227), 2,
      sym_line_number,
      sym_label,
    ACTIONS(238), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(232), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
  [1689] = 5,
    ACTIONS(219), 1,
      anon_sym_def,
    ACTIONS(221), 1,
      aux_sym_print_statement_token1,
    STATE(84), 1,
      sym_statement,
    STATE(88), 1,
      sym_print_statement,
    STATE(98), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [1708] = 5,
    ACTIONS(234), 1,
      anon_sym_def,
    ACTIONS(236), 1,
      aux_sym_print_statement_token1,
    STATE(78), 1,
      sym_statement,
    STATE(87), 1,
      sym_print_statement,
    STATE(94), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [1727] = 4,
    STATE(85), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(223), 2,
      sym_line_number,
      sym_label,
    ACTIONS(241), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(225), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
  [1744] = 4,
    STATE(81), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(213), 2,
      sym_line_number,
      sym_label,
    ACTIONS(241), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(217), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
  [1761] = 2,
    ACTIONS(232), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(227), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [1773] = 2,
    ACTIONS(245), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(243), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [1785] = 2,
    ACTIONS(245), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(243), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [1797] = 2,
    ACTIONS(232), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(227), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [1809] = 2,
    ACTIONS(247), 3,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
    ACTIONS(249), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
  [1820] = 2,
    ACTIONS(251), 3,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
    ACTIONS(253), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
  [1831] = 2,
    ACTIONS(255), 3,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
    ACTIONS(257), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
  [1842] = 2,
    ACTIONS(259), 3,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
    ACTIONS(261), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
  [1853] = 2,
    ACTIONS(265), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(263), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
  [1863] = 2,
    ACTIONS(269), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(267), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
  [1873] = 2,
    ACTIONS(273), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(271), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
  [1883] = 2,
    ACTIONS(267), 2,
      sym_line_number,
      sym_label,
    ACTIONS(269), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
  [1893] = 2,
    ACTIONS(263), 2,
      sym_line_number,
      sym_label,
    ACTIONS(265), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
  [1903] = 2,
    ACTIONS(275), 2,
      sym_line_number,
      sym_label,
    ACTIONS(277), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
  [1913] = 2,
    ACTIONS(277), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(275), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
  [1923] = 2,
    ACTIONS(281), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(279), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
  [1933] = 2,
    ACTIONS(279), 2,
      sym_line_number,
      sym_label,
    ACTIONS(281), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
  [1943] = 2,
    ACTIONS(271), 2,
      sym_line_number,
      sym_label,
    ACTIONS(273), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
  [1953] = 4,
    ACTIONS(19), 1,
      aux_sym_number_token1,
    ACTIONS(283), 1,
      anon_sym_STAR,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    STATE(147), 1,
      sym_number,
  [1966] = 4,
    ACTIONS(19), 1,
      aux_sym_number_token1,
    ACTIONS(287), 1,
      anon_sym_STAR,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
    STATE(144), 1,
      sym_number,
  [1979] = 4,
    ACTIONS(291), 1,
      anon_sym_COLON,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
    ACTIONS(295), 1,
      anon_sym_COMMA,
    STATE(117), 1,
      aux_sym_numberelement_repeat1,
  [1992] = 4,
    ACTIONS(297), 1,
      anon_sym_STAR,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    STATE(92), 1,
      sym_parameter_list,
    STATE(135), 1,
      sym_function_length,
  [2005] = 3,
    ACTIONS(301), 1,
      sym_string_function_name,
    ACTIONS(303), 1,
      sym_numeric_function_name,
    STATE(9), 2,
      sym_string_function_definition,
      sym_numeric_function_definition,
  [2016] = 3,
    ACTIONS(301), 1,
      sym_string_function_name,
    ACTIONS(303), 1,
      sym_numeric_function_name,
    STATE(4), 2,
      sym_string_function_definition,
      sym_numeric_function_definition,
  [2027] = 4,
    ACTIONS(291), 1,
      anon_sym_COLON,
    ACTIONS(295), 1,
      anon_sym_COMMA,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
    STATE(122), 1,
      aux_sym_numberelement_repeat1,
  [2040] = 3,
    ACTIONS(295), 1,
      anon_sym_COMMA,
    ACTIONS(307), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      aux_sym_numberelement_repeat1,
  [2050] = 3,
    ACTIONS(19), 1,
      aux_sym_number_token1,
    ACTIONS(309), 1,
      anon_sym_RPAREN,
    STATE(140), 1,
      sym_number,
  [2060] = 3,
    ACTIONS(221), 1,
      aux_sym_print_statement_token1,
    STATE(86), 1,
      sym_statement,
    STATE(88), 1,
      sym_print_statement,
  [2070] = 3,
    ACTIONS(311), 1,
      anon_sym_RPAREN,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    STATE(118), 1,
      aux_sym_dimension_repeat1,
  [2080] = 3,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
    ACTIONS(317), 1,
      anon_sym_COMMA,
    STATE(115), 1,
      aux_sym_numberelement_repeat1,
  [2090] = 3,
    ACTIONS(295), 1,
      anon_sym_COMMA,
    ACTIONS(320), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      aux_sym_numberelement_repeat1,
  [2100] = 3,
    ACTIONS(295), 1,
      anon_sym_COMMA,
    ACTIONS(322), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      aux_sym_numberelement_repeat1,
  [2110] = 3,
    ACTIONS(324), 1,
      anon_sym_RPAREN,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    STATE(118), 1,
      aux_sym_dimension_repeat1,
  [2120] = 3,
    ACTIONS(236), 1,
      aux_sym_print_statement_token1,
    STATE(87), 1,
      sym_print_statement,
    STATE(89), 1,
      sym_statement,
  [2130] = 3,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    ACTIONS(329), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      aux_sym_dimension_repeat1,
  [2140] = 3,
    ACTIONS(295), 1,
      anon_sym_COMMA,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      aux_sym_numberelement_repeat1,
  [2150] = 3,
    ACTIONS(295), 1,
      anon_sym_COMMA,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      aux_sym_numberelement_repeat1,
  [2160] = 3,
    ACTIONS(19), 1,
      aux_sym_number_token1,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    STATE(147), 1,
      sym_number,
  [2170] = 3,
    ACTIONS(335), 1,
      sym_identifier,
    ACTIONS(337), 1,
      anon_sym_AMP,
    STATE(142), 1,
      sym_parameter,
  [2180] = 3,
    ACTIONS(295), 1,
      anon_sym_COMMA,
    ACTIONS(339), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      aux_sym_numberelement_repeat1,
  [2190] = 3,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    ACTIONS(341), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      aux_sym_dimension_repeat1,
  [2200] = 3,
    ACTIONS(313), 1,
      anon_sym_COMMA,
    ACTIONS(343), 1,
      anon_sym_RPAREN,
    STATE(126), 1,
      aux_sym_dimension_repeat1,
  [2210] = 2,
    ACTIONS(19), 1,
      aux_sym_number_token1,
    STATE(137), 1,
      sym_number,
  [2217] = 1,
    ACTIONS(315), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2222] = 2,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    STATE(91), 1,
      sym_parameter_list,
  [2229] = 1,
    ACTIONS(324), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2234] = 1,
    ACTIONS(345), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2239] = 2,
    ACTIONS(347), 1,
      sym_stringidentifier,
    ACTIONS(349), 1,
      sym_numberidentifier,
  [2246] = 2,
    ACTIONS(351), 1,
      sym_stringidentifier,
    ACTIONS(353), 1,
      sym_numberidentifier,
  [2253] = 2,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
    STATE(93), 1,
      sym_parameter_list,
  [2260] = 1,
    ACTIONS(291), 1,
      anon_sym_COLON,
  [2264] = 1,
    ACTIONS(355), 1,
      anon_sym_LPAREN,
  [2268] = 1,
    ACTIONS(357), 1,
      anon_sym_RPAREN,
  [2272] = 1,
    ACTIONS(359), 1,
      aux_sym_number_token1,
  [2276] = 1,
    ACTIONS(361), 1,
      anon_sym_RPAREN,
  [2280] = 1,
    ACTIONS(363), 1,
      sym_identifier,
  [2284] = 1,
    ACTIONS(365), 1,
      anon_sym_RPAREN,
  [2288] = 1,
    ACTIONS(367), 1,
      aux_sym_number_token1,
  [2292] = 1,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
  [2296] = 1,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
  [2300] = 1,
    ACTIONS(371), 1,
      aux_sym_print_statement_token2,
  [2304] = 1,
    ACTIONS(309), 1,
      anon_sym_RPAREN,
  [2308] = 1,
    ACTIONS(373), 1,
      aux_sym_print_statement_token2,
  [2312] = 1,
    ACTIONS(375), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 89,
  [SMALL_STATE(6)] = 116,
  [SMALL_STATE(7)] = 143,
  [SMALL_STATE(8)] = 170,
  [SMALL_STATE(9)] = 197,
  [SMALL_STATE(10)] = 232,
  [SMALL_STATE(11)] = 259,
  [SMALL_STATE(12)] = 281,
  [SMALL_STATE(13)] = 305,
  [SMALL_STATE(14)] = 337,
  [SMALL_STATE(15)] = 361,
  [SMALL_STATE(16)] = 383,
  [SMALL_STATE(17)] = 407,
  [SMALL_STATE(18)] = 439,
  [SMALL_STATE(19)] = 463,
  [SMALL_STATE(20)] = 495,
  [SMALL_STATE(21)] = 519,
  [SMALL_STATE(22)] = 543,
  [SMALL_STATE(23)] = 567,
  [SMALL_STATE(24)] = 599,
  [SMALL_STATE(25)] = 621,
  [SMALL_STATE(26)] = 645,
  [SMALL_STATE(27)] = 669,
  [SMALL_STATE(28)] = 701,
  [SMALL_STATE(29)] = 725,
  [SMALL_STATE(30)] = 746,
  [SMALL_STATE(31)] = 767,
  [SMALL_STATE(32)] = 788,
  [SMALL_STATE(33)] = 809,
  [SMALL_STATE(34)] = 830,
  [SMALL_STATE(35)] = 851,
  [SMALL_STATE(36)] = 870,
  [SMALL_STATE(37)] = 891,
  [SMALL_STATE(38)] = 912,
  [SMALL_STATE(39)] = 933,
  [SMALL_STATE(40)] = 954,
  [SMALL_STATE(41)] = 975,
  [SMALL_STATE(42)] = 995,
  [SMALL_STATE(43)] = 1011,
  [SMALL_STATE(44)] = 1027,
  [SMALL_STATE(45)] = 1045,
  [SMALL_STATE(46)] = 1061,
  [SMALL_STATE(47)] = 1081,
  [SMALL_STATE(48)] = 1101,
  [SMALL_STATE(49)] = 1121,
  [SMALL_STATE(50)] = 1141,
  [SMALL_STATE(51)] = 1161,
  [SMALL_STATE(52)] = 1181,
  [SMALL_STATE(53)] = 1201,
  [SMALL_STATE(54)] = 1217,
  [SMALL_STATE(55)] = 1232,
  [SMALL_STATE(56)] = 1249,
  [SMALL_STATE(57)] = 1264,
  [SMALL_STATE(58)] = 1283,
  [SMALL_STATE(59)] = 1302,
  [SMALL_STATE(60)] = 1321,
  [SMALL_STATE(61)] = 1336,
  [SMALL_STATE(62)] = 1355,
  [SMALL_STATE(63)] = 1374,
  [SMALL_STATE(64)] = 1389,
  [SMALL_STATE(65)] = 1404,
  [SMALL_STATE(66)] = 1421,
  [SMALL_STATE(67)] = 1440,
  [SMALL_STATE(68)] = 1455,
  [SMALL_STATE(69)] = 1469,
  [SMALL_STATE(70)] = 1483,
  [SMALL_STATE(71)] = 1497,
  [SMALL_STATE(72)] = 1511,
  [SMALL_STATE(73)] = 1525,
  [SMALL_STATE(74)] = 1547,
  [SMALL_STATE(75)] = 1561,
  [SMALL_STATE(76)] = 1583,
  [SMALL_STATE(77)] = 1600,
  [SMALL_STATE(78)] = 1619,
  [SMALL_STATE(79)] = 1636,
  [SMALL_STATE(80)] = 1653,
  [SMALL_STATE(81)] = 1672,
  [SMALL_STATE(82)] = 1689,
  [SMALL_STATE(83)] = 1708,
  [SMALL_STATE(84)] = 1727,
  [SMALL_STATE(85)] = 1744,
  [SMALL_STATE(86)] = 1761,
  [SMALL_STATE(87)] = 1773,
  [SMALL_STATE(88)] = 1785,
  [SMALL_STATE(89)] = 1797,
  [SMALL_STATE(90)] = 1809,
  [SMALL_STATE(91)] = 1820,
  [SMALL_STATE(92)] = 1831,
  [SMALL_STATE(93)] = 1842,
  [SMALL_STATE(94)] = 1853,
  [SMALL_STATE(95)] = 1863,
  [SMALL_STATE(96)] = 1873,
  [SMALL_STATE(97)] = 1883,
  [SMALL_STATE(98)] = 1893,
  [SMALL_STATE(99)] = 1903,
  [SMALL_STATE(100)] = 1913,
  [SMALL_STATE(101)] = 1923,
  [SMALL_STATE(102)] = 1933,
  [SMALL_STATE(103)] = 1943,
  [SMALL_STATE(104)] = 1953,
  [SMALL_STATE(105)] = 1966,
  [SMALL_STATE(106)] = 1979,
  [SMALL_STATE(107)] = 1992,
  [SMALL_STATE(108)] = 2005,
  [SMALL_STATE(109)] = 2016,
  [SMALL_STATE(110)] = 2027,
  [SMALL_STATE(111)] = 2040,
  [SMALL_STATE(112)] = 2050,
  [SMALL_STATE(113)] = 2060,
  [SMALL_STATE(114)] = 2070,
  [SMALL_STATE(115)] = 2080,
  [SMALL_STATE(116)] = 2090,
  [SMALL_STATE(117)] = 2100,
  [SMALL_STATE(118)] = 2110,
  [SMALL_STATE(119)] = 2120,
  [SMALL_STATE(120)] = 2130,
  [SMALL_STATE(121)] = 2140,
  [SMALL_STATE(122)] = 2150,
  [SMALL_STATE(123)] = 2160,
  [SMALL_STATE(124)] = 2170,
  [SMALL_STATE(125)] = 2180,
  [SMALL_STATE(126)] = 2190,
  [SMALL_STATE(127)] = 2200,
  [SMALL_STATE(128)] = 2210,
  [SMALL_STATE(129)] = 2217,
  [SMALL_STATE(130)] = 2222,
  [SMALL_STATE(131)] = 2229,
  [SMALL_STATE(132)] = 2234,
  [SMALL_STATE(133)] = 2239,
  [SMALL_STATE(134)] = 2246,
  [SMALL_STATE(135)] = 2253,
  [SMALL_STATE(136)] = 2260,
  [SMALL_STATE(137)] = 2264,
  [SMALL_STATE(138)] = 2268,
  [SMALL_STATE(139)] = 2272,
  [SMALL_STATE(140)] = 2276,
  [SMALL_STATE(141)] = 2280,
  [SMALL_STATE(142)] = 2284,
  [SMALL_STATE(143)] = 2288,
  [SMALL_STATE(144)] = 2292,
  [SMALL_STATE(145)] = 2296,
  [SMALL_STATE(146)] = 2300,
  [SMALL_STATE(147)] = 2304,
  [SMALL_STATE(148)] = 2308,
  [SMALL_STATE(149)] = 2312,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringarray, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringarray, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringarray, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringarray, 3),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(82),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(109),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(146),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(83),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(108),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(148),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stringarray_repeat1, 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stringarray_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringarray_repeat1, 2), SHIFT_REPEAT(5),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringarray_repeat1, 2), SHIFT_REPEAT(10),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringelement, 5),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringelement, 5),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringelement, 4),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringelement, 4),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringreference, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringreference, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringreference, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringreference, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numberarray, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numberarray, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringelement, 6),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringelement, 6),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stringelement_repeat1, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stringelement_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringelement_repeat1, 2), SHIFT_REPEAT(2),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 3),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dimension, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numberreference, 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numberreference, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stringelement_repeat1, 3),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stringelement_repeat1, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringelement_repeat1, 2), SHIFT_REPEAT(8),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 4),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dimension, 4),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numberelement, 4),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numberelement, 4),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_statement, 3),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print_statement, 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_print_statement_repeat1, 2),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_print_statement_repeat1, 2),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT_REPEAT(28),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_statement, 4),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print_statement, 4),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numberarray, 3),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numberarray, 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT_REPEAT(20),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numberelement, 5),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numberelement, 5),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_line_statement, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_line_statement, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_line_statement, 1),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_line_statement, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__multi_line_statement_repeat1, 2),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multi_line_statement_repeat1, 2), SHIFT_REPEAT(119),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__multi_line_statement_repeat1, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multi_line_statement_repeat1, 2), SHIFT_REPEAT(113),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_function_definition, 2),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_function_definition, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_function_definition, 2),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_function_definition, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_function_definition, 3),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_function_definition, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 3),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 3),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numberelement_repeat1, 2),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numberelement_repeat1, 2), SHIFT_REPEAT(26),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dimension_repeat1, 2),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimension_repeat1, 2), SHIFT_REPEAT(7),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_length, 2, .production_id = 1),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [375] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
