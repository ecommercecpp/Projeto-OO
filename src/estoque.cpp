#include <iostream>

#include "estoque.hpp"

/**
 * @brief Construct a new Estoque:: Estoque object
 *
 */
Estoque::Estoque()
{
}

/**
 * @brief Destroy the Estoque:: Estoque object
 *
 */
Estoque::~Estoque()
{
}

/**
 * @brief Retorna o estoque caso exista, senão o cria
 *
 * @return Estoque*
 */
Estoque *Estoque::getEstoque()
{
    if (estoque == nullptr)
    {
        estoque = new Estoque();
    }
    return estoque;
}

/**
 * @brief Adiciona um produto ao estoque
 *
 * @param produto
 */
void Estoque::addProduto(Produto produto)
{
    produtos[produto.getCodigo()] = produto;
}

/**
 * @brief Remove um produto do estoque
 *
 * @param codigo
 */
void Estoque::removeProduto(int codigo)
{
    produtos.erase(codigo);
}

/**
 * @brief Retorna um produto do estoque
 *
 * @param codigo
 * @return Produto
 */
Produto Estoque::getProduto(int codigo)
{
    return produtos[codigo];
}

/**
 * @brief Retorna o estoque de produtos
 *
 * @return std::map<int, Produto>
 */
std::map<int, Produto> Estoque::getProdutos()
{
    return produtos;
}

/**
 * @brief Seta o estoque de produtos
 *
 * @param produtos
 */
void Estoque::setProdutos(std::map<int, Produto> produtos)
{
    this->produtos = produtos;
}

/**
 * @brief Valida a quantidade de estoquee mínimo
 *
 * @param codigo
 */
void Estoque::validaEstoqueMinimo(int codigo)
{
    if (produtos[codigo].getQtdEstoque() < produtos[codigo].getEstoqueMinimo())
    {
        std::cout << "Estoque minimo atingido" << std::endl; // lancar uma excecao aqui
    }
}

/**
 * @brief atualiza o estoque
 *
 * @param codigo
 * @param quantidade
 */
void Estoque::atualizaEstoque(int codigo, int quantidade)
{
    produtos[codigo].setQtdEstoque(produtos[codigo].getQtdEstoque() + quantidade);
}

/**
 * @brief Verifica se o produto está disponivel no estoque
 *
 * @param codigo
 * @param quantidade
 * @return true
 * @return false
 */
bool Estoque::disponivel(int codigo, int quantidade)
{
    if (produtos[codigo].getQtdEstoque() >= quantidade)
    {
        return true;
    }
    else
    {
        return false; // lancar excecao aqui
    }
}

Estoque *Estoque::estoque = nullptr;
