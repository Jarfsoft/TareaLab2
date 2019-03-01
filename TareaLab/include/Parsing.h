#ifndef PARSING_H
#define PARSING_H
#include <sstream>  // for string streams
#include <string>
#include<iostream>
#include<stdlib.h>
 // for string
#include "Number.h"
#include "Addition.h"
#include "Substraction.h"
#include "Multiplication.h"
#include "Division.h"
#include "Expression.h"

using namespace std;
class Parsing
{
    public:
        Parsing();
        //BOOL
        bool isNumber(string);
        bool isAddition(string);
        bool isSubtraction(string);
        bool isMultiplication(string);
        bool isDivision(string);
        //Parsing
        Expression* Parsing_Function(string);
        string splitL(string, char);
        string splitR(string, char);
    protected:

    private:
};

#endif // PARSING_H
