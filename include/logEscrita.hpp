#ifndef _LOGESCRITA_HPP_
#define _LOGESCRITA_HPP_

#include <string>

#include "date.h"
#include "exceptions.hpp"
#include "autoload.hpp"

class LogEscrita: public Logs
{
    private:
    std::map<std::string, std::string> informacoesAnteriores;
    std::map<std::string, std::string> informacoesNovas;

    public:
    LogEscrita();
    ~LogEscrita();
    LogEscrita(Usuario, ec::Date, std::string, std::vector<std::string>);
    std::string getLog();
    void setInformacoesAnteriores(std::map<std::string, std::string>);
    std::map<std::string, std::string> getInformacoesAnteriores();
    void setInformacoesNovas(std::map<std::string, std::string>);
    std::map<std::string, std::string> getInformacoesNovas();
    
};

#endif