#include "Lista.h"

using namespace std;


template<typename T>
Lista<T>::Lista()
{
    m_num_nodes = 0;
    m_head = NULL;
}



template<typename T>
void Lista<T>::add_end(T data_)
{
    Nodo<T> *new_node = new Nodo<T> (data_);
    Nodo<T> *temp = m_head;

    if (!m_head) {
        m_head = new_node;
    } else {
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
    m_num_nodes++;
}



template<typename T>
void Lista<T>::del_by_position(int pos)
{
    Nodo<T> *temp = m_head;
    Nodo<T> *temp1 = temp->next;

    if (pos < 1 || pos > m_num_nodes) {
        cout << "Fuera de rango " << endl;
    } else if (pos == 1) {
        m_head = temp->next;
    } else {
        for (int i = 2; i <= pos; i++) {
            if (i == pos) {
                Nodo<T> *aux_node = temp1;
                temp->next = temp1->next;
                delete aux_node;
                m_num_nodes--;
            }
            temp = temp->next;
            temp1 = temp1->next;
        }
    }
}


template<typename T>
void Lista<T>::print()
{
    Nodo<T> *temp = m_head;
    if (!m_head) {
        cout << "La Lista está vacía " << endl;
    } else {
        while (temp) {
            temp->print();
            if (!temp->next) cout << "NULL";
                temp = temp->next;
        }
  }
  cout << endl << endl;
}

template<typename T>
Lista<T>::~Lista() {}
