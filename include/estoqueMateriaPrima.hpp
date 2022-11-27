#ifndef _ESTOQUEMP_HPP_
#define _ESTOQUEMP_HPP_

#include "materiaPrima.hpp"
#include <string>
#include <vector>
#include <numeric>

class EstoqueMateriaPrima
{
    protected:
        std::vector<MateriaPrima> materiasPrimas;
        
    public:
        EstoqueMateriaPrima();
        ~EstoqueMateriaPrima();
        void removeMateriaPrima(int codigo);
        void setMateriaPrima(MateriaPrima materiaPrima);
        bool validaEstoqueMinimo(MateriaPrima materiaPrima);
        std::vector<MateriaPrima*> GetMateriasPrimas();
};

#endif