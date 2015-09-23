#ifndef PARSER_HPP
#define PARSER_HPP

#include "AST.hpp"
#include <istream>
#include <sstream>
#include <iostream>
#include <deque>

class Parser {
    public:
        Parser(std::string str);
        Expression * parse();

    private:
        char lookAhead;
        std::string mExpressionStr;
        std::deque<char> mExpressionTokens;

        Expression * expression();
        Expression * term();
        Expression * factor();
        void next();
        bool isDigit();
};

#endif