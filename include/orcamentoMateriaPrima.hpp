#ifndef _ORCAMENTO_HPP_
#define _ORCAMENTO_HPP_

#include <string>
#include <vector>
#include <map>

#include "Data.h"
#include "materiaPrima.hpp"
#include "cliente.hpp"
#include "ordemCompra.hpp"

class OrcamentoMateriaPrimas
{
    private:
        //std::map<int, Produto> produtos;
        std::vector<MateriaPrima*> mp;
        Cliente *cliente;
        double valorTotal;
        Data data;
        std::string dataString;
        int qtd;
        OrdemCompra ordemCompra;

    public:
        OrcamentoMateriaPrimas(){}

        void gerarOrcamentoMP(Cliente *clienteO, int qtd, std::vector<MateriaPrima*> mp){
            Data data;
            time_t tt;
            struct tm * ti;
            time (&tt);
            ti = localtime(&tt);
        
            this->qtd = qtd;
            this->cliente = clienteO;
            this->mp = mp;
            this->data = data.dateNow();
            this->dataString = asctime(ti);
 
            for (unsigned int i = 0; i < mp.size(); i++)
            {
               
                if(mp[i]->getQuantidade() <= mp[i]->getEstoquemin()){
                    //gerar ordem de compra
                    ordemCompra.gerarOrdemCompra(mp[i], qtd);
                // std::cout << "Valor de venda do produto depois do orcamento: " << produtos[i]->getValorDeVenda() << std::endl;
                }
            }           
        }
        void imprimeOrcamentoMP(Cliente *cliente, std::vector<MateriaPrima*> mp){}	
};

#endif