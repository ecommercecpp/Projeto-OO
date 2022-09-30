#include "lote.hpp"

Lote::Lote()
{
}

Lote::Lote(ec::Date data, int quantidade, int quantidadeMinima, int codigoLote, int codigoProduto) : data(data), codigoLote(codigoLote), codigoProduto(codigoProduto)
{
	setQuantidadeMinima(quantidadeMinima);
	setQuantidade(quantidade);
}


void Lote::setQuantidadeMinima(int quantidadeMinima)
{
	if (quantidadeMinima >= 0)
	{
		this->quantidadeMinima = quantidadeMinima;
	}
	else
	{
		throw InvalidQuantidadeLoteException();
	}
}

void Lote::setQuantidade(int quantidade)
{
	if (quantidade >= 0 && quantidade >= quantidadeMinima)
	{
		this->quantidade = quantidade;
	}
	else
	{
		throw InvalidQuantidadeLoteException();
	}
}

int Lote::getCodigoLote()
{
	return codigoLote;
}

int Lote::getQuantidade()
{
	return quantidade;
}