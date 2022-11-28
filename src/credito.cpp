#include <iostream>

#include "credito.hpp"
#include "empresa.hpp"

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
    std::string permissao = "cadastrarCredito";
    std::string atributos = "codigoDeSeguranca: " + codigoDeSeguranca + ", nomeDoTitular: " + nomeDoTitular + ", dataDeVencimento" + ", numeroDoCartao: " + numeroDoCartao;
    Empresa::getEmpresa()->gerarLogEscrita("credito", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("credito", "Credito");
        throw AcessDeniedException();
    }
    else
    {
        this->codigoDeSeguranca = codigoDeSeguranca;
        this->nomeDoTitular = nomeDoTitular;
        this->dataDeVencimento = dataDeVencimento;
        this->numeroDoCartao = numeroDoCartao;
    }
}

/**
 * @brief Retorna o codigo de seguranca do cartao de credito
 *
 * @return std::string
 */
std::string Credito::getCodigoDeSeguranca()
{
    std::string permissao = "verificarCodigoDeSegurancaCredito";
    std::string atributos = "codigoDeSeguranca: " + codigoDeSeguranca;
    Empresa::getEmpresa()->gerarLogLeitura("credito", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("credito", "getCodigoDeSeguranca");
        throw AcessDeniedException();
    }
    else
    {
        return this->codigoDeSeguranca;
    }
}

/**
 * @brief Seta o codigo de seguranca do cartao de credito
 *
 * @param codigoDeSeguranca
 */
void Credito::setCodigoDeSeguranca(std::string codigoDeSeguranca)
{
    std::string permissao = "alterarCodigoDeSegurancaCredito";
    std::string atributos = "codigoDeSeguranca: " + codigoDeSeguranca;
    Empresa::getEmpresa()->gerarLogEscrita("credito", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("credito", "setCodigoDeSeguranca");
        throw AcessDeniedException();
    }
    else
    {
        this->codigoDeSeguranca = codigoDeSeguranca;
    }
}

/**
 * @brief Retorna o nome do titular do cartao de credito
 *
 * @return std::string
 */
std::string Credito::getNomeDoTitular()
{
    std::string permissao = "verificarNomeDoTitularCredito";
    std::string atributos = "nomeDoTitular: " + nomeDoTitular;
    Empresa::getEmpresa()->gerarLogLeitura("credito", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("credito", "getNomeDoTitular");
        throw AcessDeniedException();
    }
    else
    {
        return this->nomeDoTitular;
    }
}

/**
 * @brief Seta o nome do titular do cartao de credito
 *
 * @param nomeDoTitular
 */
void Credito::setNomeDoTitular(std::string nomeDoTitular)
{
    std::string permissao = "alterarNomeDoTitularCredito";
    std::string atributos = "nomeDoTitular: " + nomeDoTitular;
    Empresa::getEmpresa()->gerarLogEscrita("credito", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("credito", "setNomeDoTitular");
        throw AcessDeniedException();
    }
    else
    {
        this->nomeDoTitular = nomeDoTitular;
    }
}

/**
 * @brief Retorna a data de vencimento do credito
 *
 * @return Data
 */
Data Credito::getDataDeVencimento()
{
    std::string permissao = "verificarDataDeVencimentoCredito";
    std::string atributos = "dataDeVencimento: " + dataDeVencimento.getData();
    Empresa::getEmpresa()->gerarLogLeitura("credito", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("credito", "getDataDeVencimento");
        throw AcessDeniedException();
    }
    else
    {
        return this->dataDeVencimento;
    }
}

/**
 * @brief Seta a data de vencimento do credito
 *
 * @param dataDeVencimento
 */
void Credito::setDataDeVencimento(Data dataDeVencimento)
{
    std::string permissao = "alterarDataDeVencimentoCredito";
    std::string atributos = "dataDeVencimento: " + dataDeVencimento.getData();
    Empresa::getEmpresa()->gerarLogEscrita("credito", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("credito", "setDataDeVencimento");
        throw AcessDeniedException();
    }
    else
    {
        this->dataDeVencimento = dataDeVencimento;
    }
}

/**
 * @brief Retorna o numero do cartao de credito
 *
 * @return std::string
 */
std::string Credito::getNumeroDoCartao()
{
    std::string permissao = "verificarNumeroDoCartaoCredito";
    std::string atributos = "numeroDoCartao: " + numeroDoCartao;
    Empresa::getEmpresa()->gerarLogLeitura("credito", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("credito", "getNumeroDoCartao");
        throw AcessDeniedException();
    }
    else
    {
        return this->numeroDoCartao;
    }
}

/**
 * @brief Seta o numero do cartao de credito
 *
 * @param numeroDoCartao
 */
void Credito::setNumeroDoCartao(std::string numeroDoCartao)
{
    std::string permissao = "alterarNumeroDoCartaoCredito";
    std::string atributos = "numeroDoCartao: " + numeroDoCartao;
    Empresa::getEmpresa()->gerarLogEscrita("credito", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("credito", "setNumeroDoCartao");
        throw AcessDeniedException();
    }
    else
    {
        this->numeroDoCartao = numeroDoCartao;
    }
}
