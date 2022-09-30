#include "pessoa.hpp"
#include "validacpfcnpj.hpp"

#include <iostream>

Pessoa::Pessoa()
{
}

Pessoa::Pessoa(std::string nome, std::string cpf_cnpj, std::string endereco, std::string email, int tipo) :
	nome(nome), endereco(endereco), email(email), tipo(tipo)
{
	// só permite construir se o cpf/cnpj for válido
	if (ValidaCPFCNPJ::validaCNPJ(cpf_cnpj) || ValidaCPFCNPJ::validaCPF(cpf_cnpj))
	{
		this->cpf_cnpj = cpf_cnpj;
	}
	else
	{
		std::cout << "CPF/CNPJ inválido!" << std::endl;
		exit(1);
	}
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
	// se o tipo for 0, é pessoa física, se for 1, é pessoa jurídica
	if (tipo == 0)
	{
		if (ValidaCPFCNPJ::validaCPF(cpf_cnpj))
		{
			this->cpf_cnpj = cpf_cnpj;
		}
		else
		{
			std::cout << "CPF inválido!" << std::endl;
		}
	}
	else
	{
		if (ValidaCPFCNPJ::validaCNPJ(cpf_cnpj))
		{
			this->cpf_cnpj = cpf_cnpj;
		}
		else
		{
			std::cout << "CNPJ inválido!" << std::endl;
		}
	}
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
