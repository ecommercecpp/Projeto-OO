#include <iostream>

#include "estoque.hpp"
#include "empresa.hpp"

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
    std::string permissao = "adicionarProduto";
    std::string atributos = "produto: " + produto.getNome();
    Empresa::getEmpresa()->gerarLogEscrita("estoque", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("estoque", "addProduto");
        throw AcessDeniedException();
    }
    else
    {
        produtos[produto.getCodigo()] = produto;
    }
}

/**
 * @brief Remove um produto do estoque
 *
 * @param codigo
 */
void Estoque::removeProduto(int codigo)
{
    std::string permissao = "removerProduto";
    std::string atributos = "codigo: " + std::to_string(codigo);
    Empresa::getEmpresa()->gerarLogEscrita("estoque", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("estoque", "removeProduto");
        throw AcessDeniedException();
    }
    else
    {
        produtos.erase(codigo);
    }
}

/**
 * @brief Retorna um produto do estoque
 *
 * @param codigo
 * @return Produto
 */
Produto Estoque::getProduto(int codigo)
{
    std::string permissao = "verificarProduto";
    std::string atributos = "codigo: " + std::to_string(codigo);
    Empresa::getEmpresa()->gerarLogEscrita("estoque", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("estoque", "getProduto");
        throw AcessDeniedException();
    }
    else
    {
        return produtos[codigo];
    }
}

/**
 * @brief Retorna o estoque de produtos
 *
 * @return std::map<int, Produto>
 */
std::map<int, Produto> Estoque::getProdutos()
{
    std::string permissao = "verificarProdutos";
    std::string atributos = "estoque";
    Empresa::getEmpresa()->gerarLogEscrita("estoque", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("estoque", "getProdutos");
        throw AcessDeniedException();
    }
    else
    {
        return produtos;
    }
}

/**
 * @brief Seta o estoque de produtos
 *
 * @param produtos
 */
void Estoque::setProdutos(std::map<int, Produto> produtos)
{
    std::string permissao = "setarProdutos";
    std::string atributos = "estoque";
    Empresa::getEmpresa()->gerarLogEscrita("estoque", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("estoque", "setProdutos");
        throw AcessDeniedException();
    }
    else
    {
        this->produtos = produtos;
    }
}

/**
 * @brief Valida a quantidade de estoquee mínimo
 *
 * @param codigo
 */
void Estoque::validaEstoqueMinimo(int codigo)
{
    std::string permissao = "validarEstoqueMinimo";
    std::string atributos = "codigo: " + std::to_string(codigo);
    Empresa::getEmpresa()->gerarLogEscrita("estoque", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("estoque", "validaEstoqueMinimo");
        throw AcessDeniedException();
    }
    else
    {
        if (produtos[codigo].getQtdEstoque() < produtos[codigo].getEstoqueMinimo())
        {
            std::cout << "Estoque minimo atingido" << std::endl;
        }
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
    std::string permissao = "atualizarEstoque";
    std::string atributos = "codigo: " + std::to_string(codigo) + " quantidade: " + std::to_string(quantidade);
    Empresa::getEmpresa()->gerarLogEscrita("estoque", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("estoque", "atualizaEstoque");
        throw AcessDeniedException();
    }
    else
    {
        produtos[codigo].setQtdEstoque(produtos[codigo].getQtdEstoque() + quantidade);
    }
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
    std::string permissao = "verificarDisponibilidade";
    std::string atributos = "codigo: " + std::to_string(codigo) + " quantidade: " + std::to_string(quantidade);
    Empresa::getEmpresa()->gerarLogEscrita("estoque", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("estoque", "disponivel");
        throw AcessDeniedException();
    }
    else
    {
        if (produtos[codigo].getQtdEstoque() >= quantidade)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

Estoque *Estoque::estoque = nullptr;
