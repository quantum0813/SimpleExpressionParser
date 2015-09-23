#include "Parser.hpp"
#include <iostream>
#include <sstream>
#include <vector>
#include <cstring>

using namespace std;

Parser::Parser(std::string str) : mExpressionStr(str) {
    int len = strlen(str.c_str());
    for (int i = 0; i < len; i++) {
        if (!isspace(str.c_str()[i]))
            mExpressionTokens.push_back(str.c_str()[i]);
    }
}

Expression * Parser::parse() {
    next();
    //cout << lookAhead << endl;
    return expression();
}

Expression * Parser::expression() {
    Expression * e = factor();

    while (lookAhead == '+' || lookAhead == '-') {
        Expression * e2 = nullptr;
        switch (lookAhead) {
            case '+':
                next();
                e2 = factor();
                e = new AddExpr(e, e2);
                break;
            case '-':
                next();
                e2 = factor();
                e = new SubtractionExpr(e, e2);
                break;
            default:
                // Error
                break;
        }
    }
    return e;
}

Expression * Parser::factor() {
    Expression * e = term();

    while (lookAhead == '*' || lookAhead == '/' || lookAhead == '%') {
        Expression * e2 = nullptr;
        switch (lookAhead) {
            case '*':
                next();
                e2 = term();
                e = new MultiplicationExpr(e, e2);
                break;
            case '/':
                next();
                e2 = term();
                e = new DivisionExpr(e, e2);
                break;
            case '%':
                next();
                e2 = term();
                e = new ModExpr(e, e2);
                break;
        }
    }
    return e;
}

Expression * Parser::term() {
    if (isDigit()) {
        int num = lookAhead - '0';
        next();
        return new Number(num);
    } else if (lookAhead == '(') {
        next();
        Expression * e = expression();
        if (lookAhead != ')') {
            // Syntax error!
            // throw new SyntaxError("Expected )");
        }
        next();
        return e;
    } else {
        // Unexpected token
        // Throw exception
    }
}

void Parser::next() {
    lookAhead = mExpressionTokens.front();
    mExpressionTokens.pop_front();
}

bool Parser::isDigit() {
    if (lookAhead >= '0' && lookAhead <= '9')
        return true;
    return false;
}