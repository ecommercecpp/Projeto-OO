#ifndef _DEPARTAMENTO_HPP_
#define _DEPARTAMENTO_HPP_

#include <string>

class Departamento
{
	protected:
		int id;
		static int current_id;
		std::string nome;
	public:
		Departamento();
		Departamento(std::string nome);
		int getId();
		std::string getNome();
};

#endif