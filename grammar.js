module.exports = grammar({
	name: 'BB',
	rules: {
		source_file: $ => repeat($._declaration),

		_declaration: $ => choice(
			$.inherit,
            $.python_task_declaration,
			$.task_declaration,
			$.variable_declaration,
            $.comment
			// TODO: Python tasks?
		),

		variable_declaration: $ => seq(
            optional('export'),
			$.identifier,
            optional(
                seq(
                    choice(
                        '=',
                        '.=',
                        '+=',
                        '?=',
                        '??=',
                        '=+', // ??? Not sure this is valid?
                    ),
                    $.string
                )
            )
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
			prec.left(1, $._inherit_decl)
		),

		_inherit_decl: $ => seq(
            repeat1($.identifier),
            "\n"
        ),

		string: $ => seq('"', /[^"]*/, '"'),

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
