#ifndef _TURNO_HPP_
#define _TURNO_HPP_

#include <string>

#include "exceptions.hpp"
#include "Data.h"


class Turno
{
    private:
        int id;
        Data horarioInicio;
        Data horarioFim;

    public:
        Turno();
        Turno(Turno &other) = delete;
        Turno& operator=(Turno &other) = delete;
        ~Turno();
        Data getHorarioInicio();
        Data getHorarioFim();
        void setHorarioInicio(Data inicio);
        void setHorarioFim(Data fim);
        int getId();
        void setId(int id); 
     
};
#endif