#include <iostream>

#include "usuario.hpp"

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
Usuario::Usuario(std::string nome, std::string cpf_cnpj, std::string endereco, std::string email, int tipo, std::string login, std::string senha) : Pessoa(nome, cpf_cnpj, endereco, email, 1)
{
    this->nome = nome;
    this->cpf_cnpj = cpf_cnpj;
    this->endereco = endereco;
    this->email = email;
    this->tipo = tipo; // conferir se eh 1 ou 0
    this->login = login;
    this->senha = senha;
}

/**
 * @brief Retorna o login do usuário
 *
 * @return std::string
 */
std::string Usuario::getLogin()
{
    return this->login;
}

/**
 * @brief Seta o login do USuário
 *
 * @param login
 */
void Usuario::setLogin(std::string login)
{
    this->login = login;
}

/**
 * @brief Retorna a senha do usuário
 *
 * @return std::string
 */
std::string Usuario::getSenha()
{
    return this->senha;
}

/**
 * @brief Seta a senha do usuário
 *
 * @param senha
 */
void Usuario::setSenha(std::string senha)
{
    this->senha = senha;
}

/**
 * @brief Retorna as permissões que aquele usuário possui
 *
 * @return std::vector<std::string>
 */
std::vector<std::string> Usuario::getUsuarioPermissoes(){
    //retorna as permissões que aquele usuário possui
    return this->permissoes;
}

/**
 * @brief Seta as permissões do usuário
 *
 * @param permissoes
 */
void Usuario::setPermissoes(std::vector<std::string> permissoes)
{
    //adiciona as permissões ao vetor de permissões
    for (unsigned int i = 0; i < permissoes.size(); i++)
    {
        this->permissoes.push_back(permissoes[i]);
    }
    //imprime as permissões
    for (unsigned int i = 0; i < this->permissoes.size(); i++)
    {
        std::cout << this->permissoes[i] << std::endl;
    }
}

/**
 * @brief Adiciona uma permissão ao usuário
 *
 * @param valor
 */
void Usuario::addPermissaoUsuario(std::string valor){
    this->permissoes.push_back(valor);
}

void Usuario::removePermissaoUsuario(std::string valor){
    for (unsigned int i = 0; i < this->permissoes.size(); i++)
    {
        if (this->permissoes[i] == valor)
        {
            this->permissoes.erase(this->permissoes.begin() + i);
        }
    }
}