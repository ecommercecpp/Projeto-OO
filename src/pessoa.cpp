#include "pessoa.hpp"

Pessoa::Pessoa()
{
}

Pessoa::Pessoa(std::string nome, std::string cpf_cnpj, std::string endereco, std::string email, int tipo) :
	nome(nome), cpf_cnpj(cpf_cnpj), endereco(endereco), email(email), tipo(tipo)
{
}