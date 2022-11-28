#include <iostream>
#include <ctime>

#include "ordemProducao.hpp"
#include "empresa.hpp"

/**
 * @brief Construct a new Ordem Producao:: Ordem Producao object
 *
 */
OrdemProducao::OrdemProducao()
{
}

/**
 * @brief Destroy the Ordem Producao:: Ordem Producao object
 *
 */
OrdemProducao::~OrdemProducao()
{
}

/**
 * @brief Seta codigo do lote
 *
 * @param codigo
 */
void OrdemProducao::setCodigo(int codigo)
{
    std::string permissao = "setCodigoOrdemProducao";
    std::string atributos = "codigo: " ;//+ std::to_string(codigo);
    Empresa::getEmpresa()->gerarLogEscrita("ordemProducao", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("ordemProducao", "setCodigo");
        throw AcessDeniedException();
    }else{    
        this->codigo = codigo;
    }
}

/**
 * @brief Retorna o codigo da ordem de produção
 *
 * @return int
 */
int OrdemProducao::getCodigo()
{
    std::string permissao = "getCodigoOrdemProducao";
    std::string atributos = "codigo: " ;//+ std::to_string(codigo);
    Empresa::getEmpresa()->gerarLogEscrita("ordemProducao", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("ordemProducao", "getCodigo");
        throw AcessDeniedException();
    }else{    
        return this->codigo;
    }
}

/**
 * @brief Seta o lote da ordem de produção
 *
 * @param lote
 */
void OrdemProducao::setLote(Lote lote)
{
    std::string permissao = "setLoteOrdemProducao";
    std::string atributos = "lote: " ;//+ lote.getNome();
    Empresa::getEmpresa()->gerarLogEscrita("ordemProducao", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("ordemProducao", "setLote");
        throw AcessDeniedException();
    }else{    
        this->lote = lote;
    }
}

/**
 * @brief Seta a data da ordem de produção
 *
 * @param data
 */
void OrdemProducao::setData(Data data)
{
    std::string permissao = "setDataOrdemProducao";
    std::string atributos = "data: " ;//+ data.getData();
    Empresa::getEmpresa()->gerarLogEscrita("ordemProducao", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("ordemProducao", "setData");
        throw AcessDeniedException();
    }else{    
        this->dataDaOrdem = data;
    }
}

/**
 * @brief Retorna o lote da ordem de produção
 *
 * @return Lote
 */
Lote OrdemProducao::getLote()
{
    std::string permissao = "getLoteOrdemProducao";
    std::string atributos = "lote: " ;//+ lote.getNome();
    Empresa::getEmpresa()->gerarLogEscrita("ordemProducao", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("ordemProducao", "getLote");
        throw AcessDeniedException();
    }else{    
        return this->lote;
    }
}

/**
 * @brief Retorna a data da ordem de produção
 *
 * @return Data
 */
Data OrdemProducao::getData()
{
    std::string permissao = "getDataOrdemProducao";
    std::string atributos = "data: " ;//+ data.getData();
    Empresa::getEmpresa()->gerarLogEscrita("ordemProducao", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("ordemProducao", "getData");
        throw AcessDeniedException();
    }else{    
        return dataDaOrdem;
    }
}

/**
 * @brief Retorna a quantidade da ordem de produção
 *
 * @return int
 */
int OrdemProducao::getQuantidade()
{
    std::string permissao = "getQuantidadeOrdemProducao";
    std::string atributos = "quantidade: " ;//+ std::to_string(quantidade);
    Empresa::getEmpresa()->gerarLogEscrita("ordemProducao", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("ordemProducao", "getQuantidade");
        throw AcessDeniedException();
    }else{    
        return quantidade;
    }
}

/**
 * @brief Seta a quantidade da ordem de produção
 *
 * @param quantidade
 */
void OrdemProducao::setQuantidade(int quantidade)
{
    std::string permissao = "setQuantidadeOrdemProducao";
    std::string atributos = "quantidade: " ;//+ std::to_string(quantidade);
    Empresa::getEmpresa()->gerarLogEscrita("ordemProducao", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("ordemProducao", "setQuantidade");
        throw AcessDeniedException();
    }else{    
        this->quantidade = quantidade;
    }
}

/**
 * @brief Seta a data em string
 *
 */
void OrdemProducao::setDataString(std::string dataString)
{
    std::string permissao = "setDataStringOrdemProducao";
    std::string atributos = "dataString: " + dataString;
    Empresa::getEmpresa()->gerarLogEscrita("ordemProducao", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("ordemProducao", "setDataString");
        throw AcessDeniedException();
    }else{    
        this->dataString = dataString;
    }
}

/**
 * @brief Imprime na tela os dados da ordem de produção
 *
 */
void OrdemProducao::imprimeOrdem()
{
    std::string permissao = "imprimeOrdemProducao";
    std::string atributos = "codigo: " ;//+ std::to_string(codigo) + " lote: " + lote.getNome() + " data: " + data.getData() + " quantidade: " + std::to_string(quantidade);
    Empresa::getEmpresa()->gerarLogEscrita("ordemProducao", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("ordemProducao", "imprimeOrdem");
        throw AcessDeniedException();
    }else{    
    std::cout << "Ordem de producao: " << std::endl;
    std::cout << "Lote: " << getLote().getNmrLote() << std::endl;
    std::cout << "Data: " << getDataString() << std::endl;
    std::cout << "Quantidade: " << getQuantidade() << std::endl;
    }
}

/**
 * @brief Retorna a data em string
 *
 * @return std::string
 */
std::string OrdemProducao::getDataString()
{
    std::string permissao = "getDataStringOrdemProducao";
    std::string atributos = "dataString: ";// + dataString;
    Empresa::getEmpresa()->gerarLogEscrita("ordemProducao", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("ordemProducao", "getDataString");
        throw AcessDeniedException();
    }else{    
        return dataString;
    }
}

/**
 * @brief Gera a ordem de produção
 *
 * @param produto
 * @param quantidade
 */
void OrdemProducao::gerarOrdemProducao(Produto *produto, int quantidade)
{
    std::string permissao = "gerarOrdemProducao";
    std::string atributos = "produto: " ;//+ produto->getNome() + " quantidade: " + std::to_string(quantidade);
    Empresa::getEmpresa()->gerarLogEscrita("ordemProducao", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("ordemProducao", "gerarOrdemProducao");
        throw AcessDeniedException();
    }
    else
    {
        Lote lote;
        Data data;
        time_t tt;
        struct tm *ti;
        time(&tt);
        ti = localtime(&tt);
        lote.setNmrLote(produto->getCodigo());

        setLote(lote);
        setData(data.dateNow());
        setDataString(asctime(ti));
        setQuantidade(quantidade);
        std::cout << "Ordem de producao gerada com sucesso!" << std::endl;
        imprimeOrdem();
    }
}
