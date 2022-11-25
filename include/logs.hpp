#ifndef _LOGS_HPP_
#define _LOGS_HPP_

#include <string>
#include <vector>

#include "Data.h"
#include "usuario.hpp"
#include "exceptions.hpp"

class Logs
{
	protected:
    Usuario usuario;
		Data data;
    std::string entidade;

	public:
    Logs();
    ~Logs();
    Logs(Usuario, Data, std::string);

    void setUsuario(Usuario);
    Usuario getUsuario();
    void setData(Data);
    Data getData();
    void setEntidade(std::string);
    std::string getEntidade();

//    virtual std::string getLog() = 0;
    
};

#endif