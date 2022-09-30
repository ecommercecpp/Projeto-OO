#include "autoload.hpp"
#include "doctest"

TEST_CASE("Testa a inserção de valores no Funcionário - FUNCIONÁRIO")
{
	// instacia suas datas
	ec::Date data_nascimento = ec::Date(1, 1, 1990);
	ec::Date data_admissao = ec::Date(1, 1, 2010);
	// instancia seus salários
	Salario salario1 = Salario(1100, true, 1);
	Salario salario2 = Salario(1200, true, 1);
	// cria um vetor de salários
	std::vector<Salario> salarios;
	// adiciona os salários no vetor
	salarios.push_back(salario1);
	salarios.push_back(salario2);
	// instancia seu departamento
	Departamento departamento = Departamento("Departamento de Testes");
	// instancia seu cargo
	Cargo cargo = Cargo("Cargo de Testes");
	// instancia seu funcionário
	CHECK_NOTHROW(Funcionario("Funcionário de Testes", "18130552035", "Rua de Testes", "teste@email.com", data_nascimento, data_admissao, salarios, departamento, cargo));
	Funcionario funcionario = Funcionario("Funcionário de Testes", "18130552035", "Rua de Testes", "teste@email.com", data_nascimento, data_admissao, salarios, departamento, cargo);
	// demite o funcionario
	funcionario.demitir();
	// verifica se o funcionário foi demitido
	CHECK(funcionario.empregado() == false);
}