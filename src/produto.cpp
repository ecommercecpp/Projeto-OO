#include <iostream>

#include "produto.hpp"
#include "empresa.hpp"
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
    std::string permissao = "setNomeProduto";
    std::string atributos = "nome: " + nome;
    Empresa::getEmpresa()->gerarLogEscrita("produto", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("produto", "setNome");
        throw AcessDeniedException();
    }else{
        this->nome = nome;
    }
}

/**
 * @brief Seta o codigo do produto
 *
 * @param codigo
 */
void Produto::setCodigo(int codigo)
{
    std::string permissao = "setCodigoProduto";
    std::string atributos = "codigo: " + std::to_string(codigo);
    Empresa::getEmpresa()->gerarLogEscrita("produto", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("produto", "setCodigo");
        throw AcessDeniedException();
    }else{
        this->codigo = codigo;
    }
}

/**
 * @brief Seta o valor de venda do produto
 *
 * @param valorDeVenda
 */
void Produto::setValorDeVenda(double valorDeVenda)
{
    std::string permissao = "setValorDeVendaProduto";
    std::string atributos = "valorDeVenda: " + std::to_string(valorDeVenda);
    Empresa::getEmpresa()->gerarLogEscrita("produto", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("produto", "setValorDeVenda");
        throw AcessDeniedException();
    }else{
        this->valorDeVenda = valorDeVenda;
    }
}

/**
 * @brief Seta o tamanho do lote minimo do produto
 *
 * @param tamanhoDoLoteMinimo
 */
void Produto::setTamanhoDoLoteMinimo(int tamanhoDoLoteMinimo)
{
    std::string permissao = "setTamanhoDoLoteMinimoProduto";
    std::string atributos = "tamanhoDoLoteMinimo: " + std::to_string(tamanhoDoLoteMinimo);
    Empresa::getEmpresa()->gerarLogEscrita("produto", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("produto", "setTamanhoDoLoteMinimo");
        throw AcessDeniedException();
    }else{
        this->tamanhoDoLoteMinimo = tamanhoDoLoteMinimo;
    }
}

/**
 * @brief Seta a categoria do produto
 *
 * @param categoria
 */
void Produto::setCategoria(Categoria *categoria)
{
    std::string permissao = "setCategoriaProduto";
    std::string atributos = "categoria: " + categoria->getNome();
    Empresa::getEmpresa()->gerarLogEscrita("produto", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("produto", "setCategoria");
        throw AcessDeniedException();
    }else{
        this->categoria = categoria;
    }
}

/**
 * @brief Seta o estoque minimo do produto
 *
 * @param estoqueMinimo
 */
void Produto::setEstoqueMinimo(int estoqueMinimo)
{
    std::string permissao = "setEstoqueMinimoProduto";
    std::string atributos = "estoqueMinimo: " + std::to_string(estoqueMinimo);
    Empresa::getEmpresa()->gerarLogEscrita("produto", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("produto", "setEstoqueMinimo");
        throw AcessDeniedException();
    }else{
        this->estoqueMinimo = estoqueMinimo;
    }
}

/**
 * @brief Seta a quantidade do estoque do produto
 *
 * @param qtdEstoque
 */
void Produto::setQtdEstoque(int qtdEstoque)
{
    std::string permissao = "setQtdEstoqueProduto";
    std::string atributos = "qtdEstoque: " + std::to_string(qtdEstoque);
    Empresa::getEmpresa()->gerarLogEscrita("produto", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("produto", "setQtdEstoque");
        throw AcessDeniedException();
    }else{
        this->qtdEstoque = qtdEstoque;
    }
}

/**
 * @brief Retorna o nome do produto
 *
 * @return std::string
 */
std::string Produto::getNome()
{
    std::string permissao = "getNomeProduto";
    std::string atributos = "nome: " + this->nome;
    Empresa::getEmpresa()->gerarLogLeitura("produto", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("produto", "getNome");
        throw AcessDeniedException();
    }else{
        return this->nome;
    }
}

/**
 * @brief Retorna o codigo do produto
 *
 * @return int
 */
int Produto::getCodigo()
{
    std::string permissao = "getCodigoProduto";
    std::string atributos = "codigo: " + std::to_string(this->codigo);
    Empresa::getEmpresa()->gerarLogLeitura("produto", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("produto", "getCodigo");
        throw AcessDeniedException();
    }else{
        return this->codigo;
    }
}

/**
 * @brief Retorna o valor de venda do produto
 *
 * @return double
 */
double Produto::getValorDeVenda()
{
    std::string permissao = "getValorDeVendaProduto";
    std::string atributos = "valorDeVenda: " + std::to_string(this->valorDeVenda);
    Empresa::getEmpresa()->gerarLogLeitura("produto", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("produto", "getValorDeVenda");
        throw AcessDeniedException();
    }else{
        return this->valorDeVenda;
    }
}

/**
 * @brief Retorna o tamanho do lote minimo do produto
 *
 * @return int
 */
int Produto::getTamanhoDoLoteMinimo()
{
    std::string permissao = "getTamanhoDoLoteMinimoProduto";
    std::string atributos = "tamanhoDoLoteMinimo: " + std::to_string(this->tamanhoDoLoteMinimo);
    Empresa::getEmpresa()->gerarLogLeitura("produto", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("produto", "getTamanhoDoLoteMinimo");
        throw AcessDeniedException();
    }else{
        return this->tamanhoDoLoteMinimo;
    }
}

