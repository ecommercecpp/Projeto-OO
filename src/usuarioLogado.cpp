#include <iostream>

#include "exceptions.hpp"
#include "empresa.hpp"
#include "usuarioLogado.hpp"

UsuarioLogado *UsuarioLogado::usuario = nullptr;

/**
 * @brief Construct a new Usuario Logado:: Usuario Logado object
 *
 */
/*
UsuarioLogado::UsuarioLogado(std::string nome, std::string cpf_cnpj, std::string endereco, std::string email, int tipo, std::string login, std::string senha, std::vector<std::string> permissoes) : Usuario(nome, cpf_cnpj, endereco, email, tipo, login, senha, permissoes)
{
    

}*/
UsuarioLogado::UsuarioLogado()
{

}

/**
 * @brief Retorna a instancia do usuario que está logado (singleton)
 *
 * @return UsuarioLogado*
 */

UsuarioLogado* UsuarioLogado::GetInstance()
{
   /* std::string permissao = "instanciarUsuarioLogado";
	std::string atributos = "usuarioLogado* ";
	Empresa::getEmpresa()->gerarLogEscrita("usuarioLogado", atributos);
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		Empresa::getEmpresa()->gerarLogExcecao("usuarioLogado", "GetInstance");
		throw AcessDeniedException();
	}else{
        */
        if (usuario == nullptr)
        {
        usuario = new UsuarioLogado;
        std::cout << "Usuario logado criado" << std::endl;
        // usuario = new UsuarioLogado("aaa", "09169507600", "Endereco", "email", 0, "admin", "admin", {"admin"});
            
        }
        //return (UsuarioLogado *)usuario;
        return usuario;
   // }
}

/**
 * @brief Destroi a instancia do usuario logado
 *
 */
UsuarioLogado::~UsuarioLogado(){
    delete usuario;
}

/**
 * @brief Retorna o usuario logado
 *
 * @return Usuario*
 */
Usuario *UsuarioLogado::getUsuario()
{
    return this->usuario;
}

/**
 * @brief Retorna o nome do usuario logado
 *
 * @return std::string
 */
std::string UsuarioLogado::getNome()
{
    //retorna o nome da pessoa logada
    return this->nome;
}

/**
 * @brief Retorna o cpf do usuario logado
 *
 * @return std::string
 */
std::string UsuarioLogado::getCpf_cnpj()
{
    return this->cpf_cnpj;
}

/**
 * @brief Retorna o endereco do usuario logado
 *
 * @return std::string
 */
std::string UsuarioLogado::getEndereco()
{
    return this->endereco;
}

/**
 * @brief Retorna o email do usuario logado
 *
 * @return std::string
 */
std::string UsuarioLogado::getEmail()
{
    return this->email;
}

/**
 * @brief Retorna o tipo do usuario logado
 *
 * @return int
 */
int UsuarioLogado::getTipo()
{
    return this->tipo;
}

/**
 * @brief Retorna o login do usuario logado
 *
 * @return std::string
 */
std::string UsuarioLogado::getLogin()
{
    return this->login;
}

/**
 * @brief Retorna a senha do usuario logado
 *
 * @return std::string
 */
std::string UsuarioLogado::getSenha()
{
    return this->senha;
}

/**
 * @brief Retorna o vetor de permissoes do usuario logado
 *
 * @return std::vector<std::string>
 */
std::vector<std::string> UsuarioLogado::getPermissoes()
{
    //printa as permissoes do usuario logado
    /*for(unsigned int i = 0; i < this->permissoes.size(); i++){
        std::cout << this->permissoes[i] << std::endl;
    }*/
    return this->permissoes;
}

/**
 * @brief Adiciona uma permissao ao usuario logado
 *
 * @param valor
 */
void UsuarioLogado::setPermissoes(std::vector<std::string> valor)
{
    this->permissoes = valor;
}

//remover a permissao passada no parametro do vector de permissoes de usuario
void UsuarioLogado::removePermissao(std::string valor)
{
    //remover a permissao passada no parametro do vector de permissoes da classe pai (usuario)
    
    this->usuario->removePermissao(valor);
}
