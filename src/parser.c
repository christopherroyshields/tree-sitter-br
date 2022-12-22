#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 150
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 55
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
  sym_stringreference = 44,
  sym_range = 45,
  sym_numberarray = 46,
  sym_number = 47,
  aux_sym_source_file_repeat1 = 48,
  aux_sym__multi_line_statement_repeat1 = 49,
  aux_sym_print_statement_repeat1 = 50,
  aux_sym_numberelement_repeat1 = 51,
  aux_sym_stringelement_repeat1 = 52,
  aux_sym_stringarray_repeat1 = 53,
  aux_sym_dimension_repeat1 = 54,
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
  [sym_stringreference] = "stringreference",
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
  [sym_stringreference] = sym_stringreference,
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
  [sym_stringreference] = {
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
  [4] = {.lex_state = 22},
  [5] = {.lex_state = 33},
  [6] = {.lex_state = 22},
  [7] = {.lex_state = 22},
  [8] = {.lex_state = 22},
  [9] = {.lex_state = 33},
  [10] = {.lex_state = 22},
  [11] = {.lex_state = 33},
  [12] = {.lex_state = 33},
  [13] = {.lex_state = 33},
  [14] = {.lex_state = 33},
  [15] = {.lex_state = 22},
  [16] = {.lex_state = 33},
  [17] = {.lex_state = 22},
  [18] = {.lex_state = 33},
  [19] = {.lex_state = 33},
  [20] = {.lex_state = 33},
  [21] = {.lex_state = 33},
  [22] = {.lex_state = 33},
  [23] = {.lex_state = 22},
  [24] = {.lex_state = 22},
  [25] = {.lex_state = 22},
  [26] = {.lex_state = 22},
  [27] = {.lex_state = 33},
  [28] = {.lex_state = 33},
  [29] = {.lex_state = 22},
  [30] = {.lex_state = 22},
  [31] = {.lex_state = 33},
  [32] = {.lex_state = 33},
  [33] = {.lex_state = 33},
  [34] = {.lex_state = 33},
  [35] = {.lex_state = 22},
  [36] = {.lex_state = 22},
  [37] = {.lex_state = 22},
  [38] = {.lex_state = 33},
  [39] = {.lex_state = 22},
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
  [76] = {.lex_state = 16},
  [77] = {.lex_state = 16},
  [78] = {.lex_state = 16},
  [79] = {.lex_state = 33},
  [80] = {.lex_state = 33},
  [81] = {.lex_state = 16},
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
  [96] = {.lex_state = 33},
  [97] = {.lex_state = 33},
  [98] = {.lex_state = 33},
  [99] = {.lex_state = 33},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 19},
  [102] = {.lex_state = 19},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 33},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 33},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 32},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 32},
  [134] = {.lex_state = 20},
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
  [145] = {.lex_state = 20},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 3},
  [148] = {.lex_state = 0},
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
    [sym_source_file] = STATE(148),
    [sym_line] = STATE(11),
    [sym__single_line_statement] = STATE(98),
    [sym__multi_line_statement] = STATE(98),
    [sym__statement] = STATE(74),
    [sym__definition] = STATE(98),
    [sym_function_definition] = STATE(98),
    [sym_print_statement] = STATE(74),
    [aux_sym_source_file_repeat1] = STATE(11),
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
    STATE(16), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(80), 2,
      sym__statement,
      sym_print_statement,
    STATE(99), 4,
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
    STATE(80), 2,
      sym__statement,
      sym_print_statement,
    STATE(99), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [66] = 7,
    ACTIONS(29), 1,
      sym_stringidentifier,
    ACTIONS(31), 1,
      sym_numberidentifier,
    ACTIONS(33), 1,
      sym__mat,
    ACTIONS(35), 1,
      aux_sym_number_token1,
    STATE(140), 1,
      sym_range,
    STATE(139), 3,
      sym__expression,
      sym_reference,
      sym_number,
    STATE(61), 5,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberarray,
  [94] = 4,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    STATE(13), 2,
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
  [116] = 7,
    ACTIONS(29), 1,
      sym_stringidentifier,
    ACTIONS(31), 1,
      sym_numberidentifier,
    ACTIONS(33), 1,
      sym__mat,
    ACTIONS(35), 1,
      aux_sym_number_token1,
    STATE(144), 1,
      sym_range,
    STATE(104), 3,
      sym__expression,
      sym_reference,
      sym_number,
    STATE(61), 5,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberarray,
  [144] = 7,
    ACTIONS(29), 1,
      sym_stringidentifier,
    ACTIONS(31), 1,
      sym_numberidentifier,
    ACTIONS(33), 1,
      sym__mat,
    ACTIONS(35), 1,
      aux_sym_number_token1,
    STATE(112), 1,
      sym_range,
    STATE(139), 3,
      sym__expression,
      sym_reference,
      sym_number,
    STATE(61), 5,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberarray,
  [172] = 7,
    ACTIONS(29), 1,
      sym_stringidentifier,
    ACTIONS(31), 1,
      sym_numberidentifier,
    ACTIONS(33), 1,
      sym__mat,
    ACTIONS(35), 1,
      aux_sym_number_token1,
    STATE(144), 1,
      sym_range,
    STATE(139), 3,
      sym__expression,
      sym_reference,
      sym_number,
    STATE(61), 5,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberarray,
  [200] = 4,
    ACTIONS(41), 1,
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
  [222] = 7,
    ACTIONS(29), 1,
      sym_stringidentifier,
    ACTIONS(31), 1,
      sym_numberidentifier,
    ACTIONS(33), 1,
      sym__mat,
    ACTIONS(35), 1,
      aux_sym_number_token1,
    STATE(116), 1,
      sym_range,
    STATE(139), 3,
      sym__expression,
      sym_reference,
      sym_number,
    STATE(61), 5,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberarray,
  [250] = 8,
    ACTIONS(5), 1,
      sym_line_number,
    ACTIONS(7), 1,
      sym_label,
    ACTIONS(9), 1,
      anon_sym_def,
    ACTIONS(11), 1,
      aux_sym_print_statement_token1,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(18), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(74), 2,
      sym__statement,
      sym_print_statement,
    STATE(98), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [280] = 8,
    ACTIONS(13), 1,
      sym_line_number,
    ACTIONS(15), 1,
      sym_label,
    ACTIONS(17), 1,
      anon_sym_def,
    ACTIONS(23), 1,
      aux_sym_print_statement_token1,
    ACTIONS(49), 1,
      anon_sym_fnend,
    STATE(14), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(80), 2,
      sym__statement,
      sym_print_statement,
    STATE(99), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [310] = 4,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    STATE(13), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(53), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(51), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [332] = 8,
    ACTIONS(58), 1,
      sym_line_number,
    ACTIONS(61), 1,
      sym_label,
    ACTIONS(64), 1,
      anon_sym_def,
    ACTIONS(67), 1,
      anon_sym_fnend,
    ACTIONS(69), 1,
      aux_sym_print_statement_token1,
    STATE(14), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(80), 2,
      sym__statement,
      sym_print_statement,
    STATE(99), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [362] = 7,
    ACTIONS(29), 1,
      sym_stringidentifier,
    ACTIONS(31), 1,
      sym_numberidentifier,
    ACTIONS(33), 1,
      sym__mat,
    ACTIONS(35), 1,
      aux_sym_number_token1,
    STATE(140), 1,
      sym_range,
    STATE(106), 3,
      sym__expression,
      sym_reference,
      sym_number,
    STATE(61), 5,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberarray,
  [390] = 8,
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
    STATE(14), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(80), 2,
      sym__statement,
      sym_print_statement,
    STATE(99), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [420] = 7,
    ACTIONS(29), 1,
      sym_stringidentifier,
    ACTIONS(31), 1,
      sym_numberidentifier,
    ACTIONS(33), 1,
      sym__mat,
    ACTIONS(35), 1,
      aux_sym_number_token1,
    STATE(128), 1,
      sym_range,
    STATE(139), 3,
      sym__expression,
      sym_reference,
      sym_number,
    STATE(61), 5,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberarray,
  [448] = 8,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 1,
      sym_line_number,
    ACTIONS(79), 1,
      sym_label,
    ACTIONS(82), 1,
      anon_sym_def,
    ACTIONS(85), 1,
      aux_sym_print_statement_token1,
    STATE(18), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(74), 2,
      sym__statement,
      sym_print_statement,
    STATE(98), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [478] = 3,
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
  [497] = 4,
    ACTIONS(98), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
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
  [518] = 4,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(103), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(101), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [539] = 4,
    ACTIONS(107), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    STATE(22), 2,
      sym_dimension,
      aux_sym_stringarray_repeat1,
    ACTIONS(51), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [560] = 6,
    ACTIONS(29), 1,
      sym_stringidentifier,
    ACTIONS(31), 1,
      sym_numberidentifier,
    ACTIONS(33), 1,
      sym__mat,
    ACTIONS(35), 1,
      aux_sym_number_token1,
    STATE(124), 3,
      sym__expression,
      sym_reference,
      sym_number,
    STATE(61), 5,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberarray,
  [585] = 6,
    ACTIONS(29), 1,
      sym_stringidentifier,
    ACTIONS(31), 1,
      sym_numberidentifier,
    ACTIONS(33), 1,
      sym__mat,
    ACTIONS(35), 1,
      aux_sym_number_token1,
    STATE(130), 3,
      sym__expression,
      sym_reference,
      sym_number,
    STATE(61), 5,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberarray,
  [610] = 6,
    ACTIONS(110), 1,
      sym_stringidentifier,
    ACTIONS(112), 1,
      sym_numberidentifier,
    ACTIONS(114), 1,
      sym__mat,
    ACTIONS(116), 1,
      aux_sym_number_token1,
    STATE(93), 3,
      sym__expression,
      sym_reference,
      sym_number,
    STATE(67), 5,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberarray,
  [635] = 6,
    ACTIONS(110), 1,
      sym_stringidentifier,
    ACTIONS(112), 1,
      sym_numberidentifier,
    ACTIONS(114), 1,
      sym__mat,
    ACTIONS(116), 1,
      aux_sym_number_token1,
    STATE(60), 3,
      sym__expression,
      sym_reference,
      sym_number,
    STATE(67), 5,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberarray,
  [660] = 4,
    ACTIONS(122), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(120), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(118), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [681] = 4,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(126), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(124), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [702] = 6,
    ACTIONS(29), 1,
      sym_stringidentifier,
    ACTIONS(31), 1,
      sym_numberidentifier,
    ACTIONS(33), 1,
      sym__mat,
    ACTIONS(35), 1,
      aux_sym_number_token1,
    STATE(96), 3,
      sym__expression,
      sym_reference,
      sym_number,
    STATE(61), 5,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberarray,
  [727] = 6,
    ACTIONS(29), 1,
      sym_stringidentifier,
    ACTIONS(31), 1,
      sym_numberidentifier,
    ACTIONS(33), 1,
      sym__mat,
    ACTIONS(35), 1,
      aux_sym_number_token1,
    STATE(58), 3,
      sym__expression,
      sym_reference,
      sym_number,
    STATE(61), 5,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberarray,
  [752] = 4,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    STATE(22), 2,
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
  [773] = 4,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    STATE(31), 2,
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
  [794] = 4,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    STATE(38), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(126), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(124), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [815] = 4,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(132), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(130), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [836] = 6,
    ACTIONS(110), 1,
      sym_stringidentifier,
    ACTIONS(112), 1,
      sym_numberidentifier,
    ACTIONS(114), 1,
      sym__mat,
    ACTIONS(116), 1,
      aux_sym_number_token1,
    STATE(70), 3,
      sym__expression,
      sym_reference,
      sym_number,
    STATE(67), 5,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberarray,
  [861] = 6,
    ACTIONS(29), 1,
      sym_stringidentifier,
    ACTIONS(31), 1,
      sym_numberidentifier,
    ACTIONS(33), 1,
      sym__mat,
    ACTIONS(35), 1,
      aux_sym_number_token1,
    STATE(117), 3,
      sym__expression,
      sym_reference,
      sym_number,
    STATE(61), 5,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberarray,
  [886] = 6,
    ACTIONS(29), 1,
      sym_stringidentifier,
    ACTIONS(31), 1,
      sym_numberidentifier,
    ACTIONS(33), 1,
      sym__mat,
    ACTIONS(35), 1,
      aux_sym_number_token1,
    STATE(71), 3,
      sym__expression,
      sym_reference,
      sym_number,
    STATE(61), 5,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberarray,
  [911] = 4,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(136), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(134), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [932] = 6,
    ACTIONS(29), 1,
      sym_stringidentifier,
    ACTIONS(31), 1,
      sym_numberidentifier,
    ACTIONS(33), 1,
      sym__mat,
    ACTIONS(35), 1,
      aux_sym_number_token1,
    STATE(121), 3,
      sym__expression,
      sym_reference,
      sym_number,
    STATE(61), 5,
      sym_numberelement,
      sym_stringelement,
      sym_stringarray,
      sym_stringreference,
      sym_numberarray,
  [957] = 2,
    ACTIONS(140), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(138), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [973] = 4,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(136), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(134), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [993] = 2,
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
  [1009] = 2,
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
  [1025] = 4,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    STATE(48), 1,
      aux_sym_stringelement_repeat1,
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
  [1045] = 4,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(120), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(118), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1065] = 4,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
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
  [1085] = 4,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(132), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(130), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1105] = 4,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(126), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(124), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1125] = 2,
    ACTIONS(159), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(157), 8,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1141] = 4,
    ACTIONS(142), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      aux_sym_stringelement_repeat1,
    ACTIONS(126), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(124), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1161] = 2,
    ACTIONS(140), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(138), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1176] = 4,
    STATE(52), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(165), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(163), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(161), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [1195] = 3,
    ACTIONS(168), 1,
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
  [1212] = 2,
    ACTIONS(172), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(170), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1227] = 2,
    ACTIONS(176), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(174), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1242] = 4,
    STATE(64), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(180), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(182), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(178), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [1261] = 2,
    ACTIONS(159), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(157), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1276] = 4,
    STATE(62), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(188), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(186), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(184), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [1295] = 2,
    ACTIONS(150), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(148), 8,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1310] = 4,
    STATE(56), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(182), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(186), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(184), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [1329] = 2,
    ACTIONS(192), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(190), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1344] = 4,
    STATE(52), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(188), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(180), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(178), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [1363] = 2,
    ACTIONS(196), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(194), 7,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1378] = 4,
    STATE(64), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(163), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(198), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(161), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [1397] = 2,
    ACTIONS(196), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(194), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1411] = 5,
    ACTIONS(9), 1,
      anon_sym_def,
    ACTIONS(11), 1,
      aux_sym_print_statement_token1,
    ACTIONS(201), 1,
      sym_label,
    STATE(74), 2,
      sym__statement,
      sym_print_statement,
    STATE(91), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [1431] = 2,
    ACTIONS(192), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(190), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1445] = 2,
    ACTIONS(172), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(170), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1459] = 2,
    ACTIONS(146), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(144), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1473] = 2,
    ACTIONS(163), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(161), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1487] = 2,
    ACTIONS(163), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(161), 6,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1501] = 5,
    ACTIONS(17), 1,
      anon_sym_def,
    ACTIONS(23), 1,
      aux_sym_print_statement_token1,
    ACTIONS(203), 1,
      sym_label,
    STATE(80), 2,
      sym__statement,
      sym_print_statement,
    STATE(97), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [1521] = 2,
    ACTIONS(176), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(174), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [1535] = 4,
    STATE(79), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(207), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(209), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(205), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
  [1552] = 4,
    STATE(75), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(213), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(216), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(211), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
  [1569] = 4,
    ACTIONS(218), 1,
      anon_sym_def,
    ACTIONS(220), 1,
      aux_sym_print_statement_token1,
    STATE(80), 2,
      sym__statement,
      sym_print_statement,
    STATE(97), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [1586] = 4,
    ACTIONS(218), 1,
      anon_sym_def,
    ACTIONS(220), 1,
      aux_sym_print_statement_token1,
    STATE(80), 2,
      sym__statement,
      sym_print_statement,
    STATE(92), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [1603] = 4,
    ACTIONS(222), 1,
      anon_sym_def,
    ACTIONS(224), 1,
      aux_sym_print_statement_token1,
    STATE(74), 2,
      sym__statement,
      sym_print_statement,
    STATE(91), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [1620] = 4,
    STATE(75), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(207), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(228), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(226), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
  [1637] = 4,
    STATE(82), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(205), 2,
      sym_line_number,
      sym_label,
    ACTIONS(230), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(209), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
  [1654] = 4,
    ACTIONS(222), 1,
      anon_sym_def,
    ACTIONS(224), 1,
      aux_sym_print_statement_token1,
    STATE(74), 2,
      sym__statement,
      sym_print_statement,
    STATE(90), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [1671] = 4,
    STATE(83), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(226), 2,
      sym_line_number,
      sym_label,
    ACTIONS(230), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(228), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
  [1688] = 4,
    STATE(83), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(211), 2,
      sym_line_number,
      sym_label,
    ACTIONS(232), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(216), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
  [1705] = 2,
    ACTIONS(216), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(211), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [1717] = 2,
    ACTIONS(216), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
    ACTIONS(211), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [1729] = 2,
    ACTIONS(235), 3,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
    ACTIONS(237), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
  [1740] = 2,
    ACTIONS(239), 3,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
    ACTIONS(241), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
  [1751] = 2,
    ACTIONS(243), 3,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
    ACTIONS(245), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
  [1762] = 2,
    ACTIONS(247), 3,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
    ACTIONS(249), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
  [1773] = 2,
    ACTIONS(253), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(251), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
  [1783] = 2,
    ACTIONS(257), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(255), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
  [1793] = 2,
    ACTIONS(251), 2,
      sym_line_number,
      sym_label,
    ACTIONS(253), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
  [1803] = 2,
    ACTIONS(261), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(259), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
  [1813] = 2,
    ACTIONS(263), 2,
      sym_line_number,
      sym_label,
    ACTIONS(265), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
  [1823] = 2,
    ACTIONS(265), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(263), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
  [1833] = 2,
    ACTIONS(259), 2,
      sym_line_number,
      sym_label,
    ACTIONS(261), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
  [1843] = 2,
    ACTIONS(255), 2,
      sym_line_number,
      sym_label,
    ACTIONS(257), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
  [1853] = 2,
    ACTIONS(269), 2,
      anon_sym_def,
      aux_sym_print_statement_token1,
    ACTIONS(267), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
  [1863] = 2,
    ACTIONS(267), 2,
      sym_line_number,
      sym_label,
    ACTIONS(269), 3,
      anon_sym_def,
      anon_sym_fnend,
      aux_sym_print_statement_token1,
  [1873] = 4,
    ACTIONS(271), 1,
      anon_sym_STAR,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    STATE(86), 1,
      sym_parameter_list,
    STATE(126), 1,
      sym_function_length,
  [1886] = 3,
    ACTIONS(275), 1,
      sym_string_function_name,
    ACTIONS(277), 1,
      sym_numeric_function_name,
    STATE(2), 2,
      sym_string_function_definition,
      sym_numeric_function_definition,
  [1897] = 3,
    ACTIONS(275), 1,
      sym_string_function_name,
    ACTIONS(277), 1,
      sym_numeric_function_name,
    STATE(3), 2,
      sym_string_function_definition,
      sym_numeric_function_definition,
  [1908] = 4,
    ACTIONS(35), 1,
      aux_sym_number_token1,
    ACTIONS(279), 1,
      anon_sym_STAR,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
    STATE(149), 1,
      sym_number,
  [1921] = 4,
    ACTIONS(283), 1,
      anon_sym_COLON,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    STATE(118), 1,
      aux_sym_numberelement_repeat1,
  [1934] = 4,
    ACTIONS(35), 1,
      aux_sym_number_token1,
    ACTIONS(289), 1,
      anon_sym_STAR,
    ACTIONS(291), 1,
      anon_sym_RPAREN,
    STATE(142), 1,
      sym_number,
  [1947] = 4,
    ACTIONS(283), 1,
      anon_sym_COLON,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      aux_sym_numberelement_repeat1,
  [1960] = 3,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      aux_sym_numberelement_repeat1,
  [1970] = 3,
    ACTIONS(297), 1,
      sym_identifier,
    ACTIONS(299), 1,
      anon_sym_AMP,
    STATE(141), 1,
      sym_parameter,
  [1980] = 2,
    ACTIONS(224), 1,
      aux_sym_print_statement_token1,
    STATE(84), 2,
      sym__statement,
      sym_print_statement,
  [1988] = 3,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    STATE(111), 1,
      aux_sym_dimension_repeat1,
  [1998] = 3,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
    ACTIONS(307), 1,
      anon_sym_COMMA,
    STATE(111), 1,
      aux_sym_dimension_repeat1,
  [2008] = 3,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(310), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      aux_sym_dimension_repeat1,
  [2018] = 3,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(312), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      aux_sym_numberelement_repeat1,
  [2028] = 3,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(314), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      aux_sym_dimension_repeat1,
  [2038] = 3,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(316), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      aux_sym_numberelement_repeat1,
  [2048] = 3,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(318), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      aux_sym_dimension_repeat1,
  [2058] = 3,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(320), 1,
      anon_sym_RPAREN,
    STATE(113), 1,
      aux_sym_numberelement_repeat1,
  [2068] = 3,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(322), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      aux_sym_numberelement_repeat1,
  [2078] = 3,
    ACTIONS(324), 1,
      anon_sym_RPAREN,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    STATE(119), 1,
      aux_sym_numberelement_repeat1,
  [2088] = 3,
    ACTIONS(35), 1,
      aux_sym_number_token1,
    ACTIONS(329), 1,
      anon_sym_RPAREN,
    STATE(143), 1,
      sym_number,
  [2098] = 3,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    ACTIONS(331), 1,
      anon_sym_RPAREN,
    STATE(107), 1,
      aux_sym_numberelement_repeat1,
  [2108] = 2,
    ACTIONS(220), 1,
      aux_sym_print_statement_token1,
    STATE(85), 2,
      sym__statement,
      sym_print_statement,
  [2116] = 3,
    ACTIONS(35), 1,
      aux_sym_number_token1,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
    STATE(149), 1,
      sym_number,
  [2126] = 1,
    ACTIONS(324), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2131] = 2,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    STATE(54), 1,
      sym_dimension,
  [2138] = 2,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    STATE(88), 1,
      sym_parameter_list,
  [2145] = 2,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    STATE(89), 1,
      sym_parameter_list,
  [2152] = 1,
    ACTIONS(305), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2157] = 2,
    ACTIONS(35), 1,
      aux_sym_number_token1,
    STATE(146), 1,
      sym_number,
  [2164] = 1,
    ACTIONS(333), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2169] = 2,
    ACTIONS(335), 1,
      sym_stringidentifier,
    ACTIONS(337), 1,
      sym_numberidentifier,
  [2176] = 2,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_dimension,
  [2183] = 2,
    ACTIONS(339), 1,
      sym_stringidentifier,
    ACTIONS(341), 1,
      sym_numberidentifier,
  [2190] = 1,
    ACTIONS(343), 1,
      aux_sym_print_statement_token2,
  [2194] = 1,
    ACTIONS(345), 1,
      anon_sym_LPAREN,
  [2198] = 1,
    ACTIONS(347), 1,
      aux_sym_number_token1,
  [2202] = 1,
    ACTIONS(349), 1,
      aux_sym_number_token1,
  [2206] = 1,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
  [2210] = 1,
    ACTIONS(283), 1,
      anon_sym_COLON,
  [2214] = 1,
    ACTIONS(353), 1,
      anon_sym_RPAREN,
  [2218] = 1,
    ACTIONS(355), 1,
      anon_sym_RPAREN,
  [2222] = 1,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
  [2226] = 1,
    ACTIONS(357), 1,
      anon_sym_RPAREN,
  [2230] = 1,
    ACTIONS(359), 1,
      anon_sym_RPAREN,
  [2234] = 1,
    ACTIONS(361), 1,
      aux_sym_print_statement_token2,
  [2238] = 1,
    ACTIONS(363), 1,
      anon_sym_LPAREN,
  [2242] = 1,
    ACTIONS(365), 1,
      sym_identifier,
  [2246] = 1,
    ACTIONS(367), 1,
      ts_builtin_sym_end,
  [2250] = 1,
    ACTIONS(329), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 94,
  [SMALL_STATE(6)] = 116,
  [SMALL_STATE(7)] = 144,
  [SMALL_STATE(8)] = 172,
  [SMALL_STATE(9)] = 200,
  [SMALL_STATE(10)] = 222,
  [SMALL_STATE(11)] = 250,
  [SMALL_STATE(12)] = 280,
  [SMALL_STATE(13)] = 310,
  [SMALL_STATE(14)] = 332,
  [SMALL_STATE(15)] = 362,
  [SMALL_STATE(16)] = 390,
  [SMALL_STATE(17)] = 420,
  [SMALL_STATE(18)] = 448,
  [SMALL_STATE(19)] = 478,
  [SMALL_STATE(20)] = 497,
  [SMALL_STATE(21)] = 518,
  [SMALL_STATE(22)] = 539,
  [SMALL_STATE(23)] = 560,
  [SMALL_STATE(24)] = 585,
  [SMALL_STATE(25)] = 610,
  [SMALL_STATE(26)] = 635,
  [SMALL_STATE(27)] = 660,
  [SMALL_STATE(28)] = 681,
  [SMALL_STATE(29)] = 702,
  [SMALL_STATE(30)] = 727,
  [SMALL_STATE(31)] = 752,
  [SMALL_STATE(32)] = 773,
  [SMALL_STATE(33)] = 794,
  [SMALL_STATE(34)] = 815,
  [SMALL_STATE(35)] = 836,
  [SMALL_STATE(36)] = 861,
  [SMALL_STATE(37)] = 886,
  [SMALL_STATE(38)] = 911,
  [SMALL_STATE(39)] = 932,
  [SMALL_STATE(40)] = 957,
  [SMALL_STATE(41)] = 973,
  [SMALL_STATE(42)] = 993,
  [SMALL_STATE(43)] = 1009,
  [SMALL_STATE(44)] = 1025,
  [SMALL_STATE(45)] = 1045,
  [SMALL_STATE(46)] = 1065,
  [SMALL_STATE(47)] = 1085,
  [SMALL_STATE(48)] = 1105,
  [SMALL_STATE(49)] = 1125,
  [SMALL_STATE(50)] = 1141,
  [SMALL_STATE(51)] = 1161,
  [SMALL_STATE(52)] = 1176,
  [SMALL_STATE(53)] = 1195,
  [SMALL_STATE(54)] = 1212,
  [SMALL_STATE(55)] = 1227,
  [SMALL_STATE(56)] = 1242,
  [SMALL_STATE(57)] = 1261,
  [SMALL_STATE(58)] = 1276,
  [SMALL_STATE(59)] = 1295,
  [SMALL_STATE(60)] = 1310,
  [SMALL_STATE(61)] = 1329,
  [SMALL_STATE(62)] = 1344,
  [SMALL_STATE(63)] = 1363,
  [SMALL_STATE(64)] = 1378,
  [SMALL_STATE(65)] = 1397,
  [SMALL_STATE(66)] = 1411,
  [SMALL_STATE(67)] = 1431,
  [SMALL_STATE(68)] = 1445,
  [SMALL_STATE(69)] = 1459,
  [SMALL_STATE(70)] = 1473,
  [SMALL_STATE(71)] = 1487,
  [SMALL_STATE(72)] = 1501,
  [SMALL_STATE(73)] = 1521,
  [SMALL_STATE(74)] = 1535,
  [SMALL_STATE(75)] = 1552,
  [SMALL_STATE(76)] = 1569,
  [SMALL_STATE(77)] = 1586,
  [SMALL_STATE(78)] = 1603,
  [SMALL_STATE(79)] = 1620,
  [SMALL_STATE(80)] = 1637,
  [SMALL_STATE(81)] = 1654,
  [SMALL_STATE(82)] = 1671,
  [SMALL_STATE(83)] = 1688,
  [SMALL_STATE(84)] = 1705,
  [SMALL_STATE(85)] = 1717,
  [SMALL_STATE(86)] = 1729,
  [SMALL_STATE(87)] = 1740,
  [SMALL_STATE(88)] = 1751,
  [SMALL_STATE(89)] = 1762,
  [SMALL_STATE(90)] = 1773,
  [SMALL_STATE(91)] = 1783,
  [SMALL_STATE(92)] = 1793,
  [SMALL_STATE(93)] = 1803,
  [SMALL_STATE(94)] = 1813,
  [SMALL_STATE(95)] = 1823,
  [SMALL_STATE(96)] = 1833,
  [SMALL_STATE(97)] = 1843,
  [SMALL_STATE(98)] = 1853,
  [SMALL_STATE(99)] = 1863,
  [SMALL_STATE(100)] = 1873,
  [SMALL_STATE(101)] = 1886,
  [SMALL_STATE(102)] = 1897,
  [SMALL_STATE(103)] = 1908,
  [SMALL_STATE(104)] = 1921,
  [SMALL_STATE(105)] = 1934,
  [SMALL_STATE(106)] = 1947,
  [SMALL_STATE(107)] = 1960,
  [SMALL_STATE(108)] = 1970,
  [SMALL_STATE(109)] = 1980,
  [SMALL_STATE(110)] = 1988,
  [SMALL_STATE(111)] = 1998,
  [SMALL_STATE(112)] = 2008,
  [SMALL_STATE(113)] = 2018,
  [SMALL_STATE(114)] = 2028,
  [SMALL_STATE(115)] = 2038,
  [SMALL_STATE(116)] = 2048,
  [SMALL_STATE(117)] = 2058,
  [SMALL_STATE(118)] = 2068,
  [SMALL_STATE(119)] = 2078,
  [SMALL_STATE(120)] = 2088,
  [SMALL_STATE(121)] = 2098,
  [SMALL_STATE(122)] = 2108,
  [SMALL_STATE(123)] = 2116,
  [SMALL_STATE(124)] = 2126,
  [SMALL_STATE(125)] = 2131,
  [SMALL_STATE(126)] = 2138,
  [SMALL_STATE(127)] = 2145,
  [SMALL_STATE(128)] = 2152,
  [SMALL_STATE(129)] = 2157,
  [SMALL_STATE(130)] = 2164,
  [SMALL_STATE(131)] = 2169,
  [SMALL_STATE(132)] = 2176,
  [SMALL_STATE(133)] = 2183,
  [SMALL_STATE(134)] = 2190,
  [SMALL_STATE(135)] = 2194,
  [SMALL_STATE(136)] = 2198,
  [SMALL_STATE(137)] = 2202,
  [SMALL_STATE(138)] = 2206,
  [SMALL_STATE(139)] = 2210,
  [SMALL_STATE(140)] = 2214,
  [SMALL_STATE(141)] = 2218,
  [SMALL_STATE(142)] = 2222,
  [SMALL_STATE(143)] = 2226,
  [SMALL_STATE(144)] = 2230,
  [SMALL_STATE(145)] = 2234,
  [SMALL_STATE(146)] = 2238,
  [SMALL_STATE(147)] = 2242,
  [SMALL_STATE(148)] = 2246,
  [SMALL_STATE(149)] = 2250,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringarray, 3),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringarray, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringarray, 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringarray, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stringarray_repeat1, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stringarray_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringarray_repeat1, 2), SHIFT_REPEAT(7),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(72),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(101),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(145),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(102),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(134),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stringelement_repeat1, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stringelement_repeat1, 2),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringelement_repeat1, 2), SHIFT_REPEAT(4),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringelement, 4),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringelement, 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringarray_repeat1, 2), SHIFT_REPEAT(10),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringreference, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringreference, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringelement, 5),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringelement, 5),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringreference, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringreference, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stringelement, 6),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stringelement, 6),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dimension, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 3),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stringelement_repeat1, 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_stringelement_repeat1, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stringelement_repeat1, 2), SHIFT_REPEAT(8),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dimension, 4),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dimension, 4),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_print_statement_repeat1, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_print_statement_repeat1, 2),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT_REPEAT(37),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numberarray, 3),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numberarray, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numberelement, 5),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numberelement, 5),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_statement, 4),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print_statement, 4),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_statement, 3),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print_statement, 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numberelement, 4),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numberelement, 4),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT_REPEAT(35),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_line_statement, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_line_statement, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__multi_line_statement_repeat1, 2),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multi_line_statement_repeat1, 2), SHIFT_REPEAT(109),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__multi_line_statement_repeat1, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_line_statement, 2),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_line_statement, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multi_line_statement_repeat1, 2), SHIFT_REPEAT(122),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_function_definition, 2),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_function_definition, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_function_definition, 3),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_function_definition, 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_function_definition, 2),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_function_definition, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 3),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dimension_repeat1, 2),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dimension_repeat1, 2), SHIFT_REPEAT(17),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_numberelement_repeat1, 2),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_numberelement_repeat1, 2), SHIFT_REPEAT(23),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_length, 2, .production_id = 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [367] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
