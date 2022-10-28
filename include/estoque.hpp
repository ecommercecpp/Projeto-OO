#ifndef _ESTOQUE_HPP_
#define _ESTOQUE_HPP_

#include "produto.hpp"
#include <string>
#include <map>

class Estoque
{
    protected:
        static Estoque* estoque;
        std::map<unsigned int, Produto> produtos;
    public:
        Estoque();
        Estoque(Estoque &other) = delete;
        void operator=(const Estoque &) = delete;
        static Estoque *GetInstance();
        void validaEstoqueMinimo(unsigned int);
        void addProduto(Produto);
        Produto removeProduto(unsigned int);
        int estoqueProduto(unsigned int);
        void atualizaEstoque(unsigned int, unsigned int);
        bool disponivel(unsigned int, unsigned int);
};

#endif