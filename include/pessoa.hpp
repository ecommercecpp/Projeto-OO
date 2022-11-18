#ifndef _PESSOA_HPP_
#define _PESSOA_HPP_

#include <string>

#include "exceptions.hpp"

class Pessoa
{
	protected:
		std::string nome, cpf_cnpj, endereco, email;
		int tipo; // 0 - Física, 1 - Jurídica
	private:

	public:
		Pessoa();
		Pessoa(std::string nome, std::string cpf_cnpj, std::string endereco, std::string email, int tipo);
		std::string getNome();
		std::string getCpf_cnpj();
		std::string getEndereco();
		std::string getEmail();
		int getTipo();
		void setNome(std::string nome);
		void setcpf_cnpj(std::string cpf_cnpj);
		void setEmail(std::string email);
		void setTipo(int tipo);
		void setEndereco(std::string endereco);
};	

#endif