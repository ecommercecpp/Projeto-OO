#ifndef _ROTA_HPP_
#define _ROTA_HPP_

#include <string>

#include "exceptions.hpp"
#include "funcionario.hpp"
#include "turno.hpp"


class Rota
{
    private:
        Funcionario Funcionario;
        int Id;
        float longChegada;
        float latChegada;
        std::string horaChegada;
        std::string horaSaida;
        std::string tempoRota;
        turno Turno;

    public:
        Rota();
        Rota(Rota &other) = delete;
        Rota& operator=(Rota &other) = delete;
        ~Rota();
        float calculaTempo();
        float calculaDistancia(float lat, float long);

     
};
#endif