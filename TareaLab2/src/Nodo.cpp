#include "Nodo.h"


template<typename T>

Nodo<T>::Nodo()
{
    data = NULL;
    next = NULL;
}


template<typename T>
Nodo<T>::Nodo(T data_)
{
    data = data_;
    next = NULL;
}


template<typename T>
void Nodo<T>::print()
{
    cout << data << "-> ";
}

template<typename T>
Nodo<T>::~Nodo() {}
