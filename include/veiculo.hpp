#ifndef _VEICULO_HPP_
#define _VEICULO_HPP_

#include <string>
#include <vector>

#include "exceptions.hpp"
#include "funcionario.hpp"


class Veiculo
{
    private:
        int tipo;
        int capacidade;
        //std::string placa;
        std::vector <Funcionario> rotas;

    public:
        Veiculo();
        Veiculo(Veiculo &other) = delete;
        Veiculo& operator=(Veiculo &other) = delete;
        ~Veiculo();
        void alteraHorario(std::string horario);
        int getCapacidade();
        //std::vector<Funcionario*> getRotas();
        void setCapacidade(int capacidade);
        //void setRotas(std::vector<Funcionario*>); 
        void setTipo(int tipo);
        int getTipo();
        std::string retornaTipoVeiculo();
     
};

#endif