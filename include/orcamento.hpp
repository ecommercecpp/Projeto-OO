#ifndef _ORCAMENTO_HPP_
#define _ORCAMENTO_HPP_

#include <string>
#include <vector>
#include <map>

#include "Data.h"
#include "produto.hpp"
#include "cliente.hpp"
#include "ordemProducao.hpp"

class Orcamento
{
	private:
        //std::map<int, Produto> produtos;
        std::vector<Produto*> produtos;
        Cliente *cliente;
        double valorTotal;
        Data data;
        std::string dataString;
        int qtd;
        OrdemProducao ordemProducao;

	public:
        Orcamento();
        //Orcamento(std::map<int, Produto> produtos, Cliente *cliente, double valorTotal);
        std::vector<Produto*> getProdutos();
        void setProdutos(std::vector<Produto*> produtos);
        Cliente *getCliente();
        void setCliente(Cliente *cliente);
        double getValorTotal();
        void setValorTotal(double valorTotal);
        Data getData();
        void setData(Data data);
        void setDataString(std::string dataString);
        std::string getDataString();

        OrdemProducao getOrdemProducao();
        void setOrdemProducao(OrdemProducao ordemProducao);

        void gerarOrcamento(Cliente *cliente, int qtd, std::vector<Produto*> produtos);

        void imprimeOrcamento(Cliente *cliente, std::vector<Produto*> produtos);	
};


#endif