#ifndef _FUNCIONARIO_HPP_
#define _FUNCIONARIO_HPP_

#include <vector>

#include "pessoa.hpp"

class Departamento{};
class Cargo{};
class Salario{};
class Data{};

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