/**
 * @brief Retorna a categoria do produto
 *
 * @return Categoria*
 */
Categoria *Produto::getCategoria()
{
    std::string permissao = "getCategoriaProduto";
    std::string atributos = "categoria: " + this->categoria->getNome();
    Empresa::getEmpresa()->gerarLogLeitura("produto", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("produto", "getCategoria");
        throw AcessDeniedException();
    }else{
        return this->categoria;
    }
}

/**
 * @brief Retorna o estoque minimo do produto
 *
 * @return int
 */
int Produto::getEstoqueMinimo()
{
    std::string permissao = "getEstoqueMinimoProduto";
    std::string atributos = "estoqueMinimo: " + std::to_string(this->estoqueMinimo);
    Empresa::getEmpresa()->gerarLogLeitura("produto", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("produto", "getEstoqueMinimo");
        throw AcessDeniedException();
    }else{
        return this->estoqueMinimo;
    }
}

/**
 * @brief Retorna a quantidade do estoque do produto
 *
 * @return int
 */
int Produto::getQtdEstoque()
{
    std::string permissao = "getQtdEstoqueProduto";
    std::string atributos = "qtdEstoque: " + std::to_string(this->qtdEstoque);
    Empresa::getEmpresa()->gerarLogLeitura("produto", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("produto", "getQtdEstoque");
        throw AcessDeniedException();
    }else{
        return this->qtdEstoque;
    }
}

/**
 * @brief Adiciona uma quantidade do de estoque ao produto
 *
 * @param qtd
 */
void Produto::adicionarEstoque(int qtd)
{
    std::string permissao = "adicionarEstoqueProduto";
    std::string atributos = "qtd: " + std::to_string(qtd);
    Empresa::getEmpresa()->gerarLogEscrita("produto", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("produto", "adicionarEstoque");
        throw AcessDeniedException();
    }else{
        this->qtdEstoque += qtd;
    }
}

/**
 * @brief Remove uma quantidade do estoque do produto
 *
 * @param qtd
 */
void Produto::removerEstoque(int qtd)
{
    std::string permissao = "removerEstoqueProduto";
    std::string atributos = "qtd: " + std::to_string(qtd);
    Empresa::getEmpresa()->gerarLogEscrita("produto", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("produto", "removerEstoque");
        throw AcessDeniedException();
    }else{
        this->qtdEstoque -= qtd;
    }
}

/**
 * @brief Retorna se a quantidade de estoque está de acordo com a quantidade minima permitida
 *
 * @return true
 * @return false
 */
bool Produto::verificarEstoque()
{
    std::string permissao = "verificarEstoqueProduto";
    std::string atributos = "estoqueMinimo: " + std::to_string(this->estoqueMinimo) + " qtdEstoque: " + std::to_string(this->qtdEstoque);
    Empresa::getEmpresa()->gerarLogLeitura("produto", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("produto", "verificarEstoque");
        throw AcessDeniedException();
    }else{
        if(this->qtdEstoque < this->estoqueMinimo){
            return false;
        }else{
            return true;
        }
    }
}

void Produto::imprimirMateriaPrima()
{
    std::string permissao = "imprimirMateriaPrimaProduto";
    std::string atributos = "materiaPrima: " ;//+ this->materiaPrima->getNome();
    Empresa::getEmpresa()->gerarLogLeitura("produto", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("produto", "imprimirMateriaPrima");
        throw AcessDeniedException();
    }else{
        std::cout << "\nMateria Prima: " << std::endl;
        for (unsigned int i = 0; i < materiaPrimaLista.size(); i++)
        {
            std::cout << materiaPrimaLista[i]->getNome() << std::endl;
        }    
    }
}

/**
 * @brief Imprime todas as informações sobre o produto
 *
 */
void Produto::imprimir()
{
    std::string permissao = "imprimirProduto";
    std::string atributos = "nome: " + nome + " descricao preco: " + " estoqueMinimo: " + std::to_string(this->estoqueMinimo) + " qtdEstoque: " + std::to_string(this->qtdEstoque);
    Empresa::getEmpresa()->gerarLogLeitura("produto", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("produto", "imprimir");
        throw AcessDeniedException();
    }else{
        std::cout << "Nome: " << nome << std::endl;
        std::cout << "Codigo: " << codigo << std::endl;
        std::cout << "Valor de venda: " << valorDeVenda << std::endl;
        std::cout << "Tamanho do lote minimo: " << tamanhoDoLoteMinimo << std::endl;
        std::cout << "Categoria: " << categoria->getNome() << std::endl;
        std::cout << "Estoque minimo: " << estoqueMinimo << std::endl;
        std::cout << "Quantidade em estoque: " << qtdEstoque << std::endl;
    }
}

void Produto::adicionarMateriaPrima(MateriaPrima* materiaPrima)
{
    std::string permissao = "adicionarMateriaPrimaProduto";
    std::string atributos = "materiaPrima: " ;
    Empresa::getEmpresa()->gerarLogEscrita("produto", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("produto", "adicionarMateriaPrima");
        throw AcessDeniedException();
    }else{
        materiaPrimaLista.push_back(materiaPrima);
    }
}
