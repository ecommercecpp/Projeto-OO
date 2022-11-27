#ifndef _ORDEM_COMPRA_HPP_
#define _ORDEM_COMPRA_HPP_

#include <string>

#include "Data.h"
#include "lote.hpp"
#include "materiaPrima.hpp"

class OrdemCompra
{
	private:
		std::string nomeMP; 
    	Data dataDaOrdem;
		std::string dataString;
		int quantidade;
	public:
		OrdemCompra();
		//OrdemProducao(Lote lote, Data data, int quantidade);
		~OrdemCompra();
        void setNomeMP(std::string nomeMP);
        std::string getNomeMP();
        void setData(Data data);
        Data getData();
        int getQuantidade();
        void setQuantidade(int quantidade);
        void setDataString(std::string dataString);
        std::string getDataString();

		void gerarOrdemCompra(MateriaPrima*, int);
};

#endif