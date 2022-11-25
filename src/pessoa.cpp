#include "pessoa.hpp"
#include "empresa.hpp"
#include "usuario.hpp"
#include "usuarioLogado.hpp"
#include "exceptions.hpp"
#include "logEscrita.hpp"
#include "validacpfcnpj.hpp"

#include <iostream>

/**
 * @brief Construct a new Pessoa:: Pessoa object
 *
 */
Pessoa::Pessoa()
{
}

/**
 * @brief Construct a new Pessoa:: Pessoa object
 *
 * @param nome
 * @param cpf_cnpj
 * @param endereco
 * @param email
 * @param tipo
 */
Pessoa::Pessoa(std::string nome, std::string cpf_cnpj, std::string endereco, std::string email, int tipo)
{
	//criar uma string com a permissao de cadastrarPessoa
	std::string permissao = "cadastrarPessoa";
	//printar a permissao
	std::cout <<"a permissao ai -> "<< permissao << std::endl;

	//utiliza o ponteiro de usuarioLogado para verificar se o usuario logado tem a permissao de cadastrarPessoa
	
	//UsuarioLogado::verificaPermissao(permissao)
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		throw AcessDeniedException();
	}else{
		this->nome = nome;
		this->cpf_cnpj = cpf_cnpj;
		this->endereco = endereco;
		this->email = email;
		this->tipo = tipo;
	}
	//gerar log de escrita com a permissao de cadastrarPessoa

	//LogEscrita::gerarLog(permissao);
}

/**
 * @brief Seta o cpf ou cnpj da pessoa
 *
 * @param cpf_cnpj
 */
void Pessoa::setcpf_cnpj(std::string cpf_cnpj)
{
	if ( cpf_cnpj.length() == 11)
	{
		if (ValidaCPFCNPJ::validaCPF(cpf_cnpj))//Concertar 
		{
			this->cpf_cnpj = cpf_cnpj;
		}
		else
		{
			throw InvalidCPFException();
		}
	}
	else if (cpf_cnpj.length() == 14)
	{
		if (ValidaCPFCNPJ::validaCNPJ(cpf_cnpj))
		{
			this->cpf_cnpj = cpf_cnpj;
		}
		else
		{
			throw InvalidCNPJException();
			//std::cout << "CNPJ invalido"<< cpf_cnpj << std::endl;
		}
	} else{
		std::cout << "CPF ou CNPJ invalido" << cpf_cnpj.length() << " <- o tamain | o numero -> " << cpf_cnpj << std::endl;
		throw InvalidCPFException();
	}
}

/**
 * @brief Seta o email da pessoa
 *
 * @param email
 */
void Pessoa::setEmail(std::string email)
{
	//if (email.find("@") != std::string::npos)
	//{
		this->email = email;
	//}
	//else
	//{
		//throw InvalidEmailException();
	//}
}

/**
 * @brief Seta o tipo da pessoa
 *
 * @param tipo
 */
void Pessoa::setTipo(int tipo)
{
	// nao permite tipos que não sejam 0 ou 1
	if (tipo == 0 || tipo == 1)
	{
		this->tipo = tipo;
	}
	else
	{
		std::cout << "Tipo e esse: "<< tipo << std::endl;
		throw InvalidTypeException();
	}
}

/**
 * @brief Retorna o nome da pessoa
 *
 * @return std::string
 */
std::string Pessoa::getNome()
{
	return nome;
}

/**
 * @brief Retorna o cpf ou cnpj da pessoa
 *
 * @return std::string
 */
std::string Pessoa::getCpf_cnpj()
{
	return cpf_cnpj;
}

/**
 * @brief Retorna o endereco da pessoa
 *
 * @return std::string
 */
std::string Pessoa::getEndereco()
{
	return endereco;
}

/**
 * @brief Retorna o email da pessoa
 *
 * @return std::string
 */
std::string Pessoa::getEmail()
{
	return email;
}

/**
 * @brief Retorna o tipo da pessoa
 *
 * @return int
 */
int Pessoa::getTipo()
{
	return tipo;
}

/**
 * @brief Seta o nome da pessoa
 *
 * @param nome
 */
void Pessoa::setNome(std::string nome)
{
	this->nome = nome;
}

/**
 * @brief Seta o endereco da pessoa
 *
 * @param endereco
 */
void Pessoa::setEndereco(std::string endereco)
{
	this->endereco = endereco;
}
