[
    "inherit"
    "export"
    "unset"
    "include"
    "require"
    "EXPORT_FUNCTIONS"
    "addtask"
    "before"
    "after"
    "deltask"
    "addhandler"
] @keyword

(shell_task_declaration name: (identifier) @function)
(shell_task_declaration [ "(" ")" ] @punctuation.bracket)
(python_task_declaration name: (identifier) @function)
(python_task_declaration "python" @keyword)
(python_task_declaration [ "(" ")" ] @punctuation.bracket)

(block [ "{" "}" ] @punctuation.bracket)

(shell_expansion [ "${" "}" ] @punctuation.bracket)
(python_expansion [ "${@" "}" ] @punctuation.bracket)

(string) @string
(shell_expansion) @none
(shell_expansion (variable_name) @variable)
(python_expansion (inline_code) @none)

(inherit) @string
(inherit (class_name) @type)
(include) @string

(variable_declaration (identifier (variable_name) @constant))
(export (variable_name) @constant)
(unset (variable_name) @constant)

(addtask (function_name) @function)
(deltask (function_name) @function)
(addhandler (function_name) @function)
(export_functions (function_name) @function)

(override) @attribute
(override ":" @punctuation.delimiter)

(override [ "append" "prepend" "remove" ] @constant.builtin)

(flag [ "[" "]" ] @punctuation.bracket)
(flag (flag_name) @none)
(flag (flag_name) @variable)

[
    "="
] @operator

(comment) @comment
(ERROR) @error
