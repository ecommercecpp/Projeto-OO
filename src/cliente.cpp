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
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		//dar um throw com a mensagem "Sem permissao"
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
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
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
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		throw AcessDeniedException();
	}else{
		// valida se o telefone tem entre 10 e 11 digitos
		if (t.length() >= 10 && t.length() <= 11)
		{
			telefone = t;
		}
		else
		{
			//std::cout << "Telefone invalido!" << std::endl;
			throw InvalidTelefoneException();
		}
	}
}