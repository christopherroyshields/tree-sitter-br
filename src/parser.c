#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 148
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 54
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
  sym_numberelement = 40,
  sym_stringelement = 41,
  sym_stringarray = 42,
  sym_dimension = 43,
  sym_range = 44,
  sym_numberarray = 45,
  sym_number = 46,
  aux_sym_source_file_repeat1 = 47,
  aux_sym__multi_line_statement_repeat1 = 48,
  aux_sym_print_statement_repeat1 = 49,
  aux_sym_numberelement_repeat1 = 50,
  aux_sym_stringelement_repeat1 = 51,
  aux_sym_stringarray_repeat1 = 52,
  aux_sym_dimension_repeat1 = 53,
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
  [sym_numberelement] = "numberelement",
  [sym_stringelement] = "stringelement",
  [sym_stringarray] = "stringarray",
  [sym_dimension] = "dimension",
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
  [sym_numberelement] = sym_numberelement,
  [sym_stringelement] = sym_stringelement,
  [sym_stringarray] = sym_stringarray,
  [sym_dimension] = sym_dimension,
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
  [2] = {.lex_state = 33},
  [3] = {.lex_state = 33},
  [4] = {.lex_state = 33},
  [5] = {.lex_state = 33},
  [6] = {.lex_state = 33},
  [7] = {.lex_state = 33},
  [8] = {.lex_state = 33},
  [9] = {.lex_state = 33},
  [10] = {.lex_state = 33},
  [11] = {.lex_state = 33},
  [12] = {.lex_state = 22},
  [13] = {.lex_state = 33},
  [14] = {.lex_state = 22},
  [15] = {.lex_state = 22},
  [16] = {.lex_state = 33},
  [17] = {.lex_state = 33},
  [18] = {.lex_state = 22},
  [19] = {.lex_state = 33},
  [20] = {.lex_state = 33},
  [21] = {.lex_state = 33},
  [22] = {.lex_state = 33},
  [23] = {.lex_state = 22},
  [24] = {.lex_state = 33},
  [25] = {.lex_state = 33},
  [26] = {.lex_state = 33},
  [27] = {.lex_state = 22},
  [28] = {.lex_state = 22},
  [29] = {.lex_state = 22},
  [30] = {.lex_state = 33},
  [31] = {.lex_state = 33},
  [32] = {.lex_state = 33},
  [33] = {.lex_state = 33},
  [34] = {.lex_state = 22},
  [35] = {.lex_state = 22},
  [36] = {.lex_state = 33},
  [37] = {.lex_state = 33},
  [38] = {.lex_state = 22},
  [39] = {.lex_state = 22},
  [40] = {.lex_state = 33},
  [41] = {.lex_state = 22},
  [42] = {.lex_state = 22},
  [43] = {.lex_state = 22},
  [44] = {.lex_state = 22},
  [45] = {.lex_state = 33},
  [46] = {.lex_state = 22},
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
  [70] = {.lex_state = 16},
  [71] = {.lex_state = 33},
  [72] = {.lex_state = 16},
  [73] = {.lex_state = 33},
  [74] = {.lex_state = 16},
  [75] = {.lex_state = 16},
  [76] = {.lex_state = 33},
  [77] = {.lex_state = 33},
  [78] = {.lex_state = 33},
  [79] = {.lex_state = 33},
  [80] = {.lex_state = 33},
  [81] = {.lex_state = 33},
  [82] = {.lex_state = 33},
  [83] = {.lex_state = 33},
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
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 19},
  [98] = {.lex_state = 19},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 33},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 33},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 32},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 32},
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
  [141] = {.lex_state = 20},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 20},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 3},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
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
    [sym_source_file] = STATE(142),
    [sym_line] = STATE(10),
    [sym__single_line_statement] = STATE(90),
    [sym__multi_line_statement] = STATE(90),
    [sym__statement] = STATE(73),
    [sym__definition] = STATE(90),
    [sym_function_definition] = STATE(90),
    [sym_print_statement] = STATE(73),
    [aux_sym_source_file_repeat1] = STATE(10),
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
    STATE(7), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(71), 2,
      sym__statement,
      sym_print_statement,
    STATE(91), 4,
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
    STATE(11), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(71), 2,
      sym__statement,
      sym_print_statement,
    STATE(91), 4,
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
    STATE(73), 2,
      sym__statement,
      sym_print_statement,
    STATE(90), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [96] = 8,
    ACTIONS(43), 1,
      sym_line_number,
    ACTIONS(46), 1,
      sym_label,
    ACTIONS(49), 1,
      anon_sym_def,
    ACTIONS(52), 1,
      anon_sym_fnend,
    ACTIONS(54), 1,
      aux_sym_print_statement_token1,
    STATE(5), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(71), 2,
      sym__statement,
      sym_print_statement,
    STATE(91), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [126] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    STATE(9), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(59), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(57), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [148] = 8,
    ACTIONS(13), 1,
      sym_line_number,
    ACTIONS(15), 1,
      sym_label,
    ACTIONS(17), 1,
      anon_sym_def,
    ACTIONS(23), 1,
      aux_sym_print_statement_token1,
    ACTIONS(63), 1,
      anon_sym_fnend,
    STATE(5), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(71), 2,
      sym__statement,
      sym_print_statement,
    STATE(91), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [178] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    STATE(6), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(67), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(65), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [200] = 4,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    STATE(9), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(71), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(69), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [222] = 8,
    ACTIONS(5), 1,
      sym_line_number,
    ACTIONS(7), 1,
      sym_label,
    ACTIONS(9), 1,
      anon_sym_def,
    ACTIONS(11), 1,
      aux_sym_print_statement_token1,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    STATE(4), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(73), 2,
      sym__statement,
      sym_print_statement,
    STATE(90), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [252] = 8,
    ACTIONS(13), 1,
      sym_line_number,
    ACTIONS(15), 1,
      sym_label,
    ACTIONS(17), 1,
      anon_sym_def,
    ACTIONS(23), 1,
      aux_sym_print_statement_token1,
    ACTIONS(78), 1,
      anon_sym_fnend,
    STATE(5), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(71), 2,
      sym__statement,
      sym_print_statement,
    STATE(91), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [282] = 7,
    ACTIONS(80), 1,
      sym_stringidentifier,
    ACTIONS(82), 1,
      sym_numberidentifier,
    ACTIONS(84), 1,
      sym__mat,
    ACTIONS(86), 1,
      aux_sym_number_token1,
    STATE(125), 1,
      sym_range,
    STATE(116), 3,
      sym__expression,
      sym_reference,
      sym_number,
    STATE(56), 4,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_numberarray,
  [309] = 4,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(90), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(88), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [330] = 7,
    ACTIONS(80), 1,
      sym_stringidentifier,
    ACTIONS(82), 1,
      sym_numberidentifier,
    ACTIONS(84), 1,
      sym__mat,
    ACTIONS(86), 1,
      aux_sym_number_token1,
    STATE(139), 1,
      sym_range,
    STATE(116), 3,
      sym__expression,
      sym_reference,
      sym_number,
    STATE(56), 4,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_numberarray,
  [357] = 7,
    ACTIONS(80), 1,
      sym_stringidentifier,
    ACTIONS(82), 1,
      sym_numberidentifier,
    ACTIONS(84), 1,
      sym__mat,
    ACTIONS(86), 1,
      aux_sym_number_token1,
    STATE(138), 1,
      sym_range,
    STATE(116), 3,
      sym__expression,
      sym_reference,
      sym_number,
    STATE(56), 4,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_numberarray,
  [384] = 4,
    ACTIONS(98), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(96), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(94), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [405] = 3,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(103), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(101), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [424] = 7,
    ACTIONS(80), 1,
      sym_stringidentifier,
    ACTIONS(82), 1,
      sym_numberidentifier,
    ACTIONS(84), 1,
      sym__mat,
    ACTIONS(86), 1,
      aux_sym_number_token1,
    STATE(120), 1,
      sym_range,
    STATE(116), 3,
      sym__expression,
      sym_reference,
      sym_number,
    STATE(56), 4,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_numberarray,
  [451] = 4,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
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
  [472] = 4,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
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
  [493] = 4,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    STATE(24), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(57), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [514] = 4,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(115), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(113), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [535] = 7,
    ACTIONS(80), 1,
      sym_stringidentifier,
    ACTIONS(82), 1,
      sym_numberidentifier,
    ACTIONS(84), 1,
      sym__mat,
    ACTIONS(86), 1,
      aux_sym_number_token1,
    STATE(101), 1,
      sym_range,
    STATE(116), 3,
      sym__expression,
      sym_reference,
      sym_number,
    STATE(56), 4,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_numberarray,
  [562] = 4,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    STATE(24), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(69), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [583] = 4,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    STATE(21), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(65), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [604] = 2,
    ACTIONS(122), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(120), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [620] = 6,
    ACTIONS(124), 1,
      sym_stringidentifier,
    ACTIONS(126), 1,
      sym_numberidentifier,
    ACTIONS(128), 1,
      sym__mat,
    ACTIONS(130), 1,
      aux_sym_number_token1,
    STATE(89), 3,
      sym__expression,
      sym_reference,
      sym_number,
    STATE(61), 4,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_numberarray,
  [644] = 6,
    ACTIONS(80), 1,
      sym_stringidentifier,
    ACTIONS(82), 1,
      sym_numberidentifier,
    ACTIONS(84), 1,
      sym__mat,
    ACTIONS(86), 1,
      aux_sym_number_token1,
    STATE(65), 3,
      sym__expression,
      sym_reference,
      sym_number,
    STATE(56), 4,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_numberarray,
  [668] = 6,
    ACTIONS(80), 1,
      sym_stringidentifier,
    ACTIONS(82), 1,
      sym_numberidentifier,
    ACTIONS(84), 1,
      sym__mat,
    ACTIONS(86), 1,
      aux_sym_number_token1,
    STATE(107), 3,
      sym__expression,
      sym_reference,
      sym_number,
    STATE(56), 4,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_numberarray,
  [692] = 2,
    ACTIONS(134), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(132), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [708] = 2,
    ACTIONS(138), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(136), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [724] = 4,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      aux_sym_stringelement_repeat1,
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
  [744] = 4,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(96), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(94), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [764] = 6,
    ACTIONS(124), 1,
      sym_stringidentifier,
    ACTIONS(126), 1,
      sym_numberidentifier,
    ACTIONS(128), 1,
      sym__mat,
    ACTIONS(130), 1,
      aux_sym_number_token1,
    STATE(59), 3,
      sym__expression,
      sym_reference,
      sym_number,
    STATE(61), 4,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_numberarray,
  [788] = 6,
    ACTIONS(80), 1,
      sym_stringidentifier,
    ACTIONS(82), 1,
      sym_numberidentifier,
    ACTIONS(84), 1,
      sym__mat,
    ACTIONS(86), 1,
      aux_sym_number_token1,
    STATE(123), 3,
      sym__expression,
      sym_reference,
      sym_number,
    STATE(56), 4,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_numberarray,
  [812] = 4,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
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
  [832] = 2,
    ACTIONS(147), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(145), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [848] = 6,
    ACTIONS(124), 1,
      sym_stringidentifier,
    ACTIONS(126), 1,
      sym_numberidentifier,
    ACTIONS(128), 1,
      sym__mat,
    ACTIONS(130), 1,
      aux_sym_number_token1,
    STATE(64), 3,
      sym__expression,
      sym_reference,
      sym_number,
    STATE(61), 4,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_numberarray,
  [872] = 6,
    ACTIONS(80), 1,
      sym_stringidentifier,
    ACTIONS(82), 1,
      sym_numberidentifier,
    ACTIONS(84), 1,
      sym__mat,
    ACTIONS(86), 1,
      aux_sym_number_token1,
    STATE(57), 3,
      sym__expression,
      sym_reference,
      sym_number,
    STATE(56), 4,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_numberarray,
  [896] = 4,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    STATE(45), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(115), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(113), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [916] = 6,
    ACTIONS(80), 1,
      sym_stringidentifier,
    ACTIONS(82), 1,
      sym_numberidentifier,
    ACTIONS(84), 1,
      sym__mat,
    ACTIONS(86), 1,
      aux_sym_number_token1,
    STATE(121), 3,
      sym__expression,
      sym_reference,
      sym_number,
    STATE(56), 4,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_numberarray,
  [940] = 6,
    ACTIONS(80), 1,
      sym_stringidentifier,
    ACTIONS(82), 1,
      sym_numberidentifier,
    ACTIONS(84), 1,
      sym__mat,
    ACTIONS(86), 1,
      aux_sym_number_token1,
    STATE(110), 3,
      sym__expression,
      sym_reference,
      sym_number,
    STATE(56), 4,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_numberarray,
  [964] = 6,
    ACTIONS(80), 1,
      sym_stringidentifier,
    ACTIONS(82), 1,
      sym_numberidentifier,
    ACTIONS(84), 1,
      sym__mat,
    ACTIONS(86), 1,
      aux_sym_number_token1,
    STATE(112), 3,
      sym__expression,
      sym_reference,
      sym_number,
    STATE(56), 4,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_numberarray,
  [988] = 6,
    ACTIONS(80), 1,
      sym_stringidentifier,
    ACTIONS(82), 1,
      sym_numberidentifier,
    ACTIONS(84), 1,
      sym__mat,
    ACTIONS(86), 1,
      aux_sym_number_token1,
    STATE(95), 3,
      sym__expression,
      sym_reference,
      sym_number,
    STATE(56), 4,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_numberarray,
  [1012] = 4,
    ACTIONS(140), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
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
  [1032] = 6,
    ACTIONS(80), 1,
      sym_stringidentifier,
    ACTIONS(82), 1,
      sym_numberidentifier,
    ACTIONS(84), 1,
      sym__mat,
    ACTIONS(86), 1,
      aux_sym_number_token1,
    STATE(109), 3,
      sym__expression,
      sym_reference,
      sym_number,
    STATE(56), 4,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_numberarray,
  [1056] = 4,
    STATE(47), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(153), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(151), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(149), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [1075] = 3,
    ACTIONS(156), 1,
      anon_sym_DOT,
    ACTIONS(103), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(101), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1092] = 2,
    ACTIONS(138), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(136), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1107] = 2,
    ACTIONS(160), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(158), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1122] = 2,
    ACTIONS(164), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(162), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1137] = 4,
    STATE(52), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(151), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(166), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(149), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [1156] = 2,
    ACTIONS(171), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(169), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1171] = 4,
    STATE(47), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(177), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(175), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(173), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [1190] = 4,
    STATE(52), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(175), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(179), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(173), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [1209] = 2,
    ACTIONS(183), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(181), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1224] = 4,
    STATE(54), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(177), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(187), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(185), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [1243] = 2,
    ACTIONS(147), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(145), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1258] = 4,
    STATE(55), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(179), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(187), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(185), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [1277] = 2,
    ACTIONS(122), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(120), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1292] = 2,
    ACTIONS(183), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(181), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1306] = 2,
    ACTIONS(171), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(169), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1320] = 2,
    ACTIONS(134), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(132), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1334] = 2,
    ACTIONS(151), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(149), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1348] = 2,
    ACTIONS(151), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(149), 6,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1362] = 5,
    ACTIONS(9), 1,
      anon_sym_def,
    ACTIONS(11), 1,
      aux_sym_print_statement_token1,
    ACTIONS(189), 1,
      sym_label,
    STATE(73), 2,
      sym__statement,
      sym_print_statement,
    STATE(87), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [1382] = 5,
    ACTIONS(17), 1,
      anon_sym_def,
    ACTIONS(23), 1,
      aux_sym_print_statement_token1,
    ACTIONS(191), 1,
      sym_label,
    STATE(71), 2,
      sym__statement,
      sym_print_statement,
    STATE(92), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [1402] = 2,
    ACTIONS(160), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(158), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1416] = 2,
    ACTIONS(164), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(162), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1430] = 4,
    ACTIONS(193), 1,
      anon_sym_def,
    ACTIONS(195), 1,
      aux_sym_print_statement_token1,
    STATE(71), 2,
      sym__statement,
      sym_print_statement,
    STATE(92), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [1447] = 4,
    STATE(79), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(197), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(199), 2,
      sym_line_number,
      sym_label,
    ACTIONS(201), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
  [1464] = 4,
    ACTIONS(203), 1,
      anon_sym_def,
    ACTIONS(205), 1,
      aux_sym_print_statement_token1,
    STATE(73), 2,
      sym__statement,
      sym_print_statement,
    STATE(87), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [1481] = 4,
    STATE(76), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(201), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(207), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(199), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
  [1498] = 4,
    ACTIONS(203), 1,
      anon_sym_def,
    ACTIONS(205), 1,
      aux_sym_print_statement_token1,
    STATE(73), 2,
      sym__statement,
      sym_print_statement,
    STATE(88), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [1515] = 4,
    ACTIONS(193), 1,
      anon_sym_def,
    ACTIONS(195), 1,
      aux_sym_print_statement_token1,
    STATE(71), 2,
      sym__statement,
      sym_print_statement,
    STATE(93), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [1532] = 4,
    STATE(78), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(207), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(211), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(209), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
  [1549] = 4,
    STATE(77), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(213), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(216), 2,
      sym_line_number,
      sym_label,
    ACTIONS(218), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
  [1566] = 4,
    STATE(78), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(218), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(220), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(216), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
  [1583] = 4,
    STATE(77), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(197), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(209), 2,
      sym_line_number,
      sym_label,
    ACTIONS(211), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
  [1600] = 2,
    ACTIONS(218), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(216), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [1612] = 2,
    ACTIONS(218), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(216), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [1624] = 2,
    ACTIONS(223), 3,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
    ACTIONS(225), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
  [1635] = 2,
    ACTIONS(227), 3,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
    ACTIONS(229), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
  [1646] = 2,
    ACTIONS(231), 3,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
    ACTIONS(233), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
  [1657] = 2,
    ACTIONS(235), 3,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
    ACTIONS(237), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
  [1668] = 2,
    ACTIONS(241), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(239), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
  [1678] = 2,
    ACTIONS(245), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(243), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
  [1688] = 2,
    ACTIONS(249), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(247), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
  [1698] = 2,
    ACTIONS(253), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(251), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
  [1708] = 2,
    ACTIONS(257), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(255), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
  [1718] = 2,
    ACTIONS(255), 2,
      sym_line_number,
      sym_label,
    ACTIONS(257), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
  [1728] = 2,
    ACTIONS(243), 2,
      sym_line_number,
      sym_label,
    ACTIONS(245), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
  [1738] = 2,
    ACTIONS(247), 2,
      sym_line_number,
      sym_label,
    ACTIONS(249), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
  [1748] = 2,
    ACTIONS(239), 2,
      sym_line_number,
      sym_label,
    ACTIONS(241), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
  [1758] = 2,
    ACTIONS(251), 2,
      sym_line_number,
      sym_label,
    ACTIONS(253), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
  [1768] = 4,
    ACTIONS(259), 1,
      anon_sym_STAR,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    STATE(83), 1,
      sym_parameter_list,
    STATE(129), 1,
      sym_function_length,
  [1781] = 3,
    ACTIONS(263), 1,
      sym_string_function_name,
    ACTIONS(265), 1,
      sym_numeric_function_name,
    STATE(3), 2,
      sym_string_function_definition,
      sym_numeric_function_definition,
  [1792] = 3,
    ACTIONS(263), 1,
      sym_string_function_name,
    ACTIONS(265), 1,
      sym_numeric_function_name,
    STATE(2), 2,
      sym_string_function_definition,
      sym_numeric_function_definition,
  [1803] = 4,
    ACTIONS(86), 1,
      aux_sym_number_token1,
    ACTIONS(267), 1,
      anon_sym_STAR,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
    STATE(140), 1,
      sym_number,
  [1816] = 4,
    ACTIONS(86), 1,
      aux_sym_number_token1,
    ACTIONS(271), 1,
      anon_sym_STAR,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
    STATE(133), 1,
      sym_number,
  [1829] = 3,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    STATE(102), 1,
      aux_sym_dimension_repeat1,
  [1839] = 3,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
    STATE(117), 1,
      aux_sym_dimension_repeat1,
  [1849] = 3,
    ACTIONS(86), 1,
      aux_sym_number_token1,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
    STATE(133), 1,
      sym_number,
  [1859] = 3,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
    ACTIONS(283), 1,
      anon_sym_COMMA,
    STATE(111), 1,
      aux_sym_numberelement_repeat1,
  [1869] = 3,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    STATE(117), 1,
      aux_sym_dimension_repeat1,
  [1879] = 3,
    ACTIONS(283), 1,
      anon_sym_COMMA,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      aux_sym_numberelement_repeat1,
  [1889] = 3,
    ACTIONS(283), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      aux_sym_numberelement_repeat1,
  [1899] = 3,
    ACTIONS(86), 1,
      aux_sym_number_token1,
    ACTIONS(291), 1,
      anon_sym_RPAREN,
    STATE(144), 1,
      sym_number,
  [1909] = 3,
    ACTIONS(283), 1,
      anon_sym_COMMA,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      aux_sym_numberelement_repeat1,
  [1919] = 3,
    ACTIONS(283), 1,
      anon_sym_COMMA,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      aux_sym_numberelement_repeat1,
  [1929] = 3,
    ACTIONS(297), 1,
      anon_sym_RPAREN,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    STATE(111), 1,
      aux_sym_numberelement_repeat1,
  [1939] = 3,
    ACTIONS(283), 1,
      anon_sym_COMMA,
    ACTIONS(302), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      aux_sym_numberelement_repeat1,
  [1949] = 3,
    ACTIONS(283), 1,
      anon_sym_COMMA,
    ACTIONS(304), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      aux_sym_numberelement_repeat1,
  [1959] = 3,
    ACTIONS(306), 1,
      sym_identifier,
    ACTIONS(308), 1,
      anon_sym_AMP,
    STATE(134), 1,
      sym_parameter,
  [1969] = 2,
    ACTIONS(195), 1,
      aux_sym_print_statement_token1,
    STATE(81), 2,
      sym__statement,
      sym_print_statement,
  [1977] = 2,
    ACTIONS(310), 1,
      anon_sym_COLON,
    ACTIONS(312), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1985] = 3,
    ACTIONS(314), 1,
      anon_sym_RPAREN,
    ACTIONS(316), 1,
      anon_sym_COMMA,
    STATE(117), 1,
      aux_sym_dimension_repeat1,
  [1995] = 2,
    ACTIONS(205), 1,
      aux_sym_print_statement_token1,
    STATE(80), 2,
      sym__statement,
      sym_print_statement,
  [2003] = 3,
    ACTIONS(283), 1,
      anon_sym_COMMA,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      aux_sym_numberelement_repeat1,
  [2013] = 3,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(321), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_dimension_repeat1,
  [2023] = 1,
    ACTIONS(297), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2028] = 2,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym_dimension,
  [2035] = 1,
    ACTIONS(323), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2040] = 2,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    STATE(84), 1,
      sym_parameter_list,
  [2047] = 1,
    ACTIONS(314), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2052] = 2,
    ACTIONS(325), 1,
      sym_stringidentifier,
    ACTIONS(327), 1,
      sym_numberidentifier,
  [2059] = 2,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    STATE(53), 1,
      sym_dimension,
  [2066] = 2,
    ACTIONS(86), 1,
      aux_sym_number_token1,
    STATE(131), 1,
      sym_number,
  [2073] = 2,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    STATE(82), 1,
      sym_parameter_list,
  [2080] = 2,
    ACTIONS(329), 1,
      sym_stringidentifier,
    ACTIONS(331), 1,
      sym_numberidentifier,
  [2087] = 1,
    ACTIONS(333), 1,
      anon_sym_LPAREN,
  [2091] = 1,
    ACTIONS(335), 1,
      aux_sym_number_token1,
  [2095] = 1,
    ACTIONS(291), 1,
      anon_sym_RPAREN,
  [2099] = 1,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
  [2103] = 1,
    ACTIONS(339), 1,
      aux_sym_number_token1,
  [2107] = 1,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
  [2111] = 1,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
  [2115] = 1,
    ACTIONS(345), 1,
      anon_sym_RPAREN,
  [2119] = 1,
    ACTIONS(347), 1,
      anon_sym_RPAREN,
  [2123] = 1,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
  [2127] = 1,
    ACTIONS(349), 1,
      aux_sym_print_statement_token2,
  [2131] = 1,
    ACTIONS(351), 1,
      ts_builtin_sym_end,
  [2135] = 1,
    ACTIONS(353), 1,
      aux_sym_print_statement_token2,
  [2139] = 1,
    ACTIONS(355), 1,
      anon_sym_RPAREN,
  [2143] = 1,
    ACTIONS(357), 1,
      sym_identifier,
  [2147] = 1,
    ACTIONS(359), 1,
      anon_sym_LPAREN,
  [2151] = 1,
    ACTIONS(361), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 96,
  [SMALL_STATE(6)] = 126,
  [SMALL_STATE(7)] = 148,
  [SMALL_STATE(8)] = 178,
  [SMALL_STATE(9)] = 200,
  [SMALL_STATE(10)] = 222,
  [SMALL_STATE(11)] = 252,
  [SMALL_STATE(12)] = 282,
  [SMALL_STATE(13)] = 309,
  [SMALL_STATE(14)] = 330,
  [SMALL_STATE(15)] = 357,
  [SMALL_STATE(16)] = 384,
  [SMALL_STATE(17)] = 405,
  [SMALL_STATE(18)] = 424,
  [SMALL_STATE(19)] = 451,
  [SMALL_STATE(20)] = 472,
  [SMALL_STATE(21)] = 493,
  [SMALL_STATE(22)] = 514,
  [SMALL_STATE(23)] = 535,
  [SMALL_STATE(24)] = 562,
  [SMALL_STATE(25)] = 583,
  [SMALL_STATE(26)] = 604,
  [SMALL_STATE(27)] = 620,
  [SMALL_STATE(28)] = 644,
  [SMALL_STATE(29)] = 668,
  [SMALL_STATE(30)] = 692,
  [SMALL_STATE(31)] = 708,
  [SMALL_STATE(32)] = 724,
  [SMALL_STATE(33)] = 744,
  [SMALL_STATE(34)] = 764,
  [SMALL_STATE(35)] = 788,
  [SMALL_STATE(36)] = 812,
  [SMALL_STATE(37)] = 832,
  [SMALL_STATE(38)] = 848,
  [SMALL_STATE(39)] = 872,
  [SMALL_STATE(40)] = 896,
  [SMALL_STATE(41)] = 916,
  [SMALL_STATE(42)] = 940,
  [SMALL_STATE(43)] = 964,
  [SMALL_STATE(44)] = 988,
  [SMALL_STATE(45)] = 1012,
  [SMALL_STATE(46)] = 1032,
  [SMALL_STATE(47)] = 1056,
  [SMALL_STATE(48)] = 1075,
  [SMALL_STATE(49)] = 1092,
  [SMALL_STATE(50)] = 1107,
  [SMALL_STATE(51)] = 1122,
  [SMALL_STATE(52)] = 1137,
  [SMALL_STATE(53)] = 1156,
  [SMALL_STATE(54)] = 1171,
  [SMALL_STATE(55)] = 1190,
  [SMALL_STATE(56)] = 1209,
  [SMALL_STATE(57)] = 1224,
  [SMALL_STATE(58)] = 1243,
  [SMALL_STATE(59)] = 1258,
  [SMALL_STATE(60)] = 1277,
  [SMALL_STATE(61)] = 1292,
  [SMALL_STATE(62)] = 1306,
  [SMALL_STATE(63)] = 1320,
  [SMALL_STATE(64)] = 1334,
  [SMALL_STATE(65)] = 1348,
  [SMALL_STATE(66)] = 1362,
  [SMALL_STATE(67)] = 1382,
  [SMALL_STATE(68)] = 1402,
  [SMALL_STATE(69)] = 1416,
  [SMALL_STATE(70)] = 1430,
  [SMALL_STATE(71)] = 1447,
  [SMALL_STATE(72)] = 1464,
  [SMALL_STATE(73)] = 1481,
  [SMALL_STATE(74)] = 1498,
  [SMALL_STATE(75)] = 1515,
  [SMALL_STATE(76)] = 1532,
  [SMALL_STATE(77)] = 1549,
  [SMALL_STATE(78)] = 1566,
  [SMALL_STATE(79)] = 1583,
  [SMALL_STATE(80)] = 1600,
  [SMALL_STATE(81)] = 1612,
  [SMALL_STATE(82)] = 1624,
  [SMALL_STATE(83)] = 1635,
  [SMALL_STATE(84)] = 1646,
  [SMALL_STATE(85)] = 1657,
  [SMALL_STATE(86)] = 1668,
  [SMALL_STATE(87)] = 1678,
  [SMALL_STATE(88)] = 1688,
  [SMALL_STATE(89)] = 1698,
  [SMALL_STATE(90)] = 1708,
  [SMALL_STATE(91)] = 1718,
  [SMALL_STATE(92)] = 1728,
  [SMALL_STATE(93)] = 1738,
  [SMALL_STATE(94)] = 1748,
  [SMALL_STATE(95)] = 1758,
  [SMALL_STATE(96)] = 1768,
  [SMALL_STATE(97)] = 1781,
  [SMALL_STATE(98)] = 1792,
  [SMALL_STATE(99)] = 1803,
  [SMALL_STATE(100)] = 1816,
  [SMALL_STATE(101)] = 1829,
  [SMALL_STATE(102)] = 1839,
  [SMALL_STATE(103)] = 1849,
  [SMALL_STATE(104)] = 1859,
  [SMALL_STATE(105)] = 1869,
  [SMALL_STATE(106)] = 1879,
  [SMALL_STATE(107)] = 1889,
  [SMALL_STATE(108)] = 1899,
  [SMALL_STATE(109)] = 1909,
  [SMALL_STATE(110)] = 1919,
  [SMALL_STATE(111)] = 1929,
  [SMALL_STATE(112)] = 1939,
  [SMALL_STATE(113)] = 1949,
  [SMALL_STATE(114)] = 1959,
  [SMALL_STATE(115)] = 1969,
  [SMALL_STATE(116)] = 1977,
  [SMALL_STATE(117)] = 1985,
  [SMALL_STATE(118)] = 1995,
  [SMALL_STATE(119)] = 2003,
  [SMALL_STATE(120)] = 2013,
  [SMALL_STATE(121)] = 2023,
  [SMALL_STATE(122)] = 2028,
  [SMALL_STATE(123)] = 2035,
  [SMALL_STATE(124)] = 2040,
  [SMALL_STATE(125)] = 2047,
  [SMALL_STATE(126)] = 2052,
  [SMALL_STATE(127)] = 2059,
  [SMALL_STATE(128)] = 2066,
  [SMALL_STATE(129)] = 2073,
  [SMALL_STATE(130)] = 2080,
  [SMALL_STATE(131)] = 2087,
  [SMALL_STATE(132)] = 2091,
  [SMALL_STATE(133)] = 2095,
  [SMALL_STATE(134)] = 2099,
  [SMALL_STATE(135)] = 2103,
  [SMALL_STATE(136)] = 2107,
  [SMALL_STATE(137)] = 2111,
  [SMALL_STATE(138)] = 2115,
  [SMALL_STATE(139)] = 2119,
  [SMALL_STATE(140)] = 2123,
  [SMALL_STATE(141)] = 2127,
  [SMALL_STATE(142)] = 2131,
  [SMALL_STATE(143)] = 2135,
  [SMALL_STATE(144)] = 2139,
  [SMALL_STATE(145)] = 2143,
  [SMALL_STATE(146)] = 2147,
  [SMALL_STATE(147)] = 2151,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(72),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(97),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(143),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(70),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(98),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(141),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringarray, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringarray, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringarray, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringarray, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stringarray_repeat1, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stringarray_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringarray_repeat1, 2), SHIFT_REPEAT(23),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringelement, 6),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringelement, 6),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stringelement_repeat1, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stringelement_repeat1, 2),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringelement_repeat1, 2), SHIFT_REPEAT(14),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringelement, 5),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringelement, 5),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringelement, 4),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringelement, 4),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringarray_repeat1, 2), SHIFT_REPEAT(18),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stringelement_repeat1, 3),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stringelement_repeat1, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 3),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 3),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dimension, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringelement_repeat1, 2), SHIFT_REPEAT(15),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 4),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dimension, 4),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_print_statement_repeat1, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_print_statement_repeat1, 2),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT_REPEAT(28),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numberelement, 5),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numberelement, 5),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numberelement, 4),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numberelement, 4),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT_REPEAT(38),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numberarray, 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numberarray, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_statement, 4),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print_statement, 4),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_statement, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print_statement, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_line_statement, 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_line_statement, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_line_statement, 2),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_line_statement, 2),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multi_line_statement_repeat1, 2), SHIFT_REPEAT(115),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__multi_line_statement_repeat1, 2),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__multi_line_statement_repeat1, 2),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multi_line_statement_repeat1, 2), SHIFT_REPEAT(118),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_function_definition, 3),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_function_definition, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_function_definition, 2),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_function_definition, 2),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_function_definition, 2),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_function_definition, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 3),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 3),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numberelement_repeat1, 2),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numberelement_repeat1, 2), SHIFT_REPEAT(41),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dimension_repeat1, 2),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimension_repeat1, 2), SHIFT_REPEAT(12),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_length, 2, .production_id = 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [351] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
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
