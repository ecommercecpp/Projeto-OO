#ifndef _MATERIAPRIMA_HPP_
#define _MATERIAPRIMA_HPP_

#include <string>
#include <vector>
#include <map>
#include <numeric>

#include "fornecedor.hpp"


class MateriaPrima
{
	private:
        std::string nome; 
        int quantidade; 
        int estoquemin;
        std::string unidadeMedida;
        //std::vector<Fornecedor> fornecedores;
        //std::map<int, Fornecedor> fornecedores; 

	public:
        //MateriaPrima(std::string nome, int quantidade, std::string unidadeMedida,int estoqueminimo);
        MateriaPrima();
        ~MateriaPrima();
        //void setFornecedores(int valorDoMaterial, Fornecedor fornecedor);
        //std::map<int, Fornecedor> retornaMenorValor();
        void atualizaQuantidade(int valor);
        int getQuantidade();
        std::string getNome();
        int getEstoquemin();
        std::string getUnidadeMedida();
        void setNome(std::string nome);
        void setQuantidade(int quantidade);
        void setEstoquemin(int estoquemin);
        void setUnidadeMedida(std::string unidadeMedida);
};


#endif