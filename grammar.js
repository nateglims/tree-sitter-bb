module.exports = grammar({
    name: 'BB',
    rules: {
        source_file: $ => repeat($._declaration),

        _declaration: $ => choice(
            $.inherit,
            $.require,
            $.addtask,
            $.export,
            $.include,
            $.python_task_declaration,
            $.task_declaration,
            $.variable_declaration,
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

        task_declaration: $ => seq(
            field('name', $.identifier),
            '(',
            ')',
            $.block
        ),

        python_task_declaration: $ => seq(
            'python',
            $.task_declaration
        ),

        block: $ => seq(
            '{',
            // TODO: Highlight shell and python in this block.
            repeat($.statement),
            '}'
        ),

        statement: $ => seq(
            /[^\n]+/
        ),

        inherit: $ => seq(
            'inherit',
            repeat1(/[^ \n]+/),
            '\n'
        ),

        require: $ => seq(
            'require',
            $._require_path,
            '\n'
        ),

        _require_path: $ => seq(
            repeat1(/[^\n]*/),
        ),

        addtask: $ => seq(
            'addtask',
            repeat1($.identifier),
            /\n/
        ),

        export: $ => seq(
            'export',
            repeat1($.identifier),
            /\n/
        ),

        include: $ => seq(
            'include',
            /[^ \n]+/,
            /\n/
        ),

        // TODO: Handle nested variable expansions.
        string: $ => choice(
            seq(
                '"', 
                repeat(choice($.string_expansion, $.string_escape, /[^"]/)),
                '"'
            ),
            $.string2,
        ),

        string2: $ => seq(
            "'",
            repeat(/[^']/),
            "'",
        ),

        string_expansion: $ => seq(
            "${",
            /[^}]*/,
            "}",
        ),

        string_escape: $ => seq(
            '\\\\',
            /"/,
        ),

        override: $ => prec(1, seq(
            ':',
            /[a-zA-Z0-9_${}\-]+/
        )),

        identifier: $ => seq(
            // TODO: Parse out array/map data separately.
            /[@A-Za-z0-9_{}$\-\[\]\.]+/,
            repeat($.override)
        ),

        comment: $ => seq('#', /.*/)
    }
});
