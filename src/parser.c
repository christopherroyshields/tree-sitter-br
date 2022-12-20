#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 25
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_def = 1,
  anon_sym_STAR = 2,
  sym_string_function_name = 3,
  sym_numeric_function_name = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  anon_sym_AMP = 7,
  anon_sym_bool = 8,
  anon_sym_return = 9,
  anon_sym_SEMI = 10,
  sym_identifier = 11,
  sym_number = 12,
  sym_source_file = 13,
  sym__definition = 14,
  sym_string_function_definition = 15,
  sym_numeric_function_definition = 16,
  sym_function_length = 17,
  sym_parameter_list = 18,
  sym_parameter = 19,
  aux_sym_source_file_repeat1 = 20,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_def] = "def",
  [anon_sym_STAR] = "*",
  [sym_string_function_name] = "string_function_name",
  [sym_numeric_function_name] = "numeric_function_name",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_AMP] = "&",
  [anon_sym_bool] = "bool",
  [anon_sym_return] = "return",
  [anon_sym_SEMI] = ";",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_string_function_definition] = "string_function_definition",
  [sym_numeric_function_definition] = "numeric_function_definition",
  [sym_function_length] = "function_length",
  [sym_parameter_list] = "parameter_list",
  [sym_parameter] = "parameter",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_def] = anon_sym_def,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym_string_function_name] = sym_string_function_name,
  [sym_numeric_function_name] = sym_numeric_function_name,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_string_function_definition] = sym_string_function_definition,
  [sym_numeric_function_definition] = sym_numeric_function_definition,
  [sym_function_length] = sym_function_length,
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameter] = sym_parameter,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_def] = {
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
  [anon_sym_return] = {
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
  [sym__definition] = {
    .visible = false,
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
  [aux_sym_source_file_repeat1] = {
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
      if (eof) ADVANCE(14);
      if (lookahead == '&') ADVANCE(21);
      if (lookahead == '(') ADVANCE(19);
      if (lookahead == ')') ADVANCE(20);
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == ';') ADVANCE(24);
      if (lookahead == 'b') ADVANCE(9);
      if (lookahead == 'd') ADVANCE(2);
      if (lookahead == 'f') ADVANCE(6);
      if (lookahead == 'r') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 1:
      if (lookahead == '&') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 2:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == 'f') ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 6:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 7:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(5);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_string_function_name);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_numeric_function_name);
      if (lookahead == '$') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '$') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym_string_function_name] = ACTIONS(1),
    [sym_numeric_function_name] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(21),
    [sym__definition] = STATE(2),
    [sym_string_function_definition] = STATE(2),
    [sym_numeric_function_definition] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_def] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(5), 1,
      anon_sym_def,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    STATE(3), 4,
      sym__definition,
      sym_string_function_definition,
      sym_numeric_function_definition,
      aux_sym_source_file_repeat1,
  [13] = 3,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      anon_sym_def,
    STATE(3), 4,
      sym__definition,
      sym_string_function_definition,
      sym_numeric_function_definition,
      aux_sym_source_file_repeat1,
  [26] = 4,
    ACTIONS(14), 1,
      anon_sym_STAR,
    ACTIONS(16), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      sym_function_length,
    STATE(10), 1,
      sym_parameter_list,
  [39] = 3,
    ACTIONS(18), 1,
      anon_sym_AMP,
    ACTIONS(20), 1,
      sym_identifier,
    STATE(20), 1,
      sym_parameter,
  [49] = 3,
    ACTIONS(22), 1,
      anon_sym_STAR,
    ACTIONS(24), 1,
      anon_sym_RPAREN,
    ACTIONS(26), 1,
      sym_number,
  [59] = 3,
    ACTIONS(28), 1,
      anon_sym_STAR,
    ACTIONS(30), 1,
      anon_sym_RPAREN,
    ACTIONS(32), 1,
      sym_number,
  [69] = 2,
    ACTIONS(16), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      sym_parameter_list,
  [76] = 2,
    ACTIONS(16), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_parameter_list,
  [83] = 1,
    ACTIONS(34), 2,
      ts_builtin_sym_end,
      anon_sym_def,
  [88] = 1,
    ACTIONS(36), 2,
      ts_builtin_sym_end,
      anon_sym_def,
  [93] = 2,
    ACTIONS(38), 1,
      sym_string_function_name,
    ACTIONS(40), 1,
      sym_numeric_function_name,
  [100] = 1,
    ACTIONS(42), 2,
      ts_builtin_sym_end,
      anon_sym_def,
  [105] = 2,
    ACTIONS(24), 1,
      anon_sym_RPAREN,
    ACTIONS(26), 1,
      sym_number,
  [112] = 1,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      anon_sym_def,
  [117] = 2,
    ACTIONS(46), 1,
      anon_sym_RPAREN,
    ACTIONS(48), 1,
      sym_number,
  [124] = 1,
    ACTIONS(50), 1,
      sym_number,
  [128] = 1,
    ACTIONS(52), 1,
      anon_sym_LPAREN,
  [132] = 1,
    ACTIONS(54), 1,
      sym_identifier,
  [136] = 1,
    ACTIONS(56), 1,
      anon_sym_RPAREN,
  [140] = 1,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
  [144] = 1,
    ACTIONS(24), 1,
      anon_sym_RPAREN,
  [148] = 1,
    ACTIONS(46), 1,
      anon_sym_RPAREN,
  [152] = 1,
    ACTIONS(60), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 13,
  [SMALL_STATE(4)] = 26,
  [SMALL_STATE(5)] = 39,
  [SMALL_STATE(6)] = 49,
  [SMALL_STATE(7)] = 59,
  [SMALL_STATE(8)] = 69,
  [SMALL_STATE(9)] = 76,
  [SMALL_STATE(10)] = 83,
  [SMALL_STATE(11)] = 88,
  [SMALL_STATE(12)] = 93,
  [SMALL_STATE(13)] = 100,
  [SMALL_STATE(14)] = 105,
  [SMALL_STATE(15)] = 112,
  [SMALL_STATE(16)] = 117,
  [SMALL_STATE(17)] = 124,
  [SMALL_STATE(18)] = 128,
  [SMALL_STATE(19)] = 132,
  [SMALL_STATE(20)] = 136,
  [SMALL_STATE(21)] = 140,
  [SMALL_STATE(22)] = 144,
  [SMALL_STATE(23)] = 148,
  [SMALL_STATE(24)] = 152,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [14] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [16] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_function_definition, 3),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_function_definition, 3),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_function_definition, 4),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_length, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [58] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
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
