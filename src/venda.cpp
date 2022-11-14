#include <iostream>
#include <string>
#include <vector>
#include <map>

#include "venda.hpp"

Venda::Venda()
{
}

Venda::Venda(Data dataVenda, int quantidade, int id, Produto produto, Cliente cliente)
{
    this->dataVenda = dataVenda;
    this->quantidade = quantidade;
    this->id = id;
    this->produto = produto;
    this->cliente = cliente;
}

Venda::~Venda()
{
}

void Venda::setDataVenda(Data dataVenda)
{
    this->dataVenda = dataVenda;
}

void Venda::setQuantidade(int quantidade)
{
    this->quantidade = quantidade;
}

void Venda::setId(int id)
{
    this->id = id;
}

void Venda::setProduto(Produto produto)
{
    this->produto = produto;
}

void Venda::setCliente(Cliente cliente)
{
    this->cliente = cliente;
}

void Venda::setLotesVenda(std::vector<int> lotes_venda)
{
    this->lotes_venda = lotes_venda;
}

Data Venda::getDataVenda()
{
    return dataVenda;
}

int Venda::getQuantidade()
{
    return quantidade;
}

int Venda::getId()
{
    return id;
}

Produto Venda::getProduto()
{
    return produto;
}

Cliente Venda::getCliente()
{
    return cliente;
}

std::vector<int> Venda::getLotesVenda()
{
    return lotes_venda;
}

void Venda::realizaVenda()
{
    //this->atualizaLote();
    //this->atualizaEstoque();
}
