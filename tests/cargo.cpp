#include "cargo.hpp"
#include "doctest"

TEST_CASE("Testando incrementação de IDs - CARGP")
{
	Cargo c1;
	Cargo c2;
	Cargo c3;
	CHECK_EQ(c1.getId(), 1);
	CHECK_EQ(c2.getId(), 2);
	CHECK_EQ(c3.getId(), 3);
}

TEST_CASE("Testando permanecia de nomes e ids - DEPARTAMENTO")
{
	Cargo c1("Cargo 1");
	Cargo c2("Cargo 2");
	Cargo c3("Cargo 3");
	CHECK_EQ(c1.getId(), 4);
	CHECK_EQ(c2.getId(), 5);
	CHECK_EQ(c3.getId(), 6);
	CHECK_EQ(c1.getNome(), "Cargo 1");
	CHECK_EQ(c2.getNome(), "Cargo 2");
	CHECK_EQ(c3.getNome(), "Cargo 3");
}