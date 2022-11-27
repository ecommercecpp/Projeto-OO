#include <iostream>
#include <ctime>

#include "orcamento.hpp"

/**
 * @brief Construct a new Orcamento:: Orcamento object
 *
 */
Orcamento::Orcamento()
{
    this->produtos = std::vector<Produto*>();
    this->cliente = new Cliente();
    this->valorTotal = 0;
}

/**
 * @brief Construct a new Orcamento:: Orcamento object
 *
 * @param produtos
 * @param cliente
 * @param valorTotal
 */
/*
Orcamento::Orcamento(std::map<int, Produto> produtos, Cliente *cliente, double valorTotal)
{
    this->produtos = produtos;
    this->cliente = cliente;
    this->valorTotal = valorTotal;
}
*/
/**
 * @brief Retorna os produtos do orçamento
 *
 * @return std::map<int, Produto>
 */
std::vector<Produto*> Orcamento::getProdutos()
{
    return this->produtos;
}

/**
 * @brief Seta os produtos do orçamento
 *
 * @param produtos
 */
void Orcamento::setProdutos(std::vector<Produto*> produtos)
{
    this->produtos = produtos;
}

/**
 * @brief Retorna o cliente do orçamento
 *
 * @return Cliente*
 */
Cliente *Orcamento::getCliente()
{
    return this->cliente;
}

/**
 * @brief Seta o cliente do orçamento
 *
 * @param cliente
 */
void Orcamento::setCliente(Cliente *cliente)
{
    this->cliente = cliente;
}

/**
 * @brief Retorna o valor total do orçamento
 *
 * @return double
 */
double Orcamento::getValorTotal()
{
    return this->valorTotal;
}

/**
 * @brief Seta o valor total do orçamento
 *
 * @param valorTotal
 */
void Orcamento::setValorTotal(double valorTotal)
{
    this->valorTotal = valorTotal;
}

/**
 * @brief Retorna a data do orçamento
 *
 * @return Data
 */
Data Orcamento::getData()
{
    return this->data;
}

/**
 * @brief Seta a data do orçamento
 *
 * @param data
 */
void Orcamento::setData(Data data)
{
    this->data = data;
}

/**
 * @brief Seta a data do orçamento
 *
 * @param dataString
 */
void Orcamento::setDataString(std::string dataString)
{
    this->dataString = dataString;
}

/**
 * @brief Retorna a data do orçamento
 *
 * @return std::string
 */
std::string Orcamento::getDataString()
{
    return this->dataString;
}

/**
 * @brief Retorna a ordem de produção do orçamento
 *
 * @return OrdemProducao
 */
OrdemProducao Orcamento::getOrdemProducao()
{
    return this->ordemProducao;
}

/**
 * @brief Seta a ordem de produção do orçamento
 *
 * @param ordemProducao
 */
void Orcamento::setOrdemProducao(OrdemProducao ordemProducao)
{
    this->ordemProducao = ordemProducao;
}

/**
 * @brief Imprime o orçamento
 *
 */
void Orcamento::imprimeOrcamento()
{
    std::cout << "-------Imprimindo o Orcamento--------" << std::endl;
    std::cout << "Cliente: " << this->cliente->getNome() << std::endl;
    std::cout << "Valor total: " << this->valorTotal << std::endl;
    //std::cout << "Produtos: " << std::endl;
    for (unsigned int i = 0; i < this->produtos.size(); i++)
    {
        std::cout << "Produto: " << this->produtos[i]->getNome() << std::endl;
        std::cout << "Valor: " << this->produtos[i]->getValorDeVenda() << std::endl;
    }
    std::cout << "Data: " << this->dataString << std::endl;
}

/**
 * @brief Gera o orçamento
 *
 * @param cliente
 * @param produtos
 */
void Orcamento::gerarOrcamento(Cliente *cliente, int qtd ,std::vector<Produto*> produtos)
{
    Data data;
    time_t tt;
    struct tm * ti;
    time (&tt);
    ti = localtime(&tt);
  
    this->qtd = qtd;
    this->cliente = cliente;
    this->produtos = produtos;
    this->data = data.dateNow();
    this->dataString = asctime(ti);
    this->valorTotal = 0;
    for (unsigned int i = 0; i < this->produtos.size(); i++)
    {
        if(this->qtd < this->produtos[i]->getEstoqueMinimo()){
        //gerar ordem de producao
        this->ordemProducao.gerarOrdemProducao(this->produtos[i], this->produtos[i]->getEstoqueMinimo());
        }
        this->valorTotal += this->produtos[i]->getValorDeVenda();
    }
    //se depois do orcamento a qtd de produtos for menos que a qtd minima gera uma ordem de producao
}
