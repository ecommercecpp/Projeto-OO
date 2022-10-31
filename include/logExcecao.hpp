#ifndef _LOGEXCECAO_HPP_
#define _LOGEXCECAO_HPP_

#include <string>
#include <vector>

#include "date.h"
#include "exceptions.hpp"
#include "autoload.hpp"

class LogExcecao: public Logs
{
    private:
        std::vector<std::string> historicoLogExcecao;

    public:
    LogExcecao();
    LogExcecao(Usuario, ec::Date, std::string, std::string);
    std::string getLog();
    void setHistoricoLogExcecao(std::vector<std::string>);
    std::vector<std::string> getHistoricoLogExcecao();
};

#endif