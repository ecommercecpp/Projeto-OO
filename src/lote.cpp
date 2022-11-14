#include <iostream>

#include "lote.hpp"

Lote::Lote()
{
}

Lote::Lote(int quantidade, int quantidadeMinima, int nmrLote, int codigoProduto)
{
    setQuantidade(quantidade);
    setQuantidadeMinima(quantidadeMinima);
    setNmrLote(nmrLote);
    setCodigoProduto(codigoProduto);
}

Lote::~Lote()
{
}

void Lote::setQuantidade(int quantidade)
{
    this->quantidade = quantidade;
}

void Lote::setQuantidadeMinima(int quantidadeMinima)
{
    this->quantidadeMinima = quantidadeMinima;
}

void Lote::setNmrLote(int nmrLote)
{
    this->nmrLote = nmrLote;
}

void Lote::setCodigoProduto(int codigoProduto)
{
    this->codigoProduto = codigoProduto;
}

void Lote::setDataDeProducao(Data dataDeProducao)
{
    this->dataDeProducao = dataDeProducao;
}

void Lote::setProduto(std::string produto)
{
    this->produto = produto;
}

int Lote::getQuantidade()
{
    return quantidade;
}

int Lote::getQuantidadeMinima()
{
    return quantidadeMinima;
}

int Lote::getNmrLote()
{
    return nmrLote;
}

int Lote::getCodigoProduto()
{
    return codigoProduto;
}

Data Lote::getDataDeProducao()
{
    return dataDeProducao;
}

std::string Lote::getProduto()
{
    return produto;
}
