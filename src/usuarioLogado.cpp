#include <iostream>

#include "exceptions.hpp"
#include "usuarioLogado.hpp"

UsuarioLogado *UsuarioLogado::usuario = nullptr;

/**
 * @brief Construct a new Usuario Logado:: Usuario Logado object
 *
 */
UsuarioLogado::UsuarioLogado(std::string nome, std::string cpf_cnpj, std::string endereco, std::string email, int tipo, std::string login, std::string senha) : Usuario(nome, cpf_cnpj, endereco, email, tipo, login, senha)
{
    

}

/**
 * @brief Retorna a instancia do usuario que está logado (singleton)
 *
 * @return UsuarioLogado*
 */

UsuarioLogado* UsuarioLogado::GetInstance()
{
    if (usuario == nullptr)
    {
        usuario = new UsuarioLogado("aaa", "09169507600", "Endereco", "email", 0, "admin", "admin");
        
    }
    return (UsuarioLogado *)usuario;

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
 * @brief Verifica se o usuario logado tem acesso a determinada permissao
 *
 * @param valor
 * @return true
 * @return false
 *//*
bool UsuarioLogado::getAcesso(std::string valor)
{
    return this->usuario->getPermissoes(valor);
}
*/
/**
 * @brief Retorna o nome do usuario logado
 *
 * @return std::string
 */
std::string UsuarioLogado::getNome()
{
    return this->usuario->getNome();
}

/**
 * @brief Retorna o cpf do usuario logado
 *
 * @return std::string
 */
std::string UsuarioLogado::getCpf_cnpj()
{
    return this->usuario->getCpf_cnpj();
}

/**
 * @brief Retorna o endereco do usuario logado
 *
 * @return std::string
 */
std::string UsuarioLogado::getEndereco()
{
    return this->usuario->getEndereco();
}

/**
 * @brief Retorna o email do usuario logado
 *
 * @return std::string
 */
std::string UsuarioLogado::getEmail()
{
    return this->usuario->getEmail();
}

/**
 * @brief Retorna o tipo do usuario logado
 *
 * @return int
 */
int UsuarioLogado::getTipo()
{
    return this->usuario->getTipo();
}

/**
 * @brief Retorna o login do usuario logado
 *
 * @return std::string
 */
std::string UsuarioLogado::getLogin()
{
    return this->usuario->getLogin();
}

/**
 * @brief Retorna a senha do usuario logado
 *
 * @return std::string
 */
std::string UsuarioLogado::getSenha()
{
    return this->usuario->getSenha();
}

/**
 * @brief Verifica se o usuario logado tem acesso a determinada permissao
 *
 * @param valor
 * @return true
 * @return false
 *//*
bool UsuarioLogado::verificaPermissao(std::string valor)
{
    //verifica se o valor é uma permissao dentro do vetor de permissoes de usuario
    std::cout << "Verificando permissao catapimbas" << std::endl;
    for (unsigned int i = 0; i < this->usuario->getPermissoes().size(); i++)
    {
        if (this->usuario->getPermissoes()[i] == valor)
        {
            return true;
        }else{
            std::cout << "Permissao nao encontrada" << std::endl;
            return false;
        }
    }
}*/

//adicionar a permissao passada no parametro ao vector de permissoes de usuario
void UsuarioLogado::addPermissao(std::string valor)
{
    //adicionar a permissao passada no parametro ao vector de permissoes da classe pai (usuario)
    this->usuario->addPermissaoUsuario(valor);
}

//remover a permissao passada no parametro do vector de permissoes de usuario
void UsuarioLogado::removePermissao(std::string valor)
{
    this->usuario->removePermissaoUsuario(valor);
}

//retorna o vector de permissoes da classe pai (usuario)

std::vector<std::string> UsuarioLogado::getPermissoes(){
    return this->usuario->getUsuarioPermissoes();
}