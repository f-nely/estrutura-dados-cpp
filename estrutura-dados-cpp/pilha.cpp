#include <iostream>
#include "pilha.h"

using namespace std;

	Pilha::Pilha()
	{
		tamanho = 0;
		estrutura = new TipoItem[maxitens];
	}
	
	Pilha::~Pilha()
	{
		delete [] estrutura;
	}
	
	bool Pilha::estaCheia()
	{
		return (tamanho == maxitens);
	}
	
	bool Pilha::estaVazia()
	{
		return (tamanho == 0);
	}
	
	void Pilha::inserir(TipoItem item)
	{
		if (estaCheia()) {
			cout << "A pilha está cheia!\n";
			cout << "Não é possível inserir este elemento!\n";
		} else {
			estrutura[tamanho] = item;
			tamanho++;
		}
	}
	
	TipoItem Pilha::remover()
	{
		if (estaVazia()) {
			cout << "A pilha está vazia!\n";
			cout << "Não tem elemento para ser removido!\n";
			return 0;
		} else {
			tamanho--;
			return estrutura[tamanho];
		}
	}
	
	void Pilha::imprimir()
	{
		cout << "Pilha: [ ";
		for (int i = 0; i < tamanho; i++) {
			cout << estrutura[i] << " ";
		}
		cout << "]\n";
	}
	
	int Pilha::qualTamanho()
	{
		return tamanho;
	}
