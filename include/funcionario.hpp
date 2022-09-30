#ifndef _FUNCIONARIO_HPP_
#define _FUNCIONARIO_HPP_

#include <vector>

#include "data.hpp"
#include "pessoa.hpp"
#include "salario.hpp"
#include "cargo.hpp"
#include "departamento.hpp"

class Funcionario : public Pessoa
{
	protected:
		int matricula;
		Data nascimento;
		Data admissao;
		Data demissao;
		std::vector<Salario> salario;
		Departamento departamento;
		Cargo cargo;
	public:
		Funcionario();
		Funcionario(std::string nome, std::string cpf, std::string endereco, std::string email, Data nascimento, Data admissao, std::vector<Salario> salario, Departamento departamento, Cargo cargo);
		void demitir();
};

#endif