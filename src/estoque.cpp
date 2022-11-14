#include <iostream>

#include "estoque.hpp"

Estoque::Estoque()
{
}

Estoque::~Estoque()
{
}

Estoque* Estoque::getEstoque()
{
    if (estoque == nullptr)
    {
        estoque = new Estoque();
    }
    return estoque;
}

void Estoque::addProduto(Produto produto)
{
    produtos[produto.getCodigo()] = produto;
}

void Estoque::removeProduto(int codigo)
{
    produtos.erase(codigo);
}

Produto Estoque::getProduto(int codigo)
{
    return produtos[codigo];
}

std::map<int, Produto> Estoque::getProdutos()
{
    return produtos;
}

void Estoque::setProdutos(std::map<int, Produto> produtos)
{
    this->produtos = produtos;
}

void Estoque::validaEstoqueMinimo(int codigo)
{
    if (produtos[codigo].getQtdEstoque() < produtos[codigo].getEstoqueMinimo())
    {
        std::cout << "Estoque minimo atingido" << std::endl;//lancar uma excecao aqui 
    }
}

void Estoque::atualizaEstoque(int codigo, int quantidade)
{
    produtos[codigo].setQtdEstoque(produtos[codigo].getQtdEstoque() + quantidade);
}

bool Estoque::disponivel(int codigo, int quantidade)
{
    if (produtos[codigo].getQtdEstoque() >= quantidade)
    {
        return true;
    }
    else
    {
        return false;//lancar excecao aqui
    }
}

Estoque* Estoque::estoque = nullptr;

