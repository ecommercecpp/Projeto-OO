#include <iostream>

#include "boleto.hpp"

Boleto::Boleto()
{
}

Boleto::Boleto(int codigoDeBarras, std::string nomeDoPagador, Data dataDeVencimento, int prazoDePagamento)
{
    this->codigoDeBarras = codigoDeBarras;
    this->nomeDoPagador = nomeDoPagador;
    this->dataDeVencimento = dataDeVencimento;
    this->prazoDePagamento = prazoDePagamento;
}

int Boleto::getCodigoDeBarras()
{
    return this->codigoDeBarras;
}

void Boleto::setCodigoDeBarras(int codigoDeBarras)
{
    this->codigoDeBarras = codigoDeBarras;
}

std::string Boleto::getNomeDoPagador()
{
    return this->nomeDoPagador;
}

void Boleto::setNomeDoPagador(std::string nomeDoPagador)
{
    this->nomeDoPagador = nomeDoPagador;
}

Data Boleto::getDataDeVencimento()
{
    return this->dataDeVencimento;
}

void Boleto::setDataDeVencimento(Data dataDeVencimento)
{
    this->dataDeVencimento = dataDeVencimento;
}

int Boleto::getPrazoDePagamento()
{
    return this->prazoDePagamento;
}

void Boleto::setPrazoDePagamento(int prazoDePagamento)
{
    this->prazoDePagamento = prazoDePagamento;
}
