#ifndef DIVISION_H
#define DIVISION_H

#include "ArithmeticExpression.h"


class Division : public ArithmeticExpression
{
    public:
        Division(Expression*, Expression*);
        int getValue();

    protected:

    private:
};

#endif // DIVISION_H
