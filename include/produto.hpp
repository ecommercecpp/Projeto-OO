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
		unsigned int codigo;
		unsigned int quantidadeMinima;
		double preco;
		std::map<int, Lote, std::less<int>> lotes;
		Categoria categoria;
		unsigned int estoque;
		void atualizarEstoque();
	public:
		Produto();
		Produto(std::string nome, unsigned int codigo, unsigned int quantidadeMinima, double preco, Lote lote, Categoria categoria);
		Produto(std::string nome, unsigned int codigo, unsigned int quantidadeMinima, double preco, std::map<int, Lote> lotes, Categoria categoria);
		Produto(std::string nome, unsigned int codigo, unsigned int quantidadeMinima ,double preco, Lote lote);
		void atualizaCategoria(Categoria categoria);
		bool disponivel(int quantidade);
		std::map<int, Lote> getLotes();
};

#endif