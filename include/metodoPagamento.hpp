#ifndef _METODO_PAGAMENTO_HPP_
#define _METODO_PAGAMENTO_HPP_

#include <string>

#include "Data.h"

class MetodoPagamento
{
    private:
        std::string codigo;
        std::string nome;
        Data dataDeVencimento;
    public:
        MetodoPagamento();
        MetodoPagamento(std::string codigo, std::string nome, Data dataDeVencimento);
        std::string getCodigo();
        void setCodigo(std::string codigo);
        std::string getNome();
        void setNome(std::string nome);
        Data getDataDeVencimento();
        void setDataDeVencimento(Data dataDeVencimento);
};

#endif