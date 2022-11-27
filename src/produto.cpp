#include <iostream>

#include "produto.hpp"
#include "Data.h"

/**
 * @brief Construct a new Produto:: Produto object
 *
 */
Produto::Produto()
{
    //this-> qtdEstoque = 0;
}

/**
 * @brief Construct a new Produto:: Produto object
 *
 * @param nome
 * @param codigo
 * @param valorDeVenda
 * @param tamanhoDoLoteMinimo
 * @param categoria
 * @param estoqueMinimo
 */
/*
Produto::Produto(std::string nome, int codigo, double valorDeVenda, int tamanhoDoLoteMinimo, Categoria *categoria, int estoqueMinimo)
{
    setNome(nome);
    setCodigo(codigo);
    setValorDeVenda(valorDeVenda);
    setTamanhoDoLoteMinimo(tamanhoDoLoteMinimo);
    setCategoria(categoria);
    setEstoqueMinimo(estoqueMinimo);
}
*/
/**
 * @brief Destroy the Produto:: Produto object
 *
 */
Produto::~Produto()
{
}

/**
 * @brief Seta o nome do produto
 *
 * @param nome
 */
void Produto::setNome(std::string nome)
{
    this->nome = nome;
}

/**
 * @brief Seta o codigo do produto
 *
 * @param codigo
 */
void Produto::setCodigo(int codigo)
{
    this->codigo = codigo;
}

/**
 * @brief Seta o valor de venda do produto
 *
 * @param valorDeVenda
 */
void Produto::setValorDeVenda(double valorDeVenda)
{
    this->valorDeVenda = valorDeVenda;
}

/**
 * @brief Seta o tamanho do lote minimo do produto
 *
 * @param tamanhoDoLoteMinimo
 */
void Produto::setTamanhoDoLoteMinimo(int tamanhoDoLoteMinimo)
{
    this->tamanhoDoLoteMinimo = tamanhoDoLoteMinimo;
}

/**
 * @brief Seta a categoria do produto
 *
 * @param categoria
 */
void Produto::setCategoria(Categoria *categoria)
{
    this->categoria = categoria;
}

/**
 * @brief Seta o estoque minimo do produto
 *
 * @param estoqueMinimo
 */
void Produto::setEstoqueMinimo(int estoqueMinimo)
{
    this->estoqueMinimo = estoqueMinimo;
}

/**
 * @brief Seta a quantidade do estoque do produto
 *
 * @param qtdEstoque
 */
void Produto::setQtdEstoque(int qtdEstoque)
{
    this->qtdEstoque = qtdEstoque;
}

/**
 * @brief Seta a ordem de produção do produto
 *
 * @param ordem
 *//*
void Produto::setOrdem(OrdemProducao *ordem)
{
    this->ordem = ordem;
}*/

/**
 * @brief Retorna o nome do produto
 *
 * @return std::string
 */
std::string Produto::getNome()
{
    return nome;
}

/**
 * @brief Retorna o codigo do produto
 *
 * @return int
 */
int Produto::getCodigo()
{
    return codigo;
}

/**
 * @brief Retorna o valor de venda do produto
 *
 * @return double
 */
double Produto::getValorDeVenda()
{
    return valorDeVenda;
}

/**
 * @brief Retorna o tamanho do lote minimo do produto
 *
 * @return int
 */
int Produto::getTamanhoDoLoteMinimo()
{
    return tamanhoDoLoteMinimo;
}

/**
 * @brief Retorna a categoria do produto
 *
 * @return Categoria*
 */
Categoria *Produto::getCategoria()
{
    return categoria;
}

/**
 * @brief Retorna o estoque minimo do produto
 *
 * @return int
 */
int Produto::getEstoqueMinimo()
{
    return estoqueMinimo;
}

/**
 * @brief Retorna a quantidade do estoque do produto
 *
 * @return int
 */
int Produto::getQtdEstoque()
{
    return qtdEstoque;
}

/**
 * @brief Retorna a ordem de produção do produto
 *
 * @return OrdemProducao*
 */
/*
OrdemProducao *Produto::getOrdem()
{
    return ordem;
}*/

/**
 * @brief Adiciona uma quantidade do de estoque ao produto
 *
 * @param qtd
 */
void Produto::adicionarEstoque(int qtd)
{
    qtdEstoque += qtd;
}

/**
 * @brief Remove uma quantidade do estoque do produto
 *
 * @param qtd
 */
void Produto::removerEstoque(int qtd)
{
    qtdEstoque -= qtd;
}

/**
 * @brief Retorna se a quantidade de estoque está de acordo com a quantidade minima permitida
 *
 * @return true
 * @return false
 */
bool Produto::verificarEstoque()
{
    if (qtdEstoque < estoqueMinimo)
    {
        return true;
    }
    else
    {
        return false; // trocar pra uma exceção
    }
}

/**
 * @brief Retorna se a ordem está correta
 *
 * @return true
 * @return false
 *//*
bool Produto::verificarOrdem()
{
    if (ordem == NULL)
    {
        return true;
    }
    else
    {
        return false; // trocar pra uma exceção
    }
}*/
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

void Produto::imprimirMateriaPrima(){
    std::cout << "\nMateria Prima: " << std::endl;
    for (unsigned int i = 0; i < materiaPrimaLista.size(); i++)
    {
        std::cout << materiaPrimaLista[i]->getNome() << std::endl;
    }
}

/**
 * @brief Imprime todas as informações sobre o produto
 *
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
   /* if (ordem != NULL)
    {
        std::cout << "Ordem de producao: " << ordem->getCodigo() << std::endl;
    }
    else
    {
        std::cout << "Ordem de producao: Nao ha ordem de producao" << std::endl;
    }*/
}

void Produto::adicionarMateriaPrima(MateriaPrima* materiaPrima)
{
    //materiaPrima->adicionarProduto(this);
    this->materiaPrimaLista.push_back(materiaPrima);
}

void Produto::removerMateriaPrima(MateriaPrima* materiaPrima){
    //materiaPrima->removerProduto(this);
    //this->materiaPrimaLista.remove(materiaPrima);
}