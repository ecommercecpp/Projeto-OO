#include "cliente.hpp"

Cliente::Cliente()
{
}

Cliente::Cliente(std::string nome, std::string cpf_cnpj, std::string endereco, std::string email, int tipo, std::string telefone) : Pessoa(nome, cpf_cnpj, endereco, email, tipo), telefone(telefone)
{
}

std::string Cliente::getTelefone()
{
	return telefone;
}

void Cliente::setTelefone(std::string t)
{
	telefone = t;
}