#ifndef ADDITION_H
#define ADDITION_H

#include "ArithmeticExpression.h"


class Addition : public ArithmeticExpression
{
    public:
        Addition(Expression*, Expression*);
        int getValue();
    protected:

    private:
};

#endif // ADDITION_H
