#include "funcionario.hpp"

Funcionario::Funcionario()
{
	this->status = true;
}

Funcionario::Funcionario(std::string nome, std::string cpf, std::string endereco, std::string email, ec::Date nascimento, ec::Date admissao, std::vector<Salario> salario, Departamento departamento, Cargo cargo)
: Pessoa(nome, cpf, endereco, email, 0)
{
	this->nascimento = nascimento;
	this->admissao = admissao;
	this->salario = salario;
	this->departamento = departamento;
	this->cargo = cargo;
	this->status = true;
}

void Funcionario::demitir()
{
	demissao = ec::Date();
	status = false;
}

bool Funcionario::empregado()
{
	return status;
}