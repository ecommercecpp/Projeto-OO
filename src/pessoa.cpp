#include "pessoa.hpp"
#include "validacpfcnpj.hpp"

#include <iostream>

Pessoa::Pessoa()
{
}

Pessoa::Pessoa(std::string nome, std::string cpf_cnpj, std::string endereco, std::string email, int tipo) :
	nome(nome), endereco(endereco)
{
	setTipo(tipo);
	setcpf_cnpj(cpf_cnpj);
	setEmail(email);
}


void Pessoa::setcpf_cnpj(std::string cpf_cnpj)
{
	if (tipo == 0)
	{
		if (ValidaCPFCNPJ::validaCPF(cpf_cnpj))
		{
			this->cpf_cnpj = cpf_cnpj;
		}
		else
		{
			throw InvalidCPFException();
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
			throw InvalidCNPJException();
		}
	}
}

void Pessoa::setEmail(std::string email)
{
	if (email.find("@") != std::string::npos)
	{
		this->email = email;
	}
	else
	{
		throw InvalidEmailException();
	}
}

void Pessoa::setTipo(int tipo)
{
	// nao permite tipos que não sejam 0 ou 1
	if (tipo == 0 || tipo == 1)
	{
		this->tipo = tipo;
	}
	else
	{
		throw InvalidTypeException();
	}
}

std::string Pessoa::getNome()
{
	return nome;
}

std::string Pessoa::getCpf_cnpj()
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

void Pessoa::setEndereco(std::string endereco)
{
	this->endereco = endereco;
}
