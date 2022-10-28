#ifndef _ORDEM_PRODUCAO_HPP_
#define _ORDEM_PRODUCAO_HPP_

#inculde "autoload.hpp"

class OrdemProducao
{
	private:
		Lote lote;
    Data data;
	public:
		OrdemProducao(Lote lote, Data data);
};

#endif