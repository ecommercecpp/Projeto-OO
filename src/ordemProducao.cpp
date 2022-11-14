#include <iostream>

#include "ordemProducao.hpp"

/**
 * @brief Construct a new Ordem Producao:: Ordem Producao object
 *
 */
OrdemProducao::OrdemProducao()
{
}

/**
 * @brief Construct a new Ordem Producao:: Ordem Producao object
 *
 * @param lote
 * @param data
 * @param quantidade
 */
OrdemProducao::OrdemProducao(Lote lote, Data data, int quantidade)
{
    setLote(lote);
    setData(data);
    setQuantidade(quantidade);
}

/**
 * @brief Destroy the Ordem Producao:: Ordem Producao object
 *
 */
OrdemProducao::~OrdemProducao()
{
}

/**
 * @brief Seta codigo do lote
 *
 * @param codigo
 */
void OrdemProducao::setCodigo(int codigo)
{
    this->codigo = codigo;
}

/**
 * @brief Retorna o codigo da ordem de produção
 *
 * @return int
 */
int OrdemProducao::getCodigo()
{
    return codigo;
}

/**
 * @brief Seta o lote da ordem de produção
 *
 * @param lote
 */
void OrdemProducao::setLote(Lote lote)
{
    this->lote = lote;
}

/**
 * @brief Seta a data da ordem de produção
 *
 * @param data
 */
void OrdemProducao::setData(Data data)
{
    this->dataDaOrdem = data;
}

/**
 * @brief Retorna o lote da ordem de produção
 *
 * @return Lote
 */
Lote OrdemProducao::getLote()
{
    return lote;
}

/**
 * @brief Retorna a data da ordem de produção
 *
 * @return Data
 */
Data OrdemProducao::getData()
{
    return dataDaOrdem;
}

/**
 * @brief Retorna a quantidade da ordem de produção
 *
 * @return int
 */
int OrdemProducao::getQuantidade()
{
    return quantidade;
}

/**
 * @brief Seta a quantidade da ordem de produção
 *
 * @param quantidade
 */
void OrdemProducao::setQuantidade(int quantidade)
{
    this->quantidade = quantidade;
}

/**
 * @brief Imprime na tela os dados da ordem de produção
 *
 */
void OrdemProducao::imprimeOrdem()
{
    std::cout << "Ordem de produção: " << std::endl;
    std::cout << "Lote: " << getLote().getNmrLote() << std::endl;
    std::cout << "Data: " << getData().getDia() << "/" << getData().getMes() << "/" << getData().getAno() << std::endl;
    std::cout << "Quantidade: " << getQuantidade() << std::endl;
}
