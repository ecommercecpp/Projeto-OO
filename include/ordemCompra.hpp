#ifndef _ORDEM_COMPRA_HPP_
#define _ORDEM_COMPRA_HPP_

#include <iostream>
#include <string>
#include <ctime>

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
		OrdemCompra(){}
		~OrdemCompra(){}
		void gerarOrdemCompra(MateriaPrima* mp, int quantidade){
                Lote lote;
                Data data;
                time_t tt;
                struct tm * ti;
                time (&tt);
                ti = localtime(&tt); 
                
                std::cout << "Ordem de compra: " << std::endl;
                this->nomeMP = mp->getNome();
                this->quantidade = quantidade;
                this->dataDaOrdem = data.dateNow();
                this->dataString = asctime(ti);
                std::cout<<"Ordem de compra gerada com sucesso!"<<std::endl;
        }
};

#endif