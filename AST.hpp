#ifndef AST_HPP
#define AST_HPP

class Expression {
    public:
        virtual ~Expression() {}
        virtual int evaluate() const = 0;
};

class Number : public Expression {
    public:
        Number(int n) : num(n) {}
        int evaluate() const;
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
};

class SubtractionExpr : public BinaryExpr {
    public:
        SubtractionExpr(Expression * l, Expression * r) : BinaryExpr(l, r) {}
        int evaluate() const;
};

class MultiplicationExpr : public BinaryExpr {
    public:
        MultiplicationExpr(Expression * l, Expression * r) : BinaryExpr(l, r) {}
        int evaluate() const;
};

class DivisionExpr : public BinaryExpr {
    public:
        DivisionExpr(Expression * l, Expression * r) : BinaryExpr(l, r) {}
        int evaluate() const;
};

class ModExpr : public BinaryExpr {
    public:
        ModExpr(Expression * l, Expression * r) : BinaryExpr(l, r) {}
        int evaluate() const;
};

#endif