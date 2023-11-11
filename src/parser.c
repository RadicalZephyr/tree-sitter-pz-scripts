#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 63
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
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
  anon_sym_SLASH2 = 17,
  anon_sym_COLON = 18,
  sym_module = 19,
  sym_comment = 20,
  sym_imports = 21,
  sym__definition = 22,
  sym_item = 23,
  sym_item_attribute = 24,
  sym_recipe = 25,
  sym_recipe_requirements = 26,
  sym__recipe_requirement = 27,
  sym_recipe_requirement_choice = 28,
  sym_recipe_direct_req = 29,
  sym_recipe_attributes = 30,
  sym_recipe_attribute = 31,
  sym__recipe_attribute_value = 32,
  aux_sym_imports_repeat1 = 33,
  aux_sym_item_repeat1 = 34,
  aux_sym_recipe_requirements_repeat1 = 35,
  aux_sym_recipe_requirement_choice_repeat1 = 36,
  aux_sym_recipe_attributes_repeat1 = 37,
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
  [anon_sym_SLASH2] = "/",
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
  [sym_recipe_requirement_choice] = "recipe_requirement_choice",
  [sym_recipe_direct_req] = "recipe_direct_req",
  [sym_recipe_attributes] = "recipe_attributes",
  [sym_recipe_attribute] = "recipe_attribute",
  [sym__recipe_attribute_value] = "_recipe_attribute_value",
  [aux_sym_imports_repeat1] = "imports_repeat1",
  [aux_sym_item_repeat1] = "item_repeat1",
  [aux_sym_recipe_requirements_repeat1] = "recipe_requirements_repeat1",
  [aux_sym_recipe_requirement_choice_repeat1] = "recipe_requirement_choice_repeat1",
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
  [anon_sym_SLASH2] = anon_sym_SLASH,
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
  [sym_recipe_requirement_choice] = sym_recipe_requirement_choice,
  [sym_recipe_direct_req] = sym_recipe_direct_req,
  [sym_recipe_attributes] = sym_recipe_attributes,
  [sym_recipe_attribute] = sym_recipe_attribute,
  [sym__recipe_attribute_value] = sym__recipe_attribute_value,
  [aux_sym_imports_repeat1] = aux_sym_imports_repeat1,
  [aux_sym_item_repeat1] = aux_sym_item_repeat1,
  [aux_sym_recipe_requirements_repeat1] = aux_sym_recipe_requirements_repeat1,
  [aux_sym_recipe_requirement_choice_repeat1] = aux_sym_recipe_requirement_choice_repeat1,
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
  [anon_sym_SLASH2] = {
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
  [sym_recipe_requirement_choice] = {
    .visible = true,
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
  [aux_sym_recipe_requirement_choice_repeat1] = {
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
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(33);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '/') ADVANCE(53);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 'm') ADVANCE(23);
      if (lookahead == 'r') ADVANCE(15);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(38);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(42);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(44);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(44);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(43);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '/') ADVANCE(53);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 9:
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(30);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 21:
      if (lookahead == 'm') ADVANCE(25);
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 22:
      if (lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 28:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 32:
      if (eof) ADVANCE(33);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead == ':') ADVANCE(54);
      if (lookahead == '=') ADVANCE(49);
      if (lookahead == 'i') ADVANCE(21);
      if (lookahead == 'm') ADVANCE(23);
      if (lookahead == 'r') ADVANCE(15);
      if (lookahead == '{') ADVANCE(35);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(6);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '*') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(6);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(42);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_imports);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_item);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_item_attribute_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_recipe);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LF_LF);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_SLASH2);
      if (lookahead == '*') ADVANCE(42);
      END_STATE();
    case 54:
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
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 10},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 10},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {(TSStateId)(-1)},
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
    [anon_sym_SLASH2] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_module] = STATE(59),
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
    STATE(5), 1,
      sym_imports,
    STATE(34), 1,
      sym__definition,
    STATE(48), 2,
      sym_item,
      sym_recipe,
  [29] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      sym_identifier,
    STATE(3), 1,
      sym_comment,
    STATE(4), 1,
      aux_sym_recipe_requirements_repeat1,
    STATE(8), 1,
      sym_recipe_requirements,
    STATE(24), 1,
      sym__recipe_requirement,
    STATE(29), 2,
      sym_recipe_requirement_choice,
      sym_recipe_direct_req,
  [52] = 7,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(21), 1,
      anon_sym_LF_LF,
    STATE(4), 1,
      sym_comment,
    STATE(6), 1,
      aux_sym_recipe_requirements_repeat1,
    STATE(24), 1,
      sym__recipe_requirement,
    STATE(29), 2,
      sym_recipe_requirement_choice,
      sym_recipe_direct_req,
  [75] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      anon_sym_item,
    ACTIONS(13), 1,
      anon_sym_recipe,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym_comment,
    STATE(39), 1,
      sym__definition,
    STATE(48), 2,
      sym_item,
      sym_recipe,
  [98] = 6,
    ACTIONS(19), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(28), 1,
      anon_sym_LF_LF,
    STATE(24), 1,
      sym__recipe_requirement,
    STATE(6), 2,
      sym_comment,
      aux_sym_recipe_requirements_repeat1,
    STATE(29), 2,
      sym_recipe_requirement_choice,
      sym_recipe_direct_req,
  [119] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(30), 1,
      anon_sym_RBRACE,
    ACTIONS(32), 1,
      sym_identifier,
    STATE(33), 1,
      sym_recipe_attribute,
    STATE(7), 2,
      sym_comment,
      aux_sym_recipe_attributes_repeat1,
  [136] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(8), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym_recipe_attributes_repeat1,
    STATE(33), 1,
      sym_recipe_attribute,
    STATE(47), 1,
      sym_recipe_attributes,
  [155] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    ACTIONS(39), 1,
      sym_identifier,
    STATE(9), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym_item_repeat1,
    STATE(30), 1,
      sym_item_attribute,
  [174] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(43), 1,
      sym_identifier,
    STATE(30), 1,
      sym_item_attribute,
    STATE(10), 2,
      sym_comment,
      aux_sym_item_repeat1,
  [191] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      aux_sym_recipe_attributes_repeat1,
    STATE(11), 1,
      sym_comment,
    STATE(33), 1,
      sym_recipe_attribute,
  [210] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(48), 1,
      anon_sym_RBRACE,
    ACTIONS(50), 1,
      anon_sym_COMMA,
    STATE(12), 2,
      sym_comment,
      aux_sym_imports_repeat1,
  [224] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(55), 1,
      anon_sym_COMMA,
    STATE(12), 1,
      aux_sym_imports_repeat1,
    STATE(13), 1,
      sym_comment,
  [240] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(57), 1,
      anon_sym_COMMA,
    ACTIONS(59), 1,
      anon_sym_SLASH2,
    STATE(14), 2,
      sym_comment,
      aux_sym_recipe_requirement_choice_repeat1,
  [254] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(62), 1,
      anon_sym_COMMA,
    ACTIONS(64), 1,
      anon_sym_SLASH2,
    STATE(15), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym_recipe_requirement_choice_repeat1,
  [270] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(64), 1,
      anon_sym_SLASH2,
    ACTIONS(66), 1,
      anon_sym_COMMA,
    STATE(14), 1,
      aux_sym_recipe_requirement_choice_repeat1,
    STATE(16), 1,
      sym_comment,
  [286] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(17), 1,
      sym_comment,
    ACTIONS(68), 3,
      anon_sym_RBRACE,
      anon_sym_item,
      anon_sym_recipe,
  [298] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(39), 1,
      sym_identifier,
    STATE(9), 1,
      aux_sym_item_repeat1,
    STATE(18), 1,
      sym_comment,
    STATE(30), 1,
      sym_item_attribute,
  [314] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(19), 1,
      sym_comment,
    ACTIONS(70), 3,
      anon_sym_RBRACE,
      anon_sym_item,
      anon_sym_recipe,
  [326] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(20), 1,
      sym_comment,
    ACTIONS(72), 3,
      anon_sym_RBRACE,
      anon_sym_item,
      anon_sym_recipe,
  [338] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(21), 1,
      sym_comment,
    STATE(61), 1,
      sym__recipe_attribute_value,
    ACTIONS(74), 2,
      sym_identifier,
      sym_number,
  [352] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(55), 1,
      anon_sym_COMMA,
    ACTIONS(76), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      aux_sym_imports_repeat1,
    STATE(22), 1,
      sym_comment,
  [368] = 4,
    ACTIONS(19), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(78), 1,
      sym_identifier,
    ACTIONS(80), 1,
      anon_sym_LF_LF,
    STATE(23), 1,
      sym_comment,
  [381] = 4,
    ACTIONS(19), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(82), 1,
      sym_identifier,
    ACTIONS(84), 1,
      anon_sym_LF_LF,
    STATE(24), 1,
      sym_comment,
  [394] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(25), 1,
      sym_comment,
    ACTIONS(48), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [405] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    ACTIONS(88), 1,
      sym_identifier,
    STATE(26), 1,
      sym_comment,
  [418] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(27), 1,
      sym_comment,
    ACTIONS(90), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [429] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(57), 1,
      anon_sym_COMMA,
    ACTIONS(92), 1,
      anon_sym_SLASH2,
    STATE(28), 1,
      sym_comment,
  [442] = 4,
    ACTIONS(19), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(94), 1,
      sym_identifier,
    ACTIONS(96), 1,
      anon_sym_LF_LF,
    STATE(29), 1,
      sym_comment,
  [455] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(30), 1,
      sym_comment,
    ACTIONS(98), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [466] = 4,
    ACTIONS(19), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(102), 1,
      anon_sym_LF_LF,
    STATE(31), 1,
      sym_comment,
  [479] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(32), 1,
      sym_comment,
    ACTIONS(104), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [490] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    STATE(33), 1,
      sym_comment,
    ACTIONS(106), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [501] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    STATE(34), 1,
      sym_comment,
  [511] = 3,
    ACTIONS(19), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(108), 1,
      sym_name,
    STATE(35), 1,
      sym_comment,
  [521] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(110), 1,
      anon_sym_EQ,
    STATE(36), 1,
      sym_comment,
  [531] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(112), 1,
      sym_identifier,
    STATE(37), 1,
      sym_comment,
  [541] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    STATE(38), 1,
      sym_comment,
  [551] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(116), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      sym_comment,
  [561] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(118), 1,
      sym_item_attribute_value,
    STATE(40), 1,
      sym_comment,
  [571] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
    STATE(41), 1,
      sym_comment,
  [581] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    STATE(42), 1,
      sym_comment,
  [591] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(124), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_comment,
  [601] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(126), 1,
      sym_identifier,
    STATE(44), 1,
      sym_comment,
  [611] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(128), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_comment,
  [621] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(130), 1,
      anon_sym_COLON,
    STATE(46), 1,
      sym_comment,
  [631] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(132), 1,
      anon_sym_RBRACE,
    STATE(47), 1,
      sym_comment,
  [641] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      sym_comment,
  [651] = 3,
    ACTIONS(19), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(136), 1,
      aux_sym_comment_token1,
    STATE(49), 1,
      sym_comment,
  [661] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(138), 1,
      sym_identifier,
    STATE(50), 1,
      sym_comment,
  [671] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(140), 1,
      sym_identifier,
    STATE(51), 1,
      sym_comment,
  [681] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(142), 1,
      anon_sym_COMMA,
    STATE(52), 1,
      sym_comment,
  [691] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(144), 1,
      anon_sym_LBRACE,
    STATE(53), 1,
      sym_comment,
  [701] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      sym_comment,
  [711] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(148), 1,
      sym_identifier,
    STATE(55), 1,
      sym_comment,
  [721] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(150), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym_comment,
  [731] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(152), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      sym_comment,
  [741] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(154), 1,
      anon_sym_SLASH,
    STATE(58), 1,
      sym_comment,
  [751] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
    STATE(59), 1,
      sym_comment,
  [761] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    STATE(60), 1,
      sym_comment,
  [771] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    STATE(61), 1,
      sym_comment,
  [781] = 1,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 75,
  [SMALL_STATE(6)] = 98,
  [SMALL_STATE(7)] = 119,
  [SMALL_STATE(8)] = 136,
  [SMALL_STATE(9)] = 155,
  [SMALL_STATE(10)] = 174,
  [SMALL_STATE(11)] = 191,
  [SMALL_STATE(12)] = 210,
  [SMALL_STATE(13)] = 224,
  [SMALL_STATE(14)] = 240,
  [SMALL_STATE(15)] = 254,
  [SMALL_STATE(16)] = 270,
  [SMALL_STATE(17)] = 286,
  [SMALL_STATE(18)] = 298,
  [SMALL_STATE(19)] = 314,
  [SMALL_STATE(20)] = 326,
  [SMALL_STATE(21)] = 338,
  [SMALL_STATE(22)] = 352,
  [SMALL_STATE(23)] = 368,
  [SMALL_STATE(24)] = 381,
  [SMALL_STATE(25)] = 394,
  [SMALL_STATE(26)] = 405,
  [SMALL_STATE(27)] = 418,
  [SMALL_STATE(28)] = 429,
  [SMALL_STATE(29)] = 442,
  [SMALL_STATE(30)] = 455,
  [SMALL_STATE(31)] = 466,
  [SMALL_STATE(32)] = 479,
  [SMALL_STATE(33)] = 490,
  [SMALL_STATE(34)] = 501,
  [SMALL_STATE(35)] = 511,
  [SMALL_STATE(36)] = 521,
  [SMALL_STATE(37)] = 531,
  [SMALL_STATE(38)] = 541,
  [SMALL_STATE(39)] = 551,
  [SMALL_STATE(40)] = 561,
  [SMALL_STATE(41)] = 571,
  [SMALL_STATE(42)] = 581,
  [SMALL_STATE(43)] = 591,
  [SMALL_STATE(44)] = 601,
  [SMALL_STATE(45)] = 611,
  [SMALL_STATE(46)] = 621,
  [SMALL_STATE(47)] = 631,
  [SMALL_STATE(48)] = 641,
  [SMALL_STATE(49)] = 651,
  [SMALL_STATE(50)] = 661,
  [SMALL_STATE(51)] = 671,
  [SMALL_STATE(52)] = 681,
  [SMALL_STATE(53)] = 691,
  [SMALL_STATE(54)] = 701,
  [SMALL_STATE(55)] = 711,
  [SMALL_STATE(56)] = 721,
  [SMALL_STATE(57)] = 731,
  [SMALL_STATE(58)] = 741,
  [SMALL_STATE(59)] = 751,
  [SMALL_STATE(60)] = 761,
  [SMALL_STATE(61)] = 771,
  [SMALL_STATE(62)] = 781,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_requirements_repeat1, 2), SHIFT_REPEAT(15),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_requirements_repeat1, 2),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_attributes_repeat1, 2),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_recipe_attributes_repeat1, 2), SHIFT_REPEAT(46),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_item_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_item_repeat1, 2), SHIFT_REPEAT(36),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_attributes, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_imports_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_imports_repeat1, 2), SHIFT_REPEAT(37),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_requirement_choice_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_recipe_requirement_choice_repeat1, 2), SHIFT_REPEAT(44),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imports, 4),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imports, 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_imports, 5),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_direct_req, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_direct_req, 2),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_recipe_requirements_repeat1, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_requirements_repeat1, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_attribute, 4),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_recipe_requirement_choice_repeat1, 2),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__recipe_requirement, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__recipe_requirement, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_item_repeat1, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_recipe_requirement_choice, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_requirement_choice, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item_attribute, 4, .production_id = 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_recipe_attributes_repeat1, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 6),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 5, .production_id = 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 5),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe_requirements, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_recipe, 6, .production_id = 2),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [156] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__recipe_attribute_value, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
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
