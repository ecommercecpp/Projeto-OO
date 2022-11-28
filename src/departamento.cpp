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
	std::string atributos = "nome: " + nome;
	Empresa::getEmpresa()->gerarLogEscrita("departamento", atributos);
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		Empresa::getEmpresa()->gerarLogExcecao("departamento", "Departamento");
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
	Empresa::getEmpresa()->gerarLogLeitura("departamento", "id");
	std::string permissao = "verificarIdDepartamento";
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		Empresa::getEmpresa()->gerarLogExcecao("departamento", "getId");
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
	Empresa::getEmpresa()->gerarLogLeitura("departamento", "nome");
	std::string permissao = "verificarNomeDepartamento";
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		Empresa::getEmpresa()->gerarLogExcecao("departamento", "getNome");
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
	std::string atributos = "nome: " + nome;
	Empresa::getEmpresa()->gerarLogEscrita("departamento", atributos);
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		Empresa::getEmpresa()->gerarLogExcecao("departamento", "setNome");
		throw AcessDeniedException();
	}else{
		this->nome = nome;
	}
}