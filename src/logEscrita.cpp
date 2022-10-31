#include <iostream>
#include <string>
#include <map>
#include <vector>

#include "date.h"

#include "logEscrita.hpp"

LogEscrita::LogEscrita(Usuario usuario, ec::Date data, std::string entidade, std::vector<std::string> atributosAnteriores): logs()
{
    this->usuario = usuario;
    this->data = data;
    this->entidade = entidade;
    this->atributosAnteriores = atributosAnteriores;
}

LogEscrita::LogEscrita()
{
}

LogEscrita::~LogEscrita()
{
}

std::string LogEscrita::getLog()
{
    return "***Log de Escrita***\n"+"Usuario da operacao: "+ this->usuario + "\n"+ "Data da operacao: "+this->data+ "\n"+"Entidade: " +this->entidade+"\n"+"Atributos Anteriores: "+this->atributosAnteriores;
}

void LogEscrita::setHistoricoLogEscrita(std::vector<std::string> historicoLogEscrita)
{
    this->historicoLogEscrita = historicoLogEscrita;
}

std::vector<std::string> LogEscrita::getHistoricoLogEscrita()
{
    return this->historicoLogEscrita;
}
