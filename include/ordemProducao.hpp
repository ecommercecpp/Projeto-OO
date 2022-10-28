#ifndef _ORDEM_PRODUCAO_HPP_
#define _ORDEM_PRODUCAO_HPP_

#include "autoload.hpp"
//#include "data.hpp"
#include "date.h"

class OrdemProducao
{
	private:
		Lote lote;
    //Data data;
    ec::Date data;
	public:
		OrdemProducao(Lote lote, ec::Date data);
};

#endif