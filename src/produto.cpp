#include "produto.hpp"

Produto::Produto()
{
}

Produto::Produto(std::string nome, int codigo, double preco) : nome(nome), codigo(codigo), preco(preco)
{
}

std::string Produto::getNome()
{
	return nome;
}

void Produto::setNome(std::string nome)
{
	this->nome = nome;
}

int Produto::getCodigo()
{
	return codigo;
}

void Produto::setCodigo(int codigo)
{
	this->codigo = codigo;
}

double Produto::getPreco()
{
	return preco;
}

void Produto::setPreco(double preco)
{
	this->preco = preco;
}

std::map<int, Lote> Produto::getLotes()
{
	return lotes;
}

void Produto::adicionaLote(Lote lote)
{
	lotes.insert(std::pair<int, Lote>(lote.getCodigoLote(), lote));
}

bool Produto::removeLote(int codigo)
{
	if (lotes.find(codigo) != lotes.end())
	{
		lotes.erase(codigo);
		return true;
	}
	return false;
}

Lote Produto::buscarLote(int codigo)
{
	if (lotes.find(codigo) != lotes.end())
	{
		return lotes[codigo];
	}
	return Lote();
}