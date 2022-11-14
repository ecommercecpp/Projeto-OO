#include <iostream>

#include "pedidoDeCompra.hpp"

PedidoDeCompra::PedidoDeCompra()
{
}

PedidoDeCompra::PedidoDeCompra(int id, Data data, std::vector<Venda> historicoVendas, bool status, std::string registroAtual)
{
    this->id = id;
    this->data = data;
    this->historicoVendas = historicoVendas;
    this->status = status;
    this->registroAtual = registroAtual;
}

int PedidoDeCompra::getId()
{
    return this->id;
}

void PedidoDeCompra::setId(int id)
{
    this->id = id;
}

Data PedidoDeCompra::getData()
{
    return this->data;
}

void PedidoDeCompra::setData(Data data)
{
    this->data = data;
}

std::vector<Venda> PedidoDeCompra::getHistoricoVendas()
{
    return this->historicoVendas;
}

void PedidoDeCompra::setHistoricoVendas(std::vector<Venda> historicoVendas)
{
    this->historicoVendas = historicoVendas;
}

bool PedidoDeCompra::getStatus()
{
    return this->status;
}

void PedidoDeCompra::setStatus(bool status)
{
    this->status = status;
}

std::string PedidoDeCompra::getRegistroAtual()
{
    return this->registroAtual;
}

void PedidoDeCompra::setRegistroAtual(std::string registroAtual)
{
    this->registroAtual = registroAtual;
}

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