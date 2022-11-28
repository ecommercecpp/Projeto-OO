#include <iostream>

#include "boleto.hpp"
#include "empresa.hpp"

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
    std::string permissao = "cadastrarBoleto";
    std::string atributos = "codigoDeBarras: " + std::to_string(codigoDeBarras) + ", nomeDoPagador: " + nomeDoPagador + ", dataDeVencimento: " + ", prazoDePagamento: " + std::to_string(prazoDePagamento);
    Empresa::getEmpresa()->gerarLogEscrita("boleto", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("boleto", "Boleto");
        throw AcessDeniedException();
    }
    else
    {
        this->codigoDeBarras = codigoDeBarras;
        this->nomeDoPagador = nomeDoPagador;
        this->dataDeVencimento = dataDeVencimento;
        this->prazoDePagamento = prazoDePagamento;
    }
}

/**
 * @brief Retorna o codigo de barras do boleto
 *
 * @return int
 */
int Boleto::getCodigoDeBarras()
{
    std::string permissao = "verificarCodigoDeBarrasBoleto";
    std::string atributos = "codigoDeBarras: " + std::to_string(codigoDeBarras);
    Empresa::getEmpresa()->gerarLogLeitura("boleto", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("boleto", "getCodigoDeBarras");
        throw AcessDeniedException();
    }
    else
    {
        return this->codigoDeBarras;
    }
}

/**
 * @brief Seta o codigo de barras do boleto
 *
 * @param codigoDeBarras
 */
void Boleto::setCodigoDeBarras(int codigoDeBarras)
{
    std::string permissao = "alterarCodigoDeBarrasBoleto";
    std::string atributos = "codigoDeBarras: " + std::to_string(codigoDeBarras);
    Empresa::getEmpresa()->gerarLogEscrita("boleto", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("boleto", "setCodigoDeBarras");
        throw AcessDeniedException();
    }
    else
    {
        this->codigoDeBarras = codigoDeBarras;
    }
}

/**
 * @brief Retorna o nome do pagador do boleto
 *
 * @return std::string
 */
std::string Boleto::getNomeDoPagador()
{
    std::string permissao = "verificarNomeDoPagadorBoleto";
    std::string atributos = "nomeDoPagador: " + nomeDoPagador;
    Empresa::getEmpresa()->gerarLogLeitura("boleto", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("boleto", "getNomeDoPagador");
        throw AcessDeniedException();
    }
    else
    {
        return this->nomeDoPagador;
    }
}

/**
 * @brief Seta o nome do pagador do boleto
 *
 * @param nomeDoPagador
 */
void Boleto::setNomeDoPagador(std::string nomeDoPagador)
{
    std::string permissao = "alterarNomeDoPagadorBoleto";
    std::string atributos = "nomeDoPagador: " + nomeDoPagador;
    Empresa::getEmpresa()->gerarLogEscrita("boleto", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("boleto", "setNomeDoPagador");
        throw AcessDeniedException();
    }
    else
    {
        this->nomeDoPagador = nomeDoPagador;
    }
}

/**
 * @brief Retorna a data de vencimento do boleto
 *
 * @return Data
 */
Data Boleto::getDataDeVencimento()
{
    std::string permissao = "verificarDataDeVencimentoBoleto";
    std::string atributos = "dataDeVencimento: " + dataDeVencimento.getData();
    Empresa::getEmpresa()->gerarLogLeitura("boleto", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("boleto", "getDataDeVencimento");
        throw AcessDeniedException();
    }
    else
    {
        return this->dataDeVencimento;
    }
}

/**
 * @brief Seta a data de vencimento do boleto
 *
 * @param dataDeVencimento
 */
void Boleto::setDataDeVencimento(Data dataDeVencimento)
{
    std::string permissao = "alterarDataDeVencimentoBoleto";
    std::string atributos = "dataDeVencimento: " + dataDeVencimento.getData();
    Empresa::getEmpresa()->gerarLogEscrita("boleto", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("boleto", "setDataDeVencimento");
        throw AcessDeniedException();
    }
    else
    {
        this->dataDeVencimento = dataDeVencimento;
    }
}

/**
 * @brief Retorna o prazo de pagamento do boleto
 *
 * @return int
 */
int Boleto::getPrazoDePagamento()
{
    std::string permissao = "verificarPrazoDePagamentoBoleto";
    std::string atributos = "prazoDePagamento: " + std::to_string(prazoDePagamento);
    Empresa::getEmpresa()->gerarLogLeitura("boleto", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("boleto", "getPrazoDePagamento");
        throw AcessDeniedException();
    }
    else
    {
        return this->prazoDePagamento;
    }
}

/**
 * @brief Seta o prazo de pagamento do boleto
 *
 * @param prazoDePagamento
 */
void Boleto::setPrazoDePagamento(int prazoDePagamento)
{
    std::string permissao = "alterarPrazoDePagamentoBoleto";
    std::string atributos = "prazoDePagamento: " + std::to_string(prazoDePagamento);
    Empresa::getEmpresa()->gerarLogEscrita("boleto", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("boleto", "setPrazoDePagamento");
        throw AcessDeniedException();
    }
    else
    {
        this->prazoDePagamento = prazoDePagamento;
    }
}
