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
		void setQuantidadeMinima(int quantidadeMinima);
	public:
		Lote();
		Lote(ec::Date data, int quantidade, int quantidadeMinima, int codigoLote, int codigoProduto);
		int getCodigoLote();
		int getQuantidade();
};

#endif