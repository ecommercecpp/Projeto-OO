
#ifndef _VENDA_HPP_
#define _VENDA_HPP_

#include "data.hpp"
#include "cliente.hpp"
#include "produto.hpp"
#include "lote.hpp"

class Venda
{
	protected:
		Produto produto;
        Cliente cliente;
        Data dataVenda;
		int quantidade;
        int id;
	public:
        bool produtoDisponivel();
        void atualizaLote(Lote* lote, int qtd);
        void verificaQtdLote();
        Produto getProduto();
        void setProduto(Produto produto);
        Cliente getCliente();
        void setCliente(Cliente cliente);
        Data getDataVenda();
        void setDataVenda(Data data);
        int getQuantidade();
        void setQuantidade(int qtd);
        int getId();
        void setId(int id);
};

#endif