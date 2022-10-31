#include <iostream>

#include "logLeitura.hpp"

LogLeitura::LogLeitura(Usuario usuario, ec::Date data, std::string entidade, std::string informacao): logs()
{
    this->usuario = usuario;
    this->data = data;
    this->entidade = entidade;
    this->informacao = informacao;
}

LogLeitura::LogLeitura()
{
}

LogLeitura::~LogLeitura()
{
}

std::string LogLeitura::getLog()
{
    return "***Log de Leitura***\n"+"Usuario da operacao: "+ this->usuario + "\n"+ "Data da operacao: "+this->data+ "\n"+"Entidade: " +this->entidade+"\n"+"Informação "+this->informacao;
}

void LogLeitura::setHistoricoLogLeitura(std::vector<std::string> historicoLogLeitura)
{
    this->historicoLogLeitura = historicoLogLeitura;
}

std::vector<std::string> LogLeitura::getHistoricoLogLeitura()
{
    return this->historicoLogLeitura;
}