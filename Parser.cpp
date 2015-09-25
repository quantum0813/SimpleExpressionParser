/**
 * Copyright 2015 Eric Vestfals
 * esv5@zips.uakron.edu
 *
 * Parser.cpp
 *
 * Upon construction of the parser, the string is tokenized and each character
 * is put into a deque.
 *
 * When parse() is called the AST is constructed recursively. Precedence is set
 * by the 4 different levels of the grammar, which correspond to functions in this
 * class.
 */

#include "Parser.hpp"
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

/**
 * Pop the first token off of the deque and set it to lookAhead,
 * and start the parsing by calling expression().
 */
Expression * Parser::parse() {
    next();
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
            // throw SyntaxError
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