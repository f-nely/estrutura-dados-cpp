#include <iostream>
#include "fila.h"

using namespace std;

    Fila::Fila()
    {
		primeiro = 0;
		ultimo = 0;
		estrutura = new TipoItem[max_itens];
    }

    Fila::~Fila()
    {
		delete [] estrutura;
    }

    bool Fila::estaVazio()
    {
		return (primeiro == ultimo);
    }

    bool Fila::estaCheio()
    {
		return (ultimo - primeiro == max_itens);
    }

    void Fila::inserir(TipoItem item)
    {
		if (estaCheio()) {
			cout << "A fila está cheia\n";
			cout << "Esse elemento não pode ser inserido.\n";
		} else {
			estrutura[ultimo % max_itens] = item;
			ultimo++;
		}
    } 

    TipoItem Fila::remover()
    {
		if (estaVazio()) {
			cout << "A fila está vazia!\n";
			cout << "Nenhum elemento foi removido!\n";
			return 0;
		} else {
			primeiro++;
			return estrutura[(primeiro - 1) % max_itens];
		}
    }

    void Fila::imprimir()
    {
		cout << "Fila: [ ";
		for (int i = primeiro; i < ultimo; i++) {
			cout << estrutura[i % max_itens] << " ";
		}
		cout << "]\n";
    }
