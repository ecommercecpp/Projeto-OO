#include <iostream>

#include "materiaPrima.hpp"
#include "empresa.hpp"

/**
 * @brief Construct a new Materia Prima:: Materia Prima object
 *
 */
MateriaPrima::MateriaPrima()
{
}

/**
 * @brief Destroy the Materia Prima:: Materia Prima object
 *
 */
MateriaPrima::~MateriaPrima()
{
}

/**
 * @brief Seta o nome da materia prima
 *
 * @param nome
 */
void MateriaPrima::setNome(std::string nome)
{
    std::string permissao = "setarNomeMateriaPrima";
    std::string atributos = "nome: " + nome;
    Empresa::getEmpresa()->gerarLogEscrita("materiaPrima", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("materiaPrima", "setNome");
        throw AcessDeniedException();
    }
    else
    {
        this->nome = nome;
    }
}

/**
 * @brief Seta a quantidade da materia prima
 *
 * @param quantidade
 */
void MateriaPrima::setQuantidade(int quantidade)
{
    std::string permissao = "setarQuantidadeMateriaPrima";
    std::string atributos = "quantidade: " + std::to_string(quantidade);
    Empresa::getEmpresa()->gerarLogEscrita("materiaPrima", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("materiaPrima", "setQuantidade");
        throw AcessDeniedException();
    }
    else
    {
        this->quantidade = quantidade;
    }
}

/**
 * @brief Seta o estoque minimo da materia prima
 *
 * @param estoquemin
 */
void MateriaPrima::setEstoquemin(int estoquemin)
{
    std::string permissao = "setarEstoqueMinimoMateriaPrima";
    std::string atributos = "estoquemin: " + std::to_string(estoquemin);
    Empresa::getEmpresa()->gerarLogEscrita("materiaPrima", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("materiaPrima", "setEstoquemin");
        throw AcessDeniedException();
    }
    else
    {
        this->estoquemin = estoquemin;
    }
}

/**
 * @brief Seta a unidade de medida da materia prima
 *
 * @param unidadeMedida
 */
void MateriaPrima::setUnidadeMedida(std::string unidadeMedida)
{
    std::string permissao = "setarUnidadeMedidaMateriaPrima";
    std::string atributos = "unidadeMedida: " + unidadeMedida;
    Empresa::getEmpresa()->gerarLogEscrita("materiaPrima", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("materiaPrima", "setUnidadeMedida");
        throw AcessDeniedException();
    }
    else
    {
        this->unidadeMedida = unidadeMedida;
    }
}

/**
 * @brief Atualiza a quantidade da materia prima
 *
 * @param valor
 */
void MateriaPrima::atualizaQuantidade(int valor)
{
    std::string permissao = "atualizarQuantidadeMateriaPrima";
    std::string atributos = "valor: " + std::to_string(valor);
    Empresa::getEmpresa()->gerarLogEscrita("materiaPrima", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("materiaPrima", "atualizaQuantidade");
        throw AcessDeniedException();
    }
    else
    {
        quantidade += valor;
    }
}

/**
 * @brief Retorna a quantidade da materia prima
 *
 * @return int
 */
int MateriaPrima::getQuantidade()
{
    std::string permissao = "getQuantidadeMateriaPrima";
    std::string atributos = "quantidade: " + std::to_string(quantidade);
    Empresa::getEmpresa()->gerarLogLeitura("materiaPrima", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("materiaPrima", "getQuantidade");
        throw AcessDeniedException();
    }
    else
    {
        return quantidade;
    }
}

/**
 * @brief Retorna o nome da materia prima
 *
 * @return std::string
 */
std::string MateriaPrima::getNome()
{
    std::string permissao = "getNomeMateriaPrima";
    std::string atributos = "nome: " + nome;
    Empresa::getEmpresa()->gerarLogLeitura("materiaPrima", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("materiaPrima", "getNome");
        throw AcessDeniedException();
    }
    else
    {
        return nome;
    }
}

/**
 * @brief Retorna o estoque minimo da materia prima
 *
 * @return int
 */
int MateriaPrima::getEstoquemin()
{
    std::string permissao = "getEstoqueMinimoMateriaPrima";
    std::string atributos = "estoquemin: " + std::to_string(estoquemin);
    Empresa::getEmpresa()->gerarLogLeitura("materiaPrima", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("materiaPrima", "getEstoquemin");
        throw AcessDeniedException();
    }
    else
    {
        return estoquemin;
    }
}

/**
 * @brief Retorna a unidade de medida da materia prima
 *
 * @return std::string
 */
std::string MateriaPrima::getUnidadeMedida()
{
    std::string permissao = "getUnidadeMedidaMateriaPrima";
    std::string atributos = "unidadeMedida: " + unidadeMedida;
    Empresa::getEmpresa()->gerarLogLeitura("materiaPrima", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("materiaPrima", "getUnidadeMedida");
        throw AcessDeniedException();
    }
    else
    {
        return unidadeMedida;
    }
}


/**
 * @brief Define o estoque disponivel da materia prima
 *
 * @param estoqueTotal
 */
void MateriaPrima::setEstoqueTotal(int estoqueTotal)
{
    std::string permissao = "setarEstoqueTotalMateriaPrima";
    std::string atributos = "estoqueTotal: " + std::to_string(estoqueTotal);
    Empresa::getEmpresa()->gerarLogEscrita("materiaPrima", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("materiaPrima", "setEstoqueTotal");
        throw AcessDeniedException();
    }
    else
    {
        this->estoqueTotal = estoqueTotal;
    }
}

/**
 * @brief Retorna o estoque disponivel da materia prima
 *
 * @return int
 */
int MateriaPrima::getEstoqueDisponivel()
{
    std::string permissao = "getEstoqueDisponivelMateriaPrima";
    std::string atributos = "estoqueDisponivel: " + std::to_string(estoqueTotal - quantidade);
    Empresa::getEmpresa()->gerarLogLeitura("materiaPrima", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("materiaPrima", "getEstoqueDisponivel");
        throw AcessDeniedException();
    }
    else
    {
        return this->estoqueTotal - this->quantidade;
    }
}

