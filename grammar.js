module.exports = grammar({
  name: 'malleable_c2',

  extras: $ => [
    /\s|\\\r?\n/,
    $.comment,
  ],

  rules: {
    source_file: $ => repeat(choice(
      $.set,
      $.block_name,
      $.option,
      $.string,
      $.number,
      $.semicolon,
      $.block_start,
      $.block_end,
    )),

    set: _ => 'set',

    block_name: _ => choice(
      'client',
      'dns-beacon',
      'execute',
      'http-get',
      'http-post',
      'http-stager',
      'https-certificate',
      'id',
      'output',
      'post-ex',
      'process-inject',
      'server',
      'stage ',
      'transform-x64',
      'transform-x86',
      'metadata',
    ),

    option: _ => /[a-zA-Z][\w-]*/,

    semicolon: _ => ';',

    block_start: _ => '{',
    block_end: _ => '}',

    string: $ => seq(
      '"',
      repeat(choice(
        token.immediate(prec(1, /[^\\"\n]+/)),
        $.escape_sequence
      )),
      '"',
    ),

    escape_sequence: _ => token(prec(1, seq(
      '\\',
      choice(
        /[nrt\\"]/,
        /x[0-9a-fA-F]{2,}/,
        /u[0-9a-fA-F]{4}/,
      )
    ))),

    number: _ => /[\d]+/,

    comment: _ => token(seq('#', /.*/)),
  },
});
