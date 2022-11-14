#include <iostream>

#include "metodoPagamento.hpp"

MetodoPagamento::MetodoPagamento()
{
}

MetodoPagamento::MetodoPagamento(std::string codigo, std::string nome, Data dataDeVencimento)
{
    this->codigo = codigo;
    this->nome = nome;
    this->dataDeVencimento = dataDeVencimento;
}

std::string MetodoPagamento::getCodigo()
{
    return this->codigo;
}

void MetodoPagamento::setCodigo(std::string codigo)
{
    this->codigo = codigo;
}

std::string MetodoPagamento::getNome()
{
    return this->nome;
}

void MetodoPagamento::setNome(std::string nome)
{
    this->nome = nome;
}

Data MetodoPagamento::getDataDeVencimento()
{
    return this->dataDeVencimento;
}

void MetodoPagamento::setDataDeVencimento(Data dataDeVencimento)
{
    this->dataDeVencimento = dataDeVencimento;
}
