#include <iostream>

#include "Parsing.h"
#include <string>


using namespace std;

int main()
{

    Parsing go;
    Expression *x=go.Parsing_Function("1");

    cout<<x;

    /*Number x(1);
    Number y(2);
    Addition a(&x,&y);



    cout<<a.getValue()<<endl;

    Substraction s(&y,&x);

    cout<<s.getValue()<<endl;

    Multiplication m(&y,&x);

    cout<<m.getValue()<<endl;

    Division d(&y,&x);

    cout<<d.getValue()<<endl;*/

    return 0;
}
