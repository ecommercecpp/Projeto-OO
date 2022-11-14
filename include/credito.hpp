#ifndef _CREDITO_HPP_
#define _CREDITO_HPP_

#include <string>

#include "Data.h"
#include "metodoPagamento.hpp"

class Credito : public MetodoPagamento
{
    private:
        std::string codigoDeSeguranca;
        std::string nomeDoTitular;
        Data dataDeVencimento;
        std::string numeroDoCartao;
        
    public:
        Credito();     
        Credito(std::string codigoDeSeguranca, std::string nomeDoTitular, Data dataDeVencimento, std::string numeroDoCartao);
        std::string getCodigoDeSeguranca();
        void setCodigoDeSeguranca(std::string codigoDeSeguranca);
        std::string getNomeDoTitular();
        void setNomeDoTitular(std::string nomeDoTitular);
        Data getDataDeVencimento();
        void setDataDeVencimento(Data dataDeVencimento);
        std::string getNumeroDoCartao();
        void setNumeroDoCartao(std::string numeroDoCartao);
};

#endif