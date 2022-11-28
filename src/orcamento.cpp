#include <iostream>
#include <ctime>

#include "empresa.hpp"
#include "orcamento.hpp"

/**
 * @brief Construct a new Orcamento:: Orcamento object
 *
 */
Orcamento::Orcamento()
{
    std::string permissao = "cadastrarOrcamento";
    std::string atributos = "produtos, valorTotal, data";
    Empresa::getEmpresa()->gerarLogEscrita("orcamento", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("orcamento", "Orcamento");
        throw AcessDeniedException();
    }else{
        this->produtos = std::vector<Produto*>();
        this->cliente = new Cliente();
        this->valorTotal = 0;
    }
}

/**
 * @brief Retorna os produtos do orçamento
 *
 * @return std::map<int, Produto>
 */
std::vector<Produto*> Orcamento::getProdutos()
{
    std::string permissao = "verificarProdutosOrcamento";
    std::string atributos = "produtos";
    Empresa::getEmpresa()->gerarLogLeitura("orcamento", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("orcamento", "getProdutos");
        throw AcessDeniedException();
    }else{
        return this->produtos;
    }
}

/**
 * @brief Seta os produtos do orçamento
 *
 * @param produtos
 */
void Orcamento::setProdutos(std::vector<Produto*> produtos)
{
    std::string permissao = "cadastrarProdutosOrcamento";
    std::string atributos = "produtos";
    Empresa::getEmpresa()->gerarLogEscrita("orcamento", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("orcamento", "setProdutos");
        throw AcessDeniedException();
    }else{
        this->produtos = produtos;
    }
}

/**
 * @brief Retorna o cliente do orçamento
 *
 * @return Cliente*
 */
Cliente *Orcamento::getCliente()
{
    std::string permissao = "verificarClienteOrcamento";
    std::string atributos = "cliente";
    Empresa::getEmpresa()->gerarLogLeitura("orcamento", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("orcamento", "getCliente");
        throw AcessDeniedException();
    }else{
        return this->cliente;
    }
}

/**
 * @brief Seta o cliente do orçamento
 *
 * @param cliente
 */
void Orcamento::setCliente(Cliente *cliente)
{
    std::string permissao = "cadastrarClienteOrcamento";
    std::string atributos = "cliente";
    Empresa::getEmpresa()->gerarLogEscrita("orcamento", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("orcamento", "setCliente");
        throw AcessDeniedException();
    }else{
        this->cliente = cliente;
    }
}

/**
 * @brief Retorna o valor total do orçamento
 *
 * @return double
 */
double Orcamento::getValorTotal()
{
    std::string permissao = "verificarValorTotalOrcamento";
    std::string atributos = "valorTotal";
    Empresa::getEmpresa()->gerarLogLeitura("orcamento", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("orcamento", "getValorTotal");
        throw AcessDeniedException();
    }else{
        return this->valorTotal;
    }
}

/**
 * @brief Seta o valor total do orçamento
 *
 * @param valorTotal
 */
void Orcamento::setValorTotal(double valorTotal)
{
    std::string permissao = "cadastrarValorTotalOrcamento";
    std::string atributos = "valorTotal";
    Empresa::getEmpresa()->gerarLogEscrita("orcamento", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("orcamento", "setValorTotal");
        throw AcessDeniedException();
    }else{
        this->valorTotal = valorTotal;
    }
}

/**
 * @brief Retorna a data do orçamento
 *
 * @return Data
 */
Data Orcamento::getData()
{
    std::string permissao = "verificarDataOrcamento";
    std::string atributos = "data";
    Empresa::getEmpresa()->gerarLogLeitura("orcamento", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("orcamento", "getData");
        throw AcessDeniedException();
    }else{
        return this->data;
    }
}

/**
 * @brief Seta a data do orçamento
 *
 * @param data
 */
void Orcamento::setData(Data data)
{
    std::string permissao = "cadastrarDataOrcamento";
    std::string atributos = "data";
    Empresa::getEmpresa()->gerarLogEscrita("orcamento", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("orcamento", "setData");
        throw AcessDeniedException();
    }else{
        this->data = data;
    }
}

