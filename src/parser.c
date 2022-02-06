#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 25
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_EQ = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  aux_sym_task_identifier_token1 = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  aux_sym_statement_token1 = 7,
  anon_sym_inherit = 8,
  anon_sym_DQUOTE = 9,
  aux_sym_string_token1 = 10,
  sym_identifier = 11,
  sym_source_file = 12,
  sym__declaration = 13,
  sym_variable_declaration = 14,
  sym_task_declaration = 15,
  sym_task_identifier = 16,
  sym_block = 17,
  sym_statement = 18,
  sym_inherit = 19,
  aux_sym__inherit_decl = 20,
  sym_string = 21,
  aux_sym_source_file_repeat1 = 22,
  aux_sym_block_repeat1 = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_task_identifier_token1] = "task_identifier_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym_statement_token1] = "statement_token1",
  [anon_sym_inherit] = "inherit",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym__declaration] = "_declaration",
  [sym_variable_declaration] = "variable_declaration",
  [sym_task_declaration] = "task_declaration",
  [sym_task_identifier] = "task_identifier",
  [sym_block] = "block",
  [sym_statement] = "statement",
  [sym_inherit] = "inherit",
  [aux_sym__inherit_decl] = "_inherit_decl",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_task_identifier_token1] = aux_sym_task_identifier_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_statement_token1] = aux_sym_statement_token1,
  [anon_sym_inherit] = anon_sym_inherit,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym__declaration] = sym__declaration,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_task_declaration] = sym_task_declaration,
  [sym_task_identifier] = sym_task_identifier,
  [sym_block] = sym_block,
  [sym_statement] = sym_statement,
  [sym_inherit] = sym_inherit,
  [aux_sym__inherit_decl] = aux_sym__inherit_decl,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_task_identifier_token1] = {
    .visible = false,
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
  [aux_sym_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_inherit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_task_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_task_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_inherit] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__inherit_decl] = {
    .visible = false,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
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
  [22] = 22,
  [23] = 23,
  [24] = 24,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '(') ADVANCE(6);
      if (lookahead == ')') ADVANCE(7);
      if (lookahead == '=') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(11);
      if (lookahead == '{') ADVANCE(15);
      if (lookahead == '}') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(24);
      if (lookahead == ':' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '}') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 2:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 3:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(23);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_task_identifier_token1);
      if (lookahead == 'e') ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(24);
      if (lookahead == ':' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_task_identifier_token1);
      if (lookahead == 'h') ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(24);
      if (lookahead == ':' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_task_identifier_token1);
      if (lookahead == 'i') ADVANCE(13);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(24);
      if (lookahead == ':' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_task_identifier_token1);
      if (lookahead == 'n') ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(24);
      if (lookahead == ':' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_task_identifier_token1);
      if (lookahead == 'r') ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(24);
      if (lookahead == ':' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_task_identifier_token1);
      if (lookahead == 't') ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(24);
      if (lookahead == ':' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_task_identifier_token1);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(24);
      if (lookahead == ':' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_statement_token1);
      if (lookahead == '}') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_statement_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_inherit);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(24);
      if (lookahead == ':' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
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
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_task_identifier_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_inherit] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(18),
    [sym__declaration] = STATE(3),
    [sym_variable_declaration] = STATE(3),
    [sym_task_declaration] = STATE(3),
    [sym_task_identifier] = STATE(19),
    [sym_inherit] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_task_identifier_token1] = ACTIONS(5),
    [anon_sym_inherit] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      aux_sym_task_identifier_token1,
    ACTIONS(16), 1,
      anon_sym_inherit,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(19), 1,
      sym_task_identifier,
    STATE(2), 5,
      sym__declaration,
      sym_variable_declaration,
      sym_task_declaration,
      sym_inherit,
      aux_sym_source_file_repeat1,
  [23] = 6,
    ACTIONS(5), 1,
      aux_sym_task_identifier_token1,
    ACTIONS(7), 1,
      anon_sym_inherit,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      sym_task_identifier,
    STATE(2), 5,
      sym__declaration,
      sym_variable_declaration,
      sym_task_declaration,
      sym_inherit,
      aux_sym_source_file_repeat1,
  [46] = 3,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      aux_sym__inherit_decl,
    ACTIONS(26), 3,
      aux_sym_task_identifier_token1,
      anon_sym_inherit,
      sym_identifier,
  [58] = 4,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    ACTIONS(32), 1,
      sym_identifier,
    STATE(5), 1,
      aux_sym__inherit_decl,
    ACTIONS(30), 2,
      aux_sym_task_identifier_token1,
      anon_sym_inherit,
  [72] = 2,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 3,
      aux_sym_task_identifier_token1,
      anon_sym_inherit,
      sym_identifier,
  [81] = 2,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 3,
      aux_sym_task_identifier_token1,
      anon_sym_inherit,
      sym_identifier,
  [90] = 3,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(45), 1,
      aux_sym_statement_token1,
    STATE(11), 2,
      sym_statement,
      aux_sym_block_repeat1,
  [101] = 2,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 3,
      aux_sym_task_identifier_token1,
      anon_sym_inherit,
      sym_identifier,
  [110] = 2,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 3,
      aux_sym_task_identifier_token1,
      anon_sym_inherit,
      sym_identifier,
  [119] = 3,
    ACTIONS(45), 1,
      aux_sym_statement_token1,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    STATE(13), 2,
      sym_statement,
      aux_sym_block_repeat1,
  [130] = 2,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 3,
      aux_sym_task_identifier_token1,
      anon_sym_inherit,
      sym_identifier,
  [139] = 3,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(63), 1,
      aux_sym_statement_token1,
    STATE(13), 2,
      sym_statement,
      aux_sym_block_repeat1,
  [150] = 2,
    ACTIONS(66), 1,
      anon_sym_DQUOTE,
    STATE(7), 1,
      sym_string,
  [157] = 2,
    ACTIONS(68), 1,
      anon_sym_LBRACE,
    STATE(6), 1,
      sym_block,
  [164] = 2,
    ACTIONS(70), 1,
      sym_identifier,
    STATE(4), 1,
      aux_sym__inherit_decl,
  [171] = 1,
    ACTIONS(72), 2,
      anon_sym_RBRACE,
      aux_sym_statement_token1,
  [176] = 1,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
  [180] = 1,
    ACTIONS(76), 1,
      anon_sym_LPAREN,
  [184] = 1,
    ACTIONS(78), 1,
      anon_sym_RPAREN,
  [188] = 1,
    ACTIONS(80), 1,
      anon_sym_LPAREN,
  [192] = 1,
    ACTIONS(82), 1,
      anon_sym_EQ,
  [196] = 1,
    ACTIONS(84), 1,
      aux_sym_string_token1,
  [200] = 1,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 58,
  [SMALL_STATE(6)] = 72,
  [SMALL_STATE(7)] = 81,
  [SMALL_STATE(8)] = 90,
  [SMALL_STATE(9)] = 101,
  [SMALL_STATE(10)] = 110,
  [SMALL_STATE(11)] = 119,
  [SMALL_STATE(12)] = 130,
  [SMALL_STATE(13)] = 139,
  [SMALL_STATE(14)] = 150,
  [SMALL_STATE(15)] = 157,
  [SMALL_STATE(16)] = 164,
  [SMALL_STATE(17)] = 171,
  [SMALL_STATE(18)] = 176,
  [SMALL_STATE(19)] = 180,
  [SMALL_STATE(20)] = 184,
  [SMALL_STATE(21)] = 188,
  [SMALL_STATE(22)] = 192,
  [SMALL_STATE(23)] = 196,
  [SMALL_STATE(24)] = 200,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inherit, 2),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inherit, 2),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__inherit_decl, 2),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__inherit_decl, 2),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inherit_decl, 2), SHIFT_REPEAT(5),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_declaration, 4),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_declaration, 4),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(17),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [74] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_identifier, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_BB(void) {
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
