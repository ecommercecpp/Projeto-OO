#ifndef _PEDIDODECOMPRA_HPP_
#define _PEDIDODECOMPRA_HPP_

#include <string>
#include <vector>

#include "Data.h"
#include "venda.hpp"
#include "credito.hpp"
#include "boleto.hpp"
#include "cliente.hpp"

class PedidoDeCompra
{
private:
        int id;
        Data data;
        std::vector<Venda> historicoVendas;
        bool status;
        std::string registroAtual;
        std::string dataString;

public:
        PedidoDeCompra();
        PedidoDeCompra(int id, Data data, std::vector<Venda> historicoVendas, bool status, std::string registroAtual);
        int getId();
        void setId(int id);
        Data getData();
        void setData(Data data);
        std::vector<Venda> getHistoricoVendas();
        void setHistoricoVendas(std::vector<Venda> historicoVendas);
        bool getStatus();
        void setStatus(bool status);
        std::string getRegistroAtual();
        void setRegistroAtual(std::string registroAtual);
        void selecionaMetodo(Cliente *, Credito *, Boleto *);
        void setDataString(std::string dataString);
        std::string getDataString();
        void gerarPedidoDeCompra();
        void imprimePedidoDeCompra();
};

#endif