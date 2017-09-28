#include "nodo.h"

nodo::nodo()
{
    val = NULL;
    next = NULL;
}

nodo::nodo(int x)
{
    val = x;
    next = NULL;
}
nodo::~nodo()
{
}
