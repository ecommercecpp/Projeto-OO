#include <iostream>
#include <string>

#include "logLeitura.hpp"

LogLeitura::LogLeitura(Usuario usuario, Data data, std::string entidade, std::string informacao): Logs(usuario,data,entidade)
{
    this->informacao = informacao;
}

LogLeitura::LogLeitura()
{
}

LogLeitura::~LogLeitura()
{
}
/*
std::string LogLeitura::getLog()
{
    std::string log ("***Log de Leitura***\nUsuario da operacao: "+ this->usuario.getLogin() + "Entidade: " +this->entidade+"\n"+"Informacao: "+this->informacao);
    return log;
   // return "***Log de Leitura***\n"+"Usuario da operacao: " + this->usuario + "\n" + "Data da operacao: "+this->data+ "\n"+"Entidade: " +this->entidade+"\n"+"Informação "+this->informacao;
}*/

void LogLeitura::setInformacao(std::string informacao)
{
    this->informacao = informacao;
}

std::string LogLeitura::getInformacao()
{
    return this->informacao;
}