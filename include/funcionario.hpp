#ifndef _FUNCIONARIO_HPP_
#define _FUNCIONARIO_HPP_

#include <vector>

#include "data.hpp"
#include "pessoa.hpp"
#include "cargo.hpp"
#include "departamento.hpp"

class Salario{};

class Funcionario
{
	protected:
		int matricula;
		Data nascimento;
		Data admissao;
		Data demissao;
		bool situacao;
		std::vector<Salario> salario;
		Departamento departamento;
		Cargo cargo;
	public:
		Funcionario();
		Funcionario(int matricula, Data nascimento, Data admissao, bool situacao, std::vector<Salario> salario, Departamento departamento, Cargo cargo);
		Funcionario(int matricula, Data nascimento, Data admissao, Data demissao, bool situacao, std::vector<Salario> salario, Departamento departamento, Cargo cargo);
		void demitir();
};

#endif