#include "departamento.hpp"

Departamento::Departamento()
{

}

Departamento::Departamento(std::string nome) : nome(nome)
{
}

std::string Departamento::getNome()
{
	return nome;
}

void Departamento::setNome(std::string s)
{
	nome = s;
}