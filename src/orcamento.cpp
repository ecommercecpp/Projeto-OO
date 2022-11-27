#include <iostream>

#include "orcamento.hpp"

/**
 * @brief Construct a new Orcamento:: Orcamento object
 *
 */
Orcamento::Orcamento()
{
    this->produtos = std::map<int, Produto>();
    this->cliente = new Cliente();
    this->valorTotal = 0;
}

/**
 * @brief Construct a new Orcamento:: Orcamento object
 *
 * @param produtos
 * @param cliente
 * @param valorTotal
 */
/*
Orcamento::Orcamento(std::map<int, Produto> produtos, Cliente *cliente, double valorTotal)
{
    this->produtos = produtos;
    this->cliente = cliente;
    this->valorTotal = valorTotal;
}
*/
/**
 * @brief Retorna os produtos do orçamento
 *
 * @return std::map<int, Produto>
 */
std::map<int, Produto> Orcamento::getProdutos()
{
    return this->produtos;
}

/**
 * @brief Seta os produtos do orçamento
 *
 * @param produtos
 */
void Orcamento::setProdutos(std::map<int, Produto> produtos)
{
    this->produtos = produtos;
}

/**
 * @brief Retorna o cliente do orçamento
 *
 * @return Cliente*
 */
Cliente *Orcamento::getCliente()
{
    return this->cliente;
}

/**
 * @brief Seta o cliente do orçamento
 *
 * @param cliente
 */
void Orcamento::setCliente(Cliente *cliente)
{
    this->cliente = cliente;
}

/**
 * @brief Retorna o valor total do orçamento
 *
 * @return double
 */
double Orcamento::getValorTotal()
{
    return this->valorTotal;
}

/**
 * @brief Seta o valor total do orçamento
 *
 * @param valorTotal
 */
void Orcamento::setValorTotal(double valorTotal)
{
    this->valorTotal = valorTotal;
}

/**
 * @brief Imprime o orçamento
 *
 */
void Orcamento::imprimeOrcamento()
{
    std::cout << "Cliente: " << this->cliente->getNome() << std::endl;
    std::cout << "Valor total: " << this->valorTotal << std::endl;
    std::cout << "Produtos: " << std::endl;
    for (auto it = this->produtos.begin(); it != this->produtos.end(); it++)
    {
        std::cout << it->second.getNome() << std::endl;
    }
}