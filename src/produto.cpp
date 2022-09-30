#include "produto.hpp"

Produto::Produto()
{
}

Produto::Produto(std::string nome, unsigned int codigo, unsigned int quantidadeMinima, double preco, Lote lote, Categoria categoria)
: nome(nome), codigo(codigo), quantidadeMinima(quantidadeMinima), preco(preco), categoria(categoria)
{
	lotes.insert(std::pair<int, Lote>(lote.getCodigoLote(), lote));
	atualizarEstoque();
}
Produto::Produto(std::string nome, unsigned int codigo, unsigned int quantidadeMinima, double preco, std::map<int, Lote> lotes, Categoria categoria)
: nome(nome), codigo(codigo), quantidadeMinima(quantidadeMinima), preco(preco), lotes(lotes), categoria(categoria)
{
	atualizarEstoque();
}

Produto::Produto(std::string nome, unsigned int codigo, unsigned int quantidadeMinima ,double preco, Lote lote)
: nome(nome), codigo(codigo), quantidadeMinima(quantidadeMinima), preco(preco)
{
	lotes.insert(std::pair<int, Lote>(lote.getCodigoLote(), lote));
	atualizarEstoque();
}

void Produto::atualizarEstoque()
{
	estoque = 0;
	for (std::map<int, Lote>::iterator it = lotes.begin(); it != lotes.end(); ++it)
	{
		estoque += it->second.getQuantidade();
	}
}

void Produto::atualizaCategoria(Categoria categoria)
{
	this->categoria = categoria;
}

bool Produto::disponivel(int quantidade)
{
	// converte quantidade para unsigned int
	unsigned int quantidadeConvertida = static_cast<unsigned int>(quantidade);
	return estoque >= quantidadeConvertida;
}

std::map<int, Lote> Produto::getLotes()
{
	return lotes;
}

void Produto::validaEstoqueMinimo()
{
	if (estoque < quantidadeMinima)
	{
		emiteOrdemProducao();
	}
}

void Produto::emiteOrdemProducao()
{
	std::cout << "Ordem de produção" << std::endl;
}