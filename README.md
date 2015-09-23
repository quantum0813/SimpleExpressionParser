#Simple Expression Parser
This is a very simple expression parser written in C++.

The grammar for this language is as follows:

`expr -> expr + factor | expr - factor | factor`

`factor -> factor * term | factor / term | factor % term | term`

`term -> digit | (expr)`

`digit -> 0|1|2|3|4|5|6|7|8|9`

This program will take input in the form of a string, and create an abstract syntax tree from it. At that point, transformations can be performed on the tree, or it can be valuated.
