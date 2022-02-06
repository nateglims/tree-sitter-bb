module.exports = grammar({
    name: 'BB',
    rules: {
        source_file: $ => repeat($._declaration),

        _declaration: $ => choice(
			$.inherit,
            $.task_declaration,
            $.variable_declaration
            // TODO: Tasks and others.
        ),

        variable_declaration: $ => seq(
            $.identifier,
            '=',
            $.string
        ),

		task_declaration: $ => seq(
			$.task_identifier,
			'(',
			')',
			$.block
        ),

		task_identifier: $ => seq(
			/[a-z:_]+/
		),

		block: $ => seq(
			'{',
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

		_inherit_decl: $=> repeat1($.identifier),

        string: $ => seq( '"', /[^"]+/, '"' ),

        identifier: $ => /[A-Za-z_:]+/
    }
});

