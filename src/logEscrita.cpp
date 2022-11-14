#include <iostream>

#include "logEscrita.hpp"

LogEscrita::LogEscrita(Usuario usuario, Data data, std::string entidade, std::vector<std::string> atributosAnteriores): Logs(usuario, data, entidade)
{
    this->atributosAnteriores = atributosAnteriores;
}

LogEscrita::LogEscrita()
{
}

LogEscrita::~LogEscrita()
{
}
/*
std::string LogEscrita::getLog()
{
    std::string log ("***Log de Escrita***\nUsuario da operacao: "+ this->usuario.getLogin() + "\nEntidade: " +this->entidade+"\n"+"Atributos Anteriores: "+this->atributosAnteriores);
    return log;
}
*/

void LogEscrita::setInformacoesAnteriores(std::map<std::string, std::string> informacoesAnteriores)
{
    this->informacoesAnteriores = informacoesAnteriores;
}

std::map<std::string, std::string> LogEscrita::getInformacoesAnteriores()
{
    return this->informacoesAnteriores;
}

void LogEscrita::setInformacoesNovas(std::map<std::string, std::string> informacoesNovas)
{
    this->informacoesNovas = informacoesNovas;
}

std::map<std::string, std::string> LogEscrita::getInformacoesNovas()
{
    return this->informacoesNovas;
}

void LogEscrita::setAtributosAnteriores(std::vector<std::string> atributosAnteriores)
{
    this->atributosAnteriores = atributosAnteriores;
}

std::vector<std::string> LogEscrita::getAtributosAnteriores()
{
    return this->atributosAnteriores;
}
