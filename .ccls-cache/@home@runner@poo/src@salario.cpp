#ifndef _SALARIO_CPP_
#define _SALARIO_CPP_

#include "salario.hpp"

Salario::Salario()
{
    valor = 0;
    status = false;
    dataAlteracao = Data();
}

Salario::Salario(double valor, bool status, int motivo, Data data)
{
    this->valor = valor;
    this->status = status;
    this->motivo = motivo;
    this->dataAlteracao = data;
}

double Salario::getValor()
{
    return valor;
}

void Salario::setValor(double valor)
{
    this->valor = valor;
}

bool Salario::getStatus();
{
    return status;
}

void Salario::setStatus(bool status)
{
    this->status = status;
}

int Salario::getMotivo()
{
    return motivo;
}

void Salario::setMotivo(int motivo)
{
    this->motivo = motivo;
}

Data Salario::getDataAlteracao()
{
    return dataAlteracao;
}

void Salario::setDataAlteracao(Data dataAlteracao)
{
    this->dataAlteracao = dataAlteracao;
}

#endif