#include "autoload.hpp"
#include "doctest"

TEST_CASE("Testa a instanciacao de um produto - PRODUTO")
{
	// testa a instanciaçao com o primeiro construtor
	CHECK_NOTHROW(Produto());
	// testa a instanciaçao com o segundo construtor
	CHECK_NOTHROW(Produto("Produto 1", 1, 10, 10.0, Lote(ec::Date(1, 1, 2019), 10, 1, 1), Categoria()));
	// testa a instanciaçao com o terceiro construtor
	CHECK_NOTHROW(Produto("Produto 1", 1, 10, 10.0, std::map<int, Lote>(), Categoria()));
	// testa a instanciaçao com o quarto construtor
	CHECK_NOTHROW(Produto("Produto 1", 1, 10, 10.0, Lote(ec::Date(1, 1, 2019), 10, 1, 1)));
	// atualiza uma categoria
	CHECK_NOTHROW(Produto().atualizaCategoria(Categoria()));
	// testa a disponibilidade de um produto
	CHECK(Produto().disponivel(10) == false);
}