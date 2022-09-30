#ifndef _LOTE_HPP_
#define _LOTE_HPP_

#include "date.h"
#include "exceptions.hpp"

class Lote
{
	private:
		ec::Date data;
		int quantidade, quantidadeMinima, codigoLote, codigoProduto;
		void setQuantidade(int quantidade);
	public:
		Lote();
		Lote(ec::Date data, int quantidade, int codigoLote, int codigoProduto);
		int getCodigoLote();
		int getQuantidade();
};

#endif