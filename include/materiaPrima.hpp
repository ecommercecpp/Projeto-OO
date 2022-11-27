#ifndef _MATERIAPRIMA_HPP_
#define _MATERIAPRIMA_HPP_

#include <string>
#include <vector>
#include <map>
#include <numeric>

#include "fornecedores.hpp"


class MateriaPrima
{
	private:
        std::string nome; 
        int quantidade; 
        int estoquemin;
        std::string unidadeMedida;
        std::map<int, Fornecedor> fornecedores; 

	public:
        MateriaPrima(std::string nome, int quantidade, std::string unidadeMedida,int estoqueminimo);
        MateriaPrima();
        void setFornecedores(int valorDoMaterial, Fornecedor fornecedor);
        std::map<int, Fornecedor> retornaMenorValor();
        void atualizaQuantidade(int valor);
        int GetQuantidade();
        std::string GetNome();
        int GetEstoquemin()
};


#endif