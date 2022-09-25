#ifndef _DEPARTAMENTO_HPP_
#define _DEPARTAMENTO_HPP_

#include <string>

class Departamento
{
	protected:
		std::string nome;
	public:
		Departamento();
		Departamento(std::string nome);
		std::string getNome();
		void setNome(std::string nome);
};

#endif