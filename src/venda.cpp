#include "venda.hpp"
#include "cliente.hpp"
#include "produto.hpp"
#include <map>

#include <numeric>
 
int Venda::getId()
{
    return id;
}

void Venda::setId(int id)
{
    this->id = id;
}
int Venda::getQuantidade()
{    
    return quantidade;
}

void Venda::setQuantidade(int quantidade)
{
    this->quantidade = quantidade;
}
Data Venda::getDataVenda()
{
    return dataVenda;
}

void Venda::setDataVenda(Data dataVenda)
{
    this->dataVenda = dataVenda;
}

Cliente Venda::getCliente()
{
    return cliente;
}

void Venda::setCliente(Cliente cliente)
{
    this->cliente = cliente;
}
Produto Venda::getProduto()
{
    return produto;
}

void Venda::setProduto(Produto produto)
{
    this->produto = produto;
}

void Venda::verificaQtdLote()
{  
}