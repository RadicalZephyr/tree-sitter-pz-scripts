#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 58
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 4

enum {
  anon_sym_module = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  sym_identifier = 4,
  sym_name = 5,
  sym_number = 6,
  anon_sym_SLASH_STAR = 7,
  aux_sym_comment_token1 = 8,
  anon_sym_SLASH = 9,
  anon_sym_imports = 10,
  anon_sym_COMMA = 11,
  anon_sym_item = 12,
  anon_sym_EQ = 13,
  sym_item_attribute_value = 14,
  anon_sym_recipe = 15,
  anon_sym_LF_LF = 16,
  anon_sym_COLON = 17,
  sym_module = 18,
  sym_comment = 19,
  sym_imports = 20,
  sym__definition = 21,
  sym_item = 22,
  sym_item_attribute = 23,
  sym_recipe = 24,
  sym_recipe_requirements = 25,
  sym__recipe_requirement = 26,
  sym_recipe_direct_req = 27,
  sym_recipe_attributes = 28,
  sym_recipe_attribute = 29,
  sym__recipe_attribute_value = 30,
  aux_sym_imports_repeat1 = 31,
  aux_sym_item_repeat1 = 32,
  aux_sym_recipe_requirements_repeat1 = 33,
  aux_sym_recipe_attributes_repeat1 = 34,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_module] = "module",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_identifier] = "identifier",
  [sym_name] = "name",
  [sym_number] = "number",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SLASH] = "/",
  [anon_sym_imports] = "imports",
  [anon_sym_COMMA] = ",",
  [anon_sym_item] = "item",
  [anon_sym_EQ] = "=",
  [sym_item_attribute_value] = "item_attribute_value",
  [anon_sym_recipe] = "recipe",
  [anon_sym_LF_LF] = "\n\n",
  [anon_sym_COLON] = ":",
  [sym_module] = "module",
  [sym_comment] = "comment",
  [sym_imports] = "imports",
  [sym__definition] = "_definition",
  [sym_item] = "item",
  [sym_item_attribute] = "item_attribute",
  [sym_recipe] = "recipe",
  [sym_recipe_requirements] = "recipe_requirements",
  [sym__recipe_requirement] = "_recipe_requirement",
  [sym_recipe_direct_req] = "recipe_direct_req",
  [sym_recipe_attributes] = "recipe_attributes",
  [sym_recipe_attribute] = "recipe_attribute",
  [sym__recipe_attribute_value] = "_recipe_attribute_value",
  [aux_sym_imports_repeat1] = "imports_repeat1",
  [aux_sym_item_repeat1] = "item_repeat1",
  [aux_sym_recipe_requirements_repeat1] = "recipe_requirements_repeat1",
  [aux_sym_recipe_attributes_repeat1] = "recipe_attributes_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_identifier] = sym_identifier,
  [sym_name] = sym_name,
  [sym_number] = sym_number,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_imports] = anon_sym_imports,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_item] = anon_sym_item,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_item_attribute_value] = sym_item_attribute_value,
  [anon_sym_recipe] = anon_sym_recipe,
  [anon_sym_LF_LF] = anon_sym_LF_LF,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_module] = sym_module,
  [sym_comment] = sym_comment,
  [sym_imports] = sym_imports,
  [sym__definition] = sym__definition,
  [sym_item] = sym_item,
  [sym_item_attribute] = sym_item_attribute,
  [sym_recipe] = sym_recipe,
  [sym_recipe_requirements] = sym_recipe_requirements,
  [sym__recipe_requirement] = sym__recipe_requirement,
  [sym_recipe_direct_req] = sym_recipe_direct_req,
  [sym_recipe_attributes] = sym_recipe_attributes,
  [sym_recipe_attribute] = sym_recipe_attribute,
  [sym__recipe_attribute_value] = sym__recipe_attribute_value,
  [aux_sym_imports_repeat1] = aux_sym_imports_repeat1,
  [aux_sym_item_repeat1] = aux_sym_item_repeat1,
  [aux_sym_recipe_requirements_repeat1] = aux_sym_recipe_requirements_repeat1,
  [aux_sym_recipe_attributes_repeat1] = aux_sym_recipe_attributes_repeat1,
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
  [sym_name] = {
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
  [anon_sym_recipe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [sym_recipe] = {
    .visible = true,
    .named = true,
  },
  [sym_recipe_requirements] = {
    .visible = true,
    .named = true,
  },
  [sym__recipe_requirement] = {
    .visible = false,
    .named = true,
  },
  [sym_recipe_direct_req] = {
    .visible = true,
    .named = true,
  },
  [sym_recipe_attributes] = {
    .visible = true,
    .named = true,
  },
  [sym_recipe_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__recipe_attribute_value] = {
    .visible = false,
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
  [aux_sym_recipe_requirements_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_recipe_attributes_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_attributes = 1,
  field_key = 2,
  field_label = 3,
  field_name = 4,
  field_requirements = 5,
  field_value = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_attributes] = "attributes",
  [field_key] = "key",
  [field_label] = "label",
  [field_name] = "name",
  [field_requirements] = "requirements",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 3},
  [3] = {.index = 4, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_attributes, 4},
    {field_label, 1},
    {field_requirements, 3},
  [4] =
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
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(31);
      if (lookahead == ',') ADVANCE(45);
      if (lookahead == '/') ADVANCE(43);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == '=') ADVANCE(47);
      if (lookahead == 'i') ADVANCE(20);
      if (lookahead == 'm') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(14);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '}') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(36);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(40);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(42);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(42);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(41);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '}') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(29);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 20:
      if (lookahead == 'm') ADVANCE(24);
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 21:
      if (lookahead == 'm') ADVANCE(46);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == 'p') ADVANCE(17);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(6);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(6);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(40);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_imports);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_item);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_item_attribute_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_recipe);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LF_LF);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_COLON);
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
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 10},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {(TSStateId)(-1)},
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
    [anon_sym_recipe] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_module] = STATE(54),
    [sym_comment] = STATE(1),
    [anon_sym_module] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 1,
      anon_sym_imports,
    ACTIONS(11), 1,
      anon_sym_item,
    ACTIONS(13), 1,
      anon_sym_recipe,
    STATE(2), 1,
      sym_comment,
    STATE(3), 1,
      sym_imports,
    STATE(29), 1,
      sym__definition,
    STATE(39), 2,
      sym_item,
      sym_recipe,
  [29] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      anon_sym_item,
    ACTIONS(13), 1,
      anon_sym_recipe,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      sym_comment,
    STATE(35), 1,
      sym__definition,
    STATE(39), 2,
      sym_item,
      sym_recipe,
  [52] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(17), 1,
      sym_identifier,
    STATE(4), 1,
      sym_comment,
    STATE(5), 1,
      aux_sym_recipe_requirements_repeat1,
    STATE(10), 1,
      sym_recipe_requirements,
    STATE(24), 1,
      sym_recipe_direct_req,
    STATE(25), 1,
      sym__recipe_requirement,
  [74] = 7,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(23), 1,
      anon_sym_LF_LF,
    STATE(5), 1,
      sym_comment,
    STATE(6), 1,
      aux_sym_recipe_requirements_repeat1,
    STATE(24), 1,
      sym_recipe_direct_req,
    STATE(25), 1,
      sym__recipe_requirement,
  [96] = 6,
    ACTIONS(21), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(28), 1,
      anon_sym_LF_LF,
    STATE(24), 1,
      sym_recipe_direct_req,
    STATE(25), 1,
      sym__recipe_requirement,
    STATE(6), 2,
      sym_comment,
      aux_sym_recipe_requirements_repeat1,
  [116] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(30), 1,
      anon_sym_RBRACE,
    ACTIONS(32), 1,
      sym_identifier,
    STATE(7), 1,
      sym_comment,
    STATE(8), 1,
      aux_sym_recipe_attributes_repeat1,
    STATE(23), 1,
      sym_recipe_attribute,
  [135] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(34), 1,
      anon_sym_RBRACE,
    ACTIONS(36), 1,
      sym_identifier,
    STATE(23), 1,
      sym_recipe_attribute,
    STATE(8), 2,
      sym_comment,
      aux_sym_recipe_attributes_repeat1,
  [152] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(41), 1,
      sym_identifier,
    STATE(9), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym_item_repeat1,
    STATE(26), 1,
      sym_item_attribute,
  [171] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(32), 1,
      sym_identifier,
    STATE(7), 1,
      aux_sym_recipe_attributes_repeat1,
    STATE(10), 1,
      sym_comment,
    STATE(23), 1,
      sym_recipe_attribute,
    STATE(45), 1,
      sym_recipe_attributes,
  [190] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(45), 1,
      sym_identifier,
    STATE(26), 1,
      sym_item_attribute,
    STATE(11), 2,
      sym_comment,
      aux_sym_item_repeat1,
  [207] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(41), 1,
      sym_identifier,
    STATE(9), 1,
      aux_sym_item_repeat1,
    STATE(12), 1,
      sym_comment,
    STATE(26), 1,
      sym_item_attribute,
  [223] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(13), 1,
      sym_comment,
    STATE(56), 1,
      sym__recipe_attribute_value,
    ACTIONS(48), 2,
      sym_identifier,
      sym_number,
  [237] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(14), 1,
      sym_comment,
    ACTIONS(50), 3,
      anon_sym_RBRACE,
      anon_sym_item,
      anon_sym_recipe,
  [249] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(15), 1,
      sym_comment,
    ACTIONS(52), 3,
      anon_sym_RBRACE,
      anon_sym_item,
      anon_sym_recipe,
  [261] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
    ACTIONS(56), 1,
      anon_sym_COMMA,
    STATE(16), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_imports_repeat1,
  [277] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(58), 1,
      anon_sym_RBRACE,
    ACTIONS(60), 1,
      anon_sym_COMMA,
    STATE(17), 2,
      sym_comment,
      aux_sym_imports_repeat1,
  [291] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(18), 1,
      sym_comment,
    ACTIONS(63), 3,
      anon_sym_RBRACE,
      anon_sym_item,
      anon_sym_recipe,
  [303] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(56), 1,
      anon_sym_COMMA,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      aux_sym_imports_repeat1,
    STATE(19), 1,
      sym_comment,
  [319] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(20), 1,
      sym_comment,
    ACTIONS(67), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [330] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(71), 1,
      sym_identifier,
    STATE(21), 1,
      sym_comment,
  [343] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(22), 1,
      sym_comment,
    ACTIONS(58), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [354] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(23), 1,
      sym_comment,
    ACTIONS(73), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [365] = 4,
    ACTIONS(21), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_LF_LF,
    STATE(24), 1,
      sym_comment,
  [378] = 4,
    ACTIONS(21), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(81), 1,
      anon_sym_LF_LF,
    STATE(25), 1,
      sym_comment,
  [391] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(26), 1,
      sym_comment,
    ACTIONS(83), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [402] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(27), 1,
      sym_comment,
    ACTIONS(85), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [413] = 4,
    ACTIONS(21), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(87), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_LF_LF,
    STATE(28), 1,
      sym_comment,
  [426] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      sym_comment,
  [436] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(91), 1,
      anon_sym_COLON,
    STATE(30), 1,
      sym_comment,
  [446] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(93), 1,
      anon_sym_EQ,
    STATE(31), 1,
      sym_comment,
  [456] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      sym_comment,
  [466] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(97), 1,
      sym_identifier,
    STATE(33), 1,
      sym_comment,
  [476] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    STATE(34), 1,
      sym_comment,
  [486] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      sym_comment,
  [496] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    STATE(36), 1,
      sym_comment,
  [506] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym_comment,
  [516] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym_comment,
  [526] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      sym_comment,
  [536] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(111), 1,
      sym_item_attribute_value,
    STATE(40), 1,
      sym_comment,
  [546] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym_comment,
  [556] = 3,
    ACTIONS(21), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(115), 1,
      sym_name,
    STATE(42), 1,
      sym_comment,
  [566] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(117), 1,
      sym_identifier,
    STATE(43), 1,
      sym_comment,
  [576] = 3,
    ACTIONS(21), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(119), 1,
      aux_sym_comment_token1,
    STATE(44), 1,
      sym_comment,
  [586] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(121), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym_comment,
  [596] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(123), 1,
      anon_sym_LBRACE,
    STATE(46), 1,
      sym_comment,
  [606] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    STATE(47), 1,
      sym_comment,
  [616] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(127), 1,
      sym_identifier,
    STATE(48), 1,
      sym_comment,
  [626] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(129), 1,
      sym_identifier,
    STATE(49), 1,
      sym_comment,
  [636] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      sym_comment,
  [646] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(133), 1,
      anon_sym_LBRACE,
    STATE(51), 1,
      sym_comment,
  [656] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(135), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      sym_comment,
  [666] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(137), 1,
      anon_sym_SLASH,
    STATE(53), 1,
      sym_comment,
  [676] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      sym_comment,
  [686] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    STATE(55), 1,
      sym_comment,
  [696] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(143), 1,
      anon_sym_COMMA,
    STATE(56), 1,
      sym_comment,
  [706] = 1,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 74,
  [SMALL_STATE(6)] = 96,
  [SMALL_STATE(7)] = 116,
  [SMALL_STATE(8)] = 135,
  [SMALL_STATE(9)] = 152,
  [SMALL_STATE(10)] = 171,
  [SMALL_STATE(11)] = 190,
  [SMALL_STATE(12)] = 207,
  [SMALL_STATE(13)] = 223,
  [SMALL_STATE(14)] = 237,
  [SMALL_STATE(15)] = 249,
  [SMALL_STATE(16)] = 261,
  [SMALL_STATE(17)] = 277,
  [SMALL_STATE(18)] = 291,
  [SMALL_STATE(19)] = 303,
  [SMALL_STATE(20)] = 319,
  [SMALL_STATE(21)] = 330,
  [SMALL_STATE(22)] = 343,
  [SMALL_STATE(23)] = 354,
  [SMALL_STATE(24)] = 365,
  [SMALL_STATE(25)] = 378,
  [SMALL_STATE(26)] = 391,
  [SMALL_STATE(27)] = 402,
  [SMALL_STATE(28)] = 413,
  [SMALL_STATE(29)] = 426,
  [SMALL_STATE(30)] = 436,
  [SMALL_STATE(31)] = 446,
  [SMALL_STATE(32)] = 456,
  [SMALL_STATE(33)] = 466,
  [SMALL_STATE(34)] = 476,
  [SMALL_STATE(35)] = 486,
  [SMALL_STATE(36)] = 496,
  [SMALL_STATE(37)] = 506,
  [SMALL_STATE(38)] = 516,
  [SMALL_STATE(39)] = 526,
  [SMALL_STATE(40)] = 536,
  [SMALL_STATE(41)] = 546,
  [SMALL_STATE(42)] = 556,
  [SMALL_STATE(43)] = 566,
  [SMALL_STATE(44)] = 576,
  [SMALL_STATE(45)] = 586,
  [SMALL_STATE(46)] = 596,
  [SMALL_STATE(47)] = 606,
  [SMALL_STATE(48)] = 616,
  [SMALL_STATE(49)] = 626,
  [SMALL_STATE(50)] = 636,
  [SMALL_STATE(51)] = 646,
  [SMALL_STATE(52)] = 656,
  [SMALL_STATE(53)] = 666,
  [SMALL_STATE(54)] = 676,
  [SMALL_STATE(55)] = 686,
  [SMALL_STATE(56)] = 696,
  [SMALL_STATE(57)] = 706,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_requirements_repeat1, 2), SHIFT_REPEAT(32),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_requirements_repeat1, 2),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_attributes, 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_attributes_repeat1, 2),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_attributes_repeat1, 2), SHIFT_REPEAT(30),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_item_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_item_repeat1, 2), SHIFT_REPEAT(31),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imports, 5),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imports, 3),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_imports_repeat1, 2),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_imports_repeat1, 2), SHIFT_REPEAT(33),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imports, 4),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_attribute, 4),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_attributes_repeat1, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__recipe_requirement, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__recipe_requirement, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_recipe_requirements_repeat1, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_requirements_repeat1, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_item_repeat1, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_attribute, 4, .production_id = 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_direct_req, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_direct_req, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 6),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 5),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 5, .production_id = 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_requirements, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 6, .production_id = 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [139] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__recipe_attribute_value, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
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
