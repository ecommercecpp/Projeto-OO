#ifndef _ORCAMENTO_HPP_
#define _ORCAMENTO_HPP_

#include <string>
#include <vector>
#include <map>

#include "Data.h"
#include "produto.hpp"
#include "cliente.hpp"
#include "ordemProducao.hpp"

class OrcamentoMateriaPrimas
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
        OrcamentoMateriaPrimas();

        void gerarOrcamentoMP(Cliente *cliente, int qtd, std::vector<Produto*> produtos);
        void imprimeOrcamentoMP(Cliente *cliente, std::vector<Produto*> produtos);	
};

#endif