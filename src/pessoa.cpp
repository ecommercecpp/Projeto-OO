#include "pessoa.hpp"

Pessoa::Pessoa()
{
}

Pessoa::Pessoa(std::string nome, std::string cpf_cnpj, std::string endereco, std::string email, int tipo) :
	nome(nome), cpf_cnpj(cpf_cnpj), endereco(endereco), email(email), tipo(tipo)
{
}

std::string Pessoa::getNome()
{
	return nome;
}
std::string Pessoa::getcpf_cnpj()
{
	return cpf_cnpj;
}
std::string Pessoa::getEndereco()
{
	return endereco;
}
std::string Pessoa::getEmail()
{
	return email;
}
int Pessoa::getTipo()
{
	return tipo;
}
void Pessoa::setNome(std::string nome)
{
	this->nome = nome;
}
void Pessoa::setcpf_cnpj(std::string cpf_cnpj)
{
	this->cpf_cnpj = cpf_cnpj;
}
void Pessoa::setEndereco(std::string endereco)
{
	this->endereco = endereco;
}
void Pessoa::setEmail(std::string email)
{
	this->email = email;
}
void Pessoa::setTipo(int tipo)
{
	this->tipo = tipo;
}
