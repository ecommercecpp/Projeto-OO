#ifndef _LOGLEITURA_HPP_
#define _LOGLEITURA_HPP_

#include <string>
#include <vector>

#include "date.h"
#include "exceptions.hpp"
#include "autoload.hpp"

class LogLeitura: public Logs
{
    private:
        std::vector<std::string> historicoLogLeitura;

    public:
    LogLeitura();
    ~LogLeitura();
    LogLeitura(Usuario, ec::Date, std::string, std::string);
    std::string getLog();
    void setHistoricoLogLeitura(std::vector<std::string>);
    std::vector<std::string> getHistoricoLogLeitura();
};

#endif