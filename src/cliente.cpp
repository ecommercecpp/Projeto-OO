#include <iostream>

#include "cliente.hpp"
#include "empresa.hpp"
#include "exceptions.hpp"

/**
 * @brief Construct a new Cliente:: Cliente object
 *
 * @param nome
 * @param cpf
 * @param endereco
 * @param telefone
 * @param email
 * @param dataNascimento
 */
Cliente::Cliente() 
{//std::string nome, std::string cpf_cnpj, std::string endereco, std::string email, int tipo, std::string telefone) : Pessoa(nome, cpf_cnpj, endereco, email, tipo)
	std::string permissao = "cadastrarCliente";
	std::string atributos = "nome, cpf_cnpj, endereco, email, tipo, telefone";
	Empresa::getEmpresa()->gerarLogEscrita("cliente", atributos);
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		//dar um throw com a mensagem "Sem permissao"
		Empresa::getEmpresa()->gerarLogExcecao("cliente", "Cliente");
		throw AcessDeniedException();
	}else{	
		this->nome = nome;
		this->cpf_cnpj = cpf_cnpj;
		this->endereco = endereco;
		this->email = email;
		this->tipo = tipo;
		this->telefone = telefone;
		// setTelefone(telefone);
	}	
}

/**
 * @brief Retorna o Telefone do cliente
 *
 * @return string
 */
std::string Cliente::getTelefone()
{
	std::string permissao = "verificarTelefoneCliente";
	std::string atributos = "telefone";
	Empresa::getEmpresa()->gerarLogLeitura("cliente", atributos);
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		//dar um throw com a mensagem "Sem permissao"
		Empresa::getEmpresa()->gerarLogExcecao("cliente", "getTelefone");
		throw AcessDeniedException();
	}else{
		return telefone;
	}
}

/**
 * @brief Seta o Telefone do cliente
 *
 * @param telefone
 */
void Cliente::setTelefone(std::string t)
{
	std::string permissao = "cadastrarTelefoneCliente";
	std::string atributos = "telefone";
	Empresa::getEmpresa()->gerarLogEscrita("cliente", atributos);
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		//dar um throw com a mensagem "Sem permissao"
		Empresa::getEmpresa()->gerarLogExcecao("cliente", "setTelefone");
		throw AcessDeniedException();
	}else{
		telefone = t;
	}
}
