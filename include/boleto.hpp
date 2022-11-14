#ifndef _BOLETO_HPP_
#define _BOLETO_HPP_

#include <string>

#include "Data.h"
#include "metodoPagamento.hpp"

class Boleto : public MetodoPagamento
{
	private:
        int codigoDeBarras;
        std::string nomeDoPagador;
        Data dataDeVencimento;
        int prazoDePagamento;
	public:
        Boleto(); 
        Boleto(int codigoDeBarras, std::string nomeDoPagador, Data dataDeVencimento, int prazoDePagamento);
        int getCodigoDeBarras();
        void setCodigoDeBarras(int codigoDeBarras);
        std::string getNomeDoPagador();
        void setNomeDoPagador(std::string nomeDoPagador);
        Data getDataDeVencimento();
        void setDataDeVencimento(Data dataDeVencimento);
        int getPrazoDePagamento();
        void setPrazoDePagamento(int prazoDePagamento);
};

#endif