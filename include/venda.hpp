#ifndef _VENDA_HPP_
#define _VENDA_HPP_
// Equivalente ao registro de vendas
#include "produto.hpp"
#include "cliente.hpp"
#include "estoque.hpp"
#include "Data.h"
#include <string>

#include <vector>

class Venda
{
	protected:
                Produto produto;
                Cliente cliente;
                Data dataVenda;
                int quantidade;
                int id;
                std::vector<int> lotes_venda;
	public:
                Venda();
                Venda(Data dataVenda, int quantidade, int id, Produto produto, Cliente cliente);//, Cliente cliente
                ~Venda();
                void setDataVenda(Data dataVenda);
                void setQuantidade(int quantidade);
                void setId(int id);
                void setProduto(Produto produto);
                void setCliente(Cliente cliente);
                void setLotesVenda(std::vector<int> lotes_venda);
                Data getDataVenda();
                int getQuantidade();
                int getId();
                Produto getProduto();
                Cliente getCliente();
                std::vector<int> getLotesVenda();
        
                //void atualizaLote();
                //void atualizaEstoque();

                void realizaVenda(Produto*);
    
};

#endif