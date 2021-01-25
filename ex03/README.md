## ex03 - Test STDIN redirection

Do you ever ask yourself if it's possible to test a
[CLI](https://en.wikipedia.org/wiki/Command-line_interface) program.

Ever heard of `cr_get_redirect_stdin()`,
[cr_redirect_stdin()](https://epitech-2022-technical-documentation.readthedocs.io/en/latest/criterion.html#c.cr_assert_stdout_eq_str)
and the `FILE` type of the C library?

Here it comes.

For this fourth test, write one tests in
`tests/get_stdin_content.c` for the `get_stdin_content` function
(`src/get_stdin_content.c`).

The test needs to write something in `STDIN`. Than call the function and check
that what you write is what come back in the received buffer from
`get_stdin_content()`.

When writing your test, think logical. Put the instruction in the right order.

Once your test is ready run
```bash
make test_run
```
