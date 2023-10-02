#include <iostream>
#ifndef LIST_H
#define LIST_H
using namespace std;

template <typename T> class List {
	public :
		virtual void insert () = 0; //Inserta el elemento en la posición pos
		virtual void append () = 0; //Inserta el elemento e al final de la lista
		virtual void prepend () = 0; //Inserta el elemento e al principio de la lista
		virtual T remove () = 0; //Elimina y devuelve el elemento situado en la posición pos
		virtual T get () = 0; //Devuelve ele elemento situado en la posición pos
		virtual int search () = 0; //Devuelve la posición en la que se encuentra la primera ocurrencia de e
		virtual bool empty () = 0; //Indica si la lista esta vacia
		virtual int size () = 0; //Devuelve el número de elementos de la lista
};

#endif
