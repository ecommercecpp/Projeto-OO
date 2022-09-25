#include "lote.hpp"

Lote::Lote()
{
}

Lote::Lote(Data data, int quantidade, int codigoLote, int codigoProduto) : data(data), quantidade(quantidade), codigoLote(codigoLote), codigoProduto(codigoProduto)
{
}

int Lote::getCodigoLote()
{
	return codigoLote;
}