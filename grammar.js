module.exports = grammar({
    name: 'BB',
    rules: {
        source_file: $ => repeat($._declaration),

        _declaration: $ => choice(
            $.inherit,
            $.addtask,
            $.deltask,
            $.addhandler,
            $.export,
            $.unset,
            $.include,
            $.export_functions,
            $.shell_task_declaration,
            $.python_task_declaration,
            $.variable_declaration,
            $.python_function,
            $.comment
        ),

        variable_declaration: $ => seq(
            optional('export'),
            $.identifier,
            choice(
                    '=',
                    '.=',
                    '+=',
                    ':=',
                    '?=',
                    '??=',
                    '=+',
                    '=.',
            ),
            $.string
        ),

        // TODO: Python expansion in shell tasks
        shell_task_declaration: $ => seq(
            field('name', $.identifier),
            '(',
            ')',
            $.block
        ),

        python_task_declaration: $ => seq('python', seq(
            optional(field('name', $.identifier)),
            '(',
            ')',
            $.block
        )),

        block: $ => seq('{', optional($.code_body), '\n}'),

        code_body: $ => repeat1(seq(/[^\n]+/)),

        inherit: $ => seq(
            'inherit',
            repeat1($.class_name),
            '\n'
        ),

        class_name: $ => alias($.variable_name, ''),

        function_name: $ => alias($.variable_name, ''),

        addtask: $ => seq(
            'addtask',
            repeat1(choice('after', 'before', $.function_name)),
            /\n/
        ),

        deltask: $ => seq(
            'deltask',
            repeat1($.function_name),
            /\n/
        ),

        addhandler: $ => seq(
            'addhandler',
            repeat1($.function_name),
            /\n/
        ),

        export: $ => seq(
            'export',
            repeat1($.variable_name),
            /\n/
        ),

        unset: $ => seq(
            'unset',
            repeat1($.variable_name),
            /\n/
        ),

        include: $ => seq(
            choice('include', 'require'),
            /\s+/,
            alias(repeat1($._include_path_fragment), $.path),
            /\n/
        ),

        _include_path_fragment: $ => choice(
            $._expansion,
            token.immediate(/\$[^{]/),
            token.immediate(/[^$\n]+/)),

        export_functions: $ => seq(
            'EXPORT_FUNCTIONS',
            repeat1($.function_name),
            /\n/
        ),

        string: $ => choice(
            seq('"', optional($._string_inner1), token.immediate('"')),
            seq("'", optional($._string_inner2), token.immediate("'")),
        ),

        _string_inner1: $ => repeat1(choice(
            $._expansion,
            alias($.string_text_fragment1, $.string_text_fragment))),

        _string_inner2: $ => repeat1(choice(
            $._expansion,
            alias($.string_text_fragment2, $.string_text_fragment))),

        _expansion: $ => choice($.python_expansion, $.shell_expansion),

        python_expansion: $ => seq(
            token.immediate("${@"),
            $.inline_code,
            "}",
        ),

        inline_code: $ => repeat1($._inline_code_inner),

        // Match Python's balanced braces
        _inline_code_inner: $ => choice(
            seq("{", optional($._inline_code_inner), "}"),
            /[^{}]+/),

        shell_expansion: $ => seq(
            token.immediate("${"),
            $.variable_name,
            "}",
        ),

        string_text_fragment1: $ => token.immediate(/([^"$\n]|\\\n)+/),
        string_text_fragment2: $ => token.immediate(/([^'$\n]|\\\n)+/),

        flag: $ => seq(
            token.immediate("["),
            $.flag_name,
            "]",
        ),

        flag_name: $ => /[^\]]+/,

        override: $ => prec(1, seq(
            token.immediate(':'),
            choice(
                token.immediate('append'),
                token.immediate('prepend'),
                token.immediate('remove'),
                repeat1($._override_fragment))
        )),

        _override_fragment: $ => choice(
            $._expansion,
            token.immediate(/\$[^{]/),
            token.immediate(/[a-zA-Z0-9_{}\-]+/)),

        identifier: $ => seq(
            $.variable_name,
            optional(choice($.flag, repeat1($.override)))
        ),

        variable_name: $ => seq(
            // TODO: support starting with an expansion
            /[a-zA-Z0-9_\-\.]+/,
            repeat($._variable_fragment),
        ),

        _variable_fragment: $ => choice(
            $._expansion,
            token.immediate(/\$[^{]/),
            token.immediate(/[a-zA-Z0-9_\-\.]+/)),

        python_function: $ => seq("def", repeat($._python_code)),

        // Anything that is either an empty line or a line that starts with a
        // space or tab is considered in the same python `def`
        _python_code: $ => token.immediate(/([ \t].+|)\n/),

        comment: $ => seq('#', /.*/)
    }
});
