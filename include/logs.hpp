#ifndef _LOGS_HPP_
#define _LOGS_HPP_

#include <string>

#include "date.h"
#include "exceptions.hpp"
#include "autoload.hpp"

class Logs
{
	private:
    Usuario usuario;
		ec::Date data;
    std::string entidade, informacao;

	public:
    Logs();
    ~Logs();
    virtual std::string getLog() = 0;
    

};

#endif