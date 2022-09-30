
#ifndef _VENDA_HPP_
#define _VENDA_HPP_

#include "date.h"
#include "cliente.hpp"
#include "produto.hpp"
#include "lote.hpp"
#include "exceptions.hpp"

#include <map>

class Venda
{
	protected:
		Produto produto;
        Cliente cliente;
        ec::Date dataVenda;
		int quantidade;
        int id;
        std::map<int, Lote> lotes_venda;
	public:
        Venda();
        Venda(ec::Date dataVenda, int quantidade, int id, Produto produto, Cliente cliente);
        void atualizaLote();
        void realizaVenda();
};

#endif