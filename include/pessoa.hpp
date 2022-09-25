#ifndef _PESSOA_HPP_
#define _PESSOA_HPP_

#include <string>

class Pessoa
{
	protected:
		std::string nome, cpf_cnpj, endereco, email;
		int tipo; // 0 - Física, 1 - Jurídica
	public:
		Pessoa();
		Pessoa(std::string nome, std::string cpf_cnpj, std::string endereco, std::string email, int tipo);
};

#endif