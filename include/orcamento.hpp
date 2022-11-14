#ifndef _ORCAMENTO_HPP_
#define _ORCAMENTO_HPP_

#include <string>
#include <vector>
#include <map>

#include "produto.hpp"
#include "cliente.hpp"

class Orcamento
{
	private:
        std::map<int, Produto> produtos;
        Cliente *cliente;
        double valorTotal;

	public:
        Orcamento();
        Orcamento(std::map<int, Produto> produtos, Cliente *cliente, double valorTotal);
        std::map<int, Produto> getProdutos();
        void setProdutos(std::map<int, Produto> produtos);
        Cliente *getCliente();
        void setCliente(Cliente *cliente);
        double getValorTotal();
        void setValorTotal(double valorTotal);
        
		
};


#endif