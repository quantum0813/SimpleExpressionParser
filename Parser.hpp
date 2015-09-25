/**
 * Copyright 2015 Eric Vestfals
 * esv5@zips.uakron.edu
 *
 * Parser.hpp
 *
 * This class contains the functionality to take an expression string and produce
 * its corresponding AST. It is constructed with an expression string. The AST is
 * then produced by calling parse().
 */

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