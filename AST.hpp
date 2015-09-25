/**
 * Copyright 2015 Eric Vestfals
 * esv5@zips.uakron.edu
 *
 * AST.hpp
 *
 * This class lays out the classes that make up the grammar for the calculator
 * language. Every class inherits from the base class "Expression". Number
 * inherits Expression directly while the rest of the class inherit from
 * "BinaryExpr" which in turn inherits from Expression.
 */

#ifndef AST_HPP
#define AST_HPP

#include <iostream>
#include <deque>

/**
 * Each class shall inherit the functions evaluate(), printPostfix() and printSExpr()
 */
class Expression {
    public:
        virtual ~Expression() {}
        virtual int evaluate() const = 0;
        virtual void printPostfix() const = 0;
        virtual void printSExpr() const = 0;
};

class Number : public Expression {
    public:
        Number(int n) : num(n) {}
        int evaluate() const;
        void printPostfix() const;
        void printSExpr() const;
    private:
        const int num;
};

class BinaryExpr : public Expression {
    public:
        BinaryExpr(Expression * l, Expression * r) : left(l), right(r) {}
        ~BinaryExpr();
    protected:
        Expression * const left;
        Expression * const right;
};

class AddExpr : public BinaryExpr {
    public:
        AddExpr(Expression * l, Expression * r) : BinaryExpr(l, r) {}
        int evaluate() const;
        void printPostfix() const;
        void printSExpr() const;
};

class SubtractionExpr : public BinaryExpr {
    public:
        SubtractionExpr(Expression * l, Expression * r) : BinaryExpr(l, r) {}
        int evaluate() const;
        void printPostfix() const;
        void printSExpr() const;
};

class MultiplicationExpr : public BinaryExpr {
    public:
        MultiplicationExpr(Expression * l, Expression * r) : BinaryExpr(l, r) {}
        int evaluate() const;
        void printPostfix() const;
        void printSExpr() const;
};

class DivisionExpr : public BinaryExpr {
    public:
        DivisionExpr(Expression * l, Expression * r) : BinaryExpr(l, r) {}
        int evaluate() const;
        void printPostfix() const;
        void printSExpr() const;

};

class ModExpr : public BinaryExpr {
    public:
        ModExpr(Expression * l, Expression * r) : BinaryExpr(l, r) {}
        int evaluate() const;
        void printPostfix() const;
        void printSExpr() const;
};

#endif