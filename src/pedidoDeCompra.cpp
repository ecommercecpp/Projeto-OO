#include <iostream>

#include "pedidoDeCompra.hpp"

/**
 * @brief Construct a new Pedido De Compra:: Pedido De Compra object
 * 
 */
PedidoDeCompra::PedidoDeCompra()
{
}

/**
 * @brief Construct a new Pedido De Compra:: Pedido De Compra object
 * 
 * @param id 
 * @param data 
 * @param historicoVendas 
 * @param status 
 * @param registroAtual 
 */
PedidoDeCompra::PedidoDeCompra(int id, Data data, std::vector<Venda> historicoVendas, bool status, std::string registroAtual)
{
    this->id = id;
    this->data = data;
    this->historicoVendas = historicoVendas;
    this->status = status;
    this->registroAtual = registroAtual;
}

/**
 * @brief Retorna o id do pedido de compra
 * 
 * @return int 
 */
int PedidoDeCompra::getId()
{
    return this->id;
}

/**
 * @brief Seta o id do pedido de compra
 * 
 * @param id 
 */
void PedidoDeCompra::setId(int id)
{
    this->id = id;
}

/**
 * @brief Retorna a data do pedido de compra
 * 
 * @return Data 
 */
Data PedidoDeCompra::getData()
{
    return this->data;
}

/**
 * @brief Seta a data do pedido de compra
 * 
 * @param data 
 */
void PedidoDeCompra::setData(Data data)
{
    this->data = data;
}

/**
 * @brief Retorna o historico de vendas do pedido de compra
 * 
 * @return std::vector<Venda> 
 */
std::vector<Venda> PedidoDeCompra::getHistoricoVendas()
{
    return this->historicoVendas;
}

/**
 * @brief Seta o historico de vendas do pedido de compra
 * 
 * @param historicoVendas 
 */
void PedidoDeCompra::setHistoricoVendas(std::vector<Venda> historicoVendas)
{
    this->historicoVendas = historicoVendas;
}

/**
 * @brief Retorna o status do pedido de compra
 * 
 * @return bool 
 */
bool PedidoDeCompra::getStatus()
{
    return this->status;
}

/**
 * @brief Seta o status do pedido de compra
 * 
 * @param status 
 */
void PedidoDeCompra::setStatus(bool status)
{
    this->status = status;
}

/**
 * @brief Retorna o registro atual do pedido de compra
 * 
 * @return std::string 
 */
std::string PedidoDeCompra::getRegistroAtual()
{
    return this->registroAtual;
}

/**
 * @brief Seta o registro atual do pedido de compra
 * 
 * @param registroAtual 
 */
void PedidoDeCompra::setRegistroAtual(std::string registroAtual)
{
    this->registroAtual = registroAtual;
}

/**
 * @brief Recebe os dados do usuário para selecionar e executar o método de pagamento
 * 
 * @param credito 
 * @param boleto 
 */
void PedidoDeCompra::selecionaMetodo(Credito* credito, Boleto* boleto)
{
    std::cout << "Selecione o metodo de pagamento: " << std::endl;
    std::cout << "1 - Credito" << std::endl;
    std::cout << "2 - Boleto" << std::endl;
    int opcao;
    std::cin >> opcao;
    switch (opcao)
    {
    case 1:
        {
            std::cout << "Digite o numero do cartao: ";
            std::string numeroDoCartao;
            std::cin >> numeroDoCartao;
            credito->setNumeroDoCartao(numeroDoCartao);
            std::cout << "Digite o nome do titular: ";
            std::string nomeDoTitular;
            std::cin >> nomeDoTitular;
            credito->setNomeDoTitular(nomeDoTitular);
            std::cout << "Digite a data de validade: ";
            Data dataDeValidade;
            credito->setDataDeVencimento(dataDeValidade);
            std::cout << "Digite o codigo de seguranca: ";
            std::string codigoDeSeguranca;
            std::cin >> codigoDeSeguranca;
            credito->setCodigoDeSeguranca(codigoDeSeguranca);
            break;
        }
    case 2:
        {
            std::cout << "Digite o codigo do boleto: ";
            int codigoDeBarras;
            std::cin >> codigoDeBarras;
            boleto->setCodigoDeBarras(codigoDeBarras);
            std::cout << "Digite o nome do pagador: ";
            std::string nomeDoPagador;
            std::cin >> nomeDoPagador;
            boleto->setNomeDoPagador(nomeDoPagador);
            std::cout << "Digite a data de vencimento: ";
            Data dataDeVencimento;
            boleto->setDataDeVencimento(dataDeVencimento);
            std::cout << "Digite o prazo de pagamento: 1 - 30d, 2 - 60d, 3 - 90d: ";
            int prazoDePagamento;
            std::cin >> prazoDePagamento;
            boleto->setPrazoDePagamento(prazoDePagamento);
            break;            
        }
    default:
        std::cout << "Opcao invalida!" << std::endl;
        break;
    }
}