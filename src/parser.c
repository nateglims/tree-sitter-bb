#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 175
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 101
#define ALIAS_COUNT 2
#define TOKEN_COUNT 55
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 5

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
  anon_sym_LF_RBRACE = 14,
  aux_sym_code_body_token1 = 15,
  anon_sym_inherit = 16,
  anon_sym_LF = 17,
  anon_sym_addtask = 18,
  anon_sym_after = 19,
  anon_sym_before = 20,
  aux_sym_addtask_token1 = 21,
  anon_sym_deltask = 22,
  anon_sym_addhandler = 23,
  anon_sym_unset = 24,
  anon_sym_include = 25,
  anon_sym_require = 26,
  aux_sym_include_token1 = 27,
  aux_sym__include_path_fragment_token1 = 28,
  aux_sym__include_path_fragment_token2 = 29,
  anon_sym_EXPORT_FUNCTIONS = 30,
  anon_sym_DQUOTE = 31,
  anon_sym_DQUOTE2 = 32,
  anon_sym_SQUOTE = 33,
  anon_sym_SQUOTE2 = 34,
  anon_sym_DOLLAR_LBRACE_AT = 35,
  anon_sym_RBRACE = 36,
  aux_sym__inline_code_inner_token1 = 37,
  anon_sym_DOLLAR_LBRACE = 38,
  sym_string_text_fragment1 = 39,
  sym_string_text_fragment2 = 40,
  anon_sym_LBRACK = 41,
  anon_sym_RBRACK = 42,
  sym_flag_name = 43,
  anon_sym_COLON = 44,
  anon_sym_append = 45,
  anon_sym_prepend = 46,
  anon_sym_remove = 47,
  aux_sym__override_fragment_token1 = 48,
  aux_sym_variable_name_token1 = 49,
  aux_sym__variable_fragment_token1 = 50,
  anon_sym_def = 51,
  sym__python_code = 52,
  anon_sym_POUND = 53,
  aux_sym_comment_token1 = 54,
  sym_source_file = 55,
  sym__declaration = 56,
  sym_variable_declaration = 57,
  sym_shell_task_declaration = 58,
  sym_python_task_declaration = 59,
  sym_block = 60,
  sym_code_body = 61,
  sym_inherit = 62,
  sym_class_name = 63,
  sym_function_name = 64,
  sym_addtask = 65,
  sym_deltask = 66,
  sym_addhandler = 67,
  sym_export = 68,
  sym_unset = 69,
  sym_include = 70,
  sym__include_path_fragment = 71,
  sym_export_functions = 72,
  sym_string = 73,
  aux_sym__string_inner1 = 74,
  aux_sym__string_inner2 = 75,
  sym__expansion = 76,
  sym_python_expansion = 77,
  sym_inline_code = 78,
  sym__inline_code_inner = 79,
  sym_shell_expansion = 80,
  sym_flag = 81,
  sym_override = 82,
  sym__override_fragment = 83,
  sym_identifier = 84,
  sym_variable_name = 85,
  sym__variable_fragment = 86,
  sym_python_function = 87,
  sym_comment = 88,
  aux_sym_source_file_repeat1 = 89,
  aux_sym_code_body_repeat1 = 90,
  aux_sym_inherit_repeat1 = 91,
  aux_sym_addtask_repeat1 = 92,
  aux_sym_deltask_repeat1 = 93,
  aux_sym_export_repeat1 = 94,
  aux_sym_include_repeat1 = 95,
  aux_sym_inline_code_repeat1 = 96,
  aux_sym_override_repeat1 = 97,
  aux_sym_identifier_repeat1 = 98,
  aux_sym_variable_name_repeat1 = 99,
  aux_sym_python_function_repeat1 = 100,
  anon_alias_sym_ = 101,
  alias_sym_path = 102,
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
  [anon_sym_LF_RBRACE] = "\n}",
  [aux_sym_code_body_token1] = "code_body_token1",
  [anon_sym_inherit] = "inherit",
  [anon_sym_LF] = "\n",
  [anon_sym_addtask] = "addtask",
  [anon_sym_after] = "after",
  [anon_sym_before] = "before",
  [aux_sym_addtask_token1] = "addtask_token1",
  [anon_sym_deltask] = "deltask",
  [anon_sym_addhandler] = "addhandler",
  [anon_sym_unset] = "unset",
  [anon_sym_include] = "include",
  [anon_sym_require] = "require",
  [aux_sym_include_token1] = "include_token1",
  [aux_sym__include_path_fragment_token1] = "_include_path_fragment_token1",
  [aux_sym__include_path_fragment_token2] = "_include_path_fragment_token2",
  [anon_sym_EXPORT_FUNCTIONS] = "EXPORT_FUNCTIONS",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_DQUOTE2] = "\"",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_SQUOTE2] = "'",
  [anon_sym_DOLLAR_LBRACE_AT] = "${@",
  [anon_sym_RBRACE] = "}",
  [aux_sym__inline_code_inner_token1] = "_inline_code_inner_token1",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [sym_string_text_fragment1] = "string_text_fragment",
  [sym_string_text_fragment2] = "string_text_fragment",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_flag_name] = "flag_name",
  [anon_sym_COLON] = ":",
  [anon_sym_append] = "append",
  [anon_sym_prepend] = "prepend",
  [anon_sym_remove] = "remove",
  [aux_sym__override_fragment_token1] = "_override_fragment_token1",
  [aux_sym_variable_name_token1] = "variable_name_token1",
  [aux_sym__variable_fragment_token1] = "_variable_fragment_token1",
  [anon_sym_def] = "def",
  [sym__python_code] = "_python_code",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_source_file] = "source_file",
  [sym__declaration] = "_declaration",
  [sym_variable_declaration] = "variable_declaration",
  [sym_shell_task_declaration] = "shell_task_declaration",
  [sym_python_task_declaration] = "python_task_declaration",
  [sym_block] = "block",
  [sym_code_body] = "code_body",
  [sym_inherit] = "inherit",
  [sym_class_name] = "class_name",
  [sym_function_name] = "function_name",
  [sym_addtask] = "addtask",
  [sym_deltask] = "deltask",
  [sym_addhandler] = "addhandler",
  [sym_export] = "export",
  [sym_unset] = "unset",
  [sym_include] = "include",
  [sym__include_path_fragment] = "_include_path_fragment",
  [sym_export_functions] = "export_functions",
  [sym_string] = "string",
  [aux_sym__string_inner1] = "_string_inner1",
  [aux_sym__string_inner2] = "_string_inner2",
  [sym__expansion] = "_expansion",
  [sym_python_expansion] = "python_expansion",
  [sym_inline_code] = "inline_code",
  [sym__inline_code_inner] = "_inline_code_inner",
  [sym_shell_expansion] = "shell_expansion",
  [sym_flag] = "flag",
  [sym_override] = "override",
  [sym__override_fragment] = "_override_fragment",
  [sym_identifier] = "identifier",
  [sym_variable_name] = "variable_name",
  [sym__variable_fragment] = "_variable_fragment",
  [sym_python_function] = "python_function",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_code_body_repeat1] = "code_body_repeat1",
  [aux_sym_inherit_repeat1] = "inherit_repeat1",
  [aux_sym_addtask_repeat1] = "addtask_repeat1",
  [aux_sym_deltask_repeat1] = "deltask_repeat1",
  [aux_sym_export_repeat1] = "export_repeat1",
  [aux_sym_include_repeat1] = "include_repeat1",
  [aux_sym_inline_code_repeat1] = "inline_code_repeat1",
  [aux_sym_override_repeat1] = "override_repeat1",
  [aux_sym_identifier_repeat1] = "identifier_repeat1",
  [aux_sym_variable_name_repeat1] = "variable_name_repeat1",
  [aux_sym_python_function_repeat1] = "python_function_repeat1",
  [anon_alias_sym_] = "",
  [alias_sym_path] = "path",
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
  [anon_sym_LF_RBRACE] = anon_sym_LF_RBRACE,
  [aux_sym_code_body_token1] = aux_sym_code_body_token1,
  [anon_sym_inherit] = anon_sym_inherit,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_addtask] = anon_sym_addtask,
  [anon_sym_after] = anon_sym_after,
  [anon_sym_before] = anon_sym_before,
  [aux_sym_addtask_token1] = aux_sym_addtask_token1,
  [anon_sym_deltask] = anon_sym_deltask,
  [anon_sym_addhandler] = anon_sym_addhandler,
  [anon_sym_unset] = anon_sym_unset,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_require] = anon_sym_require,
  [aux_sym_include_token1] = aux_sym_include_token1,
  [aux_sym__include_path_fragment_token1] = aux_sym__include_path_fragment_token1,
  [aux_sym__include_path_fragment_token2] = aux_sym__include_path_fragment_token2,
  [anon_sym_EXPORT_FUNCTIONS] = anon_sym_EXPORT_FUNCTIONS,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_SQUOTE2] = anon_sym_SQUOTE,
  [anon_sym_DOLLAR_LBRACE_AT] = anon_sym_DOLLAR_LBRACE_AT,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym__inline_code_inner_token1] = aux_sym__inline_code_inner_token1,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [sym_string_text_fragment1] = sym_string_text_fragment1,
  [sym_string_text_fragment2] = sym_string_text_fragment1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_flag_name] = sym_flag_name,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_append] = anon_sym_append,
  [anon_sym_prepend] = anon_sym_prepend,
  [anon_sym_remove] = anon_sym_remove,
  [aux_sym__override_fragment_token1] = aux_sym__override_fragment_token1,
  [aux_sym_variable_name_token1] = aux_sym_variable_name_token1,
  [aux_sym__variable_fragment_token1] = aux_sym__variable_fragment_token1,
  [anon_sym_def] = anon_sym_def,
  [sym__python_code] = sym__python_code,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_source_file] = sym_source_file,
  [sym__declaration] = sym__declaration,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_shell_task_declaration] = sym_shell_task_declaration,
  [sym_python_task_declaration] = sym_python_task_declaration,
  [sym_block] = sym_block,
  [sym_code_body] = sym_code_body,
  [sym_inherit] = sym_inherit,
  [sym_class_name] = sym_class_name,
  [sym_function_name] = sym_function_name,
  [sym_addtask] = sym_addtask,
  [sym_deltask] = sym_deltask,
  [sym_addhandler] = sym_addhandler,
  [sym_export] = sym_export,
  [sym_unset] = sym_unset,
  [sym_include] = sym_include,
  [sym__include_path_fragment] = sym__include_path_fragment,
  [sym_export_functions] = sym_export_functions,
  [sym_string] = sym_string,
  [aux_sym__string_inner1] = aux_sym__string_inner1,
  [aux_sym__string_inner2] = aux_sym__string_inner2,
  [sym__expansion] = sym__expansion,
  [sym_python_expansion] = sym_python_expansion,
  [sym_inline_code] = sym_inline_code,
  [sym__inline_code_inner] = sym__inline_code_inner,
  [sym_shell_expansion] = sym_shell_expansion,
  [sym_flag] = sym_flag,
  [sym_override] = sym_override,
  [sym__override_fragment] = sym__override_fragment,
  [sym_identifier] = sym_identifier,
  [sym_variable_name] = sym_variable_name,
  [sym__variable_fragment] = sym__variable_fragment,
  [sym_python_function] = sym_python_function,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_code_body_repeat1] = aux_sym_code_body_repeat1,
  [aux_sym_inherit_repeat1] = aux_sym_inherit_repeat1,
  [aux_sym_addtask_repeat1] = aux_sym_addtask_repeat1,
  [aux_sym_deltask_repeat1] = aux_sym_deltask_repeat1,
  [aux_sym_export_repeat1] = aux_sym_export_repeat1,
  [aux_sym_include_repeat1] = aux_sym_include_repeat1,
  [aux_sym_inline_code_repeat1] = aux_sym_inline_code_repeat1,
  [aux_sym_override_repeat1] = aux_sym_override_repeat1,
  [aux_sym_identifier_repeat1] = aux_sym_identifier_repeat1,
  [aux_sym_variable_name_repeat1] = aux_sym_variable_name_repeat1,
  [aux_sym_python_function_repeat1] = aux_sym_python_function_repeat1,
  [anon_alias_sym_] = anon_alias_sym_,
  [alias_sym_path] = alias_sym_path,
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
  [anon_sym_LF_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_code_body_token1] = {
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
  [anon_sym_addtask] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_after] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_before] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_addtask_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_deltask] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_addhandler] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_require] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_include_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__include_path_fragment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__include_path_fragment_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EXPORT_FUNCTIONS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_LBRACE_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__inline_code_inner_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_string_text_fragment1] = {
    .visible = true,
    .named = true,
  },
  [sym_string_text_fragment2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_flag_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_append] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prepend] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_remove] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__override_fragment_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__variable_fragment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_def] = {
    .visible = true,
    .named = false,
  },
  [sym__python_code] = {
    .visible = false,
    .named = true,
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
  [sym_shell_task_declaration] = {
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
  [sym_code_body] = {
    .visible = true,
    .named = true,
  },
  [sym_inherit] = {
    .visible = true,
    .named = true,
  },
  [sym_class_name] = {
    .visible = true,
    .named = true,
  },
  [sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [sym_addtask] = {
    .visible = true,
    .named = true,
  },
  [sym_deltask] = {
    .visible = true,
    .named = true,
  },
  [sym_addhandler] = {
    .visible = true,
    .named = true,
  },
  [sym_export] = {
    .visible = true,
    .named = true,
  },
  [sym_unset] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym__include_path_fragment] = {
    .visible = false,
    .named = true,
  },
  [sym_export_functions] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__string_inner1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_inner2] = {
    .visible = false,
    .named = false,
  },
  [sym__expansion] = {
    .visible = false,
    .named = true,
  },
  [sym_python_expansion] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_code] = {
    .visible = true,
    .named = true,
  },
  [sym__inline_code_inner] = {
    .visible = false,
    .named = true,
  },
  [sym_shell_expansion] = {
    .visible = true,
    .named = true,
  },
  [sym_flag] = {
    .visible = true,
    .named = true,
  },
  [sym_override] = {
    .visible = true,
    .named = true,
  },
  [sym__override_fragment] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_name] = {
    .visible = true,
    .named = true,
  },
  [sym__variable_fragment] = {
    .visible = false,
    .named = true,
  },
  [sym_python_function] = {
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
  [aux_sym_code_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inherit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_addtask_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_deltask_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_export_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_include_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_inline_code_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_override_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variable_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_python_function_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_] = {
    .visible = true,
    .named = false,
  },
  [alias_sym_path] = {
    .visible = true,
    .named = true,
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
  [3] = {.index = 0, .length = 1},
  [4] = {.index = 1, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_alias_sym_,
  },
  [2] = {
    [2] = alias_sym_path,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_variable_name, 2,
    sym_variable_name,
    anon_alias_sym_,
  aux_sym_include_repeat1, 2,
    aux_sym_include_repeat1,
    alias_sym_path,
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
  [7] = 5,
  [8] = 6,
  [9] = 4,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 16,
  [18] = 15,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 16,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 15,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 5,
  [42] = 4,
  [43] = 4,
  [44] = 6,
  [45] = 6,
  [46] = 5,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 4,
  [51] = 6,
  [52] = 5,
  [53] = 6,
  [54] = 4,
  [55] = 5,
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
  [68] = 15,
  [69] = 16,
  [70] = 15,
  [71] = 16,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 16,
  [77] = 77,
  [78] = 16,
  [79] = 15,
  [80] = 15,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 81,
  [85] = 81,
  [86] = 81,
  [87] = 81,
  [88] = 16,
  [89] = 89,
  [90] = 90,
  [91] = 81,
  [92] = 81,
  [93] = 93,
  [94] = 94,
  [95] = 15,
  [96] = 96,
  [97] = 81,
  [98] = 81,
  [99] = 99,
  [100] = 100,
  [101] = 81,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 15,
  [106] = 16,
  [107] = 16,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 15,
  [115] = 115,
  [116] = 112,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 126,
  [128] = 126,
  [129] = 129,
  [130] = 126,
  [131] = 126,
  [132] = 126,
  [133] = 133,
  [134] = 134,
  [135] = 126,
  [136] = 104,
  [137] = 126,
  [138] = 126,
  [139] = 139,
  [140] = 126,
  [141] = 141,
  [142] = 142,
  [143] = 141,
  [144] = 142,
  [145] = 141,
  [146] = 142,
  [147] = 141,
  [148] = 142,
  [149] = 141,
  [150] = 142,
  [151] = 151,
  [152] = 142,
  [153] = 141,
  [154] = 142,
  [155] = 141,
  [156] = 142,
  [157] = 157,
  [158] = 142,
  [159] = 159,
  [160] = 141,
  [161] = 161,
  [162] = 142,
  [163] = 161,
  [164] = 141,
  [165] = 165,
  [166] = 166,
  [167] = 121,
  [168] = 125,
  [169] = 141,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(131);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '"') ADVANCE(190);
      if (lookahead == '#') ADVANCE(384);
      if (lookahead == '$') ADVANCE(125);
      if (lookahead == '\'') ADVANCE(192);
      if (lookahead == '(') ADVANCE(143);
      if (lookahead == ')') ADVANCE(144);
      if (lookahead == '+') ADVANCE(30);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead == '=') ADVANCE(135);
      if (lookahead == '?') ADVANCE(33);
      if (lookahead == 'E') ADVANCE(48);
      if (lookahead == '[') ADVANCE(202);
      if (lookahead == ']') ADVANCE(203);
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'b') ADVANCE(62);
      if (lookahead == 'd') ADVANCE(63);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 'p') ADVANCE(105);
      if (lookahead == 'r') ADVANCE(64);
      if (lookahead == 'u') ADVANCE(89);
      if (lookahead == '{') ADVANCE(148);
      if (lookahead == '}') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(127)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '"') ADVANCE(189);
      if (lookahead == '#') ADVANCE(384);
      if (lookahead == '\'') ADVANCE(191);
      if (lookahead == '(') ADVANCE(143);
      if (lookahead == ')') ADVANCE(144);
      if (lookahead == '+') ADVANCE(30);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '=') ADVANCE(135);
      if (lookahead == '?') ADVANCE(33);
      if (lookahead == 'E') ADVANCE(48);
      if (lookahead == ']') ADVANCE(203);
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'b') ADVANCE(62);
      if (lookahead == 'd') ADVANCE(63);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 'p') ADVANCE(122);
      if (lookahead == 'r') ADVANCE(65);
      if (lookahead == 'u') ADVANCE(89);
      if (lookahead == '{') ADVANCE(148);
      if (lookahead == '}') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '"') ADVANCE(189);
      if (lookahead == '#') ADVANCE(384);
      if (lookahead == '\'') ADVANCE(191);
      if (lookahead == '(') ADVANCE(143);
      if (lookahead == ')') ADVANCE(144);
      if (lookahead == '+') ADVANCE(30);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '=') ADVANCE(135);
      if (lookahead == '?') ADVANCE(33);
      if (lookahead == 'E') ADVANCE(48);
      if (lookahead == ']') ADVANCE(203);
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'b') ADVANCE(62);
      if (lookahead == 'd') ADVANCE(63);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 'p') ADVANCE(122);
      if (lookahead == 'r') ADVANCE(65);
      if (lookahead == 'u') ADVANCE(89);
      if (lookahead == '{') ADVANCE(148);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(166);
      if (lookahead == '$') ADVANCE(125);
      if (lookahead == '+') ADVANCE(30);
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead == '=') ADVANCE(135);
      if (lookahead == '?') ADVANCE(33);
      if (lookahead == '[') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(379);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(166);
      if (lookahead == '$') ADVANCE(125);
      if (lookahead == 'a') ADVANCE(373);
      if (lookahead == 'b') ADVANCE(372);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(379);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(166);
      if (lookahead == '$') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(379);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(166);
      if (lookahead == '$') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(184);
      if (lookahead != 0) ADVANCE(185);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(166);
      if (lookahead == '+') ADVANCE(30);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead == '=') ADVANCE(135);
      if (lookahead == '?') ADVANCE(33);
      if (lookahead == '[') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(166);
      if (lookahead == '+') ADVANCE(30);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '=') ADVANCE(135);
      if (lookahead == '?') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(166);
      if (lookahead == 'a') ADVANCE(330);
      if (lookahead == 'b') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 10:
      if (lookahead == '\n') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 11:
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '$') ADVANCE(125);
      if (lookahead == '(') ADVANCE(143);
      if (lookahead == '+') ADVANCE(30);
      if (lookahead == '.') ADVANCE(369);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead == '=') ADVANCE(135);
      if (lookahead == '?') ADVANCE(33);
      if (lookahead == '[') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(379);
      END_STATE();
    case 12:
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '(') ADVANCE(143);
      if (lookahead == '+') ADVANCE(30);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '=') ADVANCE(135);
      if (lookahead == '?') ADVANCE(33);
      if (lookahead == '}') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '(') ADVANCE(143);
      if (lookahead == '+') ADVANCE(30);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '=') ADVANCE(135);
      if (lookahead == '?') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == '#') ADVANCE(385);
      if (lookahead == 'E') ADVANCE(244);
      if (lookahead == 'a') ADVANCE(251);
      if (lookahead == 'd') ADVANCE(254);
      if (lookahead == 'e') ADVANCE(292);
      if (lookahead == 'i') ADVANCE(270);
      if (lookahead == 'p') ADVANCE(293);
      if (lookahead == 'r') ADVANCE(255);
      if (lookahead == 'u') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '#') ADVANCE(385);
      if (lookahead == 'E') ADVANCE(244);
      if (lookahead == 'a') ADVANCE(251);
      if (lookahead == 'd') ADVANCE(254);
      if (lookahead == 'e') ADVANCE(292);
      if (lookahead == 'i') ADVANCE(270);
      if (lookahead == 'p') ADVANCE(293);
      if (lookahead == 'r') ADVANCE(255);
      if (lookahead == 'u') ADVANCE(271);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(156);
      if (lookahead == '$') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(379);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '}') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(151);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(151);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(190);
      if (lookahead == '$') ADVANCE(124);
      if (lookahead == '\\') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(198);
      END_STATE();
    case 22:
      if (lookahead == '#') ADVANCE(384);
      if (lookahead == 'E') ADVANCE(309);
      if (lookahead == 'a') ADVANCE(316);
      if (lookahead == 'd') ADVANCE(319);
      if (lookahead == 'e') ADVANCE(366);
      if (lookahead == 'i') ADVANCE(340);
      if (lookahead == 'p') ADVANCE(367);
      if (lookahead == 'r') ADVANCE(320);
      if (lookahead == 'u') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 23:
      if (lookahead == '$') ADVANCE(125);
      if (lookahead == '(') ADVANCE(143);
      if (lookahead == '+') ADVANCE(30);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == ':') ADVANCE(207);
      if (lookahead == '=') ADVANCE(135);
      if (lookahead == '?') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(230);
      END_STATE();
    case 24:
      if (lookahead == '$') ADVANCE(125);
      if (lookahead == '(') ADVANCE(143);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead == '[') ADVANCE(202);
      if (lookahead == '}') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(379);
      END_STATE();
    case 25:
      if (lookahead == '$') ADVANCE(125);
      if (lookahead == 'a') ADVANCE(225);
      if (lookahead == 'p') ADVANCE(228);
      if (lookahead == 'r') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(230);
      END_STATE();
    case 26:
      if (lookahead == '$') ADVANCE(124);
      if (lookahead == '\'') ADVANCE(192);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(200);
      END_STATE();
    case 27:
      if (lookahead == '(') ADVANCE(143);
      if (lookahead == '+') ADVANCE(30);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '=') ADVANCE(135);
      if (lookahead == '?') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      END_STATE();
    case 28:
      if (lookahead == '(') ADVANCE(143);
      if (lookahead == '}') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      END_STATE();
    case 29:
      if (lookahead == '(') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 30:
      if (lookahead == '=') ADVANCE(137);
      END_STATE();
    case 31:
      if (lookahead == '=') ADVANCE(136);
      END_STATE();
    case 32:
      if (lookahead == '=') ADVANCE(138);
      END_STATE();
    case 33:
      if (lookahead == '=') ADVANCE(139);
      if (lookahead == '?') ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == '=') ADVANCE(140);
      END_STATE();
    case 35:
      if (lookahead == 'C') ADVANCE(46);
      END_STATE();
    case 36:
      if (lookahead == 'F') ADVANCE(47);
      END_STATE();
    case 37:
      if (lookahead == 'I') ADVANCE(41);
      END_STATE();
    case 38:
      if (lookahead == 'N') ADVANCE(35);
      END_STATE();
    case 39:
      if (lookahead == 'N') ADVANCE(44);
      END_STATE();
    case 40:
      if (lookahead == 'O') ADVANCE(43);
      END_STATE();
    case 41:
      if (lookahead == 'O') ADVANCE(39);
      END_STATE();
    case 42:
      if (lookahead == 'P') ADVANCE(40);
      END_STATE();
    case 43:
      if (lookahead == 'R') ADVANCE(45);
      END_STATE();
    case 44:
      if (lookahead == 'S') ADVANCE(186);
      END_STATE();
    case 45:
      if (lookahead == 'T') ADVANCE(49);
      END_STATE();
    case 46:
      if (lookahead == 'T') ADVANCE(37);
      END_STATE();
    case 47:
      if (lookahead == 'U') ADVANCE(38);
      END_STATE();
    case 48:
      if (lookahead == 'X') ADVANCE(42);
      END_STATE();
    case 49:
      if (lookahead == '_') ADVANCE(36);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(330);
      if (lookahead == 'b') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 54:
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'h') ADVANCE(73);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(57);
      if (lookahead == 'f') ADVANCE(117);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(57);
      if (lookahead == 'f') ADVANCE(117);
      if (lookahead == 'p') ADVANCE(98);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(79);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(208);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(210);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(86);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 77:
      if (lookahead == 'f') ADVANCE(95);
      END_STATE();
    case 78:
      if (lookahead == 'f') ADVANCE(380);
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 79:
      if (lookahead == 'h') ADVANCE(53);
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 80:
      if (lookahead == 'h') ADVANCE(97);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 83:
      if (lookahead == 'k') ADVANCE(157);
      END_STATE();
    case 84:
      if (lookahead == 'k') ADVANCE(167);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 87:
      if (lookahead == 'm') ADVANCE(94);
      if (lookahead == 'q') ADVANCE(118);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 98:
      if (lookahead == 'p') ADVANCE(71);
      END_STATE();
    case 99:
      if (lookahead == 'p') ADVANCE(76);
      END_STATE();
    case 100:
      if (lookahead == 'p') ADVANCE(96);
      END_STATE();
    case 101:
      if (lookahead == 'q') ADVANCE(118);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(170);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(75);
      if (lookahead == 'y') ADVANCE(112);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 109:
      if (lookahead == 's') ADVANCE(83);
      END_STATE();
    case 110:
      if (lookahead == 's') ADVANCE(84);
      END_STATE();
    case 111:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 118:
      if (lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 119:
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 120:
      if (lookahead == 'v') ADVANCE(68);
      END_STATE();
    case 121:
      if (lookahead == 'x') ADVANCE(100);
      END_STATE();
    case 122:
      if (lookahead == 'y') ADVANCE(112);
      END_STATE();
    case 123:
      if (lookahead == '{') ADVANCE(148);
      if (lookahead == '}') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(195);
      if (lookahead != 0) ADVANCE(196);
      END_STATE();
    case 124:
      if (lookahead == '{') ADVANCE(197);
      END_STATE();
    case 125:
      if (lookahead == '{') ADVANCE(197);
      if (lookahead != 0) ADVANCE(183);
      END_STATE();
    case 126:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(205);
      END_STATE();
    case 127:
      if (eof) ADVANCE(131);
      if (lookahead == '\n') ADVANCE(2);
      if (lookahead == '"') ADVANCE(189);
      if (lookahead == '#') ADVANCE(384);
      if (lookahead == '\'') ADVANCE(191);
      if (lookahead == '(') ADVANCE(143);
      if (lookahead == ')') ADVANCE(144);
      if (lookahead == '+') ADVANCE(30);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '=') ADVANCE(135);
      if (lookahead == '?') ADVANCE(33);
      if (lookahead == 'E') ADVANCE(48);
      if (lookahead == ']') ADVANCE(203);
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'b') ADVANCE(62);
      if (lookahead == 'd') ADVANCE(63);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 'p') ADVANCE(122);
      if (lookahead == 'r') ADVANCE(65);
      if (lookahead == 'u') ADVANCE(89);
      if (lookahead == '{') ADVANCE(148);
      if (lookahead == '}') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(127)
      END_STATE();
    case 128:
      if (eof) ADVANCE(131);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == '\r') SKIP(130)
      if (lookahead == '#') ADVANCE(386);
      if (lookahead == 'E') ADVANCE(309);
      if (lookahead == 'a') ADVANCE(316);
      if (lookahead == 'd') ADVANCE(319);
      if (lookahead == 'e') ADVANCE(366);
      if (lookahead == 'i') ADVANCE(340);
      if (lookahead == 'p') ADVANCE(367);
      if (lookahead == 'r') ADVANCE(320);
      if (lookahead == 'u') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 129:
      if (eof) ADVANCE(131);
      if (lookahead == '"') ADVANCE(189);
      if (lookahead == '#') ADVANCE(384);
      if (lookahead == '\'') ADVANCE(191);
      if (lookahead == 'E') ADVANCE(309);
      if (lookahead == 'a') ADVANCE(316);
      if (lookahead == 'd') ADVANCE(319);
      if (lookahead == 'e') ADVANCE(366);
      if (lookahead == 'i') ADVANCE(340);
      if (lookahead == 'p') ADVANCE(367);
      if (lookahead == 'r') ADVANCE(320);
      if (lookahead == 'u') ADVANCE(341);
      if (lookahead == '}') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(129)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 130:
      if (eof) ADVANCE(131);
      if (lookahead == '#') ADVANCE(384);
      if (lookahead == 'E') ADVANCE(309);
      if (lookahead == 'a') ADVANCE(316);
      if (lookahead == 'd') ADVANCE(319);
      if (lookahead == 'e') ADVANCE(366);
      if (lookahead == 'i') ADVANCE(340);
      if (lookahead == 'p') ADVANCE(367);
      if (lookahead == 'r') ADVANCE(320);
      if (lookahead == 'u') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(130)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_export);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '+') ADVANCE(141);
      if (lookahead == '.') ADVANCE(142);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_DOT_EQ);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_QMARK_EQ);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_QMARK_QMARK_EQ);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_EQ_PLUS);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_EQ_DOT);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_python);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_python);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_python);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_LF_RBRACE);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_LF_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(152);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_code_body_token1);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(151);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_code_body_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_inherit);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_inherit);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_inherit);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(156);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_addtask);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_addtask);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_addtask);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_after);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_after);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_after);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(379);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_before);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_before);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_before);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(379);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_addtask_token1);
      if (lookahead == '\n') ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_deltask);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_deltask);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_deltask);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_addhandler);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_addhandler);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_addhandler);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_unset);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_unset);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_unset);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_require);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_require);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_require);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_include_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__include_path_fragment_token1);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__include_path_fragment_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(185);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__include_path_fragment_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$') ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_EXPORT_FUNCTIONS);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_EXPORT_FUNCTIONS);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_EXPORT_FUNCTIONS);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE_AT);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__inline_code_inner_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(196);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__inline_code_inner_token1);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      if (lookahead == '@') ADVANCE(193);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_string_text_fragment1);
      if (lookahead == '\\') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '$') ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_string_text_fragment1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$' &&
          lookahead != '\\') ADVANCE(198);
      if (lookahead == '\\') ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_string_text_fragment2);
      if (lookahead == '\\') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '$' &&
          lookahead != '\'') ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_string_text_fragment2);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(200);
      if (lookahead == '\\') ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_flag_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_flag_name);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(138);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_append);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_append);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(230);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_prepend);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_prepend);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(230);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_remove);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_remove);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(230);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__override_fragment_token1);
      if (lookahead == 'd') ADVANCE(209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(230);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym__override_fragment_token1);
      if (lookahead == 'd') ADVANCE(211);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(230);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym__override_fragment_token1);
      if (lookahead == 'e') ADVANCE(221);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(230);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym__override_fragment_token1);
      if (lookahead == 'e') ADVANCE(222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(230);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym__override_fragment_token1);
      if (lookahead == 'e') ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(230);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym__override_fragment_token1);
      if (lookahead == 'e') ADVANCE(223);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(230);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym__override_fragment_token1);
      if (lookahead == 'e') ADVANCE(227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(230);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym__override_fragment_token1);
      if (lookahead == 'm') ADVANCE(224);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(230);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym__override_fragment_token1);
      if (lookahead == 'n') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(230);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym__override_fragment_token1);
      if (lookahead == 'n') ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(230);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym__override_fragment_token1);
      if (lookahead == 'o') ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(230);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym__override_fragment_token1);
      if (lookahead == 'p') ADVANCE(226);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(230);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym__override_fragment_token1);
      if (lookahead == 'p') ADVANCE(217);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(230);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym__override_fragment_token1);
      if (lookahead == 'p') ADVANCE(219);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(230);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym__override_fragment_token1);
      if (lookahead == 'r') ADVANCE(220);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(230);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym__override_fragment_token1);
      if (lookahead == 'v') ADVANCE(218);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(230);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym__override_fragment_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= '{') ||
          lookahead == '}') ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'C') ADVANCE(242);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'F') ADVANCE(243);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'I') ADVANCE(237);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'N') ADVANCE(231);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'N') ADVANCE(240);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'O') ADVANCE(239);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'O') ADVANCE(235);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'P') ADVANCE(236);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'R') ADVANCE(241);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'S') ADVANCE(187);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'T') ADVANCE(245);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'T') ADVANCE(233);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'U') ADVANCE(234);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'X') ADVANCE(238);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == '_') ADVANCE(232);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(282);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(273);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'a') ADVANCE(283);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'c') ADVANCE(268);
      if (lookahead == 'h') ADVANCE(258);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'd') ADVANCE(262);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'd') ADVANCE(250);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'd') ADVANCE(269);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'd') ADVANCE(256);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(277);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(279);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(286);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(278);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'f') ADVANCE(381);
      if (lookahead == 'l') ADVANCE(289);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'h') ADVANCE(247);
      if (lookahead == 't') ADVANCE(246);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'h') ADVANCE(275);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(281);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(288);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'k') ADVANCE(158);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'k') ADVANCE(168);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'l') ADVANCE(291);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'l') ADVANCE(260);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(249);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(284);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(146);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'n') ADVANCE(252);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'o') ADVANCE(280);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'o') ADVANCE(272);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'p') ADVANCE(274);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'q') ADVANCE(290);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'r') ADVANCE(171);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'r') ADVANCE(265);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'r') ADVANCE(287);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'r') ADVANCE(257);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 's') ADVANCE(266);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 's') ADVANCE(267);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 's') ADVANCE(259);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 't') ADVANCE(263);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 't') ADVANCE(174);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 't') ADVANCE(133);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 't') ADVANCE(154);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 't') ADVANCE(248);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'u') ADVANCE(264);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'u') ADVANCE(253);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'x') ADVANCE(276);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == 'y') ADVANCE(285);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '=') ADVANCE(136);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'C') ADVANCE(307);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'F') ADVANCE(308);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'I') ADVANCE(302);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'N') ADVANCE(296);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'N') ADVANCE(305);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'O') ADVANCE(304);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'O') ADVANCE(300);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'P') ADVANCE(301);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'R') ADVANCE(306);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'S') ADVANCE(188);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'T') ADVANCE(310);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'T') ADVANCE(298);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'U') ADVANCE(299);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'X') ADVANCE(303);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '_') ADVANCE(297);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'a') ADVANCE(355);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'a') ADVANCE(343);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'a') ADVANCE(356);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'c') ADVANCE(338);
      if (lookahead == 'h') ADVANCE(323);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'd') ADVANCE(332);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'd') ADVANCE(315);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'd') ADVANCE(339);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'd') ADVANCE(321);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'e') ADVANCE(329);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'e') ADVANCE(348);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'e') ADVANCE(178);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'e') ADVANCE(350);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'e') ADVANCE(331);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'e') ADVANCE(359);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'e') ADVANCE(349);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'e') ADVANCE(351);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'f') ADVANCE(382);
      if (lookahead == 'l') ADVANCE(362);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'f') ADVANCE(363);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'f') ADVANCE(346);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'h') ADVANCE(312);
      if (lookahead == 't') ADVANCE(311);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'h') ADVANCE(345);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'i') ADVANCE(353);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'i') ADVANCE(361);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'k') ADVANCE(159);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'k') ADVANCE(169);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'l') ADVANCE(365);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'l') ADVANCE(327);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'n') ADVANCE(314);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'n') ADVANCE(357);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'n') ADVANCE(147);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'n') ADVANCE(317);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'o') ADVANCE(352);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'o') ADVANCE(342);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'o') ADVANCE(354);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'p') ADVANCE(344);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'q') ADVANCE(364);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'r') ADVANCE(172);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'r') ADVANCE(335);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'r') ADVANCE(161);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'r') ADVANCE(360);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'r') ADVANCE(322);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'r') ADVANCE(325);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 's') ADVANCE(336);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 's') ADVANCE(337);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 's') ADVANCE(326);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 't') ADVANCE(333);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 't') ADVANCE(175);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 't') ADVANCE(134);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 't') ADVANCE(155);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 't') ADVANCE(313);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 't') ADVANCE(328);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'u') ADVANCE(334);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'u') ADVANCE(318);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'x') ADVANCE(347);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == 'y') ADVANCE(358);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_variable_name_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym__variable_fragment_token1);
      if (lookahead == '=') ADVANCE(136);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(379);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym__variable_fragment_token1);
      if (lookahead == 'e') ADVANCE(376);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(379);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym__variable_fragment_token1);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(379);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym__variable_fragment_token1);
      if (lookahead == 'e') ADVANCE(374);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(379);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__variable_fragment_token1);
      if (lookahead == 'f') ADVANCE(378);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(379);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym__variable_fragment_token1);
      if (lookahead == 'f') ADVANCE(375);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(379);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym__variable_fragment_token1);
      if (lookahead == 'o') ADVANCE(377);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(379);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym__variable_fragment_token1);
      if (lookahead == 'r') ADVANCE(162);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(379);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym__variable_fragment_token1);
      if (lookahead == 'r') ADVANCE(371);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(379);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym__variable_fragment_token1);
      if (lookahead == 't') ADVANCE(370);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(379);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym__variable_fragment_token1);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(379);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(368);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__python_code);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '\n') ADVANCE(383);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(388);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 129},
  [2] = {.lex_state = 129},
  [3] = {.lex_state = 129},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 23},
  [11] = {.lex_state = 23},
  [12] = {.lex_state = 128},
  [13] = {.lex_state = 128},
  [14] = {.lex_state = 128},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 129},
  [21] = {.lex_state = 129},
  [22] = {.lex_state = 129},
  [23] = {.lex_state = 23},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 129},
  [26] = {.lex_state = 129},
  [27] = {.lex_state = 129},
  [28] = {.lex_state = 129},
  [29] = {.lex_state = 129},
  [30] = {.lex_state = 129},
  [31] = {.lex_state = 129},
  [32] = {.lex_state = 23},
  [33] = {.lex_state = 129},
  [34] = {.lex_state = 129},
  [35] = {.lex_state = 129},
  [36] = {.lex_state = 129},
  [37] = {.lex_state = 129},
  [38] = {.lex_state = 129},
  [39] = {.lex_state = 129},
  [40] = {.lex_state = 129},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 24},
  [44] = {.lex_state = 24},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 24},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 25},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 17},
  [53] = {.lex_state = 17},
  [54] = {.lex_state = 17},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 21},
  [64] = {.lex_state = 21},
  [65] = {.lex_state = 26},
  [66] = {.lex_state = 26},
  [67] = {.lex_state = 21},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 24},
  [70] = {.lex_state = 24},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 26},
  [74] = {.lex_state = 9},
  [75] = {.lex_state = 9},
  [76] = {.lex_state = 17},
  [77] = {.lex_state = 50},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 17},
  [81] = {.lex_state = 123},
  [82] = {.lex_state = 18},
  [83] = {.lex_state = 123},
  [84] = {.lex_state = 123},
  [85] = {.lex_state = 123},
  [86] = {.lex_state = 123},
  [87] = {.lex_state = 123},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 18},
  [90] = {.lex_state = 123},
  [91] = {.lex_state = 123},
  [92] = {.lex_state = 123},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 10},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 123},
  [98] = {.lex_state = 123},
  [99] = {.lex_state = 10},
  [100] = {.lex_state = 10},
  [101] = {.lex_state = 123},
  [102] = {.lex_state = 29},
  [103] = {.lex_state = 10},
  [104] = {.lex_state = 9},
  [105] = {.lex_state = 21},
  [106] = {.lex_state = 26},
  [107] = {.lex_state = 21},
  [108] = {.lex_state = 29},
  [109] = {.lex_state = 29},
  [110] = {.lex_state = 10},
  [111] = {.lex_state = 10},
  [112] = {.lex_state = 123},
  [113] = {.lex_state = 29},
  [114] = {.lex_state = 26},
  [115] = {.lex_state = 29},
  [116] = {.lex_state = 123},
  [117] = {.lex_state = 20},
  [118] = {.lex_state = 29},
  [119] = {.lex_state = 20},
  [120] = {.lex_state = 29},
  [121] = {.lex_state = 123},
  [122] = {.lex_state = 129},
  [123] = {.lex_state = 129},
  [124] = {.lex_state = 20},
  [125] = {.lex_state = 123},
  [126] = {.lex_state = 29},
  [127] = {.lex_state = 29},
  [128] = {.lex_state = 29},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 29},
  [131] = {.lex_state = 29},
  [132] = {.lex_state = 29},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 18},
  [135] = {.lex_state = 29},
  [136] = {.lex_state = 10},
  [137] = {.lex_state = 29},
  [138] = {.lex_state = 29},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 29},
  [141] = {.lex_state = 129},
  [142] = {.lex_state = 129},
  [143] = {.lex_state = 129},
  [144] = {.lex_state = 129},
  [145] = {.lex_state = 129},
  [146] = {.lex_state = 129},
  [147] = {.lex_state = 129},
  [148] = {.lex_state = 129},
  [149] = {.lex_state = 129},
  [150] = {.lex_state = 129},
  [151] = {.lex_state = 25},
  [152] = {.lex_state = 129},
  [153] = {.lex_state = 129},
  [154] = {.lex_state = 129},
  [155] = {.lex_state = 129},
  [156] = {.lex_state = 129},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 129},
  [159] = {.lex_state = 126},
  [160] = {.lex_state = 129},
  [161] = {.lex_state = 129},
  [162] = {.lex_state = 129},
  [163] = {.lex_state = 129},
  [164] = {.lex_state = 129},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 11},
  [167] = {.lex_state = 129},
  [168] = {.lex_state = 129},
  [169] = {.lex_state = 129},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 387},
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
    [anon_sym_LF_RBRACE] = ACTIONS(1),
    [anon_sym_inherit] = ACTIONS(1),
    [anon_sym_addtask] = ACTIONS(1),
    [anon_sym_after] = ACTIONS(1),
    [anon_sym_before] = ACTIONS(1),
    [anon_sym_deltask] = ACTIONS(1),
    [anon_sym_addhandler] = ACTIONS(1),
    [anon_sym_unset] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_require] = ACTIONS(1),
    [aux_sym__include_path_fragment_token1] = ACTIONS(1),
    [anon_sym_EXPORT_FUNCTIONS] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE2] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE_AT] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_append] = ACTIONS(1),
    [anon_sym_prepend] = ACTIONS(1),
    [anon_sym_remove] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(173),
    [sym__declaration] = STATE(3),
    [sym_variable_declaration] = STATE(3),
    [sym_shell_task_declaration] = STATE(3),
    [sym_python_task_declaration] = STATE(3),
    [sym_inherit] = STATE(3),
    [sym_addtask] = STATE(3),
    [sym_deltask] = STATE(3),
    [sym_addhandler] = STATE(3),
    [sym_export] = STATE(3),
    [sym_unset] = STATE(3),
    [sym_include] = STATE(3),
    [sym_export_functions] = STATE(3),
    [sym_identifier] = STATE(60),
    [sym_variable_name] = STATE(24),
    [sym_python_function] = STATE(3),
    [sym_comment] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_export] = ACTIONS(5),
    [anon_sym_python] = ACTIONS(7),
    [anon_sym_inherit] = ACTIONS(9),
    [anon_sym_addtask] = ACTIONS(11),
    [anon_sym_deltask] = ACTIONS(13),
    [anon_sym_addhandler] = ACTIONS(15),
    [anon_sym_unset] = ACTIONS(17),
    [anon_sym_include] = ACTIONS(19),
    [anon_sym_require] = ACTIONS(19),
    [anon_sym_EXPORT_FUNCTIONS] = ACTIONS(21),
    [aux_sym_variable_name_token1] = ACTIONS(23),
    [anon_sym_def] = ACTIONS(25),
    [anon_sym_POUND] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      anon_sym_export,
    ACTIONS(34), 1,
      anon_sym_python,
    ACTIONS(37), 1,
      anon_sym_inherit,
    ACTIONS(40), 1,
      anon_sym_addtask,
    ACTIONS(43), 1,
      anon_sym_deltask,
    ACTIONS(46), 1,
      anon_sym_addhandler,
    ACTIONS(49), 1,
      anon_sym_unset,
    ACTIONS(55), 1,
      anon_sym_EXPORT_FUNCTIONS,
    ACTIONS(58), 1,
      aux_sym_variable_name_token1,
    ACTIONS(61), 1,
      anon_sym_def,
    ACTIONS(64), 1,
      anon_sym_POUND,
    STATE(24), 1,
      sym_variable_name,
    STATE(60), 1,
      sym_identifier,
    ACTIONS(52), 2,
      anon_sym_include,
      anon_sym_require,
    STATE(2), 15,
      sym__declaration,
      sym_variable_declaration,
      sym_shell_task_declaration,
      sym_python_task_declaration,
      sym_inherit,
      sym_addtask,
      sym_deltask,
      sym_addhandler,
      sym_export,
      sym_unset,
      sym_include,
      sym_export_functions,
      sym_python_function,
      sym_comment,
      aux_sym_source_file_repeat1,
  [64] = 16,
    ACTIONS(5), 1,
      anon_sym_export,
    ACTIONS(7), 1,
      anon_sym_python,
    ACTIONS(9), 1,
      anon_sym_inherit,
    ACTIONS(11), 1,
      anon_sym_addtask,
    ACTIONS(13), 1,
      anon_sym_deltask,
    ACTIONS(15), 1,
      anon_sym_addhandler,
    ACTIONS(17), 1,
      anon_sym_unset,
    ACTIONS(21), 1,
      anon_sym_EXPORT_FUNCTIONS,
    ACTIONS(23), 1,
      aux_sym_variable_name_token1,
    ACTIONS(25), 1,
      anon_sym_def,
    ACTIONS(27), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    STATE(24), 1,
      sym_variable_name,
    STATE(60), 1,
      sym_identifier,
    ACTIONS(19), 2,
      anon_sym_include,
      anon_sym_require,
    STATE(2), 15,
      sym__declaration,
      sym_variable_declaration,
      sym_shell_task_declaration,
      sym_python_task_declaration,
      sym_inherit,
      sym_addtask,
      sym_deltask,
      sym_addhandler,
      sym_export,
      sym_unset,
      sym_include,
      sym_export_functions,
      sym_python_function,
      sym_comment,
      aux_sym_source_file_repeat1,
  [128] = 7,
    ACTIONS(73), 1,
      aux_sym__include_path_fragment_token1,
    ACTIONS(75), 1,
      anon_sym_DOLLAR_LBRACE_AT,
    ACTIONS(77), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(79), 1,
      aux_sym__variable_fragment_token1,
    ACTIONS(71), 2,
      aux_sym_addtask_token1,
      anon_sym_LBRACK,
    STATE(6), 5,
      sym__expansion,
      sym_python_expansion,
      sym_shell_expansion,
      sym__variable_fragment,
      aux_sym_variable_name_repeat1,
    ACTIONS(69), 10,
      anon_sym_EQ,
      anon_sym_DOT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_QMARK_EQ,
      anon_sym_EQ_PLUS,
      anon_sym_EQ_DOT,
      anon_sym_COLON,
      aux_sym_variable_name_token1,
  [164] = 7,
    ACTIONS(85), 1,
      aux_sym__include_path_fragment_token1,
    ACTIONS(88), 1,
      anon_sym_DOLLAR_LBRACE_AT,
    ACTIONS(91), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(94), 1,
      aux_sym__variable_fragment_token1,
    ACTIONS(83), 2,
      aux_sym_addtask_token1,
      anon_sym_LBRACK,
    STATE(5), 5,
      sym__expansion,
      sym_python_expansion,
      sym_shell_expansion,
      sym__variable_fragment,
      aux_sym_variable_name_repeat1,
    ACTIONS(81), 10,
      anon_sym_EQ,
      anon_sym_DOT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_QMARK_EQ,
      anon_sym_EQ_PLUS,
      anon_sym_EQ_DOT,
      anon_sym_COLON,
      aux_sym_variable_name_token1,
  [200] = 7,
    ACTIONS(75), 1,
      anon_sym_DOLLAR_LBRACE_AT,
    ACTIONS(77), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(101), 1,
      aux_sym__include_path_fragment_token1,
    ACTIONS(103), 1,
      aux_sym__variable_fragment_token1,
    ACTIONS(99), 2,
      aux_sym_addtask_token1,
      anon_sym_LBRACK,
    STATE(5), 5,
      sym__expansion,
      sym_python_expansion,
      sym_shell_expansion,
      sym__variable_fragment,
      aux_sym_variable_name_repeat1,
    ACTIONS(97), 10,
      anon_sym_EQ,
      anon_sym_DOT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_QMARK_EQ,
      anon_sym_EQ_PLUS,
      anon_sym_EQ_DOT,
      anon_sym_COLON,
      aux_sym_variable_name_token1,
  [236] = 7,
    ACTIONS(105), 1,
      aux_sym__include_path_fragment_token1,
    ACTIONS(108), 1,
      anon_sym_DOLLAR_LBRACE_AT,
    ACTIONS(111), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(114), 1,
      aux_sym__variable_fragment_token1,
    ACTIONS(81), 2,
      anon_sym_EQ,
      anon_sym_COLON,
    STATE(7), 5,
      sym__expansion,
      sym_python_expansion,
      sym_shell_expansion,
      sym__variable_fragment,
      aux_sym_variable_name_repeat1,
    ACTIONS(83), 9,
      anon_sym_DOT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_QMARK_EQ,
      anon_sym_EQ_PLUS,
      anon_sym_EQ_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [271] = 7,
    ACTIONS(117), 1,
      aux_sym__include_path_fragment_token1,
    ACTIONS(119), 1,
      anon_sym_DOLLAR_LBRACE_AT,
    ACTIONS(121), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(123), 1,
      aux_sym__variable_fragment_token1,
    ACTIONS(97), 2,
      anon_sym_EQ,
      anon_sym_COLON,
    STATE(7), 5,
      sym__expansion,
      sym_python_expansion,
      sym_shell_expansion,
      sym__variable_fragment,
      aux_sym_variable_name_repeat1,
    ACTIONS(99), 9,
      anon_sym_DOT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_QMARK_EQ,
      anon_sym_EQ_PLUS,
      anon_sym_EQ_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [306] = 7,
    ACTIONS(119), 1,
      anon_sym_DOLLAR_LBRACE_AT,
    ACTIONS(121), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(125), 1,
      aux_sym__include_path_fragment_token1,
    ACTIONS(127), 1,
      aux_sym__variable_fragment_token1,
    ACTIONS(69), 2,
      anon_sym_EQ,
      anon_sym_COLON,
    STATE(8), 5,
      sym__expansion,
      sym_python_expansion,
      sym_shell_expansion,
      sym__variable_fragment,
      aux_sym_variable_name_repeat1,
    ACTIONS(71), 9,
      anon_sym_DOT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_QMARK_EQ,
      anon_sym_EQ_PLUS,
      anon_sym_EQ_DOT,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
  [341] = 6,
    ACTIONS(135), 1,
      anon_sym_DOLLAR_LBRACE_AT,
    ACTIONS(137), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(129), 2,
      anon_sym_EQ,
      anon_sym_COLON,
    ACTIONS(133), 2,
      aux_sym__include_path_fragment_token1,
      aux_sym__override_fragment_token1,
    STATE(11), 5,
      sym__expansion,
      sym_python_expansion,
      sym_shell_expansion,
      sym__override_fragment,
      aux_sym_override_repeat1,
    ACTIONS(131), 8,
      anon_sym_DOT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_QMARK_EQ,
      anon_sym_EQ_PLUS,
      anon_sym_EQ_DOT,
      anon_sym_LPAREN,
  [373] = 6,
    ACTIONS(146), 1,
      anon_sym_DOLLAR_LBRACE_AT,
    ACTIONS(149), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(139), 2,
      anon_sym_EQ,
      anon_sym_COLON,
    ACTIONS(143), 2,
      aux_sym__include_path_fragment_token1,
      aux_sym__override_fragment_token1,
    STATE(11), 5,
      sym__expansion,
      sym_python_expansion,
      sym_shell_expansion,
      sym__override_fragment,
      aux_sym_override_repeat1,
    ACTIONS(141), 8,
      anon_sym_DOT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_QMARK_EQ,
      anon_sym_EQ_PLUS,
      anon_sym_EQ_DOT,
      anon_sym_LPAREN,
  [405] = 4,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
    ACTIONS(156), 1,
      sym__python_code,
    STATE(14), 1,
      aux_sym_python_function_repeat1,
    ACTIONS(154), 13,
      anon_sym_export,
      anon_sym_python,
      anon_sym_inherit,
      anon_sym_addtask,
      anon_sym_deltask,
      anon_sym_addhandler,
      anon_sym_unset,
      anon_sym_include,
      anon_sym_require,
      anon_sym_EXPORT_FUNCTIONS,
      aux_sym_variable_name_token1,
      anon_sym_def,
      anon_sym_POUND,
  [430] = 4,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
    ACTIONS(162), 1,
      sym__python_code,
    STATE(12), 1,
      aux_sym_python_function_repeat1,
    ACTIONS(160), 13,
      anon_sym_export,
      anon_sym_python,
      anon_sym_inherit,
      anon_sym_addtask,
      anon_sym_deltask,
      anon_sym_addhandler,
      anon_sym_unset,
      anon_sym_include,
      anon_sym_require,
      anon_sym_EXPORT_FUNCTIONS,
      aux_sym_variable_name_token1,
      anon_sym_def,
      anon_sym_POUND,
  [455] = 4,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
    ACTIONS(168), 1,
      sym__python_code,
    STATE(14), 1,
      aux_sym_python_function_repeat1,
    ACTIONS(166), 13,
      anon_sym_export,
      anon_sym_python,
      anon_sym_inherit,
      anon_sym_addtask,
      anon_sym_deltask,
      anon_sym_addhandler,
      anon_sym_unset,
      anon_sym_include,
      anon_sym_require,
      anon_sym_EXPORT_FUNCTIONS,
      aux_sym_variable_name_token1,
      anon_sym_def,
      anon_sym_POUND,
  [480] = 2,
    ACTIONS(173), 4,
      aux_sym_addtask_token1,
      aux_sym__include_path_fragment_token1,
      anon_sym_DOLLAR_LBRACE_AT,
      anon_sym_LBRACK,
    ACTIONS(171), 12,
      anon_sym_EQ,
      anon_sym_DOT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_QMARK_EQ,
      anon_sym_EQ_PLUS,
      anon_sym_EQ_DOT,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_COLON,
      aux_sym_variable_name_token1,
      aux_sym__variable_fragment_token1,
  [501] = 2,
    ACTIONS(177), 4,
      aux_sym_addtask_token1,
      aux_sym__include_path_fragment_token1,
      anon_sym_DOLLAR_LBRACE_AT,
      anon_sym_LBRACK,
    ACTIONS(175), 12,
      anon_sym_EQ,
      anon_sym_DOT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_QMARK_EQ,
      anon_sym_EQ_PLUS,
      anon_sym_EQ_DOT,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_COLON,
      aux_sym_variable_name_token1,
      aux_sym__variable_fragment_token1,
  [522] = 2,
    ACTIONS(175), 4,
      anon_sym_EQ,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_COLON,
      aux_sym__variable_fragment_token1,
    ACTIONS(177), 11,
      anon_sym_DOT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_QMARK_EQ,
      anon_sym_EQ_PLUS,
      anon_sym_EQ_DOT,
      anon_sym_LPAREN,
      aux_sym__include_path_fragment_token1,
      anon_sym_DOLLAR_LBRACE_AT,
      anon_sym_LBRACK,
  [542] = 2,
    ACTIONS(171), 4,
      anon_sym_EQ,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_COLON,
      aux_sym__variable_fragment_token1,
    ACTIONS(173), 11,
      anon_sym_DOT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_QMARK_EQ,
      anon_sym_EQ_PLUS,
      anon_sym_EQ_DOT,
      anon_sym_LPAREN,
      aux_sym__include_path_fragment_token1,
      anon_sym_DOLLAR_LBRACE_AT,
      anon_sym_LBRACK,
  [562] = 7,
    ACTIONS(181), 1,
      aux_sym_addtask_token1,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
    ACTIONS(185), 1,
      anon_sym_COLON,
    ACTIONS(187), 1,
      aux_sym_variable_name_token1,
    STATE(61), 1,
      sym_flag,
    STATE(47), 2,
      sym_override,
      aux_sym_identifier_repeat1,
    ACTIONS(179), 8,
      anon_sym_EQ,
      anon_sym_DOT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_QMARK_EQ,
      anon_sym_EQ_PLUS,
      anon_sym_EQ_DOT,
  [592] = 2,
    ACTIONS(189), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(191), 12,
      anon_sym_export,
      anon_sym_python,
      anon_sym_inherit,
      anon_sym_addtask,
      anon_sym_deltask,
      anon_sym_addhandler,
      anon_sym_unset,
      anon_sym_include,
      anon_sym_require,
      anon_sym_EXPORT_FUNCTIONS,
      aux_sym_variable_name_token1,
      anon_sym_def,
  [611] = 2,
    ACTIONS(193), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(195), 12,
      anon_sym_export,
      anon_sym_python,
      anon_sym_inherit,
      anon_sym_addtask,
      anon_sym_deltask,
      anon_sym_addhandler,
      anon_sym_unset,
      anon_sym_include,
      anon_sym_require,
      anon_sym_EXPORT_FUNCTIONS,
      aux_sym_variable_name_token1,
      anon_sym_def,
  [630] = 2,
    ACTIONS(197), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(199), 12,
      anon_sym_export,
      anon_sym_python,
      anon_sym_inherit,
      anon_sym_addtask,
      anon_sym_deltask,
      anon_sym_addhandler,
      anon_sym_unset,
      anon_sym_include,
      anon_sym_require,
      anon_sym_EXPORT_FUNCTIONS,
      aux_sym_variable_name_token1,
      anon_sym_def,
  [649] = 2,
    ACTIONS(175), 3,
      anon_sym_EQ,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_COLON,
    ACTIONS(177), 11,
      anon_sym_DOT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_QMARK_EQ,
      anon_sym_EQ_PLUS,
      anon_sym_EQ_DOT,
      anon_sym_LPAREN,
      aux_sym__include_path_fragment_token1,
      anon_sym_DOLLAR_LBRACE_AT,
      aux_sym__override_fragment_token1,
  [668] = 6,
    ACTIONS(179), 1,
      anon_sym_EQ,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
    ACTIONS(185), 1,
      anon_sym_COLON,
    STATE(61), 1,
      sym_flag,
    STATE(47), 2,
      sym_override,
      aux_sym_identifier_repeat1,
    ACTIONS(201), 8,
      anon_sym_DOT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_QMARK_EQ,
      anon_sym_EQ_PLUS,
      anon_sym_EQ_DOT,
      anon_sym_LPAREN,
  [695] = 2,
    ACTIONS(203), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(205), 12,
      anon_sym_export,
      anon_sym_python,
      anon_sym_inherit,
      anon_sym_addtask,
      anon_sym_deltask,
      anon_sym_addhandler,
      anon_sym_unset,
      anon_sym_include,
      anon_sym_require,
      anon_sym_EXPORT_FUNCTIONS,
      aux_sym_variable_name_token1,
      anon_sym_def,
  [714] = 2,
    ACTIONS(207), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(209), 12,
      anon_sym_export,
      anon_sym_python,
      anon_sym_inherit,
      anon_sym_addtask,
      anon_sym_deltask,
      anon_sym_addhandler,
      anon_sym_unset,
      anon_sym_include,
      anon_sym_require,
      anon_sym_EXPORT_FUNCTIONS,
      aux_sym_variable_name_token1,
      anon_sym_def,
  [733] = 2,
    ACTIONS(211), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(213), 12,
      anon_sym_export,
      anon_sym_python,
      anon_sym_inherit,
      anon_sym_addtask,
      anon_sym_deltask,
      anon_sym_addhandler,
      anon_sym_unset,
      anon_sym_include,
      anon_sym_require,
      anon_sym_EXPORT_FUNCTIONS,
      aux_sym_variable_name_token1,
      anon_sym_def,
  [752] = 2,
    ACTIONS(215), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(217), 12,
      anon_sym_export,
      anon_sym_python,
      anon_sym_inherit,
      anon_sym_addtask,
      anon_sym_deltask,
      anon_sym_addhandler,
      anon_sym_unset,
      anon_sym_include,
      anon_sym_require,
      anon_sym_EXPORT_FUNCTIONS,
      aux_sym_variable_name_token1,
      anon_sym_def,
  [771] = 2,
    ACTIONS(219), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(221), 12,
      anon_sym_export,
      anon_sym_python,
      anon_sym_inherit,
      anon_sym_addtask,
      anon_sym_deltask,
      anon_sym_addhandler,
      anon_sym_unset,
      anon_sym_include,
      anon_sym_require,
      anon_sym_EXPORT_FUNCTIONS,
      aux_sym_variable_name_token1,
      anon_sym_def,
  [790] = 2,
    ACTIONS(223), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(225), 12,
      anon_sym_export,
      anon_sym_python,
      anon_sym_inherit,
      anon_sym_addtask,
      anon_sym_deltask,
      anon_sym_addhandler,
      anon_sym_unset,
      anon_sym_include,
      anon_sym_require,
      anon_sym_EXPORT_FUNCTIONS,
      aux_sym_variable_name_token1,
      anon_sym_def,
  [809] = 2,
    ACTIONS(227), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(229), 12,
      anon_sym_export,
      anon_sym_python,
      anon_sym_inherit,
      anon_sym_addtask,
      anon_sym_deltask,
      anon_sym_addhandler,
      anon_sym_unset,
      anon_sym_include,
      anon_sym_require,
      anon_sym_EXPORT_FUNCTIONS,
      aux_sym_variable_name_token1,
      anon_sym_def,
  [828] = 2,
    ACTIONS(171), 3,
      anon_sym_EQ,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_COLON,
    ACTIONS(173), 11,
      anon_sym_DOT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_QMARK_EQ,
      anon_sym_EQ_PLUS,
      anon_sym_EQ_DOT,
      anon_sym_LPAREN,
      aux_sym__include_path_fragment_token1,
      anon_sym_DOLLAR_LBRACE_AT,
      aux_sym__override_fragment_token1,
  [847] = 2,
    ACTIONS(231), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(233), 12,
      anon_sym_export,
      anon_sym_python,
      anon_sym_inherit,
      anon_sym_addtask,
      anon_sym_deltask,
      anon_sym_addhandler,
      anon_sym_unset,
      anon_sym_include,
      anon_sym_require,
      anon_sym_EXPORT_FUNCTIONS,
      aux_sym_variable_name_token1,
      anon_sym_def,
  [866] = 2,
    ACTIONS(235), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(237), 12,
      anon_sym_export,
      anon_sym_python,
      anon_sym_inherit,
      anon_sym_addtask,
      anon_sym_deltask,
      anon_sym_addhandler,
      anon_sym_unset,
      anon_sym_include,
      anon_sym_require,
      anon_sym_EXPORT_FUNCTIONS,
      aux_sym_variable_name_token1,
      anon_sym_def,
  [885] = 2,
    ACTIONS(239), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(241), 12,
      anon_sym_export,
      anon_sym_python,
      anon_sym_inherit,
      anon_sym_addtask,
      anon_sym_deltask,
      anon_sym_addhandler,
      anon_sym_unset,
      anon_sym_include,
      anon_sym_require,
      anon_sym_EXPORT_FUNCTIONS,
      aux_sym_variable_name_token1,
      anon_sym_def,
  [904] = 2,
    ACTIONS(243), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(245), 12,
      anon_sym_export,
      anon_sym_python,
      anon_sym_inherit,
      anon_sym_addtask,
      anon_sym_deltask,
      anon_sym_addhandler,
      anon_sym_unset,
      anon_sym_include,
      anon_sym_require,
      anon_sym_EXPORT_FUNCTIONS,
      aux_sym_variable_name_token1,
      anon_sym_def,
  [923] = 2,
    ACTIONS(247), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(249), 12,
      anon_sym_export,
      anon_sym_python,
      anon_sym_inherit,
      anon_sym_addtask,
      anon_sym_deltask,
      anon_sym_addhandler,
      anon_sym_unset,
      anon_sym_include,
      anon_sym_require,
      anon_sym_EXPORT_FUNCTIONS,
      aux_sym_variable_name_token1,
      anon_sym_def,
  [942] = 2,
    ACTIONS(251), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(253), 12,
      anon_sym_export,
      anon_sym_python,
      anon_sym_inherit,
      anon_sym_addtask,
      anon_sym_deltask,
      anon_sym_addhandler,
      anon_sym_unset,
      anon_sym_include,
      anon_sym_require,
      anon_sym_EXPORT_FUNCTIONS,
      aux_sym_variable_name_token1,
      anon_sym_def,
  [961] = 2,
    ACTIONS(255), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(257), 12,
      anon_sym_export,
      anon_sym_python,
      anon_sym_inherit,
      anon_sym_addtask,
      anon_sym_deltask,
      anon_sym_addhandler,
      anon_sym_unset,
      anon_sym_include,
      anon_sym_require,
      anon_sym_EXPORT_FUNCTIONS,
      aux_sym_variable_name_token1,
      anon_sym_def,
  [980] = 2,
    ACTIONS(259), 2,
      ts_builtin_sym_end,
      anon_sym_POUND,
    ACTIONS(261), 12,
      anon_sym_export,
      anon_sym_python,
      anon_sym_inherit,
      anon_sym_addtask,
      anon_sym_deltask,
      anon_sym_addhandler,
      anon_sym_unset,
      anon_sym_include,
      anon_sym_require,
      anon_sym_EXPORT_FUNCTIONS,
      aux_sym_variable_name_token1,
      anon_sym_def,
  [999] = 7,
    ACTIONS(83), 1,
      aux_sym_addtask_token1,
    ACTIONS(263), 1,
      aux_sym__include_path_fragment_token1,
    ACTIONS(266), 1,
      anon_sym_DOLLAR_LBRACE_AT,
    ACTIONS(269), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(272), 1,
      aux_sym__variable_fragment_token1,
    ACTIONS(81), 3,
      anon_sym_after,
      anon_sym_before,
      aux_sym_variable_name_token1,
    STATE(41), 5,
      sym__expansion,
      sym_python_expansion,
      sym_shell_expansion,
      sym__variable_fragment,
      aux_sym_variable_name_repeat1,
  [1027] = 7,
    ACTIONS(71), 1,
      aux_sym_addtask_token1,
    ACTIONS(275), 1,
      aux_sym__include_path_fragment_token1,
    ACTIONS(277), 1,
      anon_sym_DOLLAR_LBRACE_AT,
    ACTIONS(279), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(281), 1,
      aux_sym__variable_fragment_token1,
    ACTIONS(69), 3,
      anon_sym_after,
      anon_sym_before,
      aux_sym_variable_name_token1,
    STATE(45), 5,
      sym__expansion,
      sym_python_expansion,
      sym_shell_expansion,
      sym__variable_fragment,
      aux_sym_variable_name_repeat1,
  [1055] = 5,
    ACTIONS(285), 1,
      anon_sym_DOLLAR_LBRACE_AT,
    ACTIONS(287), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(283), 2,
      aux_sym__include_path_fragment_token1,
      aux_sym__variable_fragment_token1,
    ACTIONS(71), 4,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COLON,
    STATE(44), 5,
      sym__expansion,
      sym_python_expansion,
      sym_shell_expansion,
      sym__variable_fragment,
      aux_sym_variable_name_repeat1,
  [1079] = 5,
    ACTIONS(285), 1,
      anon_sym_DOLLAR_LBRACE_AT,
    ACTIONS(287), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(289), 2,
      aux_sym__include_path_fragment_token1,
      aux_sym__variable_fragment_token1,
    ACTIONS(99), 4,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COLON,
    STATE(46), 5,
      sym__expansion,
      sym_python_expansion,
      sym_shell_expansion,
      sym__variable_fragment,
      aux_sym_variable_name_repeat1,
  [1103] = 7,
    ACTIONS(99), 1,
      aux_sym_addtask_token1,
    ACTIONS(277), 1,
      anon_sym_DOLLAR_LBRACE_AT,
    ACTIONS(279), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(291), 1,
      aux_sym__include_path_fragment_token1,
    ACTIONS(293), 1,
      aux_sym__variable_fragment_token1,
    ACTIONS(97), 3,
      anon_sym_after,
      anon_sym_before,
      aux_sym_variable_name_token1,
    STATE(41), 5,
      sym__expansion,
      sym_python_expansion,
      sym_shell_expansion,
      sym__variable_fragment,
      aux_sym_variable_name_repeat1,
  [1131] = 5,
    ACTIONS(298), 1,
      anon_sym_DOLLAR_LBRACE_AT,
    ACTIONS(301), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(295), 2,
      aux_sym__include_path_fragment_token1,
      aux_sym__variable_fragment_token1,
    ACTIONS(83), 4,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COLON,
    STATE(46), 5,
      sym__expansion,
      sym_python_expansion,
      sym_shell_expansion,
      sym__variable_fragment,
      aux_sym_variable_name_repeat1,
  [1155] = 4,
    ACTIONS(185), 1,
      anon_sym_COLON,
    ACTIONS(304), 1,
      anon_sym_EQ,
    STATE(49), 2,
      sym_override,
      aux_sym_identifier_repeat1,
    ACTIONS(306), 8,
      anon_sym_DOT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_QMARK_EQ,
      anon_sym_EQ_PLUS,
      anon_sym_EQ_DOT,
      anon_sym_LPAREN,
  [1176] = 6,
    ACTIONS(135), 1,
      anon_sym_DOLLAR_LBRACE_AT,
    ACTIONS(137), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(308), 1,
      aux_sym__include_path_fragment_token1,
    ACTIONS(312), 1,
      aux_sym__override_fragment_token1,
    ACTIONS(310), 3,
      anon_sym_append,
      anon_sym_prepend,
      anon_sym_remove,
    STATE(10), 5,
      sym__expansion,
      sym_python_expansion,
      sym_shell_expansion,
      sym__override_fragment,
      aux_sym_override_repeat1,
  [1201] = 4,
    ACTIONS(314), 1,
      anon_sym_EQ,
    ACTIONS(318), 1,
      anon_sym_COLON,
    STATE(49), 2,
      sym_override,
      aux_sym_identifier_repeat1,
    ACTIONS(316), 8,
      anon_sym_DOT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_QMARK_EQ,
      anon_sym_EQ_PLUS,
      anon_sym_EQ_DOT,
      anon_sym_LPAREN,
  [1222] = 6,
    ACTIONS(69), 1,
      aux_sym_variable_name_token1,
    ACTIONS(71), 1,
      aux_sym_addtask_token1,
    ACTIONS(323), 1,
      anon_sym_DOLLAR_LBRACE_AT,
    ACTIONS(325), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(321), 2,
      aux_sym__include_path_fragment_token1,
      aux_sym__variable_fragment_token1,
    STATE(51), 5,
      sym__expansion,
      sym_python_expansion,
      sym_shell_expansion,
      sym__variable_fragment,
      aux_sym_variable_name_repeat1,
  [1246] = 6,
    ACTIONS(97), 1,
      aux_sym_variable_name_token1,
    ACTIONS(99), 1,
      aux_sym_addtask_token1,
    ACTIONS(323), 1,
      anon_sym_DOLLAR_LBRACE_AT,
    ACTIONS(325), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(327), 2,
      aux_sym__include_path_fragment_token1,
      aux_sym__variable_fragment_token1,
    STATE(55), 5,
      sym__expansion,
      sym_python_expansion,
      sym_shell_expansion,
      sym__variable_fragment,
      aux_sym_variable_name_repeat1,
  [1270] = 6,
    ACTIONS(81), 1,
      aux_sym_variable_name_token1,
    ACTIONS(83), 1,
      anon_sym_LF,
    ACTIONS(332), 1,
      anon_sym_DOLLAR_LBRACE_AT,
    ACTIONS(335), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(329), 2,
      aux_sym__include_path_fragment_token1,
      aux_sym__variable_fragment_token1,
    STATE(52), 5,
      sym__expansion,
      sym_python_expansion,
      sym_shell_expansion,
      sym__variable_fragment,
      aux_sym_variable_name_repeat1,
  [1294] = 6,
    ACTIONS(97), 1,
      aux_sym_variable_name_token1,
    ACTIONS(99), 1,
      anon_sym_LF,
    ACTIONS(340), 1,
      anon_sym_DOLLAR_LBRACE_AT,
    ACTIONS(342), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(338), 2,
      aux_sym__include_path_fragment_token1,
      aux_sym__variable_fragment_token1,
    STATE(52), 5,
      sym__expansion,
      sym_python_expansion,
      sym_shell_expansion,
      sym__variable_fragment,
      aux_sym_variable_name_repeat1,
  [1318] = 6,
    ACTIONS(69), 1,
      aux_sym_variable_name_token1,
    ACTIONS(71), 1,
      anon_sym_LF,
    ACTIONS(340), 1,
      anon_sym_DOLLAR_LBRACE_AT,
    ACTIONS(342), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(344), 2,
      aux_sym__include_path_fragment_token1,
      aux_sym__variable_fragment_token1,
    STATE(53), 5,
      sym__expansion,
      sym_python_expansion,
      sym_shell_expansion,
      sym__variable_fragment,
      aux_sym_variable_name_repeat1,
  [1342] = 6,
    ACTIONS(81), 1,
      aux_sym_variable_name_token1,
    ACTIONS(83), 1,
      aux_sym_addtask_token1,
    ACTIONS(349), 1,
      anon_sym_DOLLAR_LBRACE_AT,
    ACTIONS(352), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(346), 2,
      aux_sym__include_path_fragment_token1,
      aux_sym__variable_fragment_token1,
    STATE(55), 5,
      sym__expansion,
      sym_python_expansion,
      sym_shell_expansion,
      sym__variable_fragment,
      aux_sym_variable_name_repeat1,
  [1366] = 2,
    ACTIONS(129), 2,
      anon_sym_EQ,
      anon_sym_COLON,
    ACTIONS(131), 8,
      anon_sym_DOT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_QMARK_EQ,
      anon_sym_EQ_PLUS,
      anon_sym_EQ_DOT,
      anon_sym_LPAREN,
  [1381] = 6,
    ACTIONS(355), 1,
      aux_sym_addtask_token1,
    ACTIONS(360), 1,
      anon_sym_DOLLAR_LBRACE_AT,
    ACTIONS(363), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(57), 1,
      aux_sym_include_repeat1,
    ACTIONS(357), 2,
      aux_sym__include_path_fragment_token1,
      aux_sym__include_path_fragment_token2,
    STATE(96), 4,
      sym__include_path_fragment,
      sym__expansion,
      sym_python_expansion,
      sym_shell_expansion,
  [1404] = 6,
    ACTIONS(366), 1,
      aux_sym_addtask_token1,
    ACTIONS(370), 1,
      anon_sym_DOLLAR_LBRACE_AT,
    ACTIONS(372), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(57), 1,
      aux_sym_include_repeat1,
    ACTIONS(368), 2,
      aux_sym__include_path_fragment_token1,
      aux_sym__include_path_fragment_token2,
    STATE(96), 4,
      sym__include_path_fragment,
      sym__expansion,
      sym_python_expansion,
      sym_shell_expansion,
  [1427] = 5,
    ACTIONS(370), 1,
      anon_sym_DOLLAR_LBRACE_AT,
    ACTIONS(372), 1,
      anon_sym_DOLLAR_LBRACE,
    STATE(58), 1,
      aux_sym_include_repeat1,
    ACTIONS(368), 2,
      aux_sym__include_path_fragment_token1,
      aux_sym__include_path_fragment_token2,
    STATE(96), 4,
      sym__include_path_fragment,
      sym__expansion,
      sym_python_expansion,
      sym_shell_expansion,
  [1447] = 3,
    ACTIONS(374), 1,
      anon_sym_EQ,
    ACTIONS(378), 1,
      anon_sym_LPAREN,
    ACTIONS(376), 7,
      anon_sym_DOT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_QMARK_EQ,
      anon_sym_EQ_PLUS,
      anon_sym_EQ_DOT,
  [1463] = 2,
    ACTIONS(304), 1,
      anon_sym_EQ,
    ACTIONS(306), 8,
      anon_sym_DOT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_QMARK_EQ,
      anon_sym_EQ_PLUS,
      anon_sym_EQ_DOT,
      anon_sym_LPAREN,
  [1477] = 2,
    ACTIONS(380), 1,
      anon_sym_EQ,
    ACTIONS(382), 8,
      anon_sym_DOT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_QMARK_EQ,
      anon_sym_EQ_PLUS,
      anon_sym_EQ_DOT,
      anon_sym_LPAREN,
  [1491] = 5,
    ACTIONS(384), 1,
      anon_sym_DQUOTE2,
    ACTIONS(386), 1,
      anon_sym_DOLLAR_LBRACE_AT,
    ACTIONS(388), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(390), 1,
      sym_string_text_fragment1,
    STATE(67), 4,
      aux_sym__string_inner1,
      sym__expansion,
      sym_python_expansion,
      sym_shell_expansion,
  [1510] = 5,
    ACTIONS(386), 1,
      anon_sym_DOLLAR_LBRACE_AT,
    ACTIONS(388), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(392), 1,
      anon_sym_DQUOTE2,
    ACTIONS(394), 1,
      sym_string_text_fragment1,
    STATE(63), 4,
      aux_sym__string_inner1,
      sym__expansion,
      sym_python_expansion,
      sym_shell_expansion,
  [1529] = 5,
    ACTIONS(392), 1,
      anon_sym_SQUOTE2,
    ACTIONS(396), 1,
      anon_sym_DOLLAR_LBRACE_AT,
    ACTIONS(398), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(400), 1,
      sym_string_text_fragment2,
    STATE(73), 4,
      aux_sym__string_inner2,
      sym__expansion,
      sym_python_expansion,
      sym_shell_expansion,
  [1548] = 5,
    ACTIONS(402), 1,
      anon_sym_SQUOTE2,
    ACTIONS(404), 1,
      anon_sym_DOLLAR_LBRACE_AT,
    ACTIONS(407), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(410), 1,
      sym_string_text_fragment2,
    STATE(66), 4,
      aux_sym__string_inner2,
      sym__expansion,
      sym_python_expansion,
      sym_shell_expansion,
  [1567] = 5,
    ACTIONS(413), 1,
      anon_sym_DQUOTE2,
    ACTIONS(415), 1,
      anon_sym_DOLLAR_LBRACE_AT,
    ACTIONS(418), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(421), 1,
      sym_string_text_fragment1,
    STATE(67), 4,
      aux_sym__string_inner1,
      sym__expansion,
      sym_python_expansion,
      sym_shell_expansion,
  [1586] = 2,
    ACTIONS(173), 3,
      aux_sym_addtask_token1,
      aux_sym__include_path_fragment_token1,
      anon_sym_DOLLAR_LBRACE_AT,
    ACTIONS(171), 5,
      anon_sym_after,
      anon_sym_before,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_variable_name_token1,
      aux_sym__variable_fragment_token1,
  [1599] = 2,
    ACTIONS(175), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(177), 7,
      anon_sym_LPAREN,
      aux_sym__include_path_fragment_token1,
      anon_sym_DOLLAR_LBRACE_AT,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COLON,
      aux_sym__variable_fragment_token1,
  [1612] = 2,
    ACTIONS(171), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(173), 7,
      anon_sym_LPAREN,
      aux_sym__include_path_fragment_token1,
      anon_sym_DOLLAR_LBRACE_AT,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COLON,
      aux_sym__variable_fragment_token1,
  [1625] = 2,
    ACTIONS(177), 3,
      aux_sym_addtask_token1,
      aux_sym__include_path_fragment_token1,
      anon_sym_DOLLAR_LBRACE_AT,
    ACTIONS(175), 5,
      anon_sym_after,
      anon_sym_before,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_variable_name_token1,
      aux_sym__variable_fragment_token1,
  [1638] = 2,
    ACTIONS(424), 1,
      anon_sym_EQ,
    ACTIONS(426), 7,
      anon_sym_DOT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_COLON_EQ,
      anon_sym_QMARK_EQ,
      anon_sym_QMARK_QMARK_EQ,
      anon_sym_EQ_PLUS,
      anon_sym_EQ_DOT,
  [1651] = 5,
    ACTIONS(384), 1,
      anon_sym_SQUOTE2,
    ACTIONS(396), 1,
      anon_sym_DOLLAR_LBRACE_AT,
    ACTIONS(398), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(428), 1,
      sym_string_text_fragment2,
    STATE(66), 4,
      aux_sym__string_inner2,
      sym__expansion,
      sym_python_expansion,
      sym_shell_expansion,
  [1670] = 5,
    ACTIONS(432), 1,
      aux_sym_addtask_token1,
    ACTIONS(434), 1,
      aux_sym_variable_name_token1,
    STATE(104), 1,
      sym_variable_name,
    ACTIONS(430), 2,
      anon_sym_after,
      anon_sym_before,
    STATE(75), 2,
      sym_function_name,
      aux_sym_addtask_repeat1,
  [1688] = 5,
    ACTIONS(439), 1,
      aux_sym_addtask_token1,
    ACTIONS(441), 1,
      aux_sym_variable_name_token1,
    STATE(104), 1,
      sym_variable_name,
    ACTIONS(436), 2,
      anon_sym_after,
      anon_sym_before,
    STATE(75), 2,
      sym_function_name,
      aux_sym_addtask_repeat1,
  [1706] = 2,
    ACTIONS(175), 2,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_variable_name_token1,
    ACTIONS(177), 4,
      anon_sym_LF,
      aux_sym__include_path_fragment_token1,
      anon_sym_DOLLAR_LBRACE_AT,
      aux_sym__variable_fragment_token1,
  [1717] = 4,
    ACTIONS(434), 1,
      aux_sym_variable_name_token1,
    STATE(104), 1,
      sym_variable_name,
    ACTIONS(444), 2,
      anon_sym_after,
      anon_sym_before,
    STATE(74), 2,
      sym_function_name,
      aux_sym_addtask_repeat1,
  [1732] = 2,
    ACTIONS(175), 2,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_variable_name_token1,
    ACTIONS(177), 4,
      aux_sym_addtask_token1,
      aux_sym__include_path_fragment_token1,
      anon_sym_DOLLAR_LBRACE_AT,
      aux_sym__variable_fragment_token1,
  [1743] = 2,
    ACTIONS(171), 2,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_variable_name_token1,
    ACTIONS(173), 4,
      aux_sym_addtask_token1,
      aux_sym__include_path_fragment_token1,
      anon_sym_DOLLAR_LBRACE_AT,
      aux_sym__variable_fragment_token1,
  [1754] = 2,
    ACTIONS(171), 2,
      anon_sym_DOLLAR_LBRACE,
      aux_sym_variable_name_token1,
    ACTIONS(173), 4,
      anon_sym_LF,
      aux_sym__include_path_fragment_token1,
      anon_sym_DOLLAR_LBRACE_AT,
      aux_sym__variable_fragment_token1,
  [1765] = 4,
    ACTIONS(446), 1,
      anon_sym_LBRACE,
    ACTIONS(448), 1,
      aux_sym__inline_code_inner_token1,
    STATE(160), 1,
      sym_inline_code,
    STATE(90), 2,
      sym__inline_code_inner,
      aux_sym_inline_code_repeat1,
  [1779] = 4,
    ACTIONS(450), 1,
      anon_sym_LF,
    ACTIONS(452), 1,
      aux_sym_variable_name_token1,
    STATE(134), 1,
      sym_variable_name,
    STATE(89), 2,
      sym_class_name,
      aux_sym_inherit_repeat1,
  [1793] = 4,
    ACTIONS(454), 1,
      anon_sym_LBRACE,
    ACTIONS(457), 1,
      anon_sym_RBRACE,
    ACTIONS(459), 1,
      aux_sym__inline_code_inner_token1,
    STATE(83), 2,
      sym__inline_code_inner,
      aux_sym_inline_code_repeat1,
  [1807] = 4,
    ACTIONS(446), 1,
      anon_sym_LBRACE,
    ACTIONS(448), 1,
      aux_sym__inline_code_inner_token1,
    STATE(155), 1,
      sym_inline_code,
    STATE(90), 2,
      sym__inline_code_inner,
      aux_sym_inline_code_repeat1,
  [1821] = 4,
    ACTIONS(446), 1,
      anon_sym_LBRACE,
    ACTIONS(448), 1,
      aux_sym__inline_code_inner_token1,
    STATE(143), 1,
      sym_inline_code,
    STATE(90), 2,
      sym__inline_code_inner,
      aux_sym_inline_code_repeat1,
  [1835] = 4,
    ACTIONS(446), 1,
      anon_sym_LBRACE,
    ACTIONS(448), 1,
      aux_sym__inline_code_inner_token1,
    STATE(164), 1,
      sym_inline_code,
    STATE(90), 2,
      sym__inline_code_inner,
      aux_sym_inline_code_repeat1,
  [1849] = 4,
    ACTIONS(446), 1,
      anon_sym_LBRACE,
    ACTIONS(448), 1,
      aux_sym__inline_code_inner_token1,
    STATE(145), 1,
      sym_inline_code,
    STATE(90), 2,
      sym__inline_code_inner,
      aux_sym_inline_code_repeat1,
  [1863] = 2,
    ACTIONS(175), 2,
      aux_sym_addtask_token1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(177), 3,
      aux_sym__include_path_fragment_token1,
      aux_sym__include_path_fragment_token2,
      anon_sym_DOLLAR_LBRACE_AT,
  [1873] = 4,
    ACTIONS(462), 1,
      anon_sym_LF,
    ACTIONS(464), 1,
      aux_sym_variable_name_token1,
    STATE(134), 1,
      sym_variable_name,
    STATE(89), 2,
      sym_class_name,
      aux_sym_inherit_repeat1,
  [1887] = 4,
    ACTIONS(446), 1,
      anon_sym_LBRACE,
    ACTIONS(467), 1,
      anon_sym_RBRACE,
    ACTIONS(469), 1,
      aux_sym__inline_code_inner_token1,
    STATE(83), 2,
      sym__inline_code_inner,
      aux_sym_inline_code_repeat1,
  [1901] = 4,
    ACTIONS(446), 1,
      anon_sym_LBRACE,
    ACTIONS(448), 1,
      aux_sym__inline_code_inner_token1,
    STATE(169), 1,
      sym_inline_code,
    STATE(90), 2,
      sym__inline_code_inner,
      aux_sym_inline_code_repeat1,
  [1915] = 4,
    ACTIONS(446), 1,
      anon_sym_LBRACE,
    ACTIONS(448), 1,
      aux_sym__inline_code_inner_token1,
    STATE(147), 1,
      sym_inline_code,
    STATE(90), 2,
      sym__inline_code_inner,
      aux_sym_inline_code_repeat1,
  [1929] = 4,
    ACTIONS(471), 1,
      aux_sym_addtask_token1,
    ACTIONS(473), 1,
      aux_sym_variable_name_token1,
    STATE(136), 1,
      sym_variable_name,
    STATE(93), 2,
      sym_function_name,
      aux_sym_deltask_repeat1,
  [1943] = 4,
    ACTIONS(476), 1,
      aux_sym_addtask_token1,
    ACTIONS(478), 1,
      aux_sym_variable_name_token1,
    STATE(136), 1,
      sym_variable_name,
    STATE(93), 2,
      sym_function_name,
      aux_sym_deltask_repeat1,
  [1957] = 2,
    ACTIONS(171), 2,
      aux_sym_addtask_token1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(173), 3,
      aux_sym__include_path_fragment_token1,
      aux_sym__include_path_fragment_token2,
      anon_sym_DOLLAR_LBRACE_AT,
  [1967] = 2,
    ACTIONS(480), 2,
      aux_sym_addtask_token1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(482), 3,
      aux_sym__include_path_fragment_token1,
      aux_sym__include_path_fragment_token2,
      anon_sym_DOLLAR_LBRACE_AT,
  [1977] = 4,
    ACTIONS(446), 1,
      anon_sym_LBRACE,
    ACTIONS(448), 1,
      aux_sym__inline_code_inner_token1,
    STATE(149), 1,
      sym_inline_code,
    STATE(90), 2,
      sym__inline_code_inner,
      aux_sym_inline_code_repeat1,
  [1991] = 4,
    ACTIONS(446), 1,
      anon_sym_LBRACE,
    ACTIONS(448), 1,
      aux_sym__inline_code_inner_token1,
    STATE(141), 1,
      sym_inline_code,
    STATE(90), 2,
      sym__inline_code_inner,
      aux_sym_inline_code_repeat1,
  [2005] = 4,
    ACTIONS(478), 1,
      aux_sym_variable_name_token1,
    ACTIONS(484), 1,
      aux_sym_addtask_token1,
    STATE(136), 1,
      sym_variable_name,
    STATE(93), 2,
      sym_function_name,
      aux_sym_deltask_repeat1,
  [2019] = 4,
    ACTIONS(478), 1,
      aux_sym_variable_name_token1,
    ACTIONS(486), 1,
      aux_sym_addtask_token1,
    STATE(136), 1,
      sym_variable_name,
    STATE(93), 2,
      sym_function_name,
      aux_sym_deltask_repeat1,
  [2033] = 4,
    ACTIONS(446), 1,
      anon_sym_LBRACE,
    ACTIONS(448), 1,
      aux_sym__inline_code_inner_token1,
    STATE(153), 1,
      sym_inline_code,
    STATE(90), 2,
      sym__inline_code_inner,
      aux_sym_inline_code_repeat1,
  [2047] = 4,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
    ACTIONS(490), 1,
      aux_sym_variable_name_token1,
    STATE(24), 1,
      sym_variable_name,
    STATE(170), 1,
      sym_identifier,
  [2060] = 3,
    ACTIONS(492), 1,
      aux_sym_addtask_token1,
    ACTIONS(494), 1,
      aux_sym_variable_name_token1,
    STATE(103), 2,
      sym_variable_name,
      aux_sym_export_repeat1,
  [2071] = 2,
    ACTIONS(499), 1,
      aux_sym_addtask_token1,
    ACTIONS(497), 3,
      anon_sym_after,
      anon_sym_before,
      aux_sym_variable_name_token1,
  [2080] = 2,
    ACTIONS(171), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(173), 3,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR_LBRACE_AT,
      sym_string_text_fragment1,
  [2089] = 2,
    ACTIONS(175), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(177), 3,
      anon_sym_SQUOTE2,
      anon_sym_DOLLAR_LBRACE_AT,
      sym_string_text_fragment2,
  [2098] = 2,
    ACTIONS(175), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(177), 3,
      anon_sym_DQUOTE2,
      anon_sym_DOLLAR_LBRACE_AT,
      sym_string_text_fragment1,
  [2107] = 4,
    ACTIONS(501), 1,
      aux_sym_variable_name_token1,
    STATE(19), 1,
      sym_variable_name,
    STATE(72), 1,
      sym_identifier,
    STATE(111), 1,
      aux_sym_export_repeat1,
  [2120] = 3,
    ACTIONS(503), 1,
      aux_sym_variable_name_token1,
    STATE(134), 1,
      sym_variable_name,
    STATE(82), 2,
      sym_class_name,
      aux_sym_inherit_repeat1,
  [2131] = 3,
    ACTIONS(478), 1,
      aux_sym_variable_name_token1,
    ACTIONS(505), 1,
      aux_sym_addtask_token1,
    STATE(103), 2,
      sym_variable_name,
      aux_sym_export_repeat1,
  [2142] = 3,
    ACTIONS(478), 1,
      aux_sym_variable_name_token1,
    ACTIONS(507), 1,
      aux_sym_addtask_token1,
    STATE(103), 2,
      sym_variable_name,
      aux_sym_export_repeat1,
  [2153] = 4,
    ACTIONS(509), 1,
      anon_sym_LBRACE,
    ACTIONS(511), 1,
      anon_sym_RBRACE,
    ACTIONS(513), 1,
      aux_sym__inline_code_inner_token1,
    STATE(163), 1,
      sym__inline_code_inner,
  [2166] = 3,
    ACTIONS(515), 1,
      aux_sym_variable_name_token1,
    STATE(136), 1,
      sym_variable_name,
    STATE(100), 2,
      sym_function_name,
      aux_sym_deltask_repeat1,
  [2177] = 2,
    ACTIONS(171), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(173), 3,
      anon_sym_SQUOTE2,
      anon_sym_DOLLAR_LBRACE_AT,
      sym_string_text_fragment2,
  [2186] = 3,
    ACTIONS(515), 1,
      aux_sym_variable_name_token1,
    STATE(136), 1,
      sym_variable_name,
    STATE(99), 2,
      sym_function_name,
      aux_sym_deltask_repeat1,
  [2197] = 4,
    ACTIONS(509), 1,
      anon_sym_LBRACE,
    ACTIONS(517), 1,
      anon_sym_RBRACE,
    ACTIONS(519), 1,
      aux_sym__inline_code_inner_token1,
    STATE(161), 1,
      sym__inline_code_inner,
  [2210] = 4,
    ACTIONS(521), 1,
      anon_sym_LF_RBRACE,
    ACTIONS(523), 1,
      aux_sym_code_body_token1,
    STATE(124), 1,
      aux_sym_code_body_repeat1,
    STATE(166), 1,
      sym_code_body,
  [2223] = 3,
    ACTIONS(515), 1,
      aux_sym_variable_name_token1,
    STATE(136), 1,
      sym_variable_name,
    STATE(94), 2,
      sym_function_name,
      aux_sym_deltask_repeat1,
  [2234] = 3,
    ACTIONS(525), 1,
      anon_sym_LF_RBRACE,
    ACTIONS(527), 1,
      aux_sym_code_body_token1,
    STATE(119), 1,
      aux_sym_code_body_repeat1,
  [2244] = 2,
    ACTIONS(515), 1,
      aux_sym_variable_name_token1,
    STATE(110), 2,
      sym_variable_name,
      aux_sym_export_repeat1,
  [2252] = 2,
    ACTIONS(532), 1,
      aux_sym__inline_code_inner_token1,
    ACTIONS(530), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2260] = 3,
    ACTIONS(534), 1,
      anon_sym_DQUOTE,
    ACTIONS(536), 1,
      anon_sym_SQUOTE,
    STATE(26), 1,
      sym_string,
  [2270] = 3,
    ACTIONS(534), 1,
      anon_sym_DQUOTE,
    ACTIONS(536), 1,
      anon_sym_SQUOTE,
    STATE(33), 1,
      sym_string,
  [2280] = 3,
    ACTIONS(538), 1,
      anon_sym_LF_RBRACE,
    ACTIONS(540), 1,
      aux_sym_code_body_token1,
    STATE(119), 1,
      aux_sym_code_body_repeat1,
  [2290] = 2,
    ACTIONS(544), 1,
      aux_sym__inline_code_inner_token1,
    ACTIONS(542), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2298] = 2,
    ACTIONS(490), 1,
      aux_sym_variable_name_token1,
    STATE(142), 1,
      sym_variable_name,
  [2305] = 2,
    ACTIONS(490), 1,
      aux_sym_variable_name_token1,
    STATE(162), 1,
      sym_variable_name,
  [2312] = 2,
    ACTIONS(490), 1,
      aux_sym_variable_name_token1,
    STATE(156), 1,
      sym_variable_name,
  [2319] = 2,
    ACTIONS(546), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_block,
  [2326] = 2,
    ACTIONS(490), 1,
      aux_sym_variable_name_token1,
    STATE(154), 1,
      sym_variable_name,
  [2333] = 2,
    ACTIONS(490), 1,
      aux_sym_variable_name_token1,
    STATE(152), 1,
      sym_variable_name,
  [2340] = 2,
    ACTIONS(490), 1,
      aux_sym_variable_name_token1,
    STATE(150), 1,
      sym_variable_name,
  [2347] = 2,
    ACTIONS(546), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      sym_block,
  [2354] = 2,
    ACTIONS(548), 1,
      anon_sym_LF,
    ACTIONS(550), 1,
      aux_sym_variable_name_token1,
  [2361] = 2,
    ACTIONS(490), 1,
      aux_sym_variable_name_token1,
    STATE(148), 1,
      sym_variable_name,
  [2368] = 2,
    ACTIONS(497), 1,
      aux_sym_variable_name_token1,
    ACTIONS(499), 1,
      aux_sym_addtask_token1,
  [2375] = 2,
    ACTIONS(490), 1,
      aux_sym_variable_name_token1,
    STATE(146), 1,
      sym_variable_name,
  [2382] = 2,
    ACTIONS(490), 1,
      aux_sym_variable_name_token1,
    STATE(144), 1,
      sym_variable_name,
  [2389] = 2,
    ACTIONS(546), 1,
      anon_sym_LBRACE,
    STATE(40), 1,
      sym_block,
  [2396] = 2,
    ACTIONS(490), 1,
      aux_sym_variable_name_token1,
    STATE(158), 1,
      sym_variable_name,
  [2403] = 1,
    ACTIONS(552), 1,
      anon_sym_RBRACE,
  [2407] = 1,
    ACTIONS(554), 1,
      anon_sym_RBRACE,
  [2411] = 1,
    ACTIONS(556), 1,
      anon_sym_RBRACE,
  [2415] = 1,
    ACTIONS(558), 1,
      anon_sym_RBRACE,
  [2419] = 1,
    ACTIONS(560), 1,
      anon_sym_RBRACE,
  [2423] = 1,
    ACTIONS(562), 1,
      anon_sym_RBRACE,
  [2427] = 1,
    ACTIONS(564), 1,
      anon_sym_RBRACE,
  [2431] = 1,
    ACTIONS(566), 1,
      anon_sym_RBRACE,
  [2435] = 1,
    ACTIONS(568), 1,
      anon_sym_RBRACE,
  [2439] = 1,
    ACTIONS(570), 1,
      anon_sym_RBRACE,
  [2443] = 1,
    ACTIONS(572), 1,
      aux_sym_include_token1,
  [2447] = 1,
    ACTIONS(574), 1,
      anon_sym_RBRACE,
  [2451] = 1,
    ACTIONS(576), 1,
      anon_sym_RBRACE,
  [2455] = 1,
    ACTIONS(578), 1,
      anon_sym_RBRACE,
  [2459] = 1,
    ACTIONS(580), 1,
      anon_sym_RBRACE,
  [2463] = 1,
    ACTIONS(582), 1,
      anon_sym_RBRACE,
  [2467] = 1,
    ACTIONS(584), 1,
      anon_sym_RPAREN,
  [2471] = 1,
    ACTIONS(586), 1,
      anon_sym_RBRACE,
  [2475] = 1,
    ACTIONS(588), 1,
      sym_flag_name,
  [2479] = 1,
    ACTIONS(590), 1,
      anon_sym_RBRACE,
  [2483] = 1,
    ACTIONS(592), 1,
      anon_sym_RBRACE,
  [2487] = 1,
    ACTIONS(594), 1,
      anon_sym_RBRACE,
  [2491] = 1,
    ACTIONS(596), 1,
      anon_sym_RBRACE,
  [2495] = 1,
    ACTIONS(598), 1,
      anon_sym_RBRACE,
  [2499] = 1,
    ACTIONS(600), 1,
      anon_sym_RPAREN,
  [2503] = 1,
    ACTIONS(602), 1,
      anon_sym_LF_RBRACE,
  [2507] = 1,
    ACTIONS(532), 1,
      anon_sym_RBRACE,
  [2511] = 1,
    ACTIONS(544), 1,
      anon_sym_RBRACE,
  [2515] = 1,
    ACTIONS(604), 1,
      anon_sym_RBRACE,
  [2519] = 1,
    ACTIONS(606), 1,
      anon_sym_LPAREN,
  [2523] = 1,
    ACTIONS(608), 1,
      anon_sym_RBRACK,
  [2527] = 1,
    ACTIONS(610), 1,
      anon_sym_RPAREN,
  [2531] = 1,
    ACTIONS(612), 1,
      ts_builtin_sym_end,
  [2535] = 1,
    ACTIONS(614), 1,
      aux_sym_comment_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 64,
  [SMALL_STATE(4)] = 128,
  [SMALL_STATE(5)] = 164,
  [SMALL_STATE(6)] = 200,
  [SMALL_STATE(7)] = 236,
  [SMALL_STATE(8)] = 271,
  [SMALL_STATE(9)] = 306,
  [SMALL_STATE(10)] = 341,
  [SMALL_STATE(11)] = 373,
  [SMALL_STATE(12)] = 405,
  [SMALL_STATE(13)] = 430,
  [SMALL_STATE(14)] = 455,
  [SMALL_STATE(15)] = 480,
  [SMALL_STATE(16)] = 501,
  [SMALL_STATE(17)] = 522,
  [SMALL_STATE(18)] = 542,
  [SMALL_STATE(19)] = 562,
  [SMALL_STATE(20)] = 592,
  [SMALL_STATE(21)] = 611,
  [SMALL_STATE(22)] = 630,
  [SMALL_STATE(23)] = 649,
  [SMALL_STATE(24)] = 668,
  [SMALL_STATE(25)] = 695,
  [SMALL_STATE(26)] = 714,
  [SMALL_STATE(27)] = 733,
  [SMALL_STATE(28)] = 752,
  [SMALL_STATE(29)] = 771,
  [SMALL_STATE(30)] = 790,
  [SMALL_STATE(31)] = 809,
  [SMALL_STATE(32)] = 828,
  [SMALL_STATE(33)] = 847,
  [SMALL_STATE(34)] = 866,
  [SMALL_STATE(35)] = 885,
  [SMALL_STATE(36)] = 904,
  [SMALL_STATE(37)] = 923,
  [SMALL_STATE(38)] = 942,
  [SMALL_STATE(39)] = 961,
  [SMALL_STATE(40)] = 980,
  [SMALL_STATE(41)] = 999,
  [SMALL_STATE(42)] = 1027,
  [SMALL_STATE(43)] = 1055,
  [SMALL_STATE(44)] = 1079,
  [SMALL_STATE(45)] = 1103,
  [SMALL_STATE(46)] = 1131,
  [SMALL_STATE(47)] = 1155,
  [SMALL_STATE(48)] = 1176,
  [SMALL_STATE(49)] = 1201,
  [SMALL_STATE(50)] = 1222,
  [SMALL_STATE(51)] = 1246,
  [SMALL_STATE(52)] = 1270,
  [SMALL_STATE(53)] = 1294,
  [SMALL_STATE(54)] = 1318,
  [SMALL_STATE(55)] = 1342,
  [SMALL_STATE(56)] = 1366,
  [SMALL_STATE(57)] = 1381,
  [SMALL_STATE(58)] = 1404,
  [SMALL_STATE(59)] = 1427,
  [SMALL_STATE(60)] = 1447,
  [SMALL_STATE(61)] = 1463,
  [SMALL_STATE(62)] = 1477,
  [SMALL_STATE(63)] = 1491,
  [SMALL_STATE(64)] = 1510,
  [SMALL_STATE(65)] = 1529,
  [SMALL_STATE(66)] = 1548,
  [SMALL_STATE(67)] = 1567,
  [SMALL_STATE(68)] = 1586,
  [SMALL_STATE(69)] = 1599,
  [SMALL_STATE(70)] = 1612,
  [SMALL_STATE(71)] = 1625,
  [SMALL_STATE(72)] = 1638,
  [SMALL_STATE(73)] = 1651,
  [SMALL_STATE(74)] = 1670,
  [SMALL_STATE(75)] = 1688,
  [SMALL_STATE(76)] = 1706,
  [SMALL_STATE(77)] = 1717,
  [SMALL_STATE(78)] = 1732,
  [SMALL_STATE(79)] = 1743,
  [SMALL_STATE(80)] = 1754,
  [SMALL_STATE(81)] = 1765,
  [SMALL_STATE(82)] = 1779,
  [SMALL_STATE(83)] = 1793,
  [SMALL_STATE(84)] = 1807,
  [SMALL_STATE(85)] = 1821,
  [SMALL_STATE(86)] = 1835,
  [SMALL_STATE(87)] = 1849,
  [SMALL_STATE(88)] = 1863,
  [SMALL_STATE(89)] = 1873,
  [SMALL_STATE(90)] = 1887,
  [SMALL_STATE(91)] = 1901,
  [SMALL_STATE(92)] = 1915,
  [SMALL_STATE(93)] = 1929,
  [SMALL_STATE(94)] = 1943,
  [SMALL_STATE(95)] = 1957,
  [SMALL_STATE(96)] = 1967,
  [SMALL_STATE(97)] = 1977,
  [SMALL_STATE(98)] = 1991,
  [SMALL_STATE(99)] = 2005,
  [SMALL_STATE(100)] = 2019,
  [SMALL_STATE(101)] = 2033,
  [SMALL_STATE(102)] = 2047,
  [SMALL_STATE(103)] = 2060,
  [SMALL_STATE(104)] = 2071,
  [SMALL_STATE(105)] = 2080,
  [SMALL_STATE(106)] = 2089,
  [SMALL_STATE(107)] = 2098,
  [SMALL_STATE(108)] = 2107,
  [SMALL_STATE(109)] = 2120,
  [SMALL_STATE(110)] = 2131,
  [SMALL_STATE(111)] = 2142,
  [SMALL_STATE(112)] = 2153,
  [SMALL_STATE(113)] = 2166,
  [SMALL_STATE(114)] = 2177,
  [SMALL_STATE(115)] = 2186,
  [SMALL_STATE(116)] = 2197,
  [SMALL_STATE(117)] = 2210,
  [SMALL_STATE(118)] = 2223,
  [SMALL_STATE(119)] = 2234,
  [SMALL_STATE(120)] = 2244,
  [SMALL_STATE(121)] = 2252,
  [SMALL_STATE(122)] = 2260,
  [SMALL_STATE(123)] = 2270,
  [SMALL_STATE(124)] = 2280,
  [SMALL_STATE(125)] = 2290,
  [SMALL_STATE(126)] = 2298,
  [SMALL_STATE(127)] = 2305,
  [SMALL_STATE(128)] = 2312,
  [SMALL_STATE(129)] = 2319,
  [SMALL_STATE(130)] = 2326,
  [SMALL_STATE(131)] = 2333,
  [SMALL_STATE(132)] = 2340,
  [SMALL_STATE(133)] = 2347,
  [SMALL_STATE(134)] = 2354,
  [SMALL_STATE(135)] = 2361,
  [SMALL_STATE(136)] = 2368,
  [SMALL_STATE(137)] = 2375,
  [SMALL_STATE(138)] = 2382,
  [SMALL_STATE(139)] = 2389,
  [SMALL_STATE(140)] = 2396,
  [SMALL_STATE(141)] = 2403,
  [SMALL_STATE(142)] = 2407,
  [SMALL_STATE(143)] = 2411,
  [SMALL_STATE(144)] = 2415,
  [SMALL_STATE(145)] = 2419,
  [SMALL_STATE(146)] = 2423,
  [SMALL_STATE(147)] = 2427,
  [SMALL_STATE(148)] = 2431,
  [SMALL_STATE(149)] = 2435,
  [SMALL_STATE(150)] = 2439,
  [SMALL_STATE(151)] = 2443,
  [SMALL_STATE(152)] = 2447,
  [SMALL_STATE(153)] = 2451,
  [SMALL_STATE(154)] = 2455,
  [SMALL_STATE(155)] = 2459,
  [SMALL_STATE(156)] = 2463,
  [SMALL_STATE(157)] = 2467,
  [SMALL_STATE(158)] = 2471,
  [SMALL_STATE(159)] = 2475,
  [SMALL_STATE(160)] = 2479,
  [SMALL_STATE(161)] = 2483,
  [SMALL_STATE(162)] = 2487,
  [SMALL_STATE(163)] = 2491,
  [SMALL_STATE(164)] = 2495,
  [SMALL_STATE(165)] = 2499,
  [SMALL_STATE(166)] = 2503,
  [SMALL_STATE(167)] = 2507,
  [SMALL_STATE(168)] = 2511,
  [SMALL_STATE(169)] = 2515,
  [SMALL_STATE(170)] = 2519,
  [SMALL_STATE(171)] = 2523,
  [SMALL_STATE(172)] = 2527,
  [SMALL_STATE(173)] = 2531,
  [SMALL_STATE(174)] = 2535,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(108),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(102),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(109),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(113),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(115),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(120),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(151),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(118),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(174),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_name, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_name, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_variable_name_repeat1, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variable_name_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_name_repeat1, 2), SHIFT_REPEAT(5),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_name_repeat1, 2), SHIFT_REPEAT(86),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_name_repeat1, 2), SHIFT_REPEAT(127),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_name_repeat1, 2), SHIFT_REPEAT(5),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_name, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_name, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_name_repeat1, 2), SHIFT_REPEAT(7),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_name_repeat1, 2), SHIFT_REPEAT(91),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_name_repeat1, 2), SHIFT_REPEAT(126),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_name_repeat1, 2), SHIFT_REPEAT(7),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_override, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_override, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_override_repeat1, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_override_repeat1, 2),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_override_repeat1, 2), SHIFT_REPEAT(11),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_override_repeat1, 2), SHIFT_REPEAT(98),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_override_repeat1, 2), SHIFT_REPEAT(131),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_python_function, 2),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_python_function, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_python_function, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_python_function, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_python_function_repeat1, 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_python_function_repeat1, 2),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_python_function_repeat1, 2), SHIFT_REPEAT(14),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_expansion, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_expansion, 3),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_python_expansion, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_python_expansion, 3),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_export_repeat1, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_export_repeat1, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shell_task_declaration, 4, .production_id = 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shell_task_declaration, 4, .production_id = 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unset, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unset, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addhandler, 3),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addhandler, 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addtask, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addtask, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_python_task_declaration, 5, .production_id = 4),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_python_task_declaration, 5, .production_id = 4),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inherit, 3),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inherit, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 4, .production_id = 2),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 4, .production_id = 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 3),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deltask, 3),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deltask, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export_functions, 3),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export_functions, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_python_task_declaration, 4),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_python_task_declaration, 4),
  [263] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_name_repeat1, 2), SHIFT_REPEAT(41),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_name_repeat1, 2), SHIFT_REPEAT(87),
  [269] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_name_repeat1, 2), SHIFT_REPEAT(137),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_name_repeat1, 2), SHIFT_REPEAT(41),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_name_repeat1, 2), SHIFT_REPEAT(46),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_name_repeat1, 2), SHIFT_REPEAT(81),
  [301] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_name_repeat1, 2), SHIFT_REPEAT(140),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_repeat1, 2),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(48),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_name_repeat1, 2), SHIFT_REPEAT(52),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_name_repeat1, 2), SHIFT_REPEAT(85),
  [335] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_name_repeat1, 2), SHIFT_REPEAT(138),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_name_repeat1, 2), SHIFT_REPEAT(55),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variable_name_repeat1, 2), SHIFT_REPEAT(92),
  [352] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_variable_name_repeat1, 2), SHIFT_REPEAT(135),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_include_repeat1, 2),
  [357] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_include_repeat1, 2), SHIFT_REPEAT(96),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_include_repeat1, 2), SHIFT_REPEAT(97),
  [363] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_include_repeat1, 2), SHIFT_REPEAT(132),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_flag, 3),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_flag, 3),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_inner2, 2),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_inner2, 2), SHIFT_REPEAT(84),
  [407] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_inner2, 2), SHIFT_REPEAT(128),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_inner2, 2), SHIFT_REPEAT(66),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_inner1, 2),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_inner1, 2), SHIFT_REPEAT(101),
  [418] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_inner1, 2), SHIFT_REPEAT(130),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_inner1, 2), SHIFT_REPEAT(67),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [434] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [436] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_addtask_repeat1, 2), SHIFT_REPEAT(75),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_addtask_repeat1, 2),
  [441] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_addtask_repeat1, 2), SHIFT_REPEAT(42),
  [444] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [446] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [454] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inline_code_repeat1, 2), SHIFT_REPEAT(112),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_inline_code_repeat1, 2),
  [459] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_inline_code_repeat1, 2), SHIFT_REPEAT(83),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_inherit_repeat1, 2),
  [464] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_inherit_repeat1, 2), SHIFT_REPEAT(54),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_code, 1),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_deltask_repeat1, 2),
  [473] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_deltask_repeat1, 2), SHIFT_REPEAT(50),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_include_repeat1, 1),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_include_repeat1, 1),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_export_repeat1, 2),
  [494] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_export_repeat1, 2), SHIFT_REPEAT(50),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_name, 1, .production_id = 1),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_name, 1, .production_id = 1),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_body_repeat1, 2),
  [527] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_body_repeat1, 2), SHIFT_REPEAT(119),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_code_inner, 2),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_code_inner, 2),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_body, 1),
  [540] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__inline_code_inner, 3),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_code_inner, 3),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_name, 1, .production_id = 1),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_class_name, 1, .production_id = 1),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [612] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
