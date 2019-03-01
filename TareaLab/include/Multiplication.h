#ifndef MULTIPLICATION_H
#define MULTIPLICATION_H

#include "ArithmeticExpression.h"


class Multiplication : public ArithmeticExpression
{
    public:
        Multiplication(Expression*, Expression*);
        int getValue();

    protected:

    private:
};

#endif // MULTIPLICATION_H
