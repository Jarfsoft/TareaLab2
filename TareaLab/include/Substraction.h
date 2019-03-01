#ifndef SUBSTRACTION_H
#define SUBSTRACTION_H

#include "ArithmeticExpression.h"

class Substraction : public ArithmeticExpression
{
    public:
        Substraction(Expression*, Expression*);
        int getValue();

    protected:

    private:
};

#endif // SUBSTRACTION_H
