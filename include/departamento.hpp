#ifndef _DEPARTAMENTO_HPP_
#define _DEPARTAMENTO_HPP_

#include "cargo.hpp"

#include <string>
#include <vector>

class Departamento
{
	protected:
		std::string nome;
		std::vector<Cargo> cargos;
	public:
		Departamento();
		Departamento(std::string nome, std::vector<Cargo> cargos);
		std::string getNome();
		void setNome(std::string nome);
		std::vector<Cargo> getCargos();
		void setCargos(std::vector<Cargo> cargos);
};

#endif