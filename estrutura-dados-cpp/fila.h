typedef int TipoItem;
const int max_itens = 100;

class Fila
{
	private:
		int primeiro, ultimo;
		TipoItem *estrutura;
  
	public:
		Fila();
		~Fila();
		bool estaVazio();
		bool estaCheio();
		void inserir(TipoItem item);
		TipoItem remover();
		void imprimir();
};
