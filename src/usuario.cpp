#include "usuario.hpp"

Usuario::Usuario()
{
}
Usuario::Usuario(std::string nome, std::string cpf_cnpj, std::string endereco, std::string email, int tipo, std::string login, std::string senha) : Pessoa(nome, cpf_cnpj, endereco, email, tipo)
{
    this->login = login;
    this->senha = senha;
}