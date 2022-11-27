#ifndef _FORNECEDORES_HPP_
#define _FORNECEDORES_HPP_

#include <string>
#include <vector>
#include <map>

#include "materiaPrima.hpp"


class Fornecedor
{
	private:
        std::string nome; 

	public:
        void setNomeFornecedor(std::string nome);
        std::string getNomeFornecedor();
        Fornecedor();
};


#endif


