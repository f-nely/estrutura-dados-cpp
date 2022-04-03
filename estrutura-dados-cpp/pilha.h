#include <iostream>

using namespace std;

typedef int TipoItem;
const int maxitens = 100;

class Pilha
{ 
	private:
		
		int tamanho;
		TipoItem* estrutura;
	
	public:
		
		Pilha(); // construtora
		~Pilha(); // destrutora
		bool estaCheia();
		bool estaVazia();
		void inserir(TipoItem item); // push
		TipoItem remover(); // pop
		void imprimir();
		int qualTamanho(); // lenght
};
