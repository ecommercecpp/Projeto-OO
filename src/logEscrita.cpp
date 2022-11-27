#include <iostream>

#include "logEscrita.hpp"

/**
 * @brief Construct a new Log Escrita:: Log Escrita object
 *
 * @param usuario
 * @param data
 * @param entidade
 * @param atributosAnteriores
 */
/*
LogEscrita::LogEscrita(UsuarioLogado* usuario, Data data, std::string entidade, std::vector<std::string> atributosAnteriores) : Logs(usuario, data, entidade)
{
    this->atributosAnteriores = atributosAnteriores;
}
*/

/**
 * @brief Construct a new Log Escrita:: Log Escrita object
 *
 */
LogEscrita::LogEscrita()
{
}

/**
 * @brief Destroy the Log Escrita:: Log Escrita object
 *
 */
LogEscrita::~LogEscrita()
{
}
/*
std::string LogEscrita::getLog()
{
    //variavel que pega a data atual
    std::string log ("***Log de Escrita***\nUsuario da operacao: "+ this->usuario.getLogin() + "\nData da operacao: " +  + "\nEntidade: " +this->entidade+"\n"+"Atributos Anteriores: "+this->atributosAnteriores);
    
    return log;
}
*/

/**
 * @brief Seta as informações anteriores
 *
 * @param informacoesAnteriores
 */
void LogEscrita::setInformacoesAnteriores(std::map<std::string, std::string> informacoesAnteriores)
{
    this->informacoesAnteriores = informacoesAnteriores;
}

/**
 * @brief Retorna as informações anteriores
 *
 * @return std::map<std::string, std::string,>
 */
std::map<std::string, std::string> LogEscrita::getInformacoesAnteriores()
{
    return this->informacoesAnteriores;
}

/**
 * @brief Seta as informações novas
 *
 * @param informacoesNovas
 */
void LogEscrita::setInformacoesNovas(std::map<std::string, std::string> informacoesNovas)
{
    this->informacoesNovas = informacoesNovas;
}

/**
 * @brief Retorna as informações novas
 *
 * @return std::map<std::string, std::string>
 */
std::map<std::string, std::string> LogEscrita::getInformacoesNovas()
{
    return this->informacoesNovas;
}

/**
 * @brief Seta os atributos anteriores
 *
 * @param atributosAnteriores
 */
void LogEscrita::setAtributosAnteriores(std::vector<std::string> atributosAnteriores)
{
    this->atributosAnteriores = atributosAnteriores;
}

/**
 * @brief Retorna os atributos anteriores
 *
 * @return std::vector<std::string>
 */
std::vector<std::string> LogEscrita::getAtributosAnteriores()
{
    return this->atributosAnteriores;
}

//gerar log de escrita
/*
void LogEscrita::gerarLogEscrita(std::string entidade, std::map<std::string, std::string> informacoesAnteriores, std::map<std::string, std::string> informacoesNovas, std::vector<std::string> atributosAnteriores)
{
    LogEscrita logEscrita;
    logEscrita.setEntidade(entidade);
    logEscrita.setInformacoesAnteriores(informacoesAnteriores);
    logEscrita.setInformacoesNovas(informacoesNovas);
    logEscrita.setAtributosAnteriores(atributosAnteriores);
    logEscrita.setData(Data::getDataAtual());
    logEscrita.setUsuario(Usuario::getUsuarioLogado());
    logEscrita.setLog();
    //printar log
    std::cout << logEscrita.getLog() << std::endl;
}
*/