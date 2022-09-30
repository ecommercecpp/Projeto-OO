#include "autoload.hpp"
#include "doctest"

TEST_CASE("Testando dados inválidos - PESSOA")
{
	// testa construção com cpf invalido
	CHECK_THROWS_AS(Pessoa("João", "12312312312", "Rua 1", "email@email.com", 0), InvalidCPFException);
	// testa construção com cnpj invalido
	CHECK_THROWS_AS(Pessoa("João", "12312312312312", "Rua 1", "email@email.com", 1), InvalidCNPJException);
	// testa construção com email invalido
	CHECK_THROWS_AS(Pessoa("João", "18130552035", "Rua 1", "emailemail.com", 0), InvalidEmailException);
}

TEST_CASE("Testando dados válidos - PESSOA")
{
	// testa construção com cpf valido e email valido
	CHECK_NOTHROW(Pessoa("João", "18130552035", "Rua 1", "email@email.com", 0));
	// testa construção com cnpj valido e email valido
	CHECK_NOTHROW(Pessoa("João", "16106859000110", "Rua 1", "email@email.com", 1));
}