#include <iostream>

#include "usuario.hpp"
#include "empresa.hpp"

/**
 * @brief Construct a new Usuario:: Usuario object
 *
 */
Usuario::Usuario()
{
    nome = "";
    cpf_cnpj = "";
    endereco = "";
    email = "";
    tipo = 0;
    login = "";
    senha = "";
}

/**
 * @brief Construct a new Usuario:: Usuario object
 *
 * @param nome
 * @param cpf_cnpj
 * @param endereco
 * @param email
 * @param tipo
 * @param login
 * @param senha
 */
Usuario::Usuario(std::string nome, std::string cpf_cnpj, std::string endereco, std::string email, int tipo, std::string login, std::string senha, std::vector<std::string> permissoes) : Pessoa(nome, cpf_cnpj, endereco, email, tipo)
{
    std::string permissao = "cadastrarUsuario";
	std::string atributos = "nome, cpf_cnpj, endereco, email, tipo, login, senha";

	Empresa::getEmpresa()->gerarLogEscrita("usuario", atributos);
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		Empresa::getEmpresa()->gerarLogExcecao("usuario", "Usuario");
		throw AcessDeniedException();
	}else{
        this->nome = nome;
        this->cpf_cnpj = cpf_cnpj;
        this->endereco = endereco;
        this->email = email;
        this->tipo = tipo; // conferir se eh 1 ou 0
        this->login = login;
        this->senha = senha;
        this->permissoes = permissoes;
    }
}

/**
 * @brief Retorna o login do usuário
 *
 * @return std::string
 */
std::string Usuario::getLogin()
{
	std::string permissao = "verificarLoginUsuario";
	std::string informacao = "Login: " + login;
	Empresa::getEmpresa()->gerarLogLeitura("usuario", informacao);
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		Empresa::getEmpresa()->gerarLogExcecao("usuario", "getLogin");
		throw AcessDeniedException();
	}else{    
        return this->login;
    }
}

/**
 * @brief Seta o login do USuário
 *
 * @param login
 */
void Usuario::setLogin(std::string login)
{
    std::string permissao = "cadastrarLoginUsuario";
    std::string atributos = "Login: " + login;
    Empresa::getEmpresa()->gerarLogEscrita("usuario", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("usuario", "setLogin");
        throw AcessDeniedException();
    }else{    
        this->login = login;
    }
}

/**
 * @brief Retorna a senha do usuário
 *
 * @return std::string
 */
std::string Usuario::getSenha()
{
    std::string permissao = "verificarSenhaUsuario";
    std::string atributos = "Senha: " + senha;
    Empresa::getEmpresa()->gerarLogLeitura("usuario", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("usuario", "getSenha");
        throw AcessDeniedException();
    }else{    
        return this->senha;
    }
}

/**
 * @brief Seta a senha do usuário
 *
 * @param senha
 */
void Usuario::setSenha(std::string senha)
{
    std::string permissao = "cadastrarSenhaUsuario";
    std::string atributos = "Senha: " + senha;
    Empresa::getEmpresa()->gerarLogEscrita("usuario", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("usuario", "setSenha");
        throw AcessDeniedException();
    }else{    
        this->senha = senha;
    }
}

/**
 * @brief Retorna as permissões que aquele usuário possui
 *
 * @return std::vector<std::string>
 */
std::vector<std::string> Usuario::getPermissoes()
{
    std::string permissao = "verificarPermissoesUsuario";
    std::string atributos = "Permissoes: "; //+ permissoes;
    Empresa::getEmpresa()->gerarLogLeitura("usuario", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("usuario", "getPermissoes");
        throw AcessDeniedException();
    }else{    
        return this->permissoes;
    }
}

/**
 * @brief Seta as permissões do usuário
 *
 * @param permissoes
 */
void Usuario::setPermissoes(std::vector<std::string> permissoes)
{
    std::string permissao = "cadastrarPermissoesUsuario";
    std::string atributos = "Permissoes: "; //+ permissoes;
    Empresa::getEmpresa()->gerarLogEscrita("usuario", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("usuario", "setPermissoes");
        throw AcessDeniedException();
    }else{    
        this->permissoes = permissoes;
    }
}

