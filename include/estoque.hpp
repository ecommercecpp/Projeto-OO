#ifndef _ESTOQUE_HPP_
#define _ESTOQUE_HPP_

#include "produto.hpp"
#include <string>
#include <map>
#include <vector>

class Estoque
{
    protected:
        static Estoque* estoque;
        std::map<int, Produto> produtos;
        //std::vector<Produto*> produtos;
    public:
        Estoque();
        Estoque(Estoque &other) = delete;
        Estoque& operator=(Estoque &other) = delete;
        ~Estoque();
        static Estoque* getEstoque();
        void addProduto(Produto produto);
        void removeProduto(int codigo);
        Produto getProduto(int codigo);
        std::map<int, Produto> getProdutos();
        void setProdutos(std::map<int, Produto> produtos);

       // void operator=(const Estoque &) = delete;
        //static Estoque *GetInstance();
        void validaEstoqueMinimo(int);


       //int estoqueProduto(unsigned int);
        void atualizaEstoque(int, int);
        bool disponivel(int, int);
};

#endif