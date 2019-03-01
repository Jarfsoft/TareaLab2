#ifndef ARITHMETICEXPRESSION_H
#define ARITHMETICEXPRESSION_H

#include "Expression.h"


class ArithmeticExpression : public Expression
{
    public:
        ArithmeticExpression(Expression*, Expression*);
        Expression* I;
        Expression* D;
        int getValue();
    protected:

    private:

};

#endif // ARITHMETICEXPRESSION_H
