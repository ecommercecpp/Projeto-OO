#include "salario.hpp"
#include "exceptions.hpp"

Salario::Salario()
{
}

Salario::Salario(double valor, bool status, int motivo)
: status(status)
{
	setValor(valor);
	setMotivo(motivo);
	this->status = status;
	data = ec::Date();
}

void Salario::setMotivo(int motivo)
{
	if (motivo != 1 && motivo != 2)
	{
		throw InvalidSalarioException();
	}
	else
	{
		this->motivo = motivo;
	}
}

void Salario::setValor(double valor)
{
	if (valor < 0)
	{
		throw InvalidSalarioException();
	}
	else
	{
		this->valor = valor;
	}
}

double Salario::getValor()
{
	return valor;
}

bool Salario::getStatus()
{
	return status;
}

int Salario::getMotivo()
{
	return motivo;
}

ec::Date Salario::getDataAlteracao()
{
	return data;
}