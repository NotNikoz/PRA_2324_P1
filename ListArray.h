#include <ostream>
#include "List.h"
#include <iostream>
using namespace std;

//Implementará la estructura de datos lista mediante una representación de secuencias de memoria contigua con arrays
template <typename T> class ListArray : public List <T> {
	private :
		T* arr; //Puntero al inicio del array que almacenará los elementos de la lista.
		int max; //Tamaño actual del array.
		int n; //Número de elementos que contiene la lista
		static const int MINSIZE; //Tamaño mínimo del array. Deberá inicializarse a 2.
		 void resize (int new_size); //Se encarga de redimensionar el array al tamaño especificado.

	public :
		//Metodos de List <T>
		void insert () override;
		void append () override;
		void prepend () override;
		T remove () override;
		T get () override;
		int search () override;
		bool empty () override;
		int size () override;
		//Métodos de ListArray
		ListArray (); //Método constructor
		~ListArray (); //Método destructor
		T operator [] (int pos); //Sobrecarga del operador []. Devuelve el elemento situado en la posicion pos.
		friend std::ostream& operator<<(std::ostream &out, const ListArray<T> &list); //Sobrecarga del operador << para 
										      //imprimir una instancia de ListArray<T>

};
		





