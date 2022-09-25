#ifndef _PRODUTO_HPP_
#define _PRODUTO_HPP_

#include <string>
#include <map>

class Lote{
};

class Produto
{
	private:
		std::string nome;
		int codigo;
		double preco;
		std::map<int, Lote> lotes;
	public:
		Produto();
		Produto(std::string nome, int codigo, double preco);
		std::string getNome();
		void setNome(std::string nome);
		int getCodigo();
		void setCodigo(int codigo);
		double getPreco();
		void setPreco(double preco);
		std::map<int, Lote> getLotes();
		void adicionaLote(Lote lote);
		bool removeLote(int codigo);
		Lote buscarLote(int codigo);
};

#endif