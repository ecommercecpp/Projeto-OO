#include <iostream>

#include "cargo.hpp"
#include "empresa.hpp"

int Cargo::current_id;

/**
 * @brief Construct a new Cargo::Cargo object
 *
 */
Cargo::Cargo() : id(++current_id) {}

/**
 * @brief Construct a new Cargo::Cargo object
 *
 * @param nome
 * @param current_id
 */

Cargo::Cargo(std::string nome) : id(++current_id), nome(nome) {}

/**
 * @brief Retorna o nome do cargo
 *
 * @return std::string
 */
std::string Cargo::getNome()
{
	std::string permissao = "verificarNomeCargo";
	std::string atributos = "nome: " + nome;
	Empresa::getEmpresa()->gerarLogEscrita("cargo", atributos);
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		Empresa::getEmpresa()->gerarLogExcecao("cargo", "getNome");
		throw AcessDeniedException();
	}else{	
		return this->nome;
	}
}

/**
 * @brief Retorna o id do cargo
 *
 * @return int
 */
int Cargo::getId()
{
	std::string permissao = "verificarIdCargo";

	Empresa::getEmpresa()->gerarLogLeitura("cargo", "id");
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		Empresa::getEmpresa()->gerarLogExcecao("cargo", "getId");
		throw AcessDeniedException();
	}else{	
		return this->id;
	}
}

/**
 * @brief Seta o nome do cargo
 *
 * @param nome
 */
void Cargo::setNome(std::string nome)
{
	std::string permissao = "cadastrarNomeCargo";
	std::string atributos = "nome: " + nome;
	Empresa::getEmpresa()->gerarLogEscrita("cargo", atributos);
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		Empresa::getEmpresa()->gerarLogExcecao("cargo", "setNome");
		throw AcessDeniedException();
	}else{	
		this->nome = nome;
	}
}

/**
 * @brief Seta o id do cargo
 *
 * @param id
 */
void Cargo::setId(int id)
{
	std::string permissao = "cadastrarIdCargo";
	std::string atributos = "id: " + std::to_string(id);
	Empresa::getEmpresa()->gerarLogEscrita("cargo", atributos);
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		Empresa::getEmpresa()->gerarLogExcecao("cargo", "setId");
		throw AcessDeniedException();
	}else{	
		this->id = id;
	}
}