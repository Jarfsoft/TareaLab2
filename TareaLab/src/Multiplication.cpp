#include "Multiplication.h"

Multiplication::Multiplication(Expression* _I, Expression* _D) : ArithmeticExpression(_I, _D)
{
    //ctor
}
int Multiplication::getValue()
{
    return I->getValue()*D->getValue();
}
