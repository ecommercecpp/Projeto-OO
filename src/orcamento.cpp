#include <iostream>

#include "orcamento.hpp"

Orcamento::Orcamento()
{
    this->produtos = std::map<int, Produto>();
    this->cliente = new Cliente();
    this->valorTotal = 0;
}

Orcamento::Orcamento(std::map<int, Produto> produtos, Cliente *cliente, double valorTotal)
{
    this->produtos = produtos;
    this->cliente = cliente;
    this->valorTotal = valorTotal;
}

std::map<int, Produto> Orcamento::getProdutos()
{
    return this->produtos;
}

void Orcamento::setProdutos(std::map<int, Produto> produtos)
{
    this->produtos = produtos;
}

Cliente *Orcamento::getCliente()
{
    return this->cliente;
}

void Orcamento::setCliente(Cliente *cliente)
{
    this->cliente = cliente;
}

double Orcamento::getValorTotal()
{
    return this->valorTotal;
}

void Orcamento::setValorTotal(double valorTotal)
{
    this->valorTotal = valorTotal;
}