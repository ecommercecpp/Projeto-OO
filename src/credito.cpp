#include <iostream>

#include "credito.hpp"

Credito::Credito()
{
}

Credito::Credito(std::string codigoDeSeguranca, std::string nomeDoTitular, Data dataDeVencimento, std::string numeroDoCartao)
{
    this->codigoDeSeguranca = codigoDeSeguranca;
    this->nomeDoTitular = nomeDoTitular;
    this->dataDeVencimento = dataDeVencimento;
    this->numeroDoCartao = numeroDoCartao;
}

std::string Credito::getCodigoDeSeguranca()
{
    return this->codigoDeSeguranca;
}

void Credito::setCodigoDeSeguranca(std::string codigoDeSeguranca)
{
    this->codigoDeSeguranca = codigoDeSeguranca;
}

std::string Credito::getNomeDoTitular()
{
    return this->nomeDoTitular;
}

void Credito::setNomeDoTitular(std::string nomeDoTitular)
{
    this->nomeDoTitular = nomeDoTitular;
}

Data Credito::getDataDeVencimento()
{
    return this->dataDeVencimento;
}

void Credito::setDataDeVencimento(Data dataDeVencimento)
{
    this->dataDeVencimento = dataDeVencimento;
}

std::string Credito::getNumeroDoCartao()
{
    return this->numeroDoCartao;
}

void Credito::setNumeroDoCartao(std::string numeroDoCartao)
{
    this->numeroDoCartao = numeroDoCartao;
}
