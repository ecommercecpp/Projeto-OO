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
	std::string atributos = "nome: " + nome + " cpf_cnpj: " + cpf_cnpj + " endereco: " + endereco + " email: " + email + " tipo: " + std::to_string(tipo);

	Empresa::getEmpresa()->gerarLogEscrita("pessoa", atributos);
	//Empresa::getEmpresa()->imprimirLogsEscrita();
}

/**
 * @brief Seta o cpf ou cnpj da pessoa
 *
 * @param cpf_cnpj
 */
void Pessoa::setcpf_cnpj(std::string cpf_cnpj)
{
	std::string permissao = "cadastrarDocumentoPessoa";
	Empresa::getEmpresa()->gerarLogEscrita("pessoa", "cpf_cnpj");
	if (!Empresa::getEmpresa()->verificaPermissao(permissao))
	{
		Empresa::getEmpresa()->gerarLogExcecao("pessoa", "setcpf_cnpj");
		throw AcessDeniedException();
	}
	else
	{
		if (cpf_cnpj.length() == 11)
		{
			tipo = 0;
			if (ValidaCPFCNPJ::validaCPF(cpf_cnpj)) // Concertar
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
			tipo = 1;
			if (ValidaCPFCNPJ::validaCNPJ(cpf_cnpj))
			{
				this->cpf_cnpj = cpf_cnpj;
			}
			else
			{
				std::cout << "CPF ou CNPJ invalido" << cpf_cnpj.length() << " <- o tamain | o numero -> " << cpf_cnpj << std::endl;
				throw InvalidCNPJException();
			}
		}
		else
		{
			std::cout << "CPF ou CNPJ invalido" << cpf_cnpj.length() << " <- o tamain | o numero -> " << cpf_cnpj << std::endl;
			throw InvalidCPFException();
		}
	}
}

/**
 * @brief Seta o email da pessoa
 *
 * @param email
 */
void Pessoa::setEmail(std::string email)
{
	std::string permissao = "cadastrarEmailPessoa";
	if (!Empresa::getEmpresa()->verificaPermissao(permissao))
	{
		throw AcessDeniedException();
	}
	else
	{
		this->email = email;
	}
}

/**
 * @brief Seta o tipo da pessoa
 *
 * @param tipo
 */
void Pessoa::setTipo(int tipo)
{
	std::string permissao = "cadastrarTipoPessoa";
	if (!Empresa::getEmpresa()->verificaPermissao(permissao))
	{
		throw AcessDeniedException();
	}
	else
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
}

/**
 * @brief Retorna o nome da pessoa
 *
 * @return std::string
 */
std::string Pessoa::getNome()
{
	std::string informacao = "nome: " + nome;
	std::string entidade = "pessoa";
	std::string funcionalidade = "getNome";
	Empresa::getEmpresa()->gerarLogLeitura(entidade, informacao);
	//Empresa::getEmpresa()->imprimirLogsLeitura();
	std::string permissao = "verificarNomePessoa";
	if (!Empresa::getEmpresa()->verificaPermissao(permissao))
	{
		Empresa::getEmpresa()->gerarLogExcecao(entidade, funcionalidade);
		//Empresa::getEmpresa()->imprimirLogsExcecao();
		throw AcessDeniedException();
	}
	else
	{
		return nome;
	}
}

/**
 * @brief Retorna o cpf ou cnpj da pessoa
 *
 * @return std::string
 */
std::string Pessoa::getCpf_cnpj()
{
	std::string permissao = "verificarDocumentoPessoa";
	//gerar log de leitura

	if (!Empresa::getEmpresa()->verificaPermissao(permissao))
	{
		throw AcessDeniedException();
	}
	else
	{
	return cpf_cnpj;
	}
}

/**
 * @brief Retorna o endereco da pessoa
 *
 * @return std::string
 */
std::string Pessoa::getEndereco()
{
	std::string permissao = "verificarEnderecoPessoa";
	if (!Empresa::getEmpresa()->verificaPermissao(permissao))
	{
		throw AcessDeniedException();
	}
	else
	{
	return endereco;
	}
}

/**
 * @brief Retorna o email da pessoa
 *
 * @return std::string
 */
std::string Pessoa::getEmail()
{
	std::string permissao = "verificarEmailPessoa";
	if (!Empresa::getEmpresa()->verificaPermissao(permissao))
	{
		throw AcessDeniedException();
	}
	else
	{
	return email;
	}
}

/**
 * @brief Retorna o tipo da pessoa
 *
 * @return int
 */
int Pessoa::getTipo()
{
	std::string permissao = "verificarTipoPessoa";
	if (!Empresa::getEmpresa()->verificaPermissao(permissao))
	{
		throw AcessDeniedException();
	}
	else
	{
	return tipo;
	}
}


/**
 * @brief Seta o nome da pessoa
 *
 * @param nome
 */
void Pessoa::setNome(std::string nome)
{
	std::string permissao = "cadastrarNomePessoa";
	if (!Empresa::getEmpresa()->verificaPermissao(permissao))
	{
		throw AcessDeniedException();
	}
	else
	{
		this->nome = nome;
	}
}

/**
 * @brief Seta o endereco da pessoa
 *
 * @param endereco
 */
void Pessoa::setEndereco(std::string endereco)
{
	std::string permissao = "cadastrarEnderecoPessoa";
	if (!Empresa::getEmpresa()->verificaPermissao(permissao))
	{
		throw AcessDeniedException();
	}
	else
	{
		this->endereco = endereco;
	}
}
