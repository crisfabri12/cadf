#include <iostream>
#include <lista.h>
using namespace std;

int main()
{
    lista l(3);
    l.insertar(1);
    l.insertar(6);
    l.insertar(5);
    l.insertar(4);
    l.insertar(4);
    l.insertar(2);
    l.insertar(19);
    l.imprimir();
    return 0;
}
