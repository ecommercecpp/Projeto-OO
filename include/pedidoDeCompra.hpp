#ifndef _PEDIDODECOMPRA_HPP_
#define _PEDIDODECOMPRA_HPP_

#include <string>
#include <vector>

#include "venda.hpp"
#include "credito.hpp"
#include "boleto.hpp"

class PedidoDeCompra
{
	private:
        int id;
        Data data;
        std::vector<Venda> historicoVendas;
        bool status;
        std::string registroAtual;
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
        void selecionaMetodo(Credito*, Boleto*);
};

#endif