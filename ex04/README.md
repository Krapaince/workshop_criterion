## ex04 - Tool for coverage

Tests are good. But how about to get some nice feedback from the tested pieces.

Here comes coverage.

If you haven't install it yet install
[gcvor](https://gcovr.com/en/stable/installation.html)

Bring back all your test files into the `tests` folder.
```bash
# You could use this in the ex04 directory
cd tests && cp ../../ex00/tests/strlen.c ../../ex01/tests/strcpy.c ../../ex02/tests/strdup.c ../../ex03/tests/get_stdin_content.c . 
```

Now that everyone is there, you need to find a way to generate some coverage.
First you may look at the man of `gcovr`
```bash
gcovr -h | less
```

In order to begin with `gcovr`, try to add a basic `gcovr` command to the
Makefile in the `tests` directory (You may find where, one way or another).

Try `gcovr` step by step:

- First try to generate a basic report (like on your https://my.epitech.eu/):
```
------------------------------------------------------------------------------
                           GCC Code Coverage Report
Directory: ../
------------------------------------------------------------------------------
File                                       Lines    Exec  Cover   Missing
------------------------------------------------------------------------------
src/get_stdin_content.c                        6       0     0%   8,10-11,13-14,16
src/strcpy.c                                   7       0     0%   3,5,7,9-10,12-13
src/strdup.c                                   6       0     0%   5,7-8,10,12,14
src/strlen.c                                   5       0     0%   3,5,7,9,11
------------------------------------------------------------------------------
TOTAL                                         24       0     0%
------------------------------------------------------------------------------
```

- Then dive back in the manual of `gcovr` and try to generate an HTML report
(summary and details):

Take a look at the commented lines in the Makefile in order to generate the
coverage in the `coverage_report`.

It may look like this at the end:
![](https://github.com/Krapaince/workshop_criterion/blob/main/ex04/ressource/coverage_report.png)

If your job is well done, you can even click on the name of the file to access
to the file's coverage:
![](https://github.com/Krapaince/workshop_criterion/blob/main/ex04/ressource/coverage_report_strlen.png)

Here is the folder structure of the final repository
```
$ tree
.
├── coverage_report
│   ├── binary.html
│   ├── binary.src_get_stdin_content.c.html
│   ├── binary.src_strcpy.c.html
│   ├── binary.src_strdup.c.html
│   └── binary.src_strlen.c.html
├── file
├── include
│   └── my.h
├── Makefile
├── mk
│   └── source.mk
├── README.md
├── src
│   ├── get_stdin_content.c
│   ├── get_stdin_content.gcda
│   ├── get_stdin_content.gcno
│   ├── get_stdin_content.o
│   ├── main.c
│   ├── strcpy.c
│   ├── strcpy.gcda
│   ├── strcpy.gcno
│   ├── strcpy.o
│   ├── strdup.c
│   ├── strdup.gcda
│   ├── strdup.gcno
│   ├── strdup.o
│   ├── strlen.c
│   ├── strlen.gcda
│   ├── strlen.gcno
│   └── strlen.o
└── tests
    ├── get_stdin_content.c
    ├── get_stdin_content.gcno
    ├── get_stdin_content.o
    ├── Makefile
    ├── strcpy.c
    ├── strcpy.gcno
    ├── strcpy.o
    ├── strdup.c
    ├── strdup.gcno
    ├── strdup.o
    ├── strlen.c
    ├── strlen.gcno
    ├── strlen.o
    └── unit_tests
```

Once your gcovr command is ready
```bash
make gcvor
```
