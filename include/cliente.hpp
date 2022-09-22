#ifndef _CLIENTE_HPP_
#define _CLIENTE_HPP_

#include <iostream>
#include <string>

class Cliente : public Pessoa{

	protected:

    std::string Telefone;

	public:
  
		Cliente();
		Cliente(std::string nome, std::string CpfCnpj, std::string endereco, std::string email, int tipo, std::string telefone);
    std::string getTelefone();
    void setTelefone(std::string telefone);
};

#endif