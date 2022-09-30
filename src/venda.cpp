#include "venda.hpp"

Venda::Venda()
{
}

Venda::Venda(ec::Date dataVenda, int quantidade, int id, Produto produto, Cliente cliente)
{
    // verifica a disponibilidade do produto para venda
	if (produto.disponivel(quantidade))
	{
		this->dataVenda = dataVenda;
		this->quantidade = quantidade;
		this->id = id;
		this->produto = produto;
		this->cliente = cliente;
		realizaVenda();
	}
	else
	{
		throw QuantidadeDeVendaIndisponivelException();
	}
}

void Venda::realizaVenda()
{
	// descobre os lotes que serão utilizados na venda
	int quantidadeRestante = quantidade;
	for (std::map<int, Lote>::iterator it = produto.getLotes().begin(); it != produto.getLotes().end(); ++it)
	{
		if (quantidadeRestante > 0)
		{
			if (quantidadeRestante >= it->second.getQuantidade())
			{
				lotes_venda.insert(std::pair<int, Lote>(it->second.getCodigoLote(), it->second));
				quantidadeRestante -= it->second.getQuantidade();
			}
			else
			{
				Lote lote = it->second;
				lote.atualizaQuantidade(quantidadeRestante);
				lotes_venda.insert(std::pair<int, Lote>(lote.getCodigoLote(), lote));
				quantidadeRestante = 0;
			}
		}
	}
}