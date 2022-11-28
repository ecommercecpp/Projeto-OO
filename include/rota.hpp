#ifndef _ROTA_HPP_
#define _ROTA_HPP_

#include <string>
#include <iostream>
#include <vector>
#include <math>

#include "exceptions.hpp"
#include "funcionario.hpp"
#include "empresa.hpp"
#include "turno.hpp"


class Rota
{
private:
    Funcionario Funcionario;
    int Id;
    /*float longChegada;
    float latChegada;
    std::string horaChegada;
    std::string horaSaida;
    std::string tempoRota;*/
    Turno turno;

public:
    Rota()
    {
        std::string permissao = "cadastrarRota";
        std::string atributos = "funcionario, id, longChegada, latChegada, horaChegada, horaSaida, tempoRota, turno";
        Empresa::getEmpresa()->gerarLogEscrita("rota", atributos);
        if (!Empresa::getEmpresa()->verificaPermissao(permissao))
        {
            Empresa::getEmpresa()->gerarLogExcecao("rota", "Rota");
            throw AcessDeniedException();
        }
        else
        {
        
        }
    }
    ~Rota() {}
    /**
     * @brief Verifica se o produto está disponivel no estoque
     *
     * @param x1
     * @param x2
     * @param y1
     * @param y2
     * @return true
     */
    float calculaDistancia(float x1, float y1, float x2, float y2)
    {
        return 110.57 * sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    }
};
#endif