#include "doctest"
#include "exceptions.hpp"
#include "pessoa.hpp"
#include "empresa.hpp"
#include "usuario.hpp"
#include "usuarioLogado.hpp"

TEST_CASE("Construtor padrão da classe Pessoa")
{
    Usuario *user = new Usuario();

    user->setPermissoes();
    CHECK_NOTHROW(Pessoa());
}

TEST_CASE("Testando inialização do usuario")
{
    CHECK_NOTHROW(Usuario());
    // testa um usuario cpf
    CHECK_NOTHROW(Usuario("Usuario de Testes CPF", "18130552035", "Rua de Testes", "userCPF@email.com", 0, "3199999999"));
    // testa um usuario com cnpj
    CHECK_NOTHROW(Usuario("Usuario de Testes CNPJ", "16106859000110", "Rua de Testes", "userCNPJ@email.com", 1, "31999999999"));
    // testa com um telefone invalido
    CHECK_THROWS_AS(Usuario("Usuario de Testes - TELEFONE", "16106859000110", "Rua de Testes", "tel@email.com", 1, "1"), InvalidTelefoneException);
}

TEST_CASE("Testando inicialização da classe Pessoa")
{
    CHECK_NOTHROW(Pessoa());
    // testa um usuario cpf
    CHECK_NOTHROW(Pessoa("Pessoa de Testes CPF", "18130552035", "Rua de Testes", "p1@email.com", 0, "3199999999"));
    // testa um usuario com cnpj
    CHECK_NOTHROW(Pessoa("Pessoa de Testes CNPJ", "16106859000110", "Rua de Testes", "p2@email.com", 1, "31999999999"));
    // testa com um telefone invalido
    CHECK_THROWS_AS(Pessoa("Pessoa de Testes - TELEFONE", "16106859000110", "Rua de Testes", "p3@email.com", 1, "1"), InvalidTelefoneException);
}