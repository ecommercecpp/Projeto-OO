#include "cliente.hpp"
#include "doctest"
#include "exceptions.hpp"

TEST_CASE("Testando inialização do cliente")
{
	CHECK_NOTHROW(Cliente());
	// testa um cliente cpf
	CHECK_NOTHROW(Cliente("Cliente de Testes", "18130552035", "Rua de Testes", "email@email.com", 0, "3199999999"));
	// testa um cliente com cnpj
	CHECK_NOTHROW(Cliente("Cliente de Testes", "16106859000110", "Rua de Testes", "email@email.com", 1, "31999999999"));
	// testa com um telefone invalido
	CHECK_THROWS_AS(Cliente("Cliente de Testes", "16106859000110", "Rua de Testes", "email@email.com", 1, "1"), InvalidTelefoneException);
}