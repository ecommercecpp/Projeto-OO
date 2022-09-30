#include "autoload.hpp"
#include "doctest"

TEST_CASE("Testando incrementação de IDs - DEPARTAMENTO")
{
	Departamento d1;
	Departamento d2;
	Departamento d3;
	CHECK_EQ(d1.getId(), 1);
	CHECK_EQ(d2.getId(), 2);
	CHECK_EQ(d3.getId(), 3);
}

TEST_CASE("Testando permanecia de nomes e ids - DEPARTAMENTO")
{
	Departamento d1("Departamento 1");
	Departamento d2("Departamento 2");
	Departamento d3("Departamento 3");
	CHECK_EQ(d1.getId(), 4);
	CHECK_EQ(d2.getId(), 5);
	CHECK_EQ(d3.getId(), 6);
	CHECK_EQ(d1.getNome(), "Departamento 1");
	CHECK_EQ(d2.getNome(), "Departamento 2");
	CHECK_EQ(d3.getNome(), "Departamento 3");
}