/**
 * @brief Seta a data do orçamento
 *
 * @param dataString
 */
void Orcamento::setDataString(std::string dataString)
{
    std::string permissao = "cadastrarDataStringOrcamento";
    std::string atributos = "data";
    Empresa::getEmpresa()->gerarLogEscrita("orcamento", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("orcamento", "setDataString");
        throw AcessDeniedException();
    }else{
        this->data = Data(dataString);
    }
}

/**
 * @brief Retorna a data do orçamento
 *
 * @return std::string
 */
std::string Orcamento::getDataString()
{
    std::string permissao = "verificarDataStringOrcamento";
    std::string atributos = "data";
    Empresa::getEmpresa()->gerarLogLeitura("orcamento", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("orcamento", "getDataString");
        throw AcessDeniedException();
    }else{
        return this->dataString;
    }
}

/**
 * @brief Retorna a ordem de produção do orçamento
 *
 * @return OrdemProducao
 */
OrdemProducao Orcamento::getOrdemProducao()
{
    std::string permissao = "verificarOrdemProducaoOrcamento";
    std::string atributos = "ordemProducao";
    Empresa::getEmpresa()->gerarLogLeitura("orcamento", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("orcamento", "getOrdemProducao");
        throw AcessDeniedException();
    }else{
        return this->ordemProducao;
    }
}

/**
 * @brief Seta a ordem de produção do orçamento
 *
 * @param ordemProducao
 */
void Orcamento::setOrdemProducao(OrdemProducao ordemProducao)
{
    std::string permissao = "cadastrarOrdemProducaoOrcamento";
    std::string atributos = "ordemProducao";
    Empresa::getEmpresa()->gerarLogEscrita("orcamento", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("orcamento", "setOrdemProducao");
        throw AcessDeniedException();
    }else{
        this->ordemProducao = ordemProducao;
    }
}

/**
 * @brief Imprime o orçamento
 *
 */
void Orcamento::imprimeOrcamento(Cliente *cliente, std::vector<Produto*> produtos)
{
    std::string permissao = "imprimirOrcamento";
    std::string atributos = "imprimirOrcamento";
    Empresa::getEmpresa()->gerarLogEscrita("orcamento", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("orcamento", "imprimeOrcamento");
        throw AcessDeniedException();
    }else{
    std::cout << "-------Imprimindo o Orcamento--------" << std::endl;
    
    std::cout << "Cliente: " << this->cliente->getNome() << std::endl;
    for (unsigned int i = 0; i < this->produtos.size(); i++)
    {
        std::cout << "Produto: " << this->produtos[i]->getNome() << std::endl;
        std::cout << "Valor: " << this->produtos[i]->getValorDeVenda() << std::endl;
    }
    std::cout << "Data: " << this->dataString << std::endl;
    }
}

/**
 * @brief Gera o orçamento
 *
 * @param cliente
 * @param produtos
 */
void Orcamento::gerarOrcamento(Cliente *clienteO, int qtd, std::vector<Produto *> produtos)
{
    std::string permissao = "gerarOrcamento";
    std::string atributos = "gerarOrcamento";
    Empresa::getEmpresa()->gerarLogEscrita("orcamento", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("orcamento", "gerarOrcamento");
        throw AcessDeniedException();
    }
    else
    {
        Data data;
        time_t tt;
        struct tm *ti;
        time(&tt);
        ti = localtime(&tt);

        this->qtd = qtd;
        this->cliente = clienteO;
        this->produtos = produtos;
        this->data = data.dateNow();
        this->dataString = asctime(ti);

        for (unsigned int i = 0; i < produtos.size(); i++)
        {
            this->valorTotal += produtos[i]->getValorDeVenda();
            if (produtos[i]->getQtdEstoque() <= produtos[i]->getEstoqueMinimo())
            {
                produtos[i]->setValorDeVenda(produtos[i]->getValorDeVenda() * 1.05);            }
        }
    }
}
