#ifndef _ORDEM_PRODUCAO_HPP_
#define _ORDEM_PRODUCAO_HPP_

#include "Data.h"
#include "lote.hpp"

class OrdemProducao
{
	private:
		int codigo; 
		Lote lote;
    	Data dataDaOrdem;
		int quantidade;
	public:
		OrdemProducao();
		OrdemProducao(Lote lote, Data data, int quantidade);
		~OrdemProducao();
		void setCodigo(int codigo);
		int getCodigo();
		void setLote(Lote lote);
		void setData(Data data);
		Lote getLote();
		Data getData();
		int getQuantidade();
		void setQuantidade(int quantidade);
		void imprimeOrdem();
};

#endif