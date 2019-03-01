#ifndef NODO_H
#define NODO_H

#include <iostream>

using namespace std;

template <class T>

class Nodo
{
    public:
        Nodo();
        Nodo(T);
        ~Nodo();

        Nodo *next;
        T data;

        void print();
};

#endif // NODE_H
