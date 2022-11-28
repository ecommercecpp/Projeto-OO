#include <iostream>

#include "metodoPagamento.hpp"
#include "empresa.hpp"

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
    std::string permissao = "cadastrarMetodoPagamento";
    std::string atributos = "codigo: " + codigo + " nome: " + nome + " dataDeVencimento";
    Empresa::getEmpresa()->gerarLogEscrita("metodoPagamento", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("metodoPagamento", "MetodoPagamento");
        throw AcessDeniedException();
    }
    else
    {
        this->codigo = codigo;
        this->nome = nome;
        this->dataDeVencimento = dataDeVencimento;
    }
}

/**
 * @brief Retorna o codigo do metodo de pagamento
 *
 * @return std::string
 */
std::string MetodoPagamento::getCodigo()
{
    std::string permissao = "verificarCodigoMetodoPagamento";
    std::string atributos = "codigo: " + codigo;
    Empresa::getEmpresa()->gerarLogEscrita("metodoPagamento", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("metodoPagamento", "getCodigo");
        throw AcessDeniedException();
    }
    else
    {
        return this->codigo;
    }
}

/**
 * @brief Seta o codigo do metodo de pagamento
 *
 * @param codigo
 */
void MetodoPagamento::setCodigo(std::string codigo)
{
    std::string permissao = "alterarCodigoMetodoPagamento";
    std::string atributos = "codigo: " + codigo;
    Empresa::getEmpresa()->gerarLogEscrita("metodoPagamento", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("metodoPagamento", "setCodigo");
        throw AcessDeniedException();
    }
    else
    {
        this->codigo = codigo;
    }
}

/**
 * @brief Retorna o nome do metodo de pagamento
 *
 * @return std::string
 */
std::string MetodoPagamento::getNome()
{
    std::string permissao = "verificarNomeMetodoPagamento";
    std::string atributos = "nome: " + nome;
    Empresa::getEmpresa()->gerarLogEscrita("metodoPagamento", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("metodoPagamento", "getNome");
        throw AcessDeniedException();
    }
    else
    {
        return this->nome;
    }
}

/**
 * @brief Seta o nome do metodo de pagamento
 *
 * @param nome
 */
void MetodoPagamento::setNome(std::string nome)
{
    std::string permissao = "alterarNomeMetodoPagamento";
    std::string atributos = "nome: " + nome;
    Empresa::getEmpresa()->gerarLogEscrita("metodoPagamento", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("metodoPagamento", "setNome");
        throw AcessDeniedException();
    }
    else
    {
        this->nome = nome;
    }
}

/**
 * @brief Retorna a data de vencimento do metodo de pagamento
 *
 * @return Data
 */
Data MetodoPagamento::getDataDeVencimento()
{
    std::string permissao = "verificarDataDeVencimentoMetodoPagamento";
    std::string atributos = "dataDeVencimento: " + dataDeVencimento.getData();
    Empresa::getEmpresa()->gerarLogEscrita("metodoPagamento", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("metodoPagamento", "getDataDeVencimento");
        throw AcessDeniedException();
    }
    else
    {
        return this->dataDeVencimento;
    }
}

/**
 * @brief Seta a data de vencimento do metodo de pagamento
 *
 * @param dataDeVencimento
 */
void MetodoPagamento::setDataDeVencimento(Data dataDeVencimento)
{
    std::string permissao = "alterarDataDeVencimentoMetodoPagamento";
    std::string atributos = "dataDeVencimento: " + dataDeVencimento.getData();
    Empresa::getEmpresa()->gerarLogEscrita("metodoPagamento", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("metodoPagamento", "setDataDeVencimento");
        throw AcessDeniedException();
    }
    else
    {
        this->dataDeVencimento = dataDeVencimento;
    }
}