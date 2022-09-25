#include "salario.hpp"

Salario::Salario()
{
}

Salario::Salario(double valor, bool status, int motivo, Data data) :
	valor(valor), status(status), motivo(motivo), data(data)
{
}

double Salario::getValor()
{
	return valor;
}

void Salario::setValor(double v)
{
	valor = v;
}

bool Salario::getStatus()
{
	return status;
}

void Salario::setStatus(bool s)
{
	status = s;
}