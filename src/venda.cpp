#include <iostream>
#include <string>
#include <vector>
#include <map>

#include "venda.hpp"

/**
 * @brief Construct a new Venda:: Venda object
 *
 */
Venda::Venda()
{
}

/**
 * @brief Construct a new Venda:: Venda object
 *
 * @param dataVenda
 * @param quantidade
 * @param id
 * @param produto
 * @param cliente
 */
Venda::Venda(Data dataVenda, int quantidade, int id, Produto produto, Cliente cliente)
{
    this->dataVenda = dataVenda;
    this->quantidade = quantidade;
    this->id = id;
    this->produto = produto;
    this->cliente = cliente;
}

/**
 * @brief Destroy the Venda:: Venda object
 *
 */
Venda::~Venda()
{
}

/**
 * @brief Seta a data da venda
 *
 * @param dataVenda
 */
void Venda::setDataVenda(Data dataVenda)
{
    this->dataVenda = dataVenda;
}

/**
 * @brief Seta a quantidade da venda
 *
 * @param quantidade
 */
void Venda::setQuantidade(int quantidade)
{
    this->quantidade = quantidade;
}

/**
 * @brief Seta o id da venda
 *
 * @param id
 */
void Venda::setId(int id)
{
    this->id = id;
}

/**
 * @brief Seta o produto da venda
 *
 * @param produto
 */
void Venda::setProduto(Produto produto)
{
    this->produto = produto;
}

/**
 * @brief Seta o cliente da venda
 *
 * @param cliente
 */
void Venda::setCliente(Cliente cliente)
{
    this->cliente = cliente;
}

/**
 * @brief Seta os lotes desta venda
 *
 * @param lotes_venda
 */
void Venda::setLotesVenda(std::vector<int> lotes_venda)
{
    this->lotes_venda = lotes_venda;
}

/**
 * @brief Retorna a data da venda
 *
 * @return Data
 */
Data Venda::getDataVenda()
{
    return dataVenda;
}

/**
 * @brief Retorna a quantidade da venda
 *
 * @return int
 */
int Venda::getQuantidade()
{
    return quantidade;
}

/**
 * @brief Retorna o id da venda
 *
 * @return int
 */
int Venda::getId()
{
    return id;
}

/**
 * @brief Retorna o produto da venda
 *
 * @return Produto
 */
Produto Venda::getProduto()
{
    return produto;
}

/**
 * @brief Retorna o cliente da venda
 *
 * @return Cliente
 */
Cliente Venda::getCliente()
{
    return cliente;
}

/**
 * @brief Retorna os lotes desta venda
 *
 * @return std::vector<int>
 */
std::vector<int> Venda::getLotesVenda()
{
    return lotes_venda;
}

/**
 * @brief Efetua a venda
 *
 */
void Venda::realizaVenda()
{
    // this->atualizaLote();
    // this->atualizaEstoque();
}
