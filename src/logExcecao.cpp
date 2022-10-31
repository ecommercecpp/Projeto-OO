#include <iostream>
#include <string>
#include <map>

#include "date.h"

#include "logExcecao.hpp"

LogExcecao::LogExcecao(Usuario usuario, ec::Date data, std::string entidade, std::string funcionalidade): logs()
{
    this->usuario = usuario;
    this->data = data;
    this->entidade = entidade;
    this->funcionalidade = funcionalidade;
}

LogExcecao::LogExcecao()
{
}

LogExcecao::~LogExcecao()
{
}

std::string LogExcecao::getLog()
{
    return "***Log de Excecao***\n"+"Usuario da operacao: "+ this->usuario + "\n"+ "Data da operacao: "+this->data+ "\n"+"Entidade: " +this->entidade+"\n"+"Funcionalidade: "+this->funcionalidade;
}

void LogExcecao::setHistoricoLogExcecao(std::vector<std::string> historicoLogExcecao)
{
    this->historicoLogExcecao = historicoLogExcecao;
}

std::vector<std::string> LogExcecao::getHistoricoLogExcecao()
{
    return this->historicoLogExcecao;
}