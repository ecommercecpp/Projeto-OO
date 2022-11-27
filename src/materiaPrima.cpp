#include <iostream>

#include "materiaPrima.hpp"

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
    this->nome = nome;
}

/**
 * @brief Seta a quantidade da materia prima
 *
 * @param quantidade
 */
void MateriaPrima::setQuantidade(int quantidade)
{
    this->quantidade = quantidade;
}

/**
 * @brief Seta o estoque minimo da materia prima
 *
 * @param estoquemin
 */
void MateriaPrima::setEstoquemin(int estoquemin)
{
    this->estoquemin = estoquemin;
}

/**
 * @brief Seta a unidade de medida da materia prima
 *
 * @param unidadeMedida
 */
void MateriaPrima::setUnidadeMedida(std::string unidadeMedida)
{
    this->unidadeMedida = unidadeMedida;
}

/**
 * @brief Seta os fornecedores da materia prima
 *
 * @param valorDoMaterial
 * @param fornecedor
 *//*
void MateriaPrima::setFornecedores(int valorDoMaterial, Fornecedor fornecedor)
{
    fornecedores[valorDoMaterial] = fornecedor;
}*/

/**
 * @brief Retorna o menor valor da materia prima
 *
 * @return std::map<int, Fornecedor>
 *//*
std::map<int, Fornecedor> MateriaPrima::retornaMenorValor()
{
    std::map<int, Fornecedor> menorValor;
    int menor = std::numeric_limits<int>::max();
    for (auto &fornecedor : fornecedores)
    {
        if (fornecedor.first < menor)
        {
            menor = fornecedor.first;
        }
    }
    menorValor[menor] = fornecedores[menor];
    return menorValor;
}
*/
/**
 * @brief Atualiza a quantidade da materia prima
 *
 * @param valor
 */
void MateriaPrima::atualizaQuantidade(int valor)
{
    quantidade += valor;
}

/**
 * @brief Retorna a quantidade da materia prima
 *
 * @return int
 */
int MateriaPrima::getQuantidade()
{
    return quantidade;
}

/**
 * @brief Retorna o nome da materia prima
 *
 * @return std::string
 */
std::string MateriaPrima::getNome()
{
    return nome;
}

/**
 * @brief Retorna o estoque minimo da materia prima
 *
 * @return int
 */
int MateriaPrima::getEstoquemin()
{
    return estoquemin;
}

/**
 * @brief Retorna a unidade de medida da materia prima
 *
 * @return std::string
 */
std::string MateriaPrima::getUnidadeMedida()
{
    return unidadeMedida;
}
