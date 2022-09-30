#ifndef _FUNCIONARIO_HPP_
#define _FUNCIONARIO_HPP_

#include <vector>

#include "date.h"
#include "pessoa.hpp"
#include "salario.hpp"
#include "cargo.hpp"
#include "departamento.hpp"

class Funcionario : public Pessoa
{
	protected:
		int matricula;
		ec::Date nascimento;
		ec::Date admissao;
		ec::Date demissao;
		bool status;
		std::vector<Salario> salario;
		Departamento departamento;
		Cargo cargo;
	public:
		Funcionario();
		Funcionario(std::string nome, std::string cpf, std::string endereco, std::string email, ec::Date nascimento, ec::Date admissao, std::vector<Salario> salario, Departamento departamento, Cargo cargo);
		void demitir();
		bool empregado();
};

#endif