#include "Addition.h"


Addition::Addition(Expression *_I, Expression *_D) : ArithmeticExpression(_I,_D)
{

}
int Addition::getValue()
{
    return I->getValue()+D->getValue();
}
