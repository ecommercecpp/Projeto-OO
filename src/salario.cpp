#include <iostream>

#include "exceptions.hpp"
#include "salario.hpp"

/**
 * @brief Construct a new Salario:: Salario object
 *
 */
Salario::Salario()
{
}

/**
 * @brief Construct a new Salario:: Salario object
 *
 * @param valor
 * @param status
 * @param motivo // 1 - Promoção 2 - Reajuste (dissidio)
 */
Salario::Salario(double valor, bool status, int motivo)
{
	this->valor = valor;
	this->status = status;
	this->motivo = motivo;
}
/*
Salario::Salario(double valor, bool status, int motivo)
	: status(status)
{
	setValor(valor);
	setMotivo(motivo);
	this->status = status;
	data = Data();
}*/

/**
 * @brief Seta o motivo para o salário
 *
 * @param motivo
 */
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

/**
 * @brief Seta o valor do salário
 *
 * @param valor
 */
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

/**
 * @brief Retorna o valor do salário
 *
 * @return double
 */
double Salario::getValor()
{
	return valor;
}

/**
 * @brief Retorna o status do salário
 *
 * @return bool
 */
bool Salario::getStatus()
{
	return status;
}

/**
 * @brief Retorna o motivo do salário
 *
 * @return int
 */
int Salario::getMotivo()
{
	return motivo;
}

/**
 * @brief Retorna a data do salário
 *
 * @return Data
 */
Data Salario::getDataAlteracao()
{
	return data;
}