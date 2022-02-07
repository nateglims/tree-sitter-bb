module.exports = grammar({
	name: 'BB',
	rules: {
		source_file: $ => repeat($._declaration),

		_declaration: $ => choice(
			$.inherit,
			$.task_declaration,
			$.variable_declaration
			// TODO: Python tasks?
		),

		variable_declaration: $ => seq(
			$.identifier,
			'=',
			$.string
		),

		task_declaration: $ => seq(
			field('name', $.identifier),
			'(',
			')',
			$.block
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

		_inherit_decl: $ => repeat1($.identifier),

		string: $ => seq('"', /[^"]+/, '"'),

		override: $ => prec(1, seq(
			':',
			/[a-z_]+/
		)),

		identifier: $ => seq(
			/[A-Za-z_]+/,
			optional($.override)
		)
	}
});
