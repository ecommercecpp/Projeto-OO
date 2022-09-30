#include "autoload.hpp"
#include "doctest"

TEST_CASE("Testando instanciação dos lotes - LOTE")
{
	CHECK_NOTHROW(Lote());
	CHECK_NOTHROW(Lote(ec::Date(1, 1, 2000), 10, 5, 1, 1));
}

TEST_CASE("Testando instanciação de lotes com quantidade inválida - LOTE")
{
	CHECK_THROWS_AS(Lote(ec::Date(1, 1, 2000), -1, -1, 1, 1), InvalidQuantidadeLoteException);
}