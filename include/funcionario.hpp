#ifndef _FUNCIONARIO_HPP_
#define _FUNCIONARIO_HPP_

#include <vector>

#include "Data.h"
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
		bool status;
		std::vector<Salario> salario;
		Departamento departamento;
		Cargo cargo;
	public:
		Funcionario();
		Funcionario(std::string nome, std::string cpf_cnpj, std::string endereco, std::string email, Data nascimento, Data admissao, std::vector<Salario> salario, Departamento departamento, Cargo cargo);
		void demitir();
		bool empregado();
		void setMatricula(int matricula);
		int getMatricula();
		void setNascimento(Data nascimento);
		Data getNascimento();
		void setAdmissao(Data admissao);
		Data getAdmissao();
		void setDemissao(Data demissao);
		Data getDemissao();
		void setStatus(bool status);
		bool getStatus();
		void setSalario(std::vector<Salario> salario);
		std::vector<Salario> getSalario();
		void setDepartamento(Departamento departamento);
		Departamento getDepartamento();
		void setCargo(Cargo cargo);
		Cargo getCargo();
		
};

#endif