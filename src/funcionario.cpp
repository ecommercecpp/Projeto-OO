#include "funcionario.hpp"
#include "data.hpp"
#include "pessoa.hpp"
#include "salario.hpp"
#include "cargo.hpp"

Funcionario::Funcionario()
{
}

Funcionario::Funcionario(std::string nome, std::string cpf_cnpj, std::string endereco, std::string email, int tipo, int matricula, Data nascimento, Data admissao, bool situacao, std::vector<Salario> salario, Departamento departamento, Cargo cargo) : 
	 matricula(matricula), nascimento(nascimento), admissao(admissao), situacao(situacao), salario(salario), departamento(departamento), cargo(cargo)
{
	
}
int Funcionario::getMatricula()
{
	return matricula;
}
Data Funcionario::getNascimento()
{
	return nascimento;
}
Data Funcionario::getAdmissao()
{
	return admissao;
}
Data Funcionario::getDemissao()
{
	return demissao;
}
bool Funcionario::getSituacao()
{
	return situacao;
}
std::vector<Salario> Funcionario::getSalario()
{
	return salario;
}
Departamento Funcionario::getDepartamento()
{
	return departamento;
}
Cargo Funcionario::getCargo()
{
	return cargo;
}

void Funcionario::setMatricula(int matricula)
{
	this->matricula = matricula;
}

void Funcionario::setNascimento(Data nascimento)
{
	this->nascimento = nascimento;
}

void Funcionario::setAdmissao(Data admissao)
{
	this->admissao = admissao;
}

void Funcionario::setDemissao(Data demissao)
{
	this->demissao = demissao;
}

void Funcionario::setSituacao(bool situacao)
{
	this->situacao = situacao;
}

void Funcionario::setSalario(std::vector<Salario> salario)
{
	this->salario = salario;
}

void Funcionario::setDepartamento(Departamento departamento)
{
	this->departamento = departamento;
}

void Funcionario::setCargo(Cargo cargo)
{
	this->cargo = cargo;
}

void Funcionario::demitir()
{
	situacao = false;
	demissao = Data();
}
