#include "pessoa.hpp"

Pessoa::Pessoa()
{
    nome = "";
    cpfCnpj = "";
    endereco = "";
    email = "";
    tipo = 0;
}

Pessoa::Pessoa(string nome, string cpfCnpj, string endereco, string email, int tipo)
{
    this->nome = nome;
    this->cpfCnpj = cpfCnpj;
    this->endereco = endereco;
    this->email = email;
    this->tipo = tipo;
}

bool Pessoa::validaCpfCnpj()
{
    return true;
}

string Pessoa::getNome()
{
    return nome;
}
void Pessoa::setNome(string nome)
{
    this->nome = nome;
}

string Pessoa::getCpfCnpj()
{
    return cpfCnpj;
}

void Pessoa::setCpfCnpj(string cpfCnpj)
{
    this->cpfCnpj = cpfCnpj;
}

string Pessoa::getEndereco()
{
    return endereco;
}

void Pessoa::setEndereco(string endereco);
{
    this->endereco = endereco;
}

string Pessoa::getEmail()
{
    return email;
}

void Pessoa::setEmail(string email)
{
    this->email = email;
}