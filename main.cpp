#include <iostream>
#include "AST.hpp"
#include "Parser.hpp"

using namespace std;

int main() {
    Parser * p = new Parser("(4 + 3) * 7");
    Expression * e = p->parse();
    cout << e->evaluate();
}