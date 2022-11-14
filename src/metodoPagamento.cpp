#include <iostream>

#include "metodoPagamento.hpp"

/**
 * @brief Construct a new Metodo Pagamento:: Metodo Pagamento object
 *
 */
MetodoPagamento::MetodoPagamento()
{
}

/**
 * @brief Construct a new Metodo Pagamento:: Metodo Pagamento object
 *
 * @param codigo
 * @param nome
 * @param dataDeVencimento
 */
MetodoPagamento::MetodoPagamento(std::string codigo, std::string nome, Data dataDeVencimento)
{
    this->codigo = codigo;
    this->nome = nome;
    this->dataDeVencimento = dataDeVencimento;
}

/**
 * @brief Retorna o codigo do metodo de pagamento
 *
 * @return std::string
 */
std::string MetodoPagamento::getCodigo()
{
    return this->codigo;
}

/**
 * @brief Seta o codigo do metodo de pagamento
 *
 * @param codigo
 */
void MetodoPagamento::setCodigo(std::string codigo)
{
    this->codigo = codigo;
}

/**
 * @brief Retorna o nome do metodo de pagamento
 *
 * @return std::string
 */
std::string MetodoPagamento::getNome()
{
    return this->nome;
}

/**
 * @brief Seta o nome do metodo de pagamento
 *
 * @param nome
 */
void MetodoPagamento::setNome(std::string nome)
{
    this->nome = nome;
}

/**
 * @brief Retorna a data de vencimento do metodo de pagamento
 *
 * @return Data
 */
Data MetodoPagamento::getDataDeVencimento()
{
    return this->dataDeVencimento;
}

/**
 * @brief Seta a data de vencimento do metodo de pagamento
 *
 * @param dataDeVencimento
 */
void MetodoPagamento::setDataDeVencimento(Data dataDeVencimento)
{
    this->dataDeVencimento = dataDeVencimento;
}
