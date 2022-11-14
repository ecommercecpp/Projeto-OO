#include <iostream>

#include "produto.hpp"
#include "Data.h"

Produto::Produto()
{
}

Produto::Produto(std::string nome, int codigo, double valorDeVenda, int tamanhoDoLoteMinimo, Categoria* categoria, int estoqueMinimo)
{
    setNome(nome);
    setCodigo(codigo);
    setValorDeVenda(valorDeVenda);
    setTamanhoDoLoteMinimo(tamanhoDoLoteMinimo);
    setCategoria(categoria);
    setEstoqueMinimo(estoqueMinimo);
}

Produto::~Produto()
{
}

void Produto::setNome(std::string nome)
{
    this->nome = nome;
}

void Produto::setCodigo(int codigo)
{
    this->codigo = codigo;
}

void Produto::setValorDeVenda(double valorDeVenda)
{
    this->valorDeVenda = valorDeVenda;
}

void Produto::setTamanhoDoLoteMinimo(int tamanhoDoLoteMinimo)
{
    this->tamanhoDoLoteMinimo = tamanhoDoLoteMinimo;
}

void Produto::setCategoria(Categoria* categoria)
{
    this->categoria = categoria;
}

void Produto::setEstoqueMinimo(int estoqueMinimo)
{
    this->estoqueMinimo = estoqueMinimo;
}

void Produto::setQtdEstoque(int qtdEstoque)
{
    this->qtdEstoque = qtdEstoque;
}

void Produto::setOrdem(OrdemProducao* ordem)
{
    this->ordem = ordem;
}

std::string Produto::getNome()
{
    return nome;
}

int Produto::getCodigo()
{
    return codigo;
}

double Produto::getValorDeVenda()
{
    return valorDeVenda;
}

int Produto::getTamanhoDoLoteMinimo()
{
    return tamanhoDoLoteMinimo;
}

Categoria* Produto::getCategoria()
{
    return categoria;
}

int Produto::getEstoqueMinimo()
{
    return estoqueMinimo;
}

int Produto::getQtdEstoque()
{
    return qtdEstoque;
}

OrdemProducao* Produto::getOrdem()
{
    return ordem;
}

void Produto::adicionarEstoque(int qtd)
{
    qtdEstoque += qtd;
}

void Produto::removerEstoque(int qtd)
{
    qtdEstoque -= qtd;
}

bool Produto::verificarEstoque()
{
    if (qtdEstoque < estoqueMinimo)
    {
        return true;
    }
    else
    {
        return false;//trocar pra uma exceção
    }
}

bool Produto::verificarOrdem()
{
    if (ordem == NULL)
    {
        return true;
    }
    else
    {
        return false;//trocar pra uma exceção
    }
}
/*
void Produto::criarOrdem()
{
    if (verificarOrdem())
    {
        Data data;
        ordem = new OrdemProducao(this, data, tamanhoDoLoteMinimo);
    }
    else
    {
        std::cout << "Já existe uma ordem de produção para este produto" << std::endl;//criar excecaopra isso
    }
    ordem = new OrdemProducao(this, data, tamanhoDoLoteMinimo);
}

void Produto::removerOrdem()
{
    delete ordem;
    ordem = NULL;
}
*/
void Produto::imprimir()
{
    std::cout << "Nome: " << nome << std::endl;
    std::cout << "Codigo: " << codigo << std::endl;
    std::cout << "Valor de venda: " << valorDeVenda << std::endl;
    std::cout << "Tamanho do lote minimo: " << tamanhoDoLoteMinimo << std::endl;
    std::cout << "Categoria: " << categoria->getNome() << std::endl;
    std::cout << "Estoque minimo: " << estoqueMinimo << std::endl;
    std::cout << "Quantidade em estoque: " << qtdEstoque << std::endl;
    if (ordem != NULL)
    {
        std::cout << "Ordem de producao: " << ordem->getCodigo() << std::endl;
    }
    else
    {
        std::cout << "Ordem de producao: Nao ha ordem de producao" << std::endl;
    }
}
