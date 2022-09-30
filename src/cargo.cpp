#include "cargo.hpp"

int Cargo::current_id;

Cargo::Cargo() : id(++current_id) {}

Cargo::Cargo(std::string nome) : id(++current_id), nome(nome) {}

std::string Cargo::getNome()
{
	return nome;
}

int Cargo::getId()
{
	return id;
}