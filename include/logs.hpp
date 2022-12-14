#ifndef _LOGS_HPP_
#define _LOGS_HPP_

#include <string>
#include <vector>

#include "Data.h"
#include "usuarioLogado.hpp"
#include "exceptions.hpp"

class Logs
{
	protected:
    UsuarioLogado *usuario;
		Data data;
    std::string entidade;
    std::string horario;

	public:
    Logs();
    ~Logs();
    //Logs(UsuarioLogado*, Data, std::string);

    void setUsuario(UsuarioLogado*);
    UsuarioLogado* getUsuario();
    void setData(Data);
    Data getData();
    void setEntidade(std::string);
    std::string getEntidade();

    void setHorario(std::string);
    std::string getHorario();
    
};

#endif