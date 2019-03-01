#include "Substraction.h"

Substraction::Substraction(Expression* _I, Expression* _D) : ArithmeticExpression(_I,_D)
{
    //ctor
}
int Substraction::getValue()
{
    return I->getValue()-D->getValue();
}
