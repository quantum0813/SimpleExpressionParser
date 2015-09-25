#include <iostream>
#include <string>
#include "AST.hpp"
#include "Parser.hpp"

using namespace std;

int main() {
    string line;
    getline(cin, line);
    Parser * p = new Parser(line);
    Expression * e = p->parse();
    e->printSExpr();
    cout << endl;

    return 0;
}