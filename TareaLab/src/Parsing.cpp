#include "Parsing.h"

Parsing::Parsing()
{

}
bool Parsing::isNumber(string expression)
{
    for(int i=0;i<expression.length();i++)
        if(expression[i]=='+' || expression[i]=='-' || expression[i]=='*' || expression[i]=='/')
            return false;
    return true;
}
bool Parsing::isAddition(string expression)
{
    for(int i=0;i<expression.length();i++)
        if(expression[i]=='+')
            return true;
    return false;
}
bool Parsing::isSubtraction(string expression)
{
    for(int i=0;i<expression.length();i++)
        if(expression[i]=='-')
            return true;
    return false;
}
bool Parsing::isMultiplication(string expression)
{
    for(int i=0;i<expression.length();i++)
        if(expression[i]=='*')
            return true;
    return false;
}
bool Parsing::isDivision(string expression)
{
    for(int i=0;i<expression.length();i++)
        if(expression[i]=='/')
            return true;
    return false;
}

Expression* Parsing::Parsing_Function(string expression)
{
    if(isNumber(expression))
    {
        int i=atoi (expression.c_str());
        return new Number(i);
    }else if(isAddition(expression))
    {
        string izquierdo=splitL(expression, '+');
        string derecho=splitR(expression, '+');

        return new Addition(Parsing_Function(izquierdo), Parsing_Function(derecho));
    }else if(isSubtraction(expression))
    {
        string izquierdo=splitL(expression, '-');
        string derecho=splitR(expression, '-');

        return new Substraction(Parsing_Function(izquierdo), Parsing_Function(derecho));
    }else if(isMultiplication(expression))
    {
        string izquierdo=splitL(expression, '*');
        string derecho=splitR(expression, '*');

        return new Multiplication(Parsing_Function(izquierdo), Parsing_Function(derecho));
    }else if(isDivision(expression))
    {
        string izquierdo=splitL(expression, '/');
        string derecho=splitR(expression, '/');

        return new Division(Parsing_Function(izquierdo), Parsing_Function(derecho));
    }
}
string Parsing::splitL(string expression, char separator)
{
    string result;
    int pos;
    for(int i=0;i<expression.length();i++)
    {
        if(expression[i]==separator)
        {
            pos=i;
            break;
        }
    }
    result=expression.substr(0,pos);
    return result;
}
string Parsing::splitR(string expression, char separator)
{
    string result;
    int pos;
    for(int i=0;i<expression.length();i++)
    {
        if(expression[i]==separator)
        {
            pos=i;
            break;
        }
    }
    result=expression.substr(pos,expression.length());
    return result;
}
