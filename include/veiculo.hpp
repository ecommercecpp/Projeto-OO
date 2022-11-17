#ifndef _VEICULO_HPP_
#define _VEICULO_HPP_

#include <string>
#include <vector>

#include "exceptions.hpp"
#include "funcionario.hpp"


class Veiculo
{
    private:
        int capacidade;
        std::string placa;
        std::vector <Funcionario> rotas;

    public:
        Veiculo();
        Veiculo(Veiculo &other) = delete;
        Veiculo& operator=(Veiculo &other) = delete;
        ~Veiculo();
        void alteraHorario(string horario);
        int getCapacidade();
        std::string getPlaca();
        std:: vector<Funcionario> getRotas();
        void setCapacidade(int capacidade);
        void setPlaca(std::string placa);
        void setRotas(std::vector<Funcionario>); 
     
};

#endif