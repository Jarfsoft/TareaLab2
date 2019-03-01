#include "Division.h"

Division::Division(Expression* _I, Expression* _D): ArithmeticExpression(_I,_D)
{
    //ctor
}
int Division::getValue()
{
    return I->getValue()/D->getValue();
}
