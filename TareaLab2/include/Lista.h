#ifndef LISTA_H
#define LISTA_H

#include <fstream>
#include <iostream>
#include <string>
#include <stdlib.h>

#include "Nodo.h"

using namespace std;

template <class T>

class Lista
{
    public:
        Lista();
        ~Lista();

        void add_end(T);
        void del_by_position(int);
        void print();

    private:
        Nodo<T> *m_head;
        int m_num_nodes;
};

#endif
