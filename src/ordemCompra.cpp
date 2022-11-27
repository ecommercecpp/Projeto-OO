#include <iostream>
#include <ctime>

#include "ordemCompra.hpp"

/**
 * @brief Construct a new Ordem Compra:: Ordem Compra object
 *
 */
OrdemCompra::OrdemCompra()
{
}

/**
 * @brief Destroy the Ordem Compra:: Ordem Compra object
 *
 */
OrdemCompra::~OrdemCompra()
{
}

/**
 * @brief Seta o nome da materia prima
 *
 * @param nomeMP
 */
void OrdemCompra::setNomeMP(std::string nomeMP)
{
    this->nomeMP = nomeMP;
}


/**
 * @brief Set the Data
 * 
 * @param Data
 */
void OrdemCompra::setData(Data data)
{
    this->dataDaOrdem = data;
}


Data OrdemCompra::getData()
{
    return dataDaOrdem;
}

int OrdemCompra::getQuantidade()
{
    return quantidade;
}

void OrdemCompra::setQuantidade(int quantidade)
{
    this->quantidade = quantidade;
}

void OrdemCompra::setDataString(std::string data)
{
    this->dataString = data;
}

std::string OrdemCompra::getDataString(){
    return dataString;
}

/**
 * @brief Gera uma ordem de compra
 *
 * @param Produto
 * @param int
 */
void gerarOrdemCompra(MateriaPrima* mp, int quantidade){
    Lote lote;
    Data data;
    time_t tt;
    struct tm * ti;
    time (&tt);
    ti = localtime(&tt); 
    
    std::cout << "Ordem de compra: " << std::endl;
    
   /* this->setData(data.dateNow());
    this->setDataString(asctime(ti));
    this->setQuantidade(quantidade);
    this->setNomeMP(mp->getNome());*/
    std::cout<<"Ordem de compra gerada com sucesso!"<<std::endl;

}
