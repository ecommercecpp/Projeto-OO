#include "cliente.hpp"

Cliente::Cliente()
{
}

Cliente::Cliente(std::string nome, std::string cpf_cnpj, std::string endereco, std::string email, int tipo, std::string telefone) : Pessoa(nome, cpf_cnpj, endereco, email, tipo)
{
	setTelefone(telefone);
}

std::string Cliente::getTelefone()
{
	return telefone;
}

void Cliente::setTelefone(std::string t)
{ 
	// valida se o telefone tem entre 10 e 11 digitos
	if (t.length() >= 10 && t.length() <= 11)
	{
		telefone = t;
	}
	else
	{
		throw InvalidTelefoneException();
	}
}