#include "AST.hpp"
#include <iostream>

BinaryExpr::~BinaryExpr() {
    delete left;
    delete right;
}

int Number::evaluate() const {
    std::cout << "Number node: " << num << std::endl;
    return num;
}

int AddExpr::evaluate() const {
    std::cout << "Add node" << std::endl;
    return left->evaluate() + right->evaluate();
}

int SubtractionExpr::evaluate() const {
    std::cout << "Subumber node" << std::endl;
    return left->evaluate() - right->evaluate();
}

int MultiplicationExpr::evaluate() const {
    std::cout << "Mult node" << std::endl;
    return left->evaluate() * right->evaluate();
}

int DivisionExpr::evaluate() const {
    std::cout << "Div node" << std::endl;
    return left->evaluate() / right->evaluate();
}

int ModExpr::evaluate() const {
    std::cout << "Mod node" << std::endl;
    return left->evaluate() % right->evaluate();
}