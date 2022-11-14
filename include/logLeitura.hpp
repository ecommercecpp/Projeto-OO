#ifndef _LOGLEITURA_HPP_
#define _LOGLEITURA_HPP_

#include <string>
#include <vector>

#include "Data.h"
#include "logs.hpp"

class LogLeitura: public Logs
{
    protected:
        std::string informacao;
        std::vector<std::string> historicoLogLeitura;

    public:
        LogLeitura();
        ~LogLeitura();
        LogLeitura(Usuario, Data, std::string, std::string);
        //std::string getLog();
        void setHistoricoLogLeitura(std::vector<std::string>);
        std::vector<std::string> getHistoricoLogLeitura();
        void setInformacao(std::string);    
        std::string getInformacao();
};

#endif