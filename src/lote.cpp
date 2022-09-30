#include "lote.hpp"

Lote::Lote()
{
}

Lote::Lote(ec::Date data, int quantidade, int codigoLote, int codigoProduto) : data(data), codigoLote(codigoLote), codigoProduto(codigoProduto)
{
	setQuantidade(quantidade);
}

void Lote::setQuantidade(int quantidade)
{
	if (quantidade >= 0)
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

void Lote::atualizaQuantidade(int quantidade)
{
	setQuantidade(this->quantidade - quantidade);
}