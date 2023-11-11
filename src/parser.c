#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 3

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
  anon_sym_item = 11,
  anon_sym_EQ = 12,
  sym_item_attribute_value = 13,
  sym_module = 14,
  sym_comment = 15,
  sym_imports = 16,
  sym__definition = 17,
  sym_item = 18,
  sym_item_attribute = 19,
  aux_sym_imports_repeat1 = 20,
  aux_sym_item_repeat1 = 21,
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
  [anon_sym_item] = "item",
  [anon_sym_EQ] = "=",
  [sym_item_attribute_value] = "item_attribute_value",
  [sym_module] = "module",
  [sym_comment] = "comment",
  [sym_imports] = "imports",
  [sym__definition] = "_definition",
  [sym_item] = "item",
  [sym_item_attribute] = "item_attribute",
  [aux_sym_imports_repeat1] = "imports_repeat1",
  [aux_sym_item_repeat1] = "item_repeat1",
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
  [anon_sym_item] = anon_sym_item,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_item_attribute_value] = sym_item_attribute_value,
  [sym_module] = sym_module,
  [sym_comment] = sym_comment,
  [sym_imports] = sym_imports,
  [sym__definition] = sym__definition,
  [sym_item] = sym_item,
  [sym_item_attribute] = sym_item_attribute,
  [aux_sym_imports_repeat1] = aux_sym_imports_repeat1,
  [aux_sym_item_repeat1] = aux_sym_item_repeat1,
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
  [anon_sym_item] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_item_attribute_value] = {
    .visible = true,
    .named = true,
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
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_item] = {
    .visible = true,
    .named = true,
  },
  [sym_item_attribute] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_imports_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_item_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_key = 1,
  field_name = 2,
  field_value = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_key, 0},
    {field_value, 2},
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
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(21);
      if (lookahead == ',') ADVANCE(33);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(11);
      if (lookahead == 'm') ADVANCE(13);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '}') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(28);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(30);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(29);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '}') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'm') ADVANCE(15);
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 12:
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == 'p') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(3);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(3);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(28);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_imports);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_item);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_item_attribute_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(36);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 5},
  [36] = {(TSStateId)(-1)},
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
    [anon_sym_item] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_module] = STATE(33),
    [sym_comment] = STATE(1),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 1,
      anon_sym_imports,
    ACTIONS(11), 1,
      anon_sym_item,
    STATE(2), 1,
      sym_comment,
    STATE(5), 1,
      sym_imports,
    STATE(23), 1,
      sym_item,
    STATE(25), 1,
      sym__definition,
  [25] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    ACTIONS(15), 1,
      sym_identifier,
    STATE(14), 1,
      sym_item_attribute,
    STATE(3), 2,
      sym_comment,
      aux_sym_item_repeat1,
  [42] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(18), 1,
      anon_sym_RBRACE,
    ACTIONS(20), 1,
      sym_identifier,
    STATE(3), 1,
      aux_sym_item_repeat1,
    STATE(4), 1,
      sym_comment,
    STATE(14), 1,
      sym_item_attribute,
  [61] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      anon_sym_item,
    ACTIONS(22), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym_comment,
    STATE(18), 1,
      sym__definition,
    STATE(23), 1,
      sym_item,
  [80] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(24), 1,
      anon_sym_RBRACE,
    ACTIONS(26), 1,
      anon_sym_COMMA,
    STATE(6), 2,
      sym_comment,
      aux_sym_imports_repeat1,
  [94] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(31), 1,
      anon_sym_COMMA,
    STATE(6), 1,
      aux_sym_imports_repeat1,
    STATE(7), 1,
      sym_comment,
  [110] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(20), 1,
      sym_identifier,
    STATE(4), 1,
      aux_sym_item_repeat1,
    STATE(8), 1,
      sym_comment,
    STATE(14), 1,
      sym_item_attribute,
  [126] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(31), 1,
      anon_sym_COMMA,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      aux_sym_imports_repeat1,
    STATE(9), 1,
      sym_comment,
  [142] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(10), 1,
      sym_comment,
    ACTIONS(35), 2,
      anon_sym_RBRACE,
      anon_sym_item,
  [153] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(11), 1,
      sym_comment,
    ACTIONS(37), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [164] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(12), 1,
      sym_comment,
    ACTIONS(39), 2,
      anon_sym_RBRACE,
      anon_sym_item,
  [175] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(13), 1,
      sym_comment,
    ACTIONS(24), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [186] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(14), 1,
      sym_comment,
    ACTIONS(41), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [197] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(15), 1,
      sym_comment,
    ACTIONS(43), 2,
      anon_sym_RBRACE,
      anon_sym_item,
  [208] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(47), 1,
      sym_identifier,
    STATE(16), 1,
      sym_comment,
  [221] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      sym_comment,
  [231] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(18), 1,
      sym_comment,
  [241] = 3,
    ACTIONS(53), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(55), 1,
      aux_sym_comment_token1,
    STATE(19), 1,
      sym_comment,
  [251] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      sym_comment,
  [261] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_comment,
  [271] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      sym_comment,
  [281] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(23), 1,
      sym_comment,
  [291] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(65), 1,
      sym_identifier,
    STATE(24), 1,
      sym_comment,
  [301] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(22), 1,
      anon_sym_RBRACE,
    STATE(25), 1,
      sym_comment,
  [311] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(67), 1,
      anon_sym_EQ,
    STATE(26), 1,
      sym_comment,
  [321] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      sym_identifier,
    STATE(27), 1,
      sym_comment,
  [331] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_comment,
  [341] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      sym_comment,
  [351] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    STATE(30), 1,
      sym_comment,
  [361] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(77), 1,
      sym_item_attribute_value,
    STATE(31), 1,
      sym_comment,
  [371] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    STATE(32), 1,
      sym_comment,
  [381] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    STATE(33), 1,
      sym_comment,
  [391] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(83), 1,
      anon_sym_COMMA,
    STATE(34), 1,
      sym_comment,
  [401] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(85), 1,
      sym_identifier,
    STATE(35), 1,
      sym_comment,
  [411] = 1,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 42,
  [SMALL_STATE(5)] = 61,
  [SMALL_STATE(6)] = 80,
  [SMALL_STATE(7)] = 94,
  [SMALL_STATE(8)] = 110,
  [SMALL_STATE(9)] = 126,
  [SMALL_STATE(10)] = 142,
  [SMALL_STATE(11)] = 153,
  [SMALL_STATE(12)] = 164,
  [SMALL_STATE(13)] = 175,
  [SMALL_STATE(14)] = 186,
  [SMALL_STATE(15)] = 197,
  [SMALL_STATE(16)] = 208,
  [SMALL_STATE(17)] = 221,
  [SMALL_STATE(18)] = 231,
  [SMALL_STATE(19)] = 241,
  [SMALL_STATE(20)] = 251,
  [SMALL_STATE(21)] = 261,
  [SMALL_STATE(22)] = 271,
  [SMALL_STATE(23)] = 281,
  [SMALL_STATE(24)] = 291,
  [SMALL_STATE(25)] = 301,
  [SMALL_STATE(26)] = 311,
  [SMALL_STATE(27)] = 321,
  [SMALL_STATE(28)] = 331,
  [SMALL_STATE(29)] = 341,
  [SMALL_STATE(30)] = 351,
  [SMALL_STATE(31)] = 361,
  [SMALL_STATE(32)] = 371,
  [SMALL_STATE(33)] = 381,
  [SMALL_STATE(34)] = 391,
  [SMALL_STATE(35)] = 401,
  [SMALL_STATE(36)] = 411,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_item_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_item_repeat1, 2), SHIFT_REPEAT(26),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_imports_repeat1, 2),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_imports_repeat1, 2), SHIFT_REPEAT(24),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imports, 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_attribute, 4, .production_id = 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imports, 5),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_item_repeat1, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imports, 4),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 5),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 6),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 5, .production_id = 1),
  [81] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
