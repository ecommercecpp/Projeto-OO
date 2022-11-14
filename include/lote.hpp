#ifndef _LOTE_HPP_
#define _LOTE_HPP_

#include "Data.h"
#include <string>

class Lote
{
	private:
		Data dataDeProducao;
		int quantidade, quantidadeMinima, nmrLote, codigoProduto;
        std::string produto;
		//void setQuantidade(int quantidade);
	public:
		Lote();
		Lote(int quantidade, int quantidadeMinima, int nmrLote, int codigoProduto);
        ~Lote();
        void setQuantidade(int quantidade);
        void setQuantidadeMinima(int quantidadeMinima);
        void setNmrLote(int nmrLote);
        void setCodigoProduto(int codigoProduto);
        void setDataDeProducao(Data dataDeProducao);
        void setProduto(std::string produto);
        int getQuantidade();
        int getQuantidadeMinima();
        int getNmrLote();
        int getCodigoProduto();
        Data getDataDeProducao();
        std::string getProduto();
        /*
		int getCodigoLote();
		int getQuantidade();
		void atualizaQuantidade(int quantidade);*/
};

#endif