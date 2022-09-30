#include "departamento.hpp"

int Departamento::current_id;

Departamento::Departamento() : id(++current_id) {}

Departamento::Departamento(std::string nome) : id(++current_id), nome(nome) {}

int Departamento::getId()
{
	return this->id;
}

std::string Departamento::getNome()
{
	return this->nome;
}