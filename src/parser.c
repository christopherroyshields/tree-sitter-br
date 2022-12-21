#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 71
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym__multi_line_statement_token1 = 1,
  anon_sym_COLON = 2,
  sym_line_number = 3,
  sym_label = 4,
  anon_sym_def = 5,
  anon_sym_EQ = 6,
  anon_sym_fnend = 7,
  anon_sym_STAR = 8,
  sym_string_function_name = 9,
  sym_numeric_function_name = 10,
  anon_sym_LPAREN = 11,
  anon_sym_RPAREN = 12,
  anon_sym_AMP = 13,
  anon_sym_bool = 14,
  anon_sym_print = 15,
  anon_sym_COMMA = 16,
  anon_sym_SEMI = 17,
  sym_identifier = 18,
  sym_number = 19,
  sym_source_file = 20,
  sym_line = 21,
  sym__single_line_statement = 22,
  sym__multi_line_statement = 23,
  sym__statement = 24,
  sym__definition = 25,
  sym_function_definition = 26,
  sym_string_function_definition = 27,
  sym_numeric_function_definition = 28,
  sym_function_length = 29,
  sym_parameter_list = 30,
  sym_parameter = 31,
  sym_print_statement = 32,
  sym__expression = 33,
  aux_sym_source_file_repeat1 = 34,
  aux_sym__multi_line_statement_repeat1 = 35,
  aux_sym_print_statement_repeat1 = 36,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [anon_sym_print] = "print",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
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
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__multi_line_statement_repeat1] = "_multi_line_statement_repeat1",
  [aux_sym_print_statement_repeat1] = "print_statement_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
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
  [anon_sym_print] = anon_sym_print,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
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
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__multi_line_statement_repeat1] = aux_sym__multi_line_statement_repeat1,
  [aux_sym_print_statement_repeat1] = aux_sym_print_statement_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [anon_sym_print] = {
    .visible = true,
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
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
      if (lookahead == '&') ADVANCE(50);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == ')') ADVANCE(49);
      if (lookahead == '*') ADVANCE(45);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == ':') ADVANCE(38);
      if (lookahead == ';') ADVANCE(55);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == 'b') ADVANCE(15);
      if (lookahead == 'd') ADVANCE(6);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'p') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
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
      if (lookahead == '&') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(2);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == 'd') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == 'l') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == 'n') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == 'n') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == 'n') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == 'o') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == 'o') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == 'r') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == 't') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(20);
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == 'p') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'f') ADVANCE(41);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 27:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      END_STATE();
    case 28:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      END_STATE();
    case 29:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 35:
      if (eof) ADVANCE(36);
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == ':') ADVANCE(38);
      if (lookahead == ';') ADVANCE(55);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == 'd') ADVANCE(6);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'p') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
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
      if (lookahead == ':') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_fnend);
      if (lookahead == ':') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_string_function_name);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_numeric_function_name);
      if (lookahead == '$') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == ':') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_print);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_print);
      if (lookahead == ':') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
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
  [22] = {.lex_state = 19},
  [23] = {.lex_state = 35},
  [24] = {.lex_state = 35},
  [25] = {.lex_state = 19},
  [26] = {.lex_state = 19},
  [27] = {.lex_state = 19},
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
  [40] = {.lex_state = 35},
  [41] = {.lex_state = 35},
  [42] = {.lex_state = 35},
  [43] = {.lex_state = 35},
  [44] = {.lex_state = 35},
  [45] = {.lex_state = 19},
  [46] = {.lex_state = 19},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 19},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 19},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__multi_line_statement_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_label] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_fnend] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_print] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(66),
    [sym_line] = STATE(6),
    [sym__single_line_statement] = STATE(41),
    [sym__multi_line_statement] = STATE(41),
    [sym__statement] = STATE(24),
    [sym__definition] = STATE(41),
    [sym_function_definition] = STATE(41),
    [sym_print_statement] = STATE(24),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_line_number] = ACTIONS(5),
    [sym_label] = ACTIONS(7),
    [anon_sym_def] = ACTIONS(9),
    [anon_sym_print] = ACTIONS(11),
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
      anon_sym_print,
    STATE(5), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(20), 2,
      sym__statement,
      sym_print_statement,
    STATE(37), 4,
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
      anon_sym_print,
    ACTIONS(25), 1,
      anon_sym_EQ,
    ACTIONS(27), 1,
      anon_sym_fnend,
    STATE(4), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(20), 2,
      sym__statement,
      sym_print_statement,
    STATE(37), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [66] = 8,
    ACTIONS(13), 1,
      sym_line_number,
    ACTIONS(15), 1,
      sym_label,
    ACTIONS(17), 1,
      anon_sym_def,
    ACTIONS(23), 1,
      anon_sym_print,
    ACTIONS(29), 1,
      anon_sym_fnend,
    STATE(7), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(20), 2,
      sym__statement,
      sym_print_statement,
    STATE(37), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [96] = 8,
    ACTIONS(13), 1,
      sym_line_number,
    ACTIONS(15), 1,
      sym_label,
    ACTIONS(17), 1,
      anon_sym_def,
    ACTIONS(23), 1,
      anon_sym_print,
    ACTIONS(31), 1,
      anon_sym_fnend,
    STATE(7), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(20), 2,
      sym__statement,
      sym_print_statement,
    STATE(37), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [126] = 8,
    ACTIONS(5), 1,
      sym_line_number,
    ACTIONS(7), 1,
      sym_label,
    ACTIONS(9), 1,
      anon_sym_def,
    ACTIONS(11), 1,
      anon_sym_print,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(8), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(24), 2,
      sym__statement,
      sym_print_statement,
    STATE(41), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [156] = 8,
    ACTIONS(35), 1,
      sym_line_number,
    ACTIONS(38), 1,
      sym_label,
    ACTIONS(41), 1,
      anon_sym_def,
    ACTIONS(44), 1,
      anon_sym_fnend,
    ACTIONS(46), 1,
      anon_sym_print,
    STATE(7), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(20), 2,
      sym__statement,
      sym_print_statement,
    STATE(37), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [186] = 8,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      sym_line_number,
    ACTIONS(54), 1,
      sym_label,
    ACTIONS(57), 1,
      anon_sym_def,
    ACTIONS(60), 1,
      anon_sym_print,
    STATE(8), 2,
      sym_line,
      aux_sym_source_file_repeat1,
    STATE(24), 2,
      sym__statement,
      sym_print_statement,
    STATE(41), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [216] = 4,
    STATE(9), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(67), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(65), 3,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_print,
    ACTIONS(63), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [235] = 4,
    STATE(9), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(74), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(72), 3,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_print,
    ACTIONS(70), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [254] = 4,
    STATE(10), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(74), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(78), 3,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_print,
    ACTIONS(76), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [273] = 4,
    STATE(12), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(65), 2,
      anon_sym_def,
      anon_sym_print,
    ACTIONS(80), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(63), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [292] = 4,
    STATE(14), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(78), 2,
      anon_sym_def,
      anon_sym_print,
    ACTIONS(83), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(76), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [311] = 4,
    STATE(12), 1,
      aux_sym_print_statement_repeat1,
    ACTIONS(72), 2,
      anon_sym_def,
      anon_sym_print,
    ACTIONS(83), 2,
      anon_sym_COMMA,
      anon_sym_SEMI,
    ACTIONS(70), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [330] = 5,
    ACTIONS(9), 1,
      anon_sym_def,
    ACTIONS(11), 1,
      anon_sym_print,
    ACTIONS(85), 1,
      sym_label,
    STATE(24), 2,
      sym__statement,
      sym_print_statement,
    STATE(43), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [350] = 5,
    ACTIONS(17), 1,
      anon_sym_def,
    ACTIONS(23), 1,
      anon_sym_print,
    ACTIONS(87), 1,
      sym_label,
    STATE(20), 2,
      sym__statement,
      sym_print_statement,
    STATE(42), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [370] = 2,
    ACTIONS(65), 3,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_print,
    ACTIONS(63), 6,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [384] = 2,
    ACTIONS(65), 2,
      anon_sym_def,
      anon_sym_print,
    ACTIONS(63), 7,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [398] = 4,
    STATE(28), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(91), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(93), 2,
      anon_sym_def,
      anon_sym_print,
    ACTIONS(89), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
  [415] = 4,
    STATE(23), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(95), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(97), 2,
      sym_line_number,
      sym_label,
    ACTIONS(99), 3,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_print,
  [432] = 4,
    STATE(21), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(101), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(104), 2,
      sym_line_number,
      sym_label,
    ACTIONS(106), 3,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_print,
  [449] = 4,
    ACTIONS(108), 1,
      anon_sym_def,
    ACTIONS(110), 1,
      anon_sym_print,
    STATE(24), 2,
      sym__statement,
      sym_print_statement,
    STATE(35), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [466] = 4,
    STATE(21), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(89), 2,
      sym_line_number,
      sym_label,
    ACTIONS(95), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(93), 3,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_print,
  [483] = 4,
    STATE(19), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(91), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(99), 2,
      anon_sym_def,
      anon_sym_print,
    ACTIONS(97), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
  [500] = 4,
    ACTIONS(112), 1,
      anon_sym_def,
    ACTIONS(114), 1,
      anon_sym_print,
    STATE(20), 2,
      sym__statement,
      sym_print_statement,
    STATE(42), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [517] = 4,
    ACTIONS(108), 1,
      anon_sym_def,
    ACTIONS(110), 1,
      anon_sym_print,
    STATE(24), 2,
      sym__statement,
      sym_print_statement,
    STATE(43), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [534] = 4,
    ACTIONS(112), 1,
      anon_sym_def,
    ACTIONS(114), 1,
      anon_sym_print,
    STATE(20), 2,
      sym__statement,
      sym_print_statement,
    STATE(40), 4,
      sym__single_line_statement,
      sym__multi_line_statement,
      sym__definition,
      sym_function_definition,
  [551] = 4,
    STATE(28), 1,
      aux_sym__multi_line_statement_repeat1,
    ACTIONS(106), 2,
      anon_sym_def,
      anon_sym_print,
    ACTIONS(116), 2,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
    ACTIONS(104), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
  [568] = 2,
    ACTIONS(106), 3,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_print,
    ACTIONS(104), 4,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [580] = 2,
    ACTIONS(106), 2,
      anon_sym_def,
      anon_sym_print,
    ACTIONS(104), 5,
      ts_builtin_sym_end,
      aux_sym__multi_line_statement_token1,
      anon_sym_COLON,
      sym_line_number,
      sym_label,
  [592] = 2,
    ACTIONS(119), 3,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
    ACTIONS(121), 3,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_print,
  [603] = 2,
    ACTIONS(123), 3,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
    ACTIONS(125), 3,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_print,
  [614] = 2,
    ACTIONS(127), 3,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
    ACTIONS(129), 3,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_print,
  [625] = 2,
    ACTIONS(131), 3,
      sym_line_number,
      sym_label,
      anon_sym_EQ,
    ACTIONS(133), 3,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_print,
  [636] = 2,
    ACTIONS(137), 2,
      anon_sym_def,
      anon_sym_print,
    ACTIONS(135), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
  [646] = 2,
    ACTIONS(141), 2,
      anon_sym_def,
      anon_sym_print,
    ACTIONS(139), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
  [656] = 2,
    ACTIONS(143), 2,
      sym_line_number,
      sym_label,
    ACTIONS(145), 3,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_print,
  [666] = 2,
    ACTIONS(149), 2,
      anon_sym_def,
      anon_sym_print,
    ACTIONS(147), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
  [676] = 2,
    ACTIONS(147), 2,
      sym_line_number,
      sym_label,
    ACTIONS(149), 3,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_print,
  [686] = 2,
    ACTIONS(135), 2,
      sym_line_number,
      sym_label,
    ACTIONS(137), 3,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_print,
  [696] = 2,
    ACTIONS(145), 2,
      anon_sym_def,
      anon_sym_print,
    ACTIONS(143), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
  [706] = 2,
    ACTIONS(151), 2,
      sym_line_number,
      sym_label,
    ACTIONS(153), 3,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_print,
  [716] = 2,
    ACTIONS(153), 2,
      anon_sym_def,
      anon_sym_print,
    ACTIONS(151), 3,
      ts_builtin_sym_end,
      sym_line_number,
      sym_label,
  [726] = 2,
    ACTIONS(139), 2,
      sym_line_number,
      sym_label,
    ACTIONS(141), 3,
      anon_sym_def,
      anon_sym_fnend,
      anon_sym_print,
  [736] = 3,
    ACTIONS(155), 1,
      sym_string_function_name,
    ACTIONS(157), 1,
      sym_numeric_function_name,
    STATE(2), 2,
      sym_string_function_definition,
      sym_numeric_function_definition,
  [747] = 3,
    ACTIONS(155), 1,
      sym_string_function_name,
    ACTIONS(157), 1,
      sym_numeric_function_name,
    STATE(3), 2,
      sym_string_function_definition,
      sym_numeric_function_definition,
  [758] = 4,
    ACTIONS(159), 1,
      anon_sym_STAR,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      sym_parameter_list,
    STATE(62), 1,
      sym_function_length,
  [771] = 2,
    STATE(36), 1,
      sym__expression,
    ACTIONS(163), 2,
      sym_identifier,
      sym_number,
  [779] = 3,
    ACTIONS(165), 1,
      anon_sym_STAR,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
    ACTIONS(169), 1,
      sym_number,
  [789] = 3,
    ACTIONS(171), 1,
      anon_sym_AMP,
    ACTIONS(173), 1,
      sym_identifier,
    STATE(68), 1,
      sym_parameter,
  [799] = 2,
    STATE(13), 1,
      sym__expression,
    ACTIONS(175), 2,
      sym_identifier,
      sym_number,
  [807] = 2,
    ACTIONS(114), 1,
      anon_sym_print,
    STATE(29), 2,
      sym__statement,
      sym_print_statement,
  [815] = 2,
    STATE(44), 1,
      sym__expression,
    ACTIONS(177), 2,
      sym_identifier,
      sym_number,
  [823] = 2,
    ACTIONS(110), 1,
      anon_sym_print,
    STATE(30), 2,
      sym__statement,
      sym_print_statement,
  [831] = 2,
    STATE(17), 1,
      sym__expression,
    ACTIONS(179), 2,
      sym_identifier,
      sym_number,
  [839] = 2,
    STATE(18), 1,
      sym__expression,
    ACTIONS(181), 2,
      sym_identifier,
      sym_number,
  [847] = 3,
    ACTIONS(183), 1,
      anon_sym_STAR,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    ACTIONS(187), 1,
      sym_number,
  [857] = 2,
    STATE(11), 1,
      sym__expression,
    ACTIONS(189), 2,
      sym_identifier,
      sym_number,
  [865] = 2,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
    ACTIONS(193), 1,
      sym_number,
  [872] = 2,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
    ACTIONS(187), 1,
      sym_number,
  [879] = 2,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym_parameter_list,
  [886] = 2,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      sym_parameter_list,
  [893] = 1,
    ACTIONS(195), 1,
      anon_sym_RPAREN,
  [897] = 1,
    ACTIONS(197), 1,
      sym_number,
  [901] = 1,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
  [905] = 1,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
  [909] = 1,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
  [913] = 1,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
  [917] = 1,
    ACTIONS(203), 1,
      sym_identifier,
  [921] = 1,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 96,
  [SMALL_STATE(6)] = 126,
  [SMALL_STATE(7)] = 156,
  [SMALL_STATE(8)] = 186,
  [SMALL_STATE(9)] = 216,
  [SMALL_STATE(10)] = 235,
  [SMALL_STATE(11)] = 254,
  [SMALL_STATE(12)] = 273,
  [SMALL_STATE(13)] = 292,
  [SMALL_STATE(14)] = 311,
  [SMALL_STATE(15)] = 330,
  [SMALL_STATE(16)] = 350,
  [SMALL_STATE(17)] = 370,
  [SMALL_STATE(18)] = 384,
  [SMALL_STATE(19)] = 398,
  [SMALL_STATE(20)] = 415,
  [SMALL_STATE(21)] = 432,
  [SMALL_STATE(22)] = 449,
  [SMALL_STATE(23)] = 466,
  [SMALL_STATE(24)] = 483,
  [SMALL_STATE(25)] = 500,
  [SMALL_STATE(26)] = 517,
  [SMALL_STATE(27)] = 534,
  [SMALL_STATE(28)] = 551,
  [SMALL_STATE(29)] = 568,
  [SMALL_STATE(30)] = 580,
  [SMALL_STATE(31)] = 592,
  [SMALL_STATE(32)] = 603,
  [SMALL_STATE(33)] = 614,
  [SMALL_STATE(34)] = 625,
  [SMALL_STATE(35)] = 636,
  [SMALL_STATE(36)] = 646,
  [SMALL_STATE(37)] = 656,
  [SMALL_STATE(38)] = 666,
  [SMALL_STATE(39)] = 676,
  [SMALL_STATE(40)] = 686,
  [SMALL_STATE(41)] = 696,
  [SMALL_STATE(42)] = 706,
  [SMALL_STATE(43)] = 716,
  [SMALL_STATE(44)] = 726,
  [SMALL_STATE(45)] = 736,
  [SMALL_STATE(46)] = 747,
  [SMALL_STATE(47)] = 758,
  [SMALL_STATE(48)] = 771,
  [SMALL_STATE(49)] = 779,
  [SMALL_STATE(50)] = 789,
  [SMALL_STATE(51)] = 799,
  [SMALL_STATE(52)] = 807,
  [SMALL_STATE(53)] = 815,
  [SMALL_STATE(54)] = 823,
  [SMALL_STATE(55)] = 831,
  [SMALL_STATE(56)] = 839,
  [SMALL_STATE(57)] = 847,
  [SMALL_STATE(58)] = 857,
  [SMALL_STATE(59)] = 865,
  [SMALL_STATE(60)] = 872,
  [SMALL_STATE(61)] = 879,
  [SMALL_STATE(62)] = 886,
  [SMALL_STATE(63)] = 893,
  [SMALL_STATE(64)] = 897,
  [SMALL_STATE(65)] = 901,
  [SMALL_STATE(66)] = 905,
  [SMALL_STATE(67)] = 909,
  [SMALL_STATE(68)] = 913,
  [SMALL_STATE(69)] = 917,
  [SMALL_STATE(70)] = 921,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_print_statement_repeat1, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_print_statement_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT_REPEAT(55),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_statement, 3),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print_statement, 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print_statement, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_print_statement, 2),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_print_statement_repeat1, 2), SHIFT_REPEAT(56),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_line_statement, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_line_statement, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multi_line_statement, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multi_line_statement, 1),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multi_line_statement_repeat1, 2), SHIFT_REPEAT(52),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__multi_line_statement_repeat1, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__multi_line_statement_repeat1, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__multi_line_statement_repeat1, 2), SHIFT_REPEAT(54),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_function_definition, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_function_definition, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_function_definition, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_function_definition, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_function_definition, 3),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_function_definition, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [199] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_length, 2),
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
