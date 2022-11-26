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
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
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
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
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
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
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
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		throw AcessDeniedException();
	}else{	
		this->id = id;
	}
}
