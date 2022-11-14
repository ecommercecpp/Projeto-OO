#include <iostream>

#include "credito.hpp"

/**
 * @brief Construct a new Credito::Credito object
 *
 */
Credito::Credito()
{
}

/**
 * @brief Construct a new Credito::Credito object
 *
 * @param codigoDeSeguranca
 * @param nomeDoTitular
 * @param dataDeVencimento
 * @param numeroDoCartao
 */
Credito::Credito(std::string codigoDeSeguranca, std::string nomeDoTitular, Data dataDeVencimento, std::string numeroDoCartao)
{
    this->codigoDeSeguranca = codigoDeSeguranca;
    this->nomeDoTitular = nomeDoTitular;
    this->dataDeVencimento = dataDeVencimento;
    this->numeroDoCartao = numeroDoCartao;
}

/**
 * @brief Retorna o codigo de seguranca do cartao de credito
 *
 * @return std::string
 */
std::string Credito::getCodigoDeSeguranca()
{
    return this->codigoDeSeguranca;
}

/**
 * @brief Seta o codigo de seguranca do cartao de credito
 *
 * @param codigoDeSeguranca
 */
void Credito::setCodigoDeSeguranca(std::string codigoDeSeguranca)
{
    this->codigoDeSeguranca = codigoDeSeguranca;
}

/**
 * @brief Retorna o nome do titular do cartao de credito
 *
 * @return std::string
 */
std::string Credito::getNomeDoTitular()
{
    return this->nomeDoTitular;
}

/**
 * @brief Seta o nome do titular do cartao de credito
 *
 * @param nomeDoTitular
 */
void Credito::setNomeDoTitular(std::string nomeDoTitular)
{
    this->nomeDoTitular = nomeDoTitular;
}

/**
 * @brief Retorna a data de vencimento do credito
 *
 * @return Data
 */
Data Credito::getDataDeVencimento()
{
    return this->dataDeVencimento;
}

/**
 * @brief Seta a data de vencimento do credito
 *
 * @param dataDeVencimento
 */
void Credito::setDataDeVencimento(Data dataDeVencimento)
{
    this->dataDeVencimento = dataDeVencimento;
}

/**
 * @brief Retorna o numero do cartao de credito
 *
 * @return std::string
 */
std::string Credito::getNumeroDoCartao()
{
    return this->numeroDoCartao;
}

/**
 * @brief Seta o numero do cartao de credito
 *
 * @param numeroDoCartao
 */
void Credito::setNumeroDoCartao(std::string numeroDoCartao)
{
    this->numeroDoCartao = numeroDoCartao;
}
