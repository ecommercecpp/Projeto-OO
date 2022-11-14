#ifndef _LOGESCRITA_HPP_
#define _LOGESCRITA_HPP_

#include <string>
#include <vector>
#include <map>

#include "Data.h"
#include "exceptions.hpp"
#include "logs.hpp"

class LogEscrita: public Logs
{
    private:
    std::map<std::string, std::string> informacoesAnteriores;
    std::map<std::string, std::string> informacoesNovas;

    protected:
    std::vector<std::string> atributosAnteriores;

    public:
    LogEscrita();
    ~LogEscrita();
    LogEscrita(Usuario, Data, std::string, std::vector<std::string>);
    //std::string getLog();
    void setInformacoesAnteriores(std::map<std::string, std::string>);
    std::map<std::string, std::string> getInformacoesAnteriores();
    void setInformacoesNovas(std::map<std::string, std::string>);
    std::map<std::string, std::string> getInformacoesNovas();
    void setAtributosAnteriores(std::vector<std::string>);
    std::vector<std::string> getAtributosAnteriores();
    
};

#endif