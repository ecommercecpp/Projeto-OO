#include <iostream>

#include "funcionario.hpp"

Funcionario::Funcionario(std::string nome, std::string cpf_cnpj, std::string endereco, std::string email, Data nascimento, Data admissao, std::vector<Salario> salario, Departamento departamento, Cargo cargo) : Pessoa(nome, cpf_cnpj, endereco, email, 1)
{
	this->status = true;
	this->nome = nome;
	this->cpf_cnpj = cpf_cnpj;
	this->endereco = endereco;
	this->email = email;
	this->tipo = 1;
	this->nascimento = nascimento;
	this->admissao = admissao;
	this->salario = salario;
	this->departamento = departamento;
	this->cargo = cargo;
}

void Funcionario::demitir()
{
	this->status = false;
}

bool Funcionario::empregado()
{
	return this->status;
}

void Funcionario::setMatricula(int matricula)
{
	this->matricula = matricula;
}

int Funcionario::getMatricula()
{
	return this->matricula;
}

void Funcionario::setNascimento(Data nascimento)
{
	this->nascimento = nascimento;
}

Data Funcionario::getNascimento()
{
	return this->nascimento;
}

void Funcionario::setAdmissao(Data admissao)
{
	this->admissao = admissao;
}

Data Funcionario::getAdmissao()
{
	return this->admissao;
}

void Funcionario::setDemissao(Data demissao)
{
	this->demissao = demissao;
}

Data Funcionario::getDemissao()
{
	return this->demissao;
}

void Funcionario::setStatus(bool status)
{
	this->status = status;
}

bool Funcionario::getStatus()
{
	return this->status;
}

void Funcionario::setSalario(std::vector<Salario> salario)
{
	this->salario = salario;
}

std::vector<Salario> Funcionario::getSalario()
{
	return this->salario;
}

void Funcionario::setDepartamento(Departamento departamento)
{
	this->departamento = departamento;
}

Departamento Funcionario::getDepartamento()
{
	return this->departamento;
}

void Funcionario::setCargo(Cargo cargo)
{
	this->cargo = cargo;
}

Cargo Funcionario::getCargo()
{
	return this->cargo;
}
