#ifndef NUMBER_H
#define NUMBER_H

#include "Expression.h"

class Number : public Expression
{
    public:
        Number(int);
        int getValue();

    protected:

    private:
        int value;
};

#endif // NUMBER_H
