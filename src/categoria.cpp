#include <iostream>

#include "categoria.hpp"

/**
 * @brief Construct a new Categoria::Categoria object
 *
 */
Categoria::Categoria()
{
}

/**
 * @brief Construct a new Categoria::Categoria object
 *
 * @param nome
 */
Categoria::Categoria(std::string nome)
{
    setNome(nome);
}

/**
 * @brief Destroy the Categoria:: Categoria object
 *
 */
Categoria::~Categoria()
{
}

/**
 * @brief Retorna o nome da categoria
 *
 * @return std::string
 */
std::string Categoria::getNome()
{
    return nome;
}

/**
 * @brief Seta o nome da categoria
 *
 * @param nome
 */
void Categoria::setNome(std::string nome)
{
    this->nome = nome;
}
