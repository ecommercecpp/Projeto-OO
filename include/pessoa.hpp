#ifndef _PESSOA_HPP_
#define _PESSOA_HPP_

#include <iostream>

using namespace std;

class Pessoa
{
	protected:
        string nome;
        string cpfCnpj;
        string endereco;
        string email;
        int tipo;
	public:
		Pessoa();
		Pessoa(string nome, string cpfCnpj, string endereco, string email, int tipo);
        bool validaCpfCnpj();
        string getNome();
        void setNome(string);
        string getCpfCnpj();
        void setCpfCnpj(string);
        string getEndereco();
        void setEndereco(string);
        string getEmail();
        void setEmail(string);
};

#endif