#include <iostream>


#include "logExcecao.hpp"

LogExcecao::LogExcecao(Usuario usuario, Data data, std::string entidade, std::string funcionalidade): Logs(usuario, data, entidade)
{
    this->funcionalidade = funcionalidade;
}

LogExcecao::LogExcecao()
{
}

LogExcecao::~LogExcecao()
{
}

/*std::string LogExcecao::getLog()
{
    std::string log ("***Log de Excecao***\nUsuario da operacao: "+ this->usuario.getLogin() + "\nEntidade: " +this->entidade+"\n"+"Funcionalidade: "+this->funcionalidade);
    return log;
}*/

void LogExcecao::setHistoricoLogExcecao(std::vector<std::string> historicoLogExcecao)
{
    this->historicoLogExcecao = historicoLogExcecao;
}

std::vector<std::string> LogExcecao::getHistoricoLogExcecao()
{
    return this->historicoLogExcecao;
}

void LogExcecao::setFuncionalidade(std::string funcionalidade)
{
    this->funcionalidade = funcionalidade;
}

std::string LogExcecao::getFuncionalidade()
{
    return this->funcionalidade;
}