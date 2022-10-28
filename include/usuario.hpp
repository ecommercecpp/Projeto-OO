#ifndef _USUARIO_HPP_
#define _USUARIO_HPP_

#include "pessoa.hpp"
#include <string>

class Usuario : public Pessoa
{
	private:
		std::string login;
		std::string senha;
	public:
		Usuario();
		Usuario(std::string nome, std::string cpf_cnpj, std::string endereco, std::string email, int tipo, std::string login, std::string senha);
		
};


#endif