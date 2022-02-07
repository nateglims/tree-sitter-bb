#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 44
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_export = 1,
  anon_sym_EQ = 2,
  anon_sym_DOT_EQ = 3,
  anon_sym_PLUS_EQ = 4,
  anon_sym_QMARK_EQ = 5,
  anon_sym_QMARK_QMARK_EQ = 6,
  anon_sym_EQ_PLUS = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  anon_sym_python = 10,
  anon_sym_LBRACE = 11,
  anon_sym_RBRACE = 12,
  aux_sym_statement_token1 = 13,
  anon_sym_inherit = 14,
  anon_sym_LF = 15,
  anon_sym_DQUOTE = 16,
  aux_sym_string_token1 = 17,
  anon_sym_COLON = 18,
  aux_sym_override_token1 = 19,
  aux_sym_identifier_token1 = 20,
  anon_sym_POUND = 21,
  aux_sym_comment_token1 = 22,
  sym_source_file = 23,
  sym__declaration = 24,
  sym_variable_declaration = 25,
  sym_task_declaration = 26,
  sym_python_task_declaration = 27,
  sym_block = 28,
  sym_statement = 29,
  sym_inherit = 30,
  sym__inherit_decl = 31,
  sym_string = 32,
  sym_override = 33,
  sym_identifier = 34,
  sym_comment = 35,
  aux_sym_source_file_repeat1 = 36,
  aux_sym_block_repeat1 = 37,
  aux_sym__inherit_decl_repeat1 = 38,
  aux_sym_identifier_repeat1 = 39,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_export] = "export",
  [anon_sym_EQ] = "=",
  [anon_sym_DOT_EQ] = ".=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_QMARK_EQ] = "\?=",
  [anon_sym_QMARK_QMARK_EQ] = "\?\?=",
  [anon_sym_EQ_PLUS] = "=+",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_python] = "python",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym_statement_token1] = "statement_token1",
  [anon_sym_inherit] = "inherit",
  [anon_sym_LF] = "\n",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
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
  [sym__inherit_decl] = "_inherit_decl",
  [sym_string] = "string",
  [sym_override] = "override",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym__inherit_decl_repeat1] = "_inherit_decl_repeat1",
  [aux_sym_identifier_repeat1] = "identifier_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DOT_EQ] = anon_sym_DOT_EQ,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_QMARK_EQ] = anon_sym_QMARK_EQ,
  [anon_sym_QMARK_QMARK_EQ] = anon_sym_QMARK_QMARK_EQ,
  [anon_sym_EQ_PLUS] = anon_sym_EQ_PLUS,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_python] = anon_sym_python,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_statement_token1] = aux_sym_statement_token1,
  [anon_sym_inherit] = anon_sym_inherit,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
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
  [sym__inherit_decl] = sym__inherit_decl,
  [sym_string] = sym_string,
  [sym_override] = sym_override,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym__inherit_decl_repeat1] = aux_sym__inherit_decl_repeat1,
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
  [anon_sym_LF] = {
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
  [sym__inherit_decl] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
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
  [aux_sym__inherit_decl_repeat1] = {
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
  [20] = 2,
  [21] = 4,
  [22] = 3,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 5,
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
  [43] = 42,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(27);
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '#') ADVANCE(71);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == ')') ADVANCE(37);
      if (lookahead == '+') ADVANCE(3);
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == '?') ADVANCE(5);
      if (lookahead == 'e') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(11);
      if (lookahead == 'p') ADVANCE(22);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(47);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(70);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 3:
      if (lookahead == '=') ADVANCE(32);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(31);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == '?') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(34);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == 'h') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == 'h') ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == 'p') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 17:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 21:
      if (lookahead == 'x') ADVANCE(15);
      END_STATE();
    case 22:
      if (lookahead == 'y') ADVANCE(20);
      END_STATE();
    case 23:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(70);
      END_STATE();
    case 24:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(24)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(52);
      END_STATE();
    case 25:
      if (eof) ADVANCE(27);
      if (lookahead == '#') ADVANCE(71);
      if (lookahead == '(') ADVANCE(36);
      if (lookahead == '+') ADVANCE(3);
      if (lookahead == '.') ADVANCE(53);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == '?') ADVANCE(5);
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(58);
      if (lookahead == 'p') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(70);
      END_STATE();
    case 26:
      if (eof) ADVANCE(27);
      if (lookahead == '#') ADVANCE(71);
      if (lookahead == 'e') ADVANCE(68);
      if (lookahead == 'i') ADVANCE(58);
      if (lookahead == 'p') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(70);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(70);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '+') ADVANCE(35);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DOT_EQ);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_QMARK_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK_EQ);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_EQ_PLUS);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_python);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_python);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(70);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_statement_token1);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_statement_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_inherit);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_inherit);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(70);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_override_token1);
      if (lookahead == '$' ||
          lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(70);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(70);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(54);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(70);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(61);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(70);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(66);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(70);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(55);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(70);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(39);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(70);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(64);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(70);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(59);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(70);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(60);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(70);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(57);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(70);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(65);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(70);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(70);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(70);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(70);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'x') ADVANCE(62);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'y') ADVANCE(67);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '$' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= '[') ||
          lookahead == ']' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(73);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 26},
  [2] = {.lex_state = 25},
  [3] = {.lex_state = 25},
  [4] = {.lex_state = 25},
  [5] = {.lex_state = 25},
  [6] = {.lex_state = 26},
  [7] = {.lex_state = 26},
  [8] = {.lex_state = 25},
  [9] = {.lex_state = 25},
  [10] = {.lex_state = 26},
  [11] = {.lex_state = 26},
  [12] = {.lex_state = 26},
  [13] = {.lex_state = 26},
  [14] = {.lex_state = 26},
  [15] = {.lex_state = 26},
  [16] = {.lex_state = 26},
  [17] = {.lex_state = 26},
  [18] = {.lex_state = 26},
  [19] = {.lex_state = 26},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 23},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 23},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 23},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 49},
  [39] = {.lex_state = 72},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 24},
  [43] = {.lex_state = 24},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOT_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_QMARK_EQ] = ACTIONS(1),
    [anon_sym_QMARK_QMARK_EQ] = ACTIONS(1),
    [anon_sym_EQ_PLUS] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_python] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_inherit] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(40),
    [sym__declaration] = STATE(7),
    [sym_variable_declaration] = STATE(7),
    [sym_task_declaration] = STATE(7),
    [sym_python_task_declaration] = STATE(7),
    [sym_inherit] = STATE(7),
    [sym_identifier] = STATE(8),
    [sym_comment] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_export] = ACTIONS(5),
    [anon_sym_python] = ACTIONS(7),
    [anon_sym_inherit] = ACTIONS(9),
    [aux_sym_identifier_token1] = ACTIONS(11),
    [anon_sym_POUND] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(19), 1,
      anon_sym_COLON,
    STATE(2), 2,
      sym_override,
      aux_sym_identifier_repeat1,
    ACTIONS(17), 5,
      anon_sym_export,
      anon_sym_EQ,
      anon_sym_python,
      anon_sym_inherit,
      aux_sym_identifier_token1,
    ACTIONS(15), 8,
      ts_builtin_sym_end,
      anon_sym_DOT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_QMARK_EQ,
      anon_sym_EQ_PLUS,
      anon_sym_LPAREN,
      anon_sym_POUND,
  [25] = 4,
    ACTIONS(26), 1,
      anon_sym_COLON,
    STATE(4), 2,
      sym_override,
      aux_sym_identifier_repeat1,
    ACTIONS(24), 5,
      anon_sym_export,
      anon_sym_EQ,
      anon_sym_python,
      anon_sym_inherit,
      aux_sym_identifier_token1,
    ACTIONS(22), 8,
      ts_builtin_sym_end,
      anon_sym_DOT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_QMARK_EQ,
      anon_sym_EQ_PLUS,
      anon_sym_LPAREN,
      anon_sym_POUND,
  [50] = 4,
    ACTIONS(26), 1,
      anon_sym_COLON,
    STATE(2), 2,
      sym_override,
      aux_sym_identifier_repeat1,
    ACTIONS(30), 5,
      anon_sym_export,
      anon_sym_EQ,
      anon_sym_python,
      anon_sym_inherit,
      aux_sym_identifier_token1,
    ACTIONS(28), 8,
      ts_builtin_sym_end,
      anon_sym_DOT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_QMARK_EQ,
      anon_sym_EQ_PLUS,
      anon_sym_LPAREN,
      anon_sym_POUND,
  [75] = 2,
    ACTIONS(34), 5,
      anon_sym_export,
      anon_sym_EQ,
      anon_sym_python,
      anon_sym_inherit,
      aux_sym_identifier_token1,
    ACTIONS(32), 9,
      ts_builtin_sym_end,
      anon_sym_DOT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_QMARK_EQ,
      anon_sym_EQ_PLUS,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_POUND,
  [94] = 8,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 1,
      anon_sym_export,
    ACTIONS(41), 1,
      anon_sym_python,
    ACTIONS(44), 1,
      anon_sym_inherit,
    ACTIONS(47), 1,
      aux_sym_identifier_token1,
    ACTIONS(50), 1,
      anon_sym_POUND,
    STATE(8), 1,
      sym_identifier,
    STATE(6), 7,
      sym__declaration,
      sym_variable_declaration,
      sym_task_declaration,
      sym_python_task_declaration,
      sym_inherit,
      sym_comment,
      aux_sym_source_file_repeat1,
  [125] = 8,
    ACTIONS(5), 1,
      anon_sym_export,
    ACTIONS(7), 1,
      anon_sym_python,
    ACTIONS(9), 1,
      anon_sym_inherit,
    ACTIONS(11), 1,
      aux_sym_identifier_token1,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_identifier,
    STATE(6), 7,
      sym__declaration,
      sym_variable_declaration,
      sym_task_declaration,
      sym_python_task_declaration,
      sym_inherit,
      sym_comment,
      aux_sym_source_file_repeat1,
  [156] = 5,
    ACTIONS(59), 1,
      anon_sym_EQ,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(57), 4,
      anon_sym_export,
      anon_sym_python,
      anon_sym_inherit,
      aux_sym_identifier_token1,
    ACTIONS(61), 5,
      anon_sym_DOT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_QMARK_EQ,
      anon_sym_EQ_PLUS,
  [180] = 4,
    ACTIONS(69), 1,
      anon_sym_EQ,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(67), 4,
      anon_sym_export,
      anon_sym_python,
      anon_sym_inherit,
      aux_sym_identifier_token1,
    ACTIONS(71), 5,
      anon_sym_DOT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_QMARK_EQ,
      anon_sym_EQ_PLUS,
  [201] = 2,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(75), 4,
      anon_sym_export,
      anon_sym_python,
      anon_sym_inherit,
      aux_sym_identifier_token1,
  [212] = 2,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(79), 4,
      anon_sym_export,
      anon_sym_python,
      anon_sym_inherit,
      aux_sym_identifier_token1,
  [223] = 2,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(83), 4,
      anon_sym_export,
      anon_sym_python,
      anon_sym_inherit,
      aux_sym_identifier_token1,
  [234] = 2,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(87), 4,
      anon_sym_export,
      anon_sym_python,
      anon_sym_inherit,
      aux_sym_identifier_token1,
  [245] = 2,
    ACTIONS(89), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(91), 4,
      anon_sym_export,
      anon_sym_python,
      anon_sym_inherit,
      aux_sym_identifier_token1,
  [256] = 2,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(95), 4,
      anon_sym_export,
      anon_sym_python,
      anon_sym_inherit,
      aux_sym_identifier_token1,
  [267] = 2,
    ACTIONS(97), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(99), 4,
      anon_sym_export,
      anon_sym_python,
      anon_sym_inherit,
      aux_sym_identifier_token1,
  [278] = 2,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(103), 4,
      anon_sym_export,
      anon_sym_python,
      anon_sym_inherit,
      aux_sym_identifier_token1,
  [289] = 2,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(107), 4,
      anon_sym_export,
      anon_sym_python,
      anon_sym_inherit,
      aux_sym_identifier_token1,
  [300] = 2,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(111), 4,
      anon_sym_export,
      anon_sym_python,
      anon_sym_inherit,
      aux_sym_identifier_token1,
  [311] = 4,
    ACTIONS(15), 1,
      anon_sym_LF,
    ACTIONS(17), 1,
      aux_sym_identifier_token1,
    ACTIONS(113), 1,
      anon_sym_COLON,
    STATE(20), 2,
      sym_override,
      aux_sym_identifier_repeat1,
  [325] = 4,
    ACTIONS(28), 1,
      anon_sym_LF,
    ACTIONS(30), 1,
      aux_sym_identifier_token1,
    ACTIONS(116), 1,
      anon_sym_COLON,
    STATE(20), 2,
      sym_override,
      aux_sym_identifier_repeat1,
  [339] = 4,
    ACTIONS(22), 1,
      anon_sym_LF,
    ACTIONS(24), 1,
      aux_sym_identifier_token1,
    ACTIONS(116), 1,
      anon_sym_COLON,
    STATE(21), 2,
      sym_override,
      aux_sym_identifier_repeat1,
  [353] = 3,
    ACTIONS(118), 1,
      anon_sym_LF,
    ACTIONS(120), 1,
      aux_sym_identifier_token1,
    STATE(26), 2,
      sym_identifier,
      aux_sym__inherit_decl_repeat1,
  [364] = 3,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    ACTIONS(124), 1,
      aux_sym_statement_token1,
    STATE(24), 2,
      sym_statement,
      aux_sym_block_repeat1,
  [375] = 3,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    ACTIONS(129), 1,
      aux_sym_statement_token1,
    STATE(24), 2,
      sym_statement,
      aux_sym_block_repeat1,
  [386] = 3,
    ACTIONS(131), 1,
      anon_sym_LF,
    ACTIONS(133), 1,
      aux_sym_identifier_token1,
    STATE(26), 2,
      sym_identifier,
      aux_sym__inherit_decl_repeat1,
  [397] = 3,
    ACTIONS(136), 1,
      aux_sym_identifier_token1,
    STATE(12), 1,
      sym__inherit_decl,
    STATE(23), 2,
      sym_identifier,
      aux_sym__inherit_decl_repeat1,
  [408] = 3,
    ACTIONS(129), 1,
      aux_sym_statement_token1,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    STATE(25), 2,
      sym_statement,
      aux_sym_block_repeat1,
  [419] = 2,
    ACTIONS(32), 1,
      anon_sym_LF,
    ACTIONS(34), 2,
      anon_sym_COLON,
      aux_sym_identifier_token1,
  [427] = 3,
    ACTIONS(140), 1,
      aux_sym_identifier_token1,
    STATE(15), 1,
      sym_task_declaration,
    STATE(37), 1,
      sym_identifier,
  [437] = 1,
    ACTIONS(142), 2,
      anon_sym_RBRACE,
      aux_sym_statement_token1,
  [442] = 2,
    ACTIONS(144), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_block,
  [449] = 2,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      sym_string,
  [456] = 2,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    STATE(17), 1,
      sym_string,
  [463] = 2,
    ACTIONS(140), 1,
      aux_sym_identifier_token1,
    STATE(9), 1,
      sym_identifier,
  [470] = 1,
    ACTIONS(148), 1,
      anon_sym_DQUOTE,
  [474] = 1,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
  [478] = 1,
    ACTIONS(150), 1,
      aux_sym_string_token1,
  [482] = 1,
    ACTIONS(152), 1,
      aux_sym_comment_token1,
  [486] = 1,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
  [490] = 1,
    ACTIONS(156), 1,
      anon_sym_RPAREN,
  [494] = 1,
    ACTIONS(158), 1,
      aux_sym_override_token1,
  [498] = 1,
    ACTIONS(160), 1,
      aux_sym_override_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 75,
  [SMALL_STATE(6)] = 94,
  [SMALL_STATE(7)] = 125,
  [SMALL_STATE(8)] = 156,
  [SMALL_STATE(9)] = 180,
  [SMALL_STATE(10)] = 201,
  [SMALL_STATE(11)] = 212,
  [SMALL_STATE(12)] = 223,
  [SMALL_STATE(13)] = 234,
  [SMALL_STATE(14)] = 245,
  [SMALL_STATE(15)] = 256,
  [SMALL_STATE(16)] = 267,
  [SMALL_STATE(17)] = 278,
  [SMALL_STATE(18)] = 289,
  [SMALL_STATE(19)] = 300,
  [SMALL_STATE(20)] = 311,
  [SMALL_STATE(21)] = 325,
  [SMALL_STATE(22)] = 339,
  [SMALL_STATE(23)] = 353,
  [SMALL_STATE(24)] = 364,
  [SMALL_STATE(25)] = 375,
  [SMALL_STATE(26)] = 386,
  [SMALL_STATE(27)] = 397,
  [SMALL_STATE(28)] = 408,
  [SMALL_STATE(29)] = 419,
  [SMALL_STATE(30)] = 427,
  [SMALL_STATE(31)] = 437,
  [SMALL_STATE(32)] = 442,
  [SMALL_STATE(33)] = 449,
  [SMALL_STATE(34)] = 456,
  [SMALL_STATE(35)] = 463,
  [SMALL_STATE(36)] = 470,
  [SMALL_STATE(37)] = 474,
  [SMALL_STATE(38)] = 478,
  [SMALL_STATE(39)] = 482,
  [SMALL_STATE(40)] = 486,
  [SMALL_STATE(41)] = 490,
  [SMALL_STATE(42)] = 494,
  [SMALL_STATE(43)] = 498,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(42),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [24] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 2),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 2),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_override, 2),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_override, 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inherit_decl, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inherit_decl, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inherit, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inherit, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_python_task_declaration, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_python_task_declaration, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_declaration, 4, .production_id = 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task_declaration, 4, .production_id = 1),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(43),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(31),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__inherit_decl_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__inherit_decl_repeat1, 2), SHIFT_REPEAT(22),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [154] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
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
