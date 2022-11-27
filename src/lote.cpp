#include <iostream>
#include <string>
#include <ctime>

#include "lote.hpp"

/**
 * @brief Construct a new Lote:: Lote object
 *
 */
Lote::Lote()
{
}

/**
 * @brief Construct a new Lote:: Lote object
 *
 * @param quantidade
 * @param quantidadeMinima
 * @param nmrLote
 * @param codigoProduto
 */
/*
Lote::Lote(int quantidade, int quantidadeMinima, int nmrLote, int codigoProduto)
{
    setQuantidade(quantidade);
    setQuantidadeMinima(quantidadeMinima);
    setNmrLote(nmrLote);
    setCodigoProduto(codigoProduto);
}
*/
/**
 * @brief Destroy the Lote:: Lote object
 *
 */
Lote::~Lote()
{
}

/**
 * @brief Seta a quantidade
 *
 * @param quantidade
 */
void Lote::setQuantidade(int quantidade)
{
    this->quantidade = quantidade;
}

/**
 * @brief Seta a quantidade minima do lote
 *
 * @param quantidadeMinima
 */
void Lote::setQuantidadeMinima(int quantidadeMinima)
{
    this->quantidadeMinima = quantidadeMinima;
}

/**
 * @brief Seta o numero do lote
 *
 * @param nmrLote
 */
void Lote::setNmrLote(int nmrLote)
{
    this->nmrLote = nmrLote;
}

/**
 * @brief Seta o codigo do produto
 *
 * @param codigoProduto
 */
void Lote::setCodigoProduto(int codigoProduto)
{
    this->codigoProduto = codigoProduto;
}

/**
 * @brief Seta a data de produção do lote
 *
 * @param dataDeProducao
 */
void Lote::setDataDeProducao(Data dataDeProducao)
{
    this->dataDeProducao = dataDeProducao;
}

/**
 * @brief Seta o produto do lote
 *
 * @param produto
 */
void Lote::setProduto(std::string produto)
{
    this->produto = produto;
}

/**
 * @brief Retorna a quantidade do lote
 *
 * @return int
 */
int Lote::getQuantidade()
{
    return quantidade;
}

/**
 * @brief Retorna a quantidade minima do lote
 *
 * @return int
 */
int Lote::getQuantidadeMinima()
{
    return quantidadeMinima;
}

/**
 * @brief Retorna o numero do lote
 *
 * @return int
 */
int Lote::getNmrLote()
{
    return nmrLote;
}

/**
 * @brief Retorna o codigo do produto
 *
 * @return int
 */
int Lote::getCodigoProduto()
{
    return codigoProduto;
}

/**
 * @brief Retorna a data de produção do lote
 *
 * @return Data
 */
Data Lote::getDataDeProducao()
{
    return dataDeProducao;
}

/**
 * @brief Retorna o produto do lote
 *
 * @return std::string
 */
std::string Lote::getProduto()
{
    return produto;
}

/**
 * @brief Função que produz a quantidade de produtos passadas no parametro
 *
 * @param produto
 * @param quantidade
 */
void Lote::produzir(Produto* produtoLote, int quantidade)
{
    Data data;
    time_t tt;
    struct tm * ti;
    time (&tt);
    ti = localtime(&tt);

    //this->dataDeProducao = asctime(ti);
    this->dataDeProducao = data.dateNow();
    this->produto = produtoLote->getNome();
    std::cout<<"Nome do produto em LOTE: " << produtoLote->getNome() << std::endl;
    this->codigoProduto = produtoLote->getCodigo();
    this->nmrLote = nmrLote+1;
    produtoLote->setQtdEstoque(produtoLote->getQtdEstoque() + quantidade);
}

//fazer o produtoLote receber o valor do produto passado no parametro

