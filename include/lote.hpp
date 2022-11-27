#ifndef _LOTE_HPP_
#define _LOTE_HPP_

#include "Data.h"
#include "produto.hpp"
#include "estoque.hpp"
//#include "ordemProducao.hpp"
#include <string>

class Lote
{
	private:
		Data dataDeProducao;
		int quantidade, quantidadeMinima, nmrLote, codigoProduto;
        std::string produto;
        //Produto *produtoLote;
		//void setQuantidade(int quantidade);
	public:
		Lote();
		//Lote(int quantidade, int quantidadeMinima, int nmrLote, int codigoProduto);
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
        //função que produz a quantidade de produtos passadas no parametro
        void produzir(Produto*,int quantidade);

        //funcao para adicionar produto e quantidade do lote no estoque
        void atualizarEstoque(Produto*, int quantidade);

        /*
		int getCodigoLote();
		int getQuantidade();
		void atualizaQuantidade(int quantidade);*/
};

#endif