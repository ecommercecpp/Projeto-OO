#ifndef _CLIENTE_HPP_
#define _CLIENTE_HPP_

#include <string>

#include "pessoa.hpp"

class Cliente : public Pessoa
{
	private:
		std::string telefone;
		void setTelefone(std::string telefone);
	public:
		Cliente();
		Cliente(std::string nome, std::string cpf_cnpj, std::string endereco, std::string email, int tipo, std::string telefone);
		std::string getTelefone();
};

#endif