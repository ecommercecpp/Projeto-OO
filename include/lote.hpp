#ifndef _LOTE_HPP_
#define _LOTE_HPP_

#include "data.hpp"

class Lote
{
	private:
		Data data;
		int quantidade, codigoLote, codigoProduto;
	public:
		Lote();
		Lote(Data data, int quantidade, int codigoLote, int codigoProduto);
		int getCodigoLote();
};

#endif