#include "cargo.hpp"

int Cargo::current_id;

/**
 * @brief Construct a new Cargo::Cargo object
 *
 */
Cargo::Cargo() : id(++current_id) {}

/**
 * @brief Construct a new Cargo::Cargo object
 *
 * @param nome
 * @param current_id
 */

Cargo::Cargo(std::string nome) : id(++current_id), nome(nome) {}

/**
 * @brief Retorna o nome do cargo
 *
 * @return std::string
 */
std::string Cargo::getNome()
{
	return nome;
}

/**
 * @brief Retorna o id do cargo
 *
 * @return int
 */
int Cargo::getId()
{
	return id;
}

/**
 * @brief Seta o nome do cargo
 *
 * @param nome
 */
void Cargo::setNome(std::string nome)
{
	this->nome = nome;
}

/**
 * @brief Seta o id do cargo
 *
 * @param id
 */
void Cargo::setId(int id)
{
	this->id = id;
}
