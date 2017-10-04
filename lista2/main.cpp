#include <iostream>
using namespace std;

template<typename T>
class nodo{
public:
	T dato;
	nodo* next;

	nodo(T dato_){
		dato=dato_;
		next=NULL;
	}
};

template<typename T>
class Lista{
public:
	nodo<T> *h;
	Lista(T dato_)
	{
		h = new nodo<T> (dato_);
	}

	bool buscar(T dato_, nodo<T>**& nodo_devuelto){
		nodo<T> **temp=&h;

		while((*temp)!=NULL && (*temp)->dato<dato_){
			temp=&((*temp)->next);
		}

		nodo_devuelto=temp;
		if((*temp)==NULL || (*temp)->dato!=dato_){
			return false;
		}
		return true;
	}

	bool insertar(T dato_){
		nodo<T>** next_insert;
		if (!buscar(dato_,next_insert)){
			nodo<T>* aux=new nodo<T>(dato_);
			aux->next=*next_insert;
			*next_insert=aux;
			return 1;
		}
		return 0;
	}

	bool borrar(T dato_){
		nodo<T>** nodo_borrar;
		if (buscar(dato_,nodo_borrar)){
			nodo<T>* aux= (*nodo_borrar)->next;
			delete (*nodo_borrar);
			*nodo_borrar=aux;
			return 1;
		}
		return 0;
	}
	void imprimir()
	{
	    nodo<int> *temp=h;
	    while(temp != NULL)
        {
            cout<<temp->dato<<" ";
            temp = temp->next;
        }
	}
};

int main(int argc, char *argv[]) {
	Lista<int> lista(6);

    lista.insertar(1);
    lista.insertar(8);
    lista.imprimir();




//
//	while(temp->next!=temp2){
//		temp=lista.h;
//		lista.h=lista.h->next;
//		delete temp;
//	}cout<<endl;


	return 0;
}

