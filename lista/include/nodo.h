#ifndef NODO_H
#define NODO_H

#include <iostream>

class nodo
{
    public:
        nodo();
        nodo(int x);
        int val;
        nodo *next;
        ~nodo();

};


#endif // NODO_H
