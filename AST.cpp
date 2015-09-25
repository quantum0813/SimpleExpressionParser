/**
 * Copyright 2015 Eric Vestfals
 * esv5@zips.uakron.edu
 *
 * AST.cpp
 *
 * For each class that is part of the AST, we define the three functions
 * evaluate(), printPostfix() and printSExpr().
 *
 * For evaluate():
 *
 * For each class that represents a binary node (Addition, Subtraction, ...),
 * the evaluate function calls evaluate on the left node which will keep calling
 * evaluate() recursively until eventually reaching a Number node which will return
 * an int. The same is done for the right node.
 *
 * printPostfix() performs a post-order traversal of the generated AST to print out
 * the postfix version of the expression.
 *
 * printSExpr() performs a pre-order traversal of the generated AST to print out
 * the S-expression.
 */

#include "AST.hpp"
#include <iostream>

BinaryExpr::~BinaryExpr() {
    delete left;
    delete right;
}

int Number::evaluate() const {
    return num;
}

void Number::printPostfix() const {
    std::cout << num << " ";
}

void Number::printSExpr() const {
    std::cout << num;
}

int AddExpr::evaluate() const {
    return left->evaluate() + right->evaluate();
}

void AddExpr::printPostfix() const {
    left->printPostfix();
    right->printPostfix();
    std::cout << "+ ";
}

void AddExpr::printSExpr() const {
    std::cout << "(";
    std::cout << "+ ";
    left->printSExpr();
    right->printSExpr();
    std::cout << ")";
}

int SubtractionExpr::evaluate() const {
    return left->evaluate() - right->evaluate();
}

void SubtractionExpr::printPostfix() const {
    left->printPostfix();
    right->printPostfix();
    std::cout << "- ";
}

void SubtractionExpr::printSExpr() const {
    std::cout << "(";
    std::cout << "- ";
    left->printSExpr();
    right->printSExpr();
    std::cout << ")";
}

int MultiplicationExpr::evaluate() const {
    return left->evaluate() * right->evaluate();
}

void MultiplicationExpr::printPostfix() const {
    left->printPostfix();
    right->printPostfix();
    std::cout << "* ";
}

void MultiplicationExpr::printSExpr() const {
    std::cout << "(";
    std::cout << "* ";
    left->printSExpr();
    right->printSExpr();
    std::cout << ")";
}

int DivisionExpr::evaluate() const {
    return left->evaluate() / right->evaluate();
}

void DivisionExpr::printPostfix() const {
    left->printPostfix();
    right->printPostfix();
    std::cout << "/ ";
}

void DivisionExpr::printSExpr() const {
    std::cout << "(";
    std::cout << "/ ";
    left->printSExpr();
    right->printSExpr();
    std::cout << ")";
}

int ModExpr::evaluate() const {
    return left->evaluate() % right->evaluate();
}

void ModExpr::printPostfix() const {
    left->printPostfix();
    right->printPostfix();
    std::cout << "% ";
}

void ModExpr::printSExpr() const {
    std::cout << "(";
    std::cout << "% ";
    left->printSExpr();
    right->printSExpr();
    std::cout << ")";
}