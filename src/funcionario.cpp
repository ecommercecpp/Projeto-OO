#include "funcionario.hpp"

Funcionario::Funcionario()
{

}

Funcionario::Funcionario(std::string nome, std::string cpf_cnpj, std::string endereco, std::string email, int tipo, int matricula, Data nascimento, Data admissao, bool situacao, std::vector<Salario> salario, Departamento departamento, Cargo cargo) : Pessoa(nome, cpf_cnpj, endereco, email, tipo), matricula(matricula), nascimento(nascimento), admissao(admissao), situacao(situacao), salario(salario), departamento(departamento), cargo(cargo)
{

}

void Funcionario::demitir()
{
	situacao = false;
	demissao = Data();
}