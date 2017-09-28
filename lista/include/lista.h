#ifndef LISTA_H
#define LISTA_H

#include <iostream>
#include "nodo.h"


class lista
{
    public:
        lista(int x);
        void insertar(int val);
        void borrar(int key);
        int imprimir();
    private:
        nodo *head;
        int sizee;

};
#endif // LISTA_H
