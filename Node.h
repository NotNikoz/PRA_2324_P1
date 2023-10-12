#include <ostream>
using namespace std;

template <typename T>
class Node {
	public :
		T data = 0; //El elemento almacenado de tipo genérico T  
		Node <T>* next = 0; //Puntero al siguiente nodo de la secuencia
		Node (T data, Node <T>* next = nullptr) = 0; //Método constructor next será null en caso de que no se propocione
		friend ostream& operator<<(ostream &out, const Node <T> &node) = 0; //Sobrecarga del operador << para imprimir una instancia de Node

};
