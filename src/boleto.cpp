#include <iostream>

#include "boleto.hpp"

/**
 * @brief Construct a new Boleto:: Boleto object
 *
 */
Boleto::Boleto()
{
}

/**
 * @brief Construct a new Boleto:: Boleto object
 *
 * @param codigoDeBarras
 * @param nomeDoPagador
 * @param dataDeVencimento
 * @param prazoDePagamento
 */
Boleto::Boleto(int codigoDeBarras, std::string nomeDoPagador, Data dataDeVencimento, int prazoDePagamento)
{
    this->codigoDeBarras = codigoDeBarras;
    this->nomeDoPagador = nomeDoPagador;
    this->dataDeVencimento = dataDeVencimento;
    this->prazoDePagamento = prazoDePagamento;
}

/**
 * @brief Retorna o codigo de barras do boleto
 *
 * @return int
 */
int Boleto::getCodigoDeBarras()
{
    return this->codigoDeBarras;
}

/**
 * @brief Seta o codigo de barras do boleto
 *
 * @param codigoDeBarras
 */
void Boleto::setCodigoDeBarras(int codigoDeBarras)
{
    this->codigoDeBarras = codigoDeBarras;
}

/**
 * @brief Retorna o nome do pagador do boleto
 *
 * @return std::string
 */
std::string Boleto::getNomeDoPagador()
{
    return this->nomeDoPagador;
}

/**
 * @brief Seta o nome do pagador do boleto
 *
 * @param nomeDoPagador
 */
void Boleto::setNomeDoPagador(std::string nomeDoPagador)
{
    this->nomeDoPagador = nomeDoPagador;
}

/**
 * @brief Retorna a data de vencimento do boleto
 *
 * @return Data
 */
Data Boleto::getDataDeVencimento()
{
    return this->dataDeVencimento;
}

/**
 * @brief Seta a data de vencimento do boleto
 *
 * @param dataDeVencimento
 */
void Boleto::setDataDeVencimento(Data dataDeVencimento)
{
    this->dataDeVencimento = dataDeVencimento;
}

/**
 * @brief Retorna o prazo de pagamento do boleto
 *
 * @return int
 */
int Boleto::getPrazoDePagamento()
{
    return this->prazoDePagamento;
}

/**
 * @brief Seta o prazo de pagamento do boleto
 *
 * @param prazoDePagamento
 */
void Boleto::setPrazoDePagamento(int prazoDePagamento)
{
    this->prazoDePagamento = prazoDePagamento;
}
