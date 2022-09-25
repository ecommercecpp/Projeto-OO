#include "funcionario.hpp"

Funcionario::Funcionario()
{

}

Funcionario::Funcionario(int matricula, Data nascimento, Data admissao, bool situacao, std::vector<Salario> salario, Departamento departamento, Cargo cargo) :
	matricula(matricula), nascimento(nascimento), admissao(admissao), situacao(situacao), salario(salario), departamento(departamento), cargo(cargo)
{
}

Funcionario::Funcionario(int matricula, Data nascimento, Data admissao, Data demissao, bool situacao, std::vector<Salario> salario, Departamento departamento, Cargo cargo) :
	matricula(matricula), nascimento(nascimento), admissao(admissao), demissao(demissao), situacao(situacao), salario(salario), departamento(departamento), cargo(cargo)
{
}

void Funcionario::demitir()
{
	situacao = false;
	demissao = Data();
}