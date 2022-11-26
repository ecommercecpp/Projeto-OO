#include <iostream>

#include "departamento.hpp"
#include "empresa.hpp"

int Departamento::current_id;

/**
 * @brief Construct a new Departamento::Departamento object
 *
 */
Departamento::Departamento() : id(++current_id) {}

/**
 * @brief Construct a new Departamento:: Departamento object
 *
 * @param nome
 */
Departamento::Departamento(std::string nome)
{
	std::string permissao = "cadastrarDepartamento";
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		throw AcessDeniedException();
	}else{
		this->nome = nome;
	}
}

/**
 * @brief Retorna o Id do Departamento
 *
 * @return int
 */
int Departamento::getId()
{
	std::string permissao = "verificarIdDepartamento";
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		throw AcessDeniedException();
	}else{	
		return this->id;
	}
}

/**
 * @brief Retorna o nome do Departamento
 *
 * @return std::string
 */
std::string Departamento::getNome()
{
	std::string permissao = "verificarNomeDepartamento";
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		throw AcessDeniedException();
	}else{	
		return this->nome;
	}
}

/**
 * @brief Seta o Id do Departamento
 *
 * @param id
 */
void Departamento::setNome(std::string nome)
{
	std::string permissao = "cadastrarNomeDepartamento";
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		throw AcessDeniedException();
	}else{	
		this->nome = nome;
	}
}
