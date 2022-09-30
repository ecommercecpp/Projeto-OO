#include "cargo.hpp"

Cargo::Cargo()
{
}

Cargo::Cargo(std::string nome) : nome(nome)
{
}

std::string Cargo::getNome()
{
	return nome;
}

void Cargo::setNome(std::string s)
{
	nome = s;
}