#include "funcionario.hpp"

Funcionario::Funcionario()
{
}

Funcionario::Funcionario(std::string nome, std::string cpf, std::string endereco, std::string email, Data nascimento, Data admissao, std::vector<Salario> salario, Departamento departamento, Cargo cargo)
: Pessoa(nome, cpf, endereco, email, 0)
{
	this->nascimento = nascimento;
	this->admissao = admissao;
	this->salario = salario;
	this->departamento = departamento;
	this->cargo = cargo;
}

void Funcionario::demitir()
{
	demissao = Data();
}