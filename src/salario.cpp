#include <iostream>

#include "exceptions.hpp"
#include "salario.hpp"

Salario::Salario()
{
}

Salario::Salario(double valor, bool status, int motivo)
: status(status)
{
	setValor(valor);
	setMotivo(motivo);
	this->status = status;
	data = Data();
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

Data Salario::getDataAlteracao()
{
	return data;
}