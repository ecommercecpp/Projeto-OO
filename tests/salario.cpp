#include "autoload.hpp"
#include "doctest"

TEST_CASE("Testa a inserção de valores no salário - SALARIO")
{
	// inserindo salário corretamente
	Salario salario = Salario(1100, true, 1);
	CHECK(salario.getValor() == 1100);
	CHECK(salario.getStatus() == true);
	CHECK(salario.getMotivo() == 1);
	CHECK(salario.getDataAlteracao().format() == ec::Date().format());
}