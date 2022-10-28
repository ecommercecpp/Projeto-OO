#ifndef _LOGLEITURA_HPP_
#define _LOGLEITURA_HPP_

#include <string>

#include "date.h"
#include "exceptions.hpp"
#include "autoload.hpp"

class LogLeitura: public Logs
{
    private:

    public:
    LogLeitura();
    ~LogLeitura();
    LogLeitura(Usuario, ec::Date, std::string, std::string);
    std::string getLog();
};

#endif