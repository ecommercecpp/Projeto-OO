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
    return "***Log de Leitura***\n"+"Usuario da operacao: "+  + "\n" +entidade+informacao;
}