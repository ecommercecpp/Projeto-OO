#include <iostream>

#include "departamento.hpp"

int Departamento::current_id;

/**
 * @brief Construct a new Departamento::Departamento object
 *
 */
Departamento::Departamento() : id(++current_id) {}

/**
 * @brief Construct a new Departamento:: Departamento object
 *
 * @param nome
 */
Departamento::Departamento(std::string nome)
{
	this->nome = nome;
}

/**
 * @brief Retorna o Id do Departamento
 *
 * @return int
 */
int Departamento::getId()
{
	return this->id;
}

/**
 * @brief Retorna o nome do Departamento
 *
 * @return std::string
 */
std::string Departamento::getNome()
{
	return this->nome;
}

/**
 * @brief Seta o Id do Departamento
 *
 * @param id
 */
void Departamento::setNome(std::string nome)
{
	this->nome = nome;
}