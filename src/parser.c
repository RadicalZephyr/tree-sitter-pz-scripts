#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 22
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_module = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  sym_identifier = 4,
  sym_number = 5,
  anon_sym_SLASH_STAR = 6,
  aux_sym_comment_token1 = 7,
  anon_sym_SLASH = 8,
  anon_sym_imports = 9,
  anon_sym_COMMA = 10,
  sym_module = 11,
  sym_comment = 12,
  sym_imports = 13,
  aux_sym_imports_repeat1 = 14,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_module] = "module",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SLASH] = "/",
  [anon_sym_imports] = "imports",
  [anon_sym_COMMA] = ",",
  [sym_module] = "module",
  [sym_comment] = "comment",
  [sym_imports] = "imports",
  [aux_sym_imports_repeat1] = "imports_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_imports] = anon_sym_imports,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_module] = sym_module,
  [sym_comment] = sym_comment,
  [sym_imports] = sym_imports,
  [aux_sym_imports_repeat1] = aux_sym_imports_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_imports] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_imports] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_imports_repeat1] = {
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

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(18);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(9);
      if (lookahead == 'm') ADVANCE(10);
      if (lookahead == '{') ADVANCE(20);
      if (lookahead == '}') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(25);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(27);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(27);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(26);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '}') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == 'm') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(6);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'p') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 15:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(3);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(3);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(25);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_imports);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COMMA);
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
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 5},
  [21] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_imports] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
  },
  [1] = {
    [sym_module] = STATE(18),
    [sym_comment] = STATE(1),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 1,
      anon_sym_imports,
    STATE(2), 1,
      sym_comment,
    STATE(11), 1,
      sym_imports,
  [16] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      anon_sym_RBRACE,
    ACTIONS(13), 1,
      anon_sym_COMMA,
    STATE(3), 2,
      sym_comment,
      aux_sym_imports_repeat1,
  [30] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(16), 1,
      anon_sym_RBRACE,
    ACTIONS(18), 1,
      anon_sym_COMMA,
    STATE(3), 1,
      aux_sym_imports_repeat1,
    STATE(4), 1,
      sym_comment,
  [46] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(18), 1,
      anon_sym_COMMA,
    ACTIONS(20), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      aux_sym_imports_repeat1,
    STATE(5), 1,
      sym_comment,
  [62] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(6), 1,
      sym_comment,
    ACTIONS(11), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [73] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(22), 1,
      anon_sym_RBRACE,
    ACTIONS(24), 1,
      sym_identifier,
    STATE(7), 1,
      sym_comment,
  [86] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(26), 1,
      anon_sym_SLASH,
    STATE(8), 1,
      sym_comment,
  [96] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      sym_comment,
  [106] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(30), 1,
      anon_sym_LBRACE,
    STATE(10), 1,
      sym_comment,
  [116] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(32), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      sym_comment,
  [126] = 3,
    ACTIONS(34), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(36), 1,
      aux_sym_comment_token1,
    STATE(12), 1,
      sym_comment,
  [136] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      sym_comment,
  [146] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(40), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      sym_comment,
  [156] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(42), 1,
      anon_sym_RBRACE,
    STATE(15), 1,
      sym_comment,
  [166] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(44), 1,
      sym_identifier,
    STATE(16), 1,
      sym_comment,
  [176] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(46), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      sym_comment,
  [186] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(48), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      sym_comment,
  [196] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(50), 1,
      anon_sym_RBRACE,
    STATE(19), 1,
      sym_comment,
  [206] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(20), 1,
      sym_comment,
  [216] = 1,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 16,
  [SMALL_STATE(4)] = 30,
  [SMALL_STATE(5)] = 46,
  [SMALL_STATE(6)] = 62,
  [SMALL_STATE(7)] = 73,
  [SMALL_STATE(8)] = 86,
  [SMALL_STATE(9)] = 96,
  [SMALL_STATE(10)] = 106,
  [SMALL_STATE(11)] = 116,
  [SMALL_STATE(12)] = 126,
  [SMALL_STATE(13)] = 136,
  [SMALL_STATE(14)] = 146,
  [SMALL_STATE(15)] = 156,
  [SMALL_STATE(16)] = 166,
  [SMALL_STATE(17)] = 176,
  [SMALL_STATE(18)] = 186,
  [SMALL_STATE(19)] = 196,
  [SMALL_STATE(20)] = 206,
  [SMALL_STATE(21)] = 216,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_imports_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_imports_repeat1, 2), SHIFT_REPEAT(16),
  [16] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [26] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 5),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imports, 3),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imports, 4),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [48] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imports, 5),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_pz_scripts(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
