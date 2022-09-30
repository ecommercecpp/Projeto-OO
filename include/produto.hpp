#ifndef _PRODUTO_HPP_
#define _PRODUTO_HPP_

#include <string>
#include <map>

#include "lote.hpp"

class Categoria{
};

class Produto
{
	private:
		std::string nome;
		int codigo;
		double preco;
		std::map<int, Lote> lotes;
		Categoria categoria;
		unsigned int estoque;
		void atualizarEstoque();
	public:
		Produto();
		Produto(std::string nome, int codigo, double preco, Lote lote, Categoria categoria);
		Produto(std::string nome, int codigo, double preco, std::map<int, Lote> lotes, Categoria categoria);
		Produto(std::string nome, int codigo, double preco, Lote lote);
};

#endif