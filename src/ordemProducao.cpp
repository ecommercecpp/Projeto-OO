#include <iostream>

#include "ordemProducao.hpp"

OrdemProducao::OrdemProducao(){

}

OrdemProducao::OrdemProducao(Lote lote, Data data, int quantidade){
    setLote(lote);
    setData(data);
    setQuantidade(quantidade);
}

OrdemProducao::~OrdemProducao(){

}

void OrdemProducao::setCodigo(int codigo){
    this->codigo = codigo;
}

int OrdemProducao::getCodigo(){
    return codigo;
}

void OrdemProducao::setLote(Lote lote){
    this->lote = lote;
}

void OrdemProducao::setData(Data data){
    this->dataDaOrdem = data;
}

Lote OrdemProducao::getLote(){
    return lote;
}

Data OrdemProducao::getData(){
    return dataDaOrdem;
}

int OrdemProducao::getQuantidade(){
    return quantidade;
}

void OrdemProducao::setQuantidade(int quantidade){
    this->quantidade = quantidade;
}

void OrdemProducao::imprimeOrdem(){
    std::cout << "Ordem de produção: " << std::endl;
    std::cout << "Lote: " << getLote().getNmrLote() << std::endl;
    std::cout << "Data: " << getData().getDia() << "/" << getData().getMes() << "/" << getData().getAno() << std::endl;
    std::cout << "Quantidade: " << getQuantidade() << std::endl;
}
