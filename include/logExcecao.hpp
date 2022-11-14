#ifndef _LOGEXCECAO_HPP_
#define _LOGEXCECAO_HPP_

#include <string>
#include <vector>

#include "Data.h"
#include "exceptions.hpp"
#include "logs.hpp"

class LogExcecao: public Logs
{
    protected:
        std::string funcionalidade;
        std::vector<std::string> historicoLogExcecao;

    public:
        LogExcecao();
        ~LogExcecao();
        LogExcecao(Usuario, Data, std::string, std::string);
        //std::string getLog();
        void setHistoricoLogExcecao(std::vector<std::string>);
        std::vector<std::string> getHistoricoLogExcecao();
        void setFuncionalidade(std::string);
        std::string getFuncionalidade();
        
};

#endif