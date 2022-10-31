#ifndef _LOGS_HPP_
#define _LOGS_HPP_

#include <string>
#include <vector>

#include "date.h"
#include "exceptions.hpp"
#include "autoload.hpp"

class Logs
{
	private:
    Usuario usuario;
		ec::Date data;
    std::string entidade, informacao, funcionalidade;
    std::vector<std::string> atributosAnteriores;

	public:
    Logs();
    ~Logs();
    virtual std::string getLog() = 0;
    
};

#endif