#include "lista.h"
#include <iostream>
using namespace std;
lista::lista(int x)
{
    nodo *nuevo = new nodo(x);
    head = nuevo;
    ++sizee;
}
void lista::insertar(int val)
{
    nodo *temp = new nodo();
    nodo *nuevo = new nodo(val);
    temp = head;
    if(temp->val > val)
    {
        nuevo->next = head;
        head = nuevo;
    }
    else{
        int i= 0;
        while((temp->next != NULL) && temp->next->val < val )
        {
            temp = temp->next;
            ++i;
        }
        nuevo->next = temp->next;
        temp->next = nuevo;

    }
    sizee++;
}

void lista::borrar(int key)
{
    nodo *temp = head;
    nodo *temp1 = head->next;
    int cont =0;
    if(head->val == key){
        head = temp->next;
    }else{
        while(temp1){
            if(temp1->val == key){
               nodo *aux = temp1;
               temp->next = temp1->next;
               delete aux;
               cont++;
               sizee--;
            }
            temp = temp->next;
            temp1 = temp1->next;
        }
    }

}


int lista::imprimir()
{
    nodo *temp = head;
    for(int i=0;temp != NULL;i++){
        cout<<temp->val<<",";
        temp = temp->next;
    }
    return 0;
}
