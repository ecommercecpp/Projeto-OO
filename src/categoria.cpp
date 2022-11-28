#include <iostream>

#include "categoria.hpp"
#include "empresa.hpp"

/**
 * @brief Construct a new Categoria::Categoria object
 *
 */
Categoria::Categoria()
{
}

/**
 * @brief Construct a new Categoria::Categoria object
 *
 * @param nome
 */
Categoria::Categoria(std::string nome)
{
	std::string permissao = "cadastrarCategoria";
	std::string atributos = "nome: " + nome;
	Empresa::getEmpresa()->gerarLogEscrita("categoria", atributos);
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		Empresa::getEmpresa()->gerarLogExcecao("categoria", "Categoria");
		throw AcessDeniedException();
	}else{    
        setNome(nome);
    }
}

/**
 * @brief Destroy the Categoria:: Categoria object
 *
 */
Categoria::~Categoria()
{
}

/**
 * @brief Retorna o nome da categoria
 *
 * @return std::string
 */
std::string Categoria::getNome()
{
    std::string permissao = "verificarNomeCategoria";
    std::string atributos = "nome: " + nome;
    Empresa::getEmpresa()->gerarLogEscrita("categoria", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("categoria", "getNome");
        throw AcessDeniedException();
    }else{    
        return this->nome;
    }
}

/**
 * @brief Seta o nome da categoria
 *
 * @param nome
 */
void Categoria::setNome(std::string nome)
{
    std::string permissao = "cadastrarNomeCategoria";
    std::string atributos = "nome: " + nome;
    Empresa::getEmpresa()->gerarLogEscrita("categoria", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("categoria", "setNome");
        throw AcessDeniedException();
    }else{    
        this->nome = nome;
    }
}
