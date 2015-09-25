#Simple Expression Parser
This is a very simple expression parser written in C++.

The grammar for this language is as follows:

`expr -> expr + factor | expr - factor | factor`

`factor -> factor * term | factor / term | factor % term | term`

`term -> digit | (expr)`

`digit -> 0|1|2|3|4|5|6|7|8|9`

This program will take input in the form of a string, and create an abstract syntax tree from it. At that point, transformations can be performed on the tree, or it can be valuated.

This project is split up into three separate executables, all of which will be built from the CMake file.

To build this project just run:

`cmake .` followed by `make`

Three executables will be created: calc, calc2postfix and calc2sexpr.

To use the program just run `./calc`, `./calc2postfix` or `./calc2sexpr` in a terminal. The program will wait for you to input an expression, and then press enter. You can also use the test suite to test multiple expressions at once (see below).

#Test Suite
A simple Python-based test suite has been created to ease the testing of these programs.

To use the test suite:

1. Create a file named `testSuite` in the directory containing the Python files and the executables (a default one is provided).
2. Write expressions that you want to be evaluated (one per line)
3. Execute the Python script `test.py`
4. The script will prompt you to enter which test suite you want to run (or all of them at once).
5. The output will be written to files in the same directory as `test.py` as "testCalcOutput", "testPostfixOutput" and "testSexprOutput"
