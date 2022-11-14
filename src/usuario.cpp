#include <iostream>

#include "usuario.hpp"

Usuario::Usuario()
{
}
Usuario::Usuario(std::string nome, std::string cpf_cnpj, std::string endereco, std::string email, int tipo, std::string login, std::string senha) : Pessoa(nome, cpf_cnpj, endereco, email, 1)
{
    this->nome = nome;
    this->cpf_cnpj = cpf_cnpj;
    this->endereco = endereco;
    this->email = email;
    this->tipo = 1; //conferir se eh 1 ou 0
    this->login = login;
    this->senha = senha;
}
std::string Usuario::getLogin()
{
    return this->login;
}
void Usuario::setLogin(std::string login)
{
    this->login = login;
}
std::string Usuario::getSenha()
{
    return this->senha;
}
void Usuario::setSenha(std::string senha)
{
    this->senha = senha;
}
std::vector<std::string> Usuario::getPermissoes()
{
    return this->permissoes;
}
void Usuario::setPermissoes(std::vector<std::string> permissoes)
{
    this->permissoes = permissoes;
}
