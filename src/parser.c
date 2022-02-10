#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 75
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 65
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_export = 1,
  anon_sym_EQ = 2,
  anon_sym_DOT_EQ = 3,
  anon_sym_PLUS_EQ = 4,
  anon_sym_COLON_EQ = 5,
  anon_sym_QMARK_EQ = 6,
  anon_sym_QMARK_QMARK_EQ = 7,
  anon_sym_EQ_PLUS = 8,
  anon_sym_EQ_DOT = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  anon_sym_python = 12,
  anon_sym_LBRACE = 13,
  anon_sym_RBRACE = 14,
  aux_sym_statement_token1 = 15,
  anon_sym_inherit = 16,
  aux_sym_inherit_token1 = 17,
  anon_sym_LF = 18,
  anon_sym_require = 19,
  aux_sym__require_path_token1 = 20,
  anon_sym_addtask = 21,
  aux_sym_addtask_token1 = 22,
  anon_sym_include = 23,
  anon_sym_DQUOTE = 24,
  aux_sym_string_token1 = 25,
  anon_sym_SQUOTE = 26,
  aux_sym_string2_token1 = 27,
  anon_sym_DOLLAR_LBRACE = 28,
  aux_sym_string_expansion_token1 = 29,
  anon_sym_BSLASH_BSLASH = 30,
  aux_sym_string_escape_token1 = 31,
  anon_sym_COLON = 32,
  aux_sym_override_token1 = 33,
  aux_sym_identifier_token1 = 34,
  anon_sym_POUND = 35,
  aux_sym_comment_token1 = 36,
  sym_source_file = 37,
  sym__declaration = 38,
  sym_variable_declaration = 39,
  sym_task_declaration = 40,
  sym_python_task_declaration = 41,
  sym_block = 42,
  sym_statement = 43,
  sym_inherit = 44,
  sym_require = 45,
  sym__require_path = 46,
  sym_addtask = 47,
  sym_export = 48,
  sym_include = 49,
  sym_string = 50,
  sym_string2 = 51,
  sym_string_expansion = 52,
  sym_string_escape = 53,
  sym_override = 54,
  sym_identifier = 55,
  sym_comment = 56,
  aux_sym_source_file_repeat1 = 57,
  aux_sym_block_repeat1 = 58,
  aux_sym_inherit_repeat1 = 59,
  aux_sym__require_path_repeat1 = 60,
  aux_sym_addtask_repeat1 = 61,
  aux_sym_string_repeat1 = 62,
  aux_sym_string2_repeat1 = 63,
  aux_sym_identifier_repeat1 = 64,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_export] = "export",
  [anon_sym_EQ] = "=",
  [anon_sym_DOT_EQ] = ".=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_QMARK_EQ] = "\?=",
  [anon_sym_QMARK_QMARK_EQ] = "\?\?=",
  [anon_sym_EQ_PLUS] = "=+",
  [anon_sym_EQ_DOT] = "=.",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_python] = "python",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym_statement_token1] = "statement_token1",
  [anon_sym_inherit] = "inherit",
  [aux_sym_inherit_token1] = "inherit_token1",
  [anon_sym_LF] = "\n",
  [anon_sym_require] = "require",
  [aux_sym__require_path_token1] = "_require_path_token1",
  [anon_sym_addtask] = "addtask",
  [aux_sym_addtask_token1] = "addtask_token1",
  [anon_sym_include] = "include",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string2_token1] = "string2_token1",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [aux_sym_string_expansion_token1] = "string_expansion_token1",
  [anon_sym_BSLASH_BSLASH] = "\\\\",
  [aux_sym_string_escape_token1] = "string_escape_token1",
  [anon_sym_COLON] = ":",
  [aux_sym_override_token1] = "override_token1",
  [aux_sym_identifier_token1] = "identifier_token1",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_source_file] = "source_file",
  [sym__declaration] = "_declaration",
  [sym_variable_declaration] = "variable_declaration",
  [sym_task_declaration] = "task_declaration",
  [sym_python_task_declaration] = "python_task_declaration",
  [sym_block] = "block",
  [sym_statement] = "statement",
  [sym_inherit] = "inherit",
  [sym_require] = "require",
  [sym__require_path] = "_require_path",
  [sym_addtask] = "addtask",
  [sym_export] = "export",
  [sym_include] = "include",
  [sym_string] = "string",
  [sym_string2] = "string2",
  [sym_string_expansion] = "string_expansion",
  [sym_string_escape] = "string_escape",
  [sym_override] = "override",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_inherit_repeat1] = "inherit_repeat1",
  [aux_sym__require_path_repeat1] = "_require_path_repeat1",
  [aux_sym_addtask_repeat1] = "addtask_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string2_repeat1] = "string2_repeat1",
  [aux_sym_identifier_repeat1] = "identifier_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DOT_EQ] = anon_sym_DOT_EQ,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_QMARK_EQ] = anon_sym_QMARK_EQ,
  [anon_sym_QMARK_QMARK_EQ] = anon_sym_QMARK_QMARK_EQ,
  [anon_sym_EQ_PLUS] = anon_sym_EQ_PLUS,
  [anon_sym_EQ_DOT] = anon_sym_EQ_DOT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_python] = anon_sym_python,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_statement_token1] = aux_sym_statement_token1,
  [anon_sym_inherit] = anon_sym_inherit,
  [aux_sym_inherit_token1] = aux_sym_inherit_token1,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_require] = anon_sym_require,
  [aux_sym__require_path_token1] = aux_sym__require_path_token1,
  [anon_sym_addtask] = anon_sym_addtask,
  [aux_sym_addtask_token1] = aux_sym_addtask_token1,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string2_token1] = aux_sym_string2_token1,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [aux_sym_string_expansion_token1] = aux_sym_string_expansion_token1,
  [anon_sym_BSLASH_BSLASH] = anon_sym_BSLASH_BSLASH,
  [aux_sym_string_escape_token1] = aux_sym_string_escape_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_override_token1] = aux_sym_override_token1,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_source_file] = sym_source_file,
  [sym__declaration] = sym__declaration,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_task_declaration] = sym_task_declaration,
  [sym_python_task_declaration] = sym_python_task_declaration,
  [sym_block] = sym_block,
  [sym_statement] = sym_statement,
  [sym_inherit] = sym_inherit,
  [sym_require] = sym_require,
  [sym__require_path] = sym__require_path,
  [sym_addtask] = sym_addtask,
  [sym_export] = sym_export,
  [sym_include] = sym_include,
  [sym_string] = sym_string,
  [sym_string2] = sym_string2,
  [sym_string_expansion] = sym_string_expansion,
  [sym_string_escape] = sym_string_escape,
  [sym_override] = sym_override,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_inherit_repeat1] = aux_sym_inherit_repeat1,
  [aux_sym__require_path_repeat1] = aux_sym__require_path_repeat1,
  [aux_sym_addtask_repeat1] = aux_sym_addtask_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string2_repeat1] = aux_sym_string2_repeat1,
  [aux_sym_identifier_repeat1] = aux_sym_identifier_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_export] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_QMARK_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_DOT] = {
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
  [anon_sym_python] = {
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
  [aux_sym_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_inherit] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_inherit_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_require] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__require_path_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_addtask] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_addtask_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_include] = {
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
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string2_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_expansion_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_escape_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_override_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
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
  [sym_python_task_declaration] = {
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
  [sym_require] = {
    .visible = true,
    .named = true,
  },
  [sym__require_path] = {
    .visible = false,
    .named = true,
  },
  [sym_addtask] = {
    .visible = true,
    .named = true,
  },
  [sym_export] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string2] = {
    .visible = true,
    .named = true,
  },
  [sym_string_expansion] = {
    .visible = true,
    .named = true,
  },
  [sym_string_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_override] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
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
  [aux_sym_inherit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__require_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_addtask_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string2_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_name = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
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
  [7] = 4,
  [8] = 5,
  [9] = 6,
  [10] = 10,
  [11] = 11,
  [12] = 10,
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
  [34] = 6,
  [35] = 4,
  [36] = 5,
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
  [50] = 10,
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
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 70,
  [74] = 70,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(50);
      if (lookahead == '"') ADVANCE(88);
      if (lookahead == '#') ADVANCE(138);
      if (lookahead == '$') ADVANCE(46);
      if (lookahead == '\'') ADVANCE(93);
      if (lookahead == '(') ADVANCE(61);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == ':') ADVANCE(102);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '?') ADVANCE(11);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'a') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'p') ADVANCE(45);
      if (lookahead == 'r') ADVANCE(19);
      if (lookahead == '{') ADVANCE(65);
      if (lookahead == '}') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '.') ADVANCE(104);
      if (lookahead == ':') ADVANCE(102);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == '?') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(137);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == ':') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(137);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '}') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == ' ') SKIP(4)
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(72);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(88);
      if (lookahead == '$') ADVANCE(92);
      if (lookahead == '\\') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(137);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(55);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(54);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(57);
      if (lookahead == '?') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(58);
      END_STATE();
    case 13:
      if (lookahead == '\\') ADVANCE(99);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(27);
      if (lookahead == 'h') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(39);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 23:
      if (lookahead == 'h') ADVANCE(31);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 26:
      if (lookahead == 'k') ADVANCE(83);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 32:
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 33:
      if (lookahead == 'q') ADVANCE(42);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 37:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 42:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 43:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 44:
      if (lookahead == 'x') ADVANCE(32);
      END_STATE();
    case 45:
      if (lookahead == 'y') ADVANCE(38);
      END_STATE();
    case 46:
      if (lookahead == '{') ADVANCE(96);
      END_STATE();
    case 47:
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(73);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(47)
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 48:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(103);
      END_STATE();
    case 49:
      if (eof) ADVANCE(50);
      if (lookahead == '"') ADVANCE(88);
      if (lookahead == '#') ADVANCE(138);
      if (lookahead == '\'') ADVANCE(93);
      if (lookahead == 'a') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(135);
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == 'p') ADVANCE(136);
      if (lookahead == 'r') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(137);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(137);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == '.') ADVANCE(60);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DOT_EQ);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_QMARK_EQ);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK_EQ);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_EQ_PLUS);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_EQ_DOT);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_python);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_python);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(137);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_statement_token1);
      if (lookahead == '}') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_statement_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_inherit);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_inherit);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(137);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_inherit_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != ' ') ADVANCE(74);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_inherit_token1);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_inherit_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(80);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(72);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_require);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_require);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(137);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym__require_path_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym__require_path_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym__require_path_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_addtask);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_addtask);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(137);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_addtask_token1);
      if (lookahead == '\n') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(137);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '$') ADVANCE(92);
      if (lookahead == '\\') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(89);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(99);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '{') ADVANCE(96);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_string2_token1);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_string2_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(94);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_string_expansion_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_string_expansion_token1);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_string_escape_token1);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_override_token1);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(137);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(128);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(137);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'c') ADVANCE(118);
      if (lookahead == 'h') ADVANCE(113);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(137);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(108);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(137);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(130);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(137);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(111);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(137);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(137);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(137);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(137);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(137);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(122);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(137);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(127);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(137);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(132);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(137);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'k') ADVANCE(84);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(137);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(134);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(137);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(106);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(137);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(137);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(126);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(137);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(120);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(137);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(121);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(137);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'q') ADVANCE(133);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(137);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(116);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(137);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(131);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(137);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(112);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(137);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(117);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(137);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(137);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(105);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(137);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(52);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(137);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(71);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(137);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(115);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(137);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(109);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(137);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'x') ADVANCE(123);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(137);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'y') ADVANCE(129);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 49},
  [2] = {.lex_state = 49},
  [3] = {.lex_state = 49},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 49},
  [14] = {.lex_state = 49},
  [15] = {.lex_state = 49},
  [16] = {.lex_state = 49},
  [17] = {.lex_state = 49},
  [18] = {.lex_state = 49},
  [19] = {.lex_state = 49},
  [20] = {.lex_state = 49},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 49},
  [23] = {.lex_state = 49},
  [24] = {.lex_state = 49},
  [25] = {.lex_state = 49},
  [26] = {.lex_state = 49},
  [27] = {.lex_state = 49},
  [28] = {.lex_state = 49},
  [29] = {.lex_state = 49},
  [30] = {.lex_state = 49},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 49},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 49},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 81},
  [49] = {.lex_state = 80},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 80},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 47},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 139},
  [67] = {.lex_state = 47},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 48},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 97},
  [73] = {.lex_state = 48},
  [74] = {.lex_state = 48},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOT_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_QMARK_EQ] = ACTIONS(1),
    [anon_sym_QMARK_QMARK_EQ] = ACTIONS(1),
    [anon_sym_EQ_PLUS] = ACTIONS(1),
    [anon_sym_EQ_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_python] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_inherit] = ACTIONS(1),
    [anon_sym_require] = ACTIONS(1),
    [anon_sym_addtask] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1),
    [aux_sym_string_escape_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(65),
    [sym__declaration] = STATE(2),
    [sym_variable_declaration] = STATE(2),
    [sym_task_declaration] = STATE(2),
    [sym_python_task_declaration] = STATE(2),
    [sym_inherit] = STATE(2),
    [sym_require] = STATE(2),
    [sym_addtask] = STATE(2),
    [sym_export] = STATE(2),
    [sym_include] = STATE(2),
    [sym_identifier] = STATE(21),
    [sym_comment] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_export] = ACTIONS(5),
    [anon_sym_python] = ACTIONS(7),
    [anon_sym_inherit] = ACTIONS(9),
    [anon_sym_require] = ACTIONS(11),
    [anon_sym_addtask] = ACTIONS(13),
    [anon_sym_include] = ACTIONS(15),
    [aux_sym_identifier_token1] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(5), 1,
      anon_sym_export,
    ACTIONS(7), 1,
      anon_sym_python,
    ACTIONS(9), 1,
      anon_sym_inherit,
    ACTIONS(11), 1,
      anon_sym_require,
    ACTIONS(13), 1,
      anon_sym_addtask,
    ACTIONS(15), 1,
      anon_sym_include,
    ACTIONS(17), 1,
      aux_sym_identifier_token1,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    STATE(21), 1,
      sym_identifier,
    STATE(3), 11,
      sym__declaration,
      sym_variable_declaration,
      sym_task_declaration,
      sym_python_task_declaration,
      sym_inherit,
      sym_require,
      sym_addtask,
      sym_export,
      sym_include,
      sym_comment,
      aux_sym_source_file_repeat1,
  [44] = 11,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_export,
    ACTIONS(28), 1,
      anon_sym_python,
    ACTIONS(31), 1,
      anon_sym_inherit,
    ACTIONS(34), 1,
      anon_sym_require,
    ACTIONS(37), 1,
      anon_sym_addtask,
    ACTIONS(40), 1,
      anon_sym_include,
    ACTIONS(43), 1,
      aux_sym_identifier_token1,
    ACTIONS(46), 1,
      anon_sym_POUND,
    STATE(21), 1,
      sym_identifier,
    STATE(3), 11,
      sym__declaration,
      sym_variable_declaration,
      sym_task_declaration,
      sym_python_task_declaration,
      sym_inherit,
      sym_require,
      sym_addtask,
      sym_export,
      sym_include,
      sym_comment,
      aux_sym_source_file_repeat1,
  [88] = 4,
    ACTIONS(51), 1,
      aux_sym_addtask_token1,
    ACTIONS(53), 1,
      anon_sym_COLON,
    STATE(6), 2,
      sym_override,
      aux_sym_identifier_repeat1,
    ACTIONS(49), 9,
      anon_sym_EQ,
      anon_sym_DOT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_QMARK_EQ,
      anon_sym_EQ_PLUS,
      anon_sym_EQ_DOT,
      aux_sym_identifier_token1,
  [110] = 4,
    ACTIONS(57), 1,
      aux_sym_addtask_token1,
    ACTIONS(59), 1,
      anon_sym_COLON,
    STATE(5), 2,
      sym_override,
      aux_sym_identifier_repeat1,
    ACTIONS(55), 9,
      anon_sym_EQ,
      anon_sym_DOT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_QMARK_EQ,
      anon_sym_EQ_PLUS,
      anon_sym_EQ_DOT,
      aux_sym_identifier_token1,
  [132] = 4,
    ACTIONS(53), 1,
      anon_sym_COLON,
    ACTIONS(64), 1,
      aux_sym_addtask_token1,
    STATE(5), 2,
      sym_override,
      aux_sym_identifier_repeat1,
    ACTIONS(62), 9,
      anon_sym_EQ,
      anon_sym_DOT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_QMARK_EQ,
      anon_sym_EQ_PLUS,
      anon_sym_EQ_DOT,
      aux_sym_identifier_token1,
  [154] = 4,
    ACTIONS(49), 1,
      anon_sym_EQ,
    ACTIONS(66), 1,
      anon_sym_COLON,
    STATE(9), 2,
      sym_override,
      aux_sym_identifier_repeat1,
    ACTIONS(51), 8,
      anon_sym_DOT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_QMARK_EQ,
      anon_sym_EQ_PLUS,
      anon_sym_EQ_DOT,
      anon_sym_LPAREN,
  [175] = 4,
    ACTIONS(55), 1,
      anon_sym_EQ,
    ACTIONS(68), 1,
      anon_sym_COLON,
    STATE(8), 2,
      sym_override,
      aux_sym_identifier_repeat1,
    ACTIONS(57), 8,
      anon_sym_DOT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_QMARK_EQ,
      anon_sym_EQ_PLUS,
      anon_sym_EQ_DOT,
      anon_sym_LPAREN,
  [196] = 4,
    ACTIONS(62), 1,
      anon_sym_EQ,
    ACTIONS(66), 1,
      anon_sym_COLON,
    STATE(8), 2,
      sym_override,
      aux_sym_identifier_repeat1,
    ACTIONS(64), 8,
      anon_sym_DOT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_QMARK_EQ,
      anon_sym_EQ_PLUS,
      anon_sym_EQ_DOT,
      anon_sym_LPAREN,
  [217] = 2,
    ACTIONS(73), 1,
      aux_sym_addtask_token1,
    ACTIONS(71), 10,
      anon_sym_EQ,
      anon_sym_DOT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_QMARK_EQ,
      anon_sym_EQ_PLUS,
      anon_sym_EQ_DOT,
      anon_sym_COLON,
      aux_sym_identifier_token1,
  [233] = 3,
    ACTIONS(77), 1,
      aux_sym_addtask_token1,
    ACTIONS(79), 1,
      aux_sym_identifier_token1,
    ACTIONS(75), 8,
      anon_sym_EQ,
      anon_sym_DOT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_QMARK_EQ,
      anon_sym_EQ_PLUS,
      anon_sym_EQ_DOT,
  [250] = 2,
    ACTIONS(71), 2,
      anon_sym_EQ,
      anon_sym_COLON,
    ACTIONS(73), 8,
      anon_sym_DOT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_QMARK_EQ,
      anon_sym_EQ_PLUS,
      anon_sym_EQ_DOT,
      anon_sym_LPAREN,
  [265] = 2,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(83), 7,
      anon_sym_export,
      anon_sym_python,
      anon_sym_inherit,
      anon_sym_require,
      anon_sym_addtask,
      anon_sym_include,
      aux_sym_identifier_token1,
  [279] = 2,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(87), 7,
      anon_sym_export,
      anon_sym_python,
      anon_sym_inherit,
      anon_sym_require,
      anon_sym_addtask,
      anon_sym_include,
      aux_sym_identifier_token1,
  [293] = 2,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(91), 7,
      anon_sym_export,
      anon_sym_python,
      anon_sym_inherit,
      anon_sym_require,
      anon_sym_addtask,
      anon_sym_include,
      aux_sym_identifier_token1,
  [307] = 2,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(95), 7,
      anon_sym_export,
      anon_sym_python,
      anon_sym_inherit,
      anon_sym_require,
      anon_sym_addtask,
      anon_sym_include,
      aux_sym_identifier_token1,
  [321] = 2,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(99), 7,
      anon_sym_export,
      anon_sym_python,
      anon_sym_inherit,
      anon_sym_require,
      anon_sym_addtask,
      anon_sym_include,
      aux_sym_identifier_token1,
  [335] = 2,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(103), 7,
      anon_sym_export,
      anon_sym_python,
      anon_sym_inherit,
      anon_sym_require,
      anon_sym_addtask,
      anon_sym_include,
      aux_sym_identifier_token1,
  [349] = 2,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(107), 7,
      anon_sym_export,
      anon_sym_python,
      anon_sym_inherit,
      anon_sym_require,
      anon_sym_addtask,
      anon_sym_include,
      aux_sym_identifier_token1,
  [363] = 2,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(111), 7,
      anon_sym_export,
      anon_sym_python,
      anon_sym_inherit,
      anon_sym_require,
      anon_sym_addtask,
      anon_sym_include,
      aux_sym_identifier_token1,
  [377] = 3,
    ACTIONS(113), 1,
      anon_sym_EQ,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 7,
      anon_sym_DOT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_QMARK_EQ,
      anon_sym_EQ_PLUS,
      anon_sym_EQ_DOT,
  [393] = 2,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(121), 7,
      anon_sym_export,
      anon_sym_python,
      anon_sym_inherit,
      anon_sym_require,
      anon_sym_addtask,
      anon_sym_include,
      aux_sym_identifier_token1,
  [407] = 2,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(125), 7,
      anon_sym_export,
      anon_sym_python,
      anon_sym_inherit,
      anon_sym_require,
      anon_sym_addtask,
      anon_sym_include,
      aux_sym_identifier_token1,
  [421] = 2,
    ACTIONS(127), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(129), 7,
      anon_sym_export,
      anon_sym_python,
      anon_sym_inherit,
      anon_sym_require,
      anon_sym_addtask,
      anon_sym_include,
      aux_sym_identifier_token1,
  [435] = 2,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(133), 7,
      anon_sym_export,
      anon_sym_python,
      anon_sym_inherit,
      anon_sym_require,
      anon_sym_addtask,
      anon_sym_include,
      aux_sym_identifier_token1,
  [449] = 2,
    ACTIONS(135), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(137), 7,
      anon_sym_export,
      anon_sym_python,
      anon_sym_inherit,
      anon_sym_require,
      anon_sym_addtask,
      anon_sym_include,
      aux_sym_identifier_token1,
  [463] = 2,
    ACTIONS(139), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(141), 7,
      anon_sym_export,
      anon_sym_python,
      anon_sym_inherit,
      anon_sym_require,
      anon_sym_addtask,
      anon_sym_include,
      aux_sym_identifier_token1,
  [477] = 2,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(145), 7,
      anon_sym_export,
      anon_sym_python,
      anon_sym_inherit,
      anon_sym_require,
      anon_sym_addtask,
      anon_sym_include,
      aux_sym_identifier_token1,
  [491] = 2,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(149), 7,
      anon_sym_export,
      anon_sym_python,
      anon_sym_inherit,
      anon_sym_require,
      anon_sym_addtask,
      anon_sym_include,
      aux_sym_identifier_token1,
  [505] = 2,
    ACTIONS(151), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(153), 7,
      anon_sym_export,
      anon_sym_python,
      anon_sym_inherit,
      anon_sym_require,
      anon_sym_addtask,
      anon_sym_include,
      aux_sym_identifier_token1,
  [519] = 5,
    ACTIONS(155), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      aux_sym_string_token1,
    ACTIONS(159), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(161), 1,
      anon_sym_BSLASH_BSLASH,
    STATE(32), 3,
      sym_string_expansion,
      sym_string_escape,
      aux_sym_string_repeat1,
  [537] = 5,
    ACTIONS(159), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(161), 1,
      anon_sym_BSLASH_BSLASH,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      aux_sym_string_token1,
    STATE(33), 3,
      sym_string_expansion,
      sym_string_escape,
      aux_sym_string_repeat1,
  [555] = 5,
    ACTIONS(167), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      aux_sym_string_token1,
    ACTIONS(172), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(175), 1,
      anon_sym_BSLASH_BSLASH,
    STATE(33), 3,
      sym_string_expansion,
      sym_string_escape,
      aux_sym_string_repeat1,
  [573] = 4,
    ACTIONS(62), 1,
      aux_sym_identifier_token1,
    ACTIONS(64), 1,
      aux_sym_addtask_token1,
    ACTIONS(178), 1,
      anon_sym_COLON,
    STATE(36), 2,
      sym_override,
      aux_sym_identifier_repeat1,
  [587] = 4,
    ACTIONS(49), 1,
      aux_sym_identifier_token1,
    ACTIONS(51), 1,
      aux_sym_addtask_token1,
    ACTIONS(178), 1,
      anon_sym_COLON,
    STATE(34), 2,
      sym_override,
      aux_sym_identifier_repeat1,
  [601] = 4,
    ACTIONS(55), 1,
      aux_sym_identifier_token1,
    ACTIONS(57), 1,
      aux_sym_addtask_token1,
    ACTIONS(180), 1,
      anon_sym_COLON,
    STATE(36), 2,
      sym_override,
      aux_sym_identifier_repeat1,
  [615] = 1,
    ACTIONS(183), 4,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH_BSLASH,
  [622] = 4,
    ACTIONS(185), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    STATE(28), 1,
      sym_string2,
    STATE(30), 1,
      sym_string,
  [635] = 1,
    ACTIONS(189), 4,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH_BSLASH,
  [642] = 3,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
    ACTIONS(193), 1,
      aux_sym_statement_token1,
    STATE(43), 2,
      sym_statement,
      aux_sym_block_repeat1,
  [653] = 3,
    ACTIONS(195), 1,
      aux_sym_addtask_token1,
    ACTIONS(197), 1,
      aux_sym_identifier_token1,
    STATE(42), 2,
      sym_identifier,
      aux_sym_addtask_repeat1,
  [664] = 3,
    ACTIONS(199), 1,
      aux_sym_addtask_token1,
    ACTIONS(201), 1,
      aux_sym_identifier_token1,
    STATE(42), 2,
      sym_identifier,
      aux_sym_addtask_repeat1,
  [675] = 3,
    ACTIONS(204), 1,
      anon_sym_RBRACE,
    ACTIONS(206), 1,
      aux_sym_statement_token1,
    STATE(43), 2,
      sym_statement,
      aux_sym_block_repeat1,
  [686] = 4,
    ACTIONS(185), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      anon_sym_SQUOTE,
    STATE(26), 1,
      sym_string,
    STATE(28), 1,
      sym_string2,
  [699] = 3,
    ACTIONS(193), 1,
      aux_sym_statement_token1,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    STATE(40), 2,
      sym_statement,
      aux_sym_block_repeat1,
  [710] = 3,
    ACTIONS(197), 1,
      aux_sym_identifier_token1,
    ACTIONS(211), 1,
      aux_sym_addtask_token1,
    STATE(42), 2,
      sym_identifier,
      aux_sym_addtask_repeat1,
  [721] = 3,
    ACTIONS(213), 1,
      anon_sym_SQUOTE,
    ACTIONS(215), 1,
      aux_sym_string2_token1,
    STATE(56), 1,
      aux_sym_string2_repeat1,
  [731] = 3,
    ACTIONS(217), 1,
      aux_sym__require_path_token1,
    STATE(53), 1,
      aux_sym__require_path_repeat1,
    STATE(62), 1,
      sym__require_path,
  [741] = 3,
    ACTIONS(219), 1,
      anon_sym_LF,
    ACTIONS(221), 1,
      aux_sym__require_path_token1,
    STATE(49), 1,
      aux_sym__require_path_repeat1,
  [751] = 2,
    ACTIONS(73), 1,
      aux_sym_addtask_token1,
    ACTIONS(71), 2,
      anon_sym_COLON,
      aux_sym_identifier_token1,
  [759] = 2,
    ACTIONS(224), 1,
      aux_sym_identifier_token1,
    STATE(41), 2,
      sym_identifier,
      aux_sym_addtask_repeat1,
  [767] = 3,
    ACTIONS(226), 1,
      aux_sym_identifier_token1,
    STATE(15), 1,
      sym_task_declaration,
    STATE(63), 1,
      sym_identifier,
  [777] = 3,
    ACTIONS(228), 1,
      anon_sym_LF,
    ACTIONS(230), 1,
      aux_sym__require_path_token1,
    STATE(49), 1,
      aux_sym__require_path_repeat1,
  [787] = 3,
    ACTIONS(232), 1,
      aux_sym_identifier_token1,
    STATE(11), 1,
      sym_identifier,
    STATE(46), 1,
      aux_sym_addtask_repeat1,
  [797] = 3,
    ACTIONS(234), 1,
      aux_sym_inherit_token1,
    ACTIONS(236), 1,
      anon_sym_LF,
    STATE(57), 1,
      aux_sym_inherit_repeat1,
  [807] = 3,
    ACTIONS(238), 1,
      anon_sym_SQUOTE,
    ACTIONS(240), 1,
      aux_sym_string2_token1,
    STATE(56), 1,
      aux_sym_string2_repeat1,
  [817] = 3,
    ACTIONS(243), 1,
      aux_sym_inherit_token1,
    ACTIONS(246), 1,
      anon_sym_LF,
    STATE(57), 1,
      aux_sym_inherit_repeat1,
  [827] = 3,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
    ACTIONS(250), 1,
      aux_sym_string2_token1,
    STATE(47), 1,
      aux_sym_string2_repeat1,
  [837] = 2,
    ACTIONS(252), 1,
      aux_sym_inherit_token1,
    STATE(55), 1,
      aux_sym_inherit_repeat1,
  [844] = 2,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_block,
  [851] = 1,
    ACTIONS(256), 2,
      anon_sym_RBRACE,
      aux_sym_statement_token1,
  [856] = 1,
    ACTIONS(258), 1,
      anon_sym_LF,
  [860] = 1,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
  [864] = 1,
    ACTIONS(260), 1,
      anon_sym_RPAREN,
  [868] = 1,
    ACTIONS(262), 1,
      ts_builtin_sym_end,
  [872] = 1,
    ACTIONS(264), 1,
      aux_sym_comment_token1,
  [876] = 1,
    ACTIONS(266), 1,
      aux_sym_inherit_token1,
  [880] = 1,
    ACTIONS(268), 1,
      anon_sym_RBRACE,
  [884] = 1,
    ACTIONS(270), 1,
      aux_sym_addtask_token1,
  [888] = 1,
    ACTIONS(272), 1,
      aux_sym_override_token1,
  [892] = 1,
    ACTIONS(274), 1,
      aux_sym_string_escape_token1,
  [896] = 1,
    ACTIONS(276), 1,
      aux_sym_string_expansion_token1,
  [900] = 1,
    ACTIONS(278), 1,
      aux_sym_override_token1,
  [904] = 1,
    ACTIONS(280), 1,
      aux_sym_override_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 44,
  [SMALL_STATE(4)] = 88,
  [SMALL_STATE(5)] = 110,
  [SMALL_STATE(6)] = 132,
  [SMALL_STATE(7)] = 154,
  [SMALL_STATE(8)] = 175,
  [SMALL_STATE(9)] = 196,
  [SMALL_STATE(10)] = 217,
  [SMALL_STATE(11)] = 233,
  [SMALL_STATE(12)] = 250,
  [SMALL_STATE(13)] = 265,
  [SMALL_STATE(14)] = 279,
  [SMALL_STATE(15)] = 293,
  [SMALL_STATE(16)] = 307,
  [SMALL_STATE(17)] = 321,
  [SMALL_STATE(18)] = 335,
  [SMALL_STATE(19)] = 349,
  [SMALL_STATE(20)] = 363,
  [SMALL_STATE(21)] = 377,
  [SMALL_STATE(22)] = 393,
  [SMALL_STATE(23)] = 407,
  [SMALL_STATE(24)] = 421,
  [SMALL_STATE(25)] = 435,
  [SMALL_STATE(26)] = 449,
  [SMALL_STATE(27)] = 463,
  [SMALL_STATE(28)] = 477,
  [SMALL_STATE(29)] = 491,
  [SMALL_STATE(30)] = 505,
  [SMALL_STATE(31)] = 519,
  [SMALL_STATE(32)] = 537,
  [SMALL_STATE(33)] = 555,
  [SMALL_STATE(34)] = 573,
  [SMALL_STATE(35)] = 587,
  [SMALL_STATE(36)] = 601,
  [SMALL_STATE(37)] = 615,
  [SMALL_STATE(38)] = 622,
  [SMALL_STATE(39)] = 635,
  [SMALL_STATE(40)] = 642,
  [SMALL_STATE(41)] = 653,
  [SMALL_STATE(42)] = 664,
  [SMALL_STATE(43)] = 675,
  [SMALL_STATE(44)] = 686,
  [SMALL_STATE(45)] = 699,
  [SMALL_STATE(46)] = 710,
  [SMALL_STATE(47)] = 721,
  [SMALL_STATE(48)] = 731,
  [SMALL_STATE(49)] = 741,
  [SMALL_STATE(50)] = 751,
  [SMALL_STATE(51)] = 759,
  [SMALL_STATE(52)] = 767,
  [SMALL_STATE(53)] = 777,
  [SMALL_STATE(54)] = 787,
  [SMALL_STATE(55)] = 797,
  [SMALL_STATE(56)] = 807,
  [SMALL_STATE(57)] = 817,
  [SMALL_STATE(58)] = 827,
  [SMALL_STATE(59)] = 837,
  [SMALL_STATE(60)] = 844,
  [SMALL_STATE(61)] = 851,
  [SMALL_STATE(62)] = 856,
  [SMALL_STATE(63)] = 860,
  [SMALL_STATE(64)] = 864,
  [SMALL_STATE(65)] = 868,
  [SMALL_STATE(66)] = 872,
  [SMALL_STATE(67)] = 876,
  [SMALL_STATE(68)] = 880,
  [SMALL_STATE(69)] = 884,
  [SMALL_STATE(70)] = 888,
  [SMALL_STATE(71)] = 892,
  [SMALL_STATE(72)] = 896,
  [SMALL_STATE(73)] = 900,
  [SMALL_STATE(74)] = 904,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(73),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 2),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(70),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_override, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_override, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_addtask_repeat1, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_addtask_repeat1, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string2, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string2, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_python_task_declaration, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_python_task_declaration, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string2, 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string2, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addtask, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addtask, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_declaration, 4, .production_id = 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_declaration, 4, .production_id = 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_require, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_require, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inherit, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inherit, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(33),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(72),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(71),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [180] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(74),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_escape, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_expansion, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_addtask_repeat1, 2),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_addtask_repeat1, 2), SHIFT_REPEAT(35),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(61),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__require_path_repeat1, 2),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__require_path_repeat1, 2), SHIFT_REPEAT(49),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__require_path, 1),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string2_repeat1, 2),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string2_repeat1, 2), SHIFT_REPEAT(56),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inherit_repeat1, 2), SHIFT_REPEAT(57),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inherit_repeat1, 2),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [262] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
