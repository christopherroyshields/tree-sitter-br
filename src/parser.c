#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 109
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4
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
  sym__statement = 29,
  sym__definition = 30,
  sym_function_definition = 31,
  sym_string_function_definition = 32,
  sym_numeric_function_definition = 33,
  sym_function_length = 34,
  sym_parameter_list = 35,
  sym_parameter = 36,
  sym_print_statement = 37,
  sym__expression = 38,
  sym_reference = 39,
  sym_stringarray = 40,
  sym_dimension = 41,
  sym_range = 42,
  sym_numberarray = 43,
  sym_number = 44,
  aux_sym_source_file_repeat1 = 45,
  aux_sym__multi_line_statement_repeat1 = 46,
  aux_sym_print_statement_repeat1 = 47,
  aux_sym_stringarray_repeat1 = 48,
  aux_sym_dimension_repeat1 = 49,
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
  [sym__statement] = "_statement",
  [sym__definition] = "_definition",
  [sym_function_definition] = "function_definition",
  [sym_string_function_definition] = "string_function_definition",
  [sym_numeric_function_definition] = "numeric_function_definition",
  [sym_function_length] = "function_length",
  [sym_parameter_list] = "parameter_list",
  [sym_parameter] = "parameter",
  [sym_print_statement] = "print_statement",
  [sym__expression] = "_expression",
  [sym_reference] = "reference",
  [sym_stringarray] = "stringarray",
  [sym_dimension] = "dimension",
  [sym_range] = "range",
  [sym_numberarray] = "numberarray",
  [sym_number] = "number",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__multi_line_statement_repeat1] = "_multi_line_statement_repeat1",
  [aux_sym_print_statement_repeat1] = "print_statement_repeat1",
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
  [sym__statement] = sym__statement,
  [sym__definition] = sym__definition,
  [sym_function_definition] = sym_function_definition,
  [sym_string_function_definition] = sym_string_function_definition,
  [sym_numeric_function_definition] = sym_numeric_function_definition,
  [sym_function_length] = sym_function_length,
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameter] = sym_parameter,
  [sym_print_statement] = sym_print_statement,
  [sym__expression] = sym__expression,
  [sym_reference] = sym_reference,
  [sym_stringarray] = sym_stringarray,
  [sym_dimension] = sym_dimension,
  [sym_range] = sym_range,
  [sym_numberarray] = sym_numberarray,
  [sym_number] = sym_number,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__multi_line_statement_repeat1] = aux_sym__multi_line_statement_repeat1,
  [aux_sym_print_statement_repeat1] = aux_sym_print_statement_repeat1,
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
  [sym__statement] = {
    .visible = false,
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
  [sym_reference] = {
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
      if (eof) ADVANCE(36);
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '&') ADVANCE(51);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == '*') ADVANCE(47);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == ':') ADVANCE(38);
      if (lookahead == ';') ADVANCE(57);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == 'd') ADVANCE(63);
      if (lookahead == 'f') ADVANCE(67);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(69);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(37);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(2);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(17);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(22);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(41);
      END_STATE();
    case 19:
      if (lookahead == 'f') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 20:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(60);
      END_STATE();
    case 21:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(21)
      END_STATE();
    case 22:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(20);
      END_STATE();
    case 27:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(52);
      END_STATE();
    case 28:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      END_STATE();
    case 29:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      END_STATE();
    case 30:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 35:
      if (eof) ADVANCE(36);
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == ',') ADVANCE(56);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == ':') ADVANCE(38);
      if (lookahead == ';') ADVANCE(57);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == 'd') ADVANCE(6);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym__multi_line_statement_token1);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_line_number);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_label);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == '$') ADVANCE(61);
      if (lookahead == ':') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == ':') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_fnend);
      if (lookahead == '$') ADVANCE(61);
      if (lookahead == ':') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_fnend);
      if (lookahead == ':') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_numeric_function_name);
      if (lookahead == '$') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_print_statement_token1);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_print_statement_token1);
      if (lookahead == '$') ADVANCE(61);
      if (lookahead == ':') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_print_statement_token1);
      if (lookahead == ':') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_print_statement_token2);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_stringidentifier);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_numberidentifier);
      if (lookahead == '$') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__mat);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(61);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(61);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(61);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == 'e') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(61);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(61);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(61);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(61);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(61);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(61);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(61);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(61);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(61);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(61);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(61);
      if (lookahead == ':') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 80:
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
  [1] = {.lex_state = 35},
  [2] = {.lex_state = 35},
  [3] = {.lex_state = 35},
  [4] = {.lex_state = 35},
  [5] = {.lex_state = 35},
  [6] = {.lex_state = 35},
  [7] = {.lex_state = 35},
  [8] = {.lex_state = 35},
  [9] = {.lex_state = 35},
  [10] = {.lex_state = 35},
  [11] = {.lex_state = 35},
  [12] = {.lex_state = 35},
  [13] = {.lex_state = 35},
  [14] = {.lex_state = 35},
  [15] = {.lex_state = 35},
  [16] = {.lex_state = 35},
  [17] = {.lex_state = 35},
  [18] = {.lex_state = 35},
  [19] = {.lex_state = 35},
  [20] = {.lex_state = 35},
  [21] = {.lex_state = 35},
  [22] = {.lex_state = 35},
  [23] = {.lex_state = 35},
  [24] = {.lex_state = 35},
  [25] = {.lex_state = 35},
  [26] = {.lex_state = 35},
  [27] = {.lex_state = 35},
  [28] = {.lex_state = 35},
  [29] = {.lex_state = 35},
  [30] = {.lex_state = 35},
  [31] = {.lex_state = 35},
  [32] = {.lex_state = 35},
  [33] = {.lex_state = 35},
  [34] = {.lex_state = 35},
  [35] = {.lex_state = 35},
  [36] = {.lex_state = 35},
  [37] = {.lex_state = 35},
  [38] = {.lex_state = 35},
  [39] = {.lex_state = 35},
  [40] = {.lex_state = 16},
  [41] = {.lex_state = 16},
  [42] = {.lex_state = 35},
  [43] = {.lex_state = 16},
  [44] = {.lex_state = 35},
  [45] = {.lex_state = 16},
  [46] = {.lex_state = 35},
  [47] = {.lex_state = 16},
  [48] = {.lex_state = 35},
  [49] = {.lex_state = 16},
  [50] = {.lex_state = 35},
  [51] = {.lex_state = 16},
  [52] = {.lex_state = 16},
  [53] = {.lex_state = 16},
  [54] = {.lex_state = 16},
  [55] = {.lex_state = 16},
  [56] = {.lex_state = 35},
  [57] = {.lex_state = 35},
  [58] = {.lex_state = 16},
  [59] = {.lex_state = 16},
  [60] = {.lex_state = 16},
  [61] = {.lex_state = 35},
  [62] = {.lex_state = 35},
  [63] = {.lex_state = 35},
  [64] = {.lex_state = 35},
  [65] = {.lex_state = 35},
  [66] = {.lex_state = 35},
  [67] = {.lex_state = 35},
  [68] = {.lex_state = 35},
  [69] = {.lex_state = 35},
  [70] = {.lex_state = 35},
  [71] = {.lex_state = 35},
  [72] = {.lex_state = 35},
  [73] = {.lex_state = 35},
  [74] = {.lex_state = 35},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 19},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 19},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 35},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 35},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 34},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 34},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 21},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 21},
  [108] = {.lex_state = 0},
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
    [sym_source_file] = STATE(99),
    [sym_line] = STATE(6),
    [sym__single_line_statement] = STATE(68),
    [sym__multi_line_statement] = STATE(68),
    [sym__statement] = STATE(48),
    [sym__definition] = STATE(68),
    [sym_function_definition] = STATE(68),
    [sym_print_statement] = STATE(48),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_line_number] = ACTIONS(5),
    [sym_label] = ACTIONS(7),
    [anon_sym_def] = ACTIONS(9),
    [aux_sym_print_statement_token1] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(13), 1,
      sym_line_number,
    ACTIONS(15), 1,
      sym_label,
    ACTIONS(17), 1,
      anon_sym_def,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_fnend,
    ACTIONS(23), 1,
      aux_sym_print_statement_token1,
    STATE(11), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(42), 2,
      sym__statement,
      sym_print_statement,
    STATE(72), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [33] = 9,
    ACTIONS(13), 1,
      sym_line_number,
    ACTIONS(15), 1,
      sym_label,
    ACTIONS(17), 1,
      anon_sym_def,
    ACTIONS(23), 1,
      aux_sym_print_statement_token1,
    ACTIONS(25), 1,
      anon_sym_EQ,
    ACTIONS(27), 1,
      anon_sym_fnend,
    STATE(12), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(42), 2,
      sym__statement,
      sym_print_statement,
    STATE(72), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [66] = 8,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      sym_line_number,
    ACTIONS(34), 1,
      sym_label,
    ACTIONS(37), 1,
      anon_sym_def,
    ACTIONS(40), 1,
      aux_sym_print_statement_token1,
    STATE(4), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(48), 2,
      sym__statement,
      sym_print_statement,
    STATE(68), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [96] = 4,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    STATE(5), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(45), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(43), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [118] = 8,
    ACTIONS(5), 1,
      sym_line_number,
    ACTIONS(7), 1,
      sym_label,
    ACTIONS(9), 1,
      anon_sym_def,
    ACTIONS(11), 1,
      aux_sym_print_statement_token1,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    STATE(4), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(48), 2,
      sym__statement,
      sym_print_statement,
    STATE(68), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [148] = 4,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    STATE(5), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(54), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(52), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [170] = 4,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    STATE(5), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(60), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(58), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [192] = 4,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    STATE(7), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(64), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(62), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [214] = 4,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    STATE(8), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(68), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(66), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [236] = 8,
    ACTIONS(13), 1,
      sym_line_number,
    ACTIONS(15), 1,
      sym_label,
    ACTIONS(17), 1,
      anon_sym_def,
    ACTIONS(23), 1,
      aux_sym_print_statement_token1,
    ACTIONS(70), 1,
      anon_sym_fnend,
    STATE(13), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(42), 2,
      sym__statement,
      sym_print_statement,
    STATE(72), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [266] = 8,
    ACTIONS(13), 1,
      sym_line_number,
    ACTIONS(15), 1,
      sym_label,
    ACTIONS(17), 1,
      anon_sym_def,
    ACTIONS(23), 1,
      aux_sym_print_statement_token1,
    ACTIONS(72), 1,
      anon_sym_fnend,
    STATE(13), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(42), 2,
      sym__statement,
      sym_print_statement,
    STATE(72), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [296] = 8,
    ACTIONS(74), 1,
      sym_line_number,
    ACTIONS(77), 1,
      sym_label,
    ACTIONS(80), 1,
      anon_sym_def,
    ACTIONS(83), 1,
      anon_sym_fnend,
    ACTIONS(85), 1,
      aux_sym_print_statement_token1,
    STATE(13), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(42), 2,
      sym__statement,
      sym_print_statement,
    STATE(72), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [326] = 3,
    ACTIONS(92), 1,
      anon_sym_DOT,
    ACTIONS(90), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(88), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [345] = 4,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(60), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    STATE(19), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(58), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [366] = 4,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    STATE(19), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(52), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [387] = 4,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    STATE(16), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(62), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [408] = 4,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(68), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    STATE(15), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(66), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [429] = 4,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    STATE(19), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(43), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [450] = 2,
    ACTIONS(101), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(99), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [466] = 2,
    ACTIONS(105), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(103), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [482] = 2,
    ACTIONS(109), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(107), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [498] = 2,
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
  [513] = 4,
    STATE(24), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(119), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(117), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(115), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [532] = 2,
    ACTIONS(101), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(99), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [547] = 2,
    ACTIONS(105), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(103), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [562] = 4,
    STATE(32), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(126), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(124), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(122), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [581] = 3,
    ACTIONS(128), 1,
      anon_sym_DOT,
    ACTIONS(90), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(88), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [598] = 4,
    STATE(31), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(124), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(130), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(122), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [617] = 4,
    STATE(30), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(117), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(132), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(115), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [636] = 4,
    STATE(30), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(130), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(137), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(135), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [655] = 4,
    STATE(24), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(126), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(137), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(135), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [674] = 5,
    ACTIONS(17), 1,
      anon_sym_def,
    ACTIONS(23), 1,
      aux_sym_print_statement_token1,
    ACTIONS(139), 1,
      sym_label,
    STATE(42), 2,
      sym__statement,
      sym_print_statement,
    STATE(73), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [694] = 2,
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
  [708] = 2,
    ACTIONS(117), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(115), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [722] = 2,
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
  [736] = 5,
    ACTIONS(9), 1,
      anon_sym_def,
    ACTIONS(11), 1,
      aux_sym_print_statement_token1,
    ACTIONS(141), 1,
      sym_label,
    STATE(48), 2,
      sym__statement,
      sym_print_statement,
    STATE(69), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [756] = 2,
    ACTIONS(117), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(115), 6,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [770] = 4,
    STATE(39), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(143), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(146), 2,
      sym_line_number,
      sym_label,
    ACTIONS(148), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
  [787] = 4,
    ACTIONS(150), 1,
      anon_sym_def,
    ACTIONS(152), 1,
      aux_sym_print_statement_token1,
    STATE(48), 2,
      sym__statement,
      sym_print_statement,
    STATE(69), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [804] = 5,
    ACTIONS(154), 1,
      sym__mat,
    ACTIONS(156), 1,
      aux_sym_number_token1,
    STATE(82), 1,
      sym_range,
    STATE(23), 2,
      sym_stringarray,
      sym_numberarray,
    STATE(85), 3,
      sym__expression,
      sym_reference,
      sym_number,
  [823] = 4,
    STATE(44), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(158), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(160), 2,
      sym_line_number,
      sym_label,
    ACTIONS(162), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
  [840] = 5,
    ACTIONS(154), 1,
      sym__mat,
    ACTIONS(156), 1,
      aux_sym_number_token1,
    STATE(92), 1,
      sym_range,
    STATE(23), 2,
      sym_stringarray,
      sym_numberarray,
    STATE(85), 3,
      sym__expression,
      sym_reference,
      sym_number,
  [859] = 4,
    STATE(39), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(158), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(164), 2,
      sym_line_number,
      sym_label,
    ACTIONS(166), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
  [876] = 4,
    ACTIONS(168), 1,
      anon_sym_def,
    ACTIONS(170), 1,
      aux_sym_print_statement_token1,
    STATE(42), 2,
      sym__statement,
      sym_print_statement,
    STATE(65), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [893] = 4,
    STATE(50), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(166), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(172), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(164), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
  [910] = 4,
    ACTIONS(168), 1,
      anon_sym_def,
    ACTIONS(170), 1,
      aux_sym_print_statement_token1,
    STATE(42), 2,
      sym__statement,
      sym_print_statement,
    STATE(73), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [927] = 4,
    STATE(46), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(162), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(172), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(160), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
  [944] = 4,
    ACTIONS(150), 1,
      anon_sym_def,
    ACTIONS(152), 1,
      aux_sym_print_statement_token1,
    STATE(48), 2,
      sym__statement,
      sym_print_statement,
    STATE(71), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [961] = 4,
    STATE(50), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(148), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(174), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(146), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
  [978] = 5,
    ACTIONS(154), 1,
      sym__mat,
    ACTIONS(156), 1,
      aux_sym_number_token1,
    STATE(83), 1,
      sym_range,
    STATE(23), 2,
      sym_stringarray,
      sym_numberarray,
    STATE(85), 3,
      sym__expression,
      sym_reference,
      sym_number,
  [997] = 4,
    ACTIONS(177), 1,
      sym__mat,
    ACTIONS(179), 1,
      aux_sym_number_token1,
    STATE(34), 2,
      sym_stringarray,
      sym_numberarray,
    STATE(35), 3,
      sym__expression,
      sym_reference,
      sym_number,
  [1013] = 4,
    ACTIONS(177), 1,
      sym__mat,
    ACTIONS(179), 1,
      aux_sym_number_token1,
    STATE(34), 2,
      sym_stringarray,
      sym_numberarray,
    STATE(29), 3,
      sym__expression,
      sym_reference,
      sym_number,
  [1029] = 4,
    ACTIONS(154), 1,
      sym__mat,
    ACTIONS(156), 1,
      aux_sym_number_token1,
    STATE(23), 2,
      sym_stringarray,
      sym_numberarray,
    STATE(74), 3,
      sym__expression,
      sym_reference,
      sym_number,
  [1045] = 4,
    ACTIONS(154), 1,
      sym__mat,
    ACTIONS(156), 1,
      aux_sym_number_token1,
    STATE(23), 2,
      sym_stringarray,
      sym_numberarray,
    STATE(38), 3,
      sym__expression,
      sym_reference,
      sym_number,
  [1061] = 2,
    ACTIONS(148), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(146), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [1073] = 2,
    ACTIONS(148), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(146), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [1085] = 4,
    ACTIONS(154), 1,
      sym__mat,
    ACTIONS(156), 1,
      aux_sym_number_token1,
    STATE(23), 2,
      sym_stringarray,
      sym_numberarray,
    STATE(91), 3,
      sym__expression,
      sym_reference,
      sym_number,
  [1101] = 4,
    ACTIONS(177), 1,
      sym__mat,
    ACTIONS(179), 1,
      aux_sym_number_token1,
    STATE(34), 2,
      sym_stringarray,
      sym_numberarray,
    STATE(67), 3,
      sym__expression,
      sym_reference,
      sym_number,
  [1117] = 4,
    ACTIONS(154), 1,
      sym__mat,
    ACTIONS(156), 1,
      aux_sym_number_token1,
    STATE(23), 2,
      sym_stringarray,
      sym_numberarray,
    STATE(27), 3,
      sym__expression,
      sym_reference,
      sym_number,
  [1133] = 2,
    ACTIONS(181), 3,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
    ACTIONS(183), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
  [1144] = 2,
    ACTIONS(185), 3,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
    ACTIONS(187), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
  [1155] = 2,
    ACTIONS(189), 3,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
    ACTIONS(191), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
  [1166] = 2,
    ACTIONS(193), 3,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
    ACTIONS(195), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
  [1177] = 2,
    ACTIONS(197), 2,
      sym_line_number,
      sym_label,
    ACTIONS(199), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
  [1187] = 2,
    ACTIONS(201), 2,
      sym_line_number,
      sym_label,
    ACTIONS(203), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
  [1197] = 2,
    ACTIONS(207), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(205), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
  [1207] = 2,
    ACTIONS(211), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(209), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
  [1217] = 2,
    ACTIONS(215), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(213), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
  [1227] = 2,
    ACTIONS(203), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(201), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
  [1237] = 2,
    ACTIONS(199), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(197), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
  [1247] = 2,
    ACTIONS(209), 2,
      sym_line_number,
      sym_label,
    ACTIONS(211), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
  [1257] = 2,
    ACTIONS(213), 2,
      sym_line_number,
      sym_label,
    ACTIONS(215), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
  [1267] = 2,
    ACTIONS(205), 2,
      sym_line_number,
      sym_label,
    ACTIONS(207), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
  [1277] = 4,
    ACTIONS(156), 1,
      aux_sym_number_token1,
    ACTIONS(217), 1,
      anon_sym_STAR,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      sym_number,
  [1290] = 3,
    ACTIONS(221), 1,
      sym_string_function_name,
    ACTIONS(223), 1,
      sym_numeric_function_name,
    STATE(2), 2,
      sym_string_function_definition,
      sym_numeric_function_definition,
  [1301] = 4,
    ACTIONS(156), 1,
      aux_sym_number_token1,
    ACTIONS(225), 1,
      anon_sym_STAR,
    ACTIONS(227), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      sym_number,
  [1314] = 3,
    ACTIONS(221), 1,
      sym_string_function_name,
    ACTIONS(223), 1,
      sym_numeric_function_name,
    STATE(3), 2,
      sym_string_function_definition,
      sym_numeric_function_definition,
  [1325] = 4,
    ACTIONS(229), 1,
      anon_sym_STAR,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym_parameter_list,
    STATE(97), 1,
      sym_function_length,
  [1338] = 3,
    ACTIONS(156), 1,
      aux_sym_number_token1,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      sym_number,
  [1348] = 3,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    STATE(86), 1,
      aux_sym_dimension_repeat1,
  [1358] = 3,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    ACTIONS(237), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_dimension_repeat1,
  [1368] = 3,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    STATE(90), 1,
      aux_sym_dimension_repeat1,
  [1378] = 3,
    ACTIONS(241), 1,
      sym_identifier,
    ACTIONS(243), 1,
      anon_sym_AMP,
    STATE(108), 1,
      sym_parameter,
  [1388] = 2,
    ACTIONS(245), 1,
      anon_sym_COLON,
    ACTIONS(247), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1396] = 3,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    STATE(86), 1,
      aux_sym_dimension_repeat1,
  [1406] = 2,
    ACTIONS(152), 1,
      aux_sym_print_statement_token1,
    STATE(57), 2,
      sym__statement,
      sym_print_statement,
  [1414] = 3,
    ACTIONS(156), 1,
      aux_sym_number_token1,
    ACTIONS(254), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      sym_number,
  [1424] = 2,
    ACTIONS(170), 1,
      aux_sym_print_statement_token1,
    STATE(56), 2,
      sym__statement,
      sym_print_statement,
  [1432] = 3,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    ACTIONS(256), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      aux_sym_dimension_repeat1,
  [1442] = 1,
    ACTIONS(258), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1447] = 1,
    ACTIONS(249), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1452] = 2,
    ACTIONS(260), 1,
      sym_stringidentifier,
    ACTIONS(262), 1,
      sym_numberidentifier,
  [1459] = 2,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      sym_parameter_list,
  [1466] = 2,
    ACTIONS(264), 1,
      sym_stringidentifier,
    ACTIONS(266), 1,
      sym_numberidentifier,
  [1473] = 2,
    ACTIONS(156), 1,
      aux_sym_number_token1,
    STATE(103), 1,
      sym_number,
  [1480] = 2,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      sym_parameter_list,
  [1487] = 1,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
  [1491] = 1,
    ACTIONS(268), 1,
      ts_builtin_sym_end,
  [1495] = 1,
    ACTIONS(270), 1,
      sym_identifier,
  [1499] = 1,
    ACTIONS(272), 1,
      aux_sym_print_statement_token2,
  [1503] = 1,
    ACTIONS(274), 1,
      aux_sym_number_token1,
  [1507] = 1,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
  [1511] = 1,
    ACTIONS(254), 1,
      anon_sym_RPAREN,
  [1515] = 1,
    ACTIONS(278), 1,
      aux_sym_number_token1,
  [1519] = 1,
    ACTIONS(280), 1,
      anon_sym_RPAREN,
  [1523] = 1,
    ACTIONS(282), 1,
      aux_sym_print_statement_token2,
  [1527] = 1,
    ACTIONS(284), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 96,
  [SMALL_STATE(6)] = 118,
  [SMALL_STATE(7)] = 148,
  [SMALL_STATE(8)] = 170,
  [SMALL_STATE(9)] = 192,
  [SMALL_STATE(10)] = 214,
  [SMALL_STATE(11)] = 236,
  [SMALL_STATE(12)] = 266,
  [SMALL_STATE(13)] = 296,
  [SMALL_STATE(14)] = 326,
  [SMALL_STATE(15)] = 345,
  [SMALL_STATE(16)] = 366,
  [SMALL_STATE(17)] = 387,
  [SMALL_STATE(18)] = 408,
  [SMALL_STATE(19)] = 429,
  [SMALL_STATE(20)] = 450,
  [SMALL_STATE(21)] = 466,
  [SMALL_STATE(22)] = 482,
  [SMALL_STATE(23)] = 498,
  [SMALL_STATE(24)] = 513,
  [SMALL_STATE(25)] = 532,
  [SMALL_STATE(26)] = 547,
  [SMALL_STATE(27)] = 562,
  [SMALL_STATE(28)] = 581,
  [SMALL_STATE(29)] = 598,
  [SMALL_STATE(30)] = 617,
  [SMALL_STATE(31)] = 636,
  [SMALL_STATE(32)] = 655,
  [SMALL_STATE(33)] = 674,
  [SMALL_STATE(34)] = 694,
  [SMALL_STATE(35)] = 708,
  [SMALL_STATE(36)] = 722,
  [SMALL_STATE(37)] = 736,
  [SMALL_STATE(38)] = 756,
  [SMALL_STATE(39)] = 770,
  [SMALL_STATE(40)] = 787,
  [SMALL_STATE(41)] = 804,
  [SMALL_STATE(42)] = 823,
  [SMALL_STATE(43)] = 840,
  [SMALL_STATE(44)] = 859,
  [SMALL_STATE(45)] = 876,
  [SMALL_STATE(46)] = 893,
  [SMALL_STATE(47)] = 910,
  [SMALL_STATE(48)] = 927,
  [SMALL_STATE(49)] = 944,
  [SMALL_STATE(50)] = 961,
  [SMALL_STATE(51)] = 978,
  [SMALL_STATE(52)] = 997,
  [SMALL_STATE(53)] = 1013,
  [SMALL_STATE(54)] = 1029,
  [SMALL_STATE(55)] = 1045,
  [SMALL_STATE(56)] = 1061,
  [SMALL_STATE(57)] = 1073,
  [SMALL_STATE(58)] = 1085,
  [SMALL_STATE(59)] = 1101,
  [SMALL_STATE(60)] = 1117,
  [SMALL_STATE(61)] = 1133,
  [SMALL_STATE(62)] = 1144,
  [SMALL_STATE(63)] = 1155,
  [SMALL_STATE(64)] = 1166,
  [SMALL_STATE(65)] = 1177,
  [SMALL_STATE(66)] = 1187,
  [SMALL_STATE(67)] = 1197,
  [SMALL_STATE(68)] = 1207,
  [SMALL_STATE(69)] = 1217,
  [SMALL_STATE(70)] = 1227,
  [SMALL_STATE(71)] = 1237,
  [SMALL_STATE(72)] = 1247,
  [SMALL_STATE(73)] = 1257,
  [SMALL_STATE(74)] = 1267,
  [SMALL_STATE(75)] = 1277,
  [SMALL_STATE(76)] = 1290,
  [SMALL_STATE(77)] = 1301,
  [SMALL_STATE(78)] = 1314,
  [SMALL_STATE(79)] = 1325,
  [SMALL_STATE(80)] = 1338,
  [SMALL_STATE(81)] = 1348,
  [SMALL_STATE(82)] = 1358,
  [SMALL_STATE(83)] = 1368,
  [SMALL_STATE(84)] = 1378,
  [SMALL_STATE(85)] = 1388,
  [SMALL_STATE(86)] = 1396,
  [SMALL_STATE(87)] = 1406,
  [SMALL_STATE(88)] = 1414,
  [SMALL_STATE(89)] = 1424,
  [SMALL_STATE(90)] = 1432,
  [SMALL_STATE(91)] = 1442,
  [SMALL_STATE(92)] = 1447,
  [SMALL_STATE(93)] = 1452,
  [SMALL_STATE(94)] = 1459,
  [SMALL_STATE(95)] = 1466,
  [SMALL_STATE(96)] = 1473,
  [SMALL_STATE(97)] = 1480,
  [SMALL_STATE(98)] = 1487,
  [SMALL_STATE(99)] = 1491,
  [SMALL_STATE(100)] = 1495,
  [SMALL_STATE(101)] = 1499,
  [SMALL_STATE(102)] = 1503,
  [SMALL_STATE(103)] = 1507,
  [SMALL_STATE(104)] = 1511,
  [SMALL_STATE(105)] = 1515,
  [SMALL_STATE(106)] = 1519,
  [SMALL_STATE(107)] = 1523,
  [SMALL_STATE(108)] = 1527,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(37),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(101),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stringarray_repeat1, 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stringarray_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringarray_repeat1, 2), SHIFT_REPEAT(41),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numberarray, 3),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numberarray, 3),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringarray, 3),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringarray, 3),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numberarray, 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numberarray, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringarray, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringarray, 2),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(33),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(107),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringarray_repeat1, 2), SHIFT_REPEAT(51),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 4),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dimension, 4),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dimension, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_print_statement_repeat1, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_print_statement_repeat1, 2),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT_REPEAT(55),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_statement, 3),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print_statement, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT_REPEAT(52),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_statement, 4),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print_statement, 4),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multi_line_statement_repeat1, 2), SHIFT_REPEAT(89),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__multi_line_statement_repeat1, 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__multi_line_statement_repeat1, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_line_statement, 1),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_line_statement, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_line_statement, 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_line_statement, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multi_line_statement_repeat1, 2), SHIFT_REPEAT(87),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_function_definition, 2),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_function_definition, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_function_definition, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_function_definition, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_function_definition, 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_function_definition, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dimension_repeat1, 2),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimension_repeat1, 2), SHIFT_REPEAT(43),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [268] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_length, 2, .production_id = 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
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
