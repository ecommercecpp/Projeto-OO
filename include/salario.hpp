#ifndef _SALARIO_HPP_
#define _SALARIO_HPP_

#include "Data.h"

class Salario
{
    private:
        double valor;
        bool status;
        int motivo;
        Data dataAlteracao;
    public:
        Salario();
        Salario(double, bool,int, Data);
        double getValor();
        void setValor(double);
        bool getStatus();
        void setStatus(bool);
        int getMotivo();
        void setMotivo(int);
        Data getDataAlteracao();
        void setDataAlteracao(Data);
}

#endif