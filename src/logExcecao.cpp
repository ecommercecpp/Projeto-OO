#include <iostream>

#include "logExcecao.hpp"

/**
 * @brief Construct a new Log Excecao:: Log Excecao object
 *
 * @param usuario
 * @param data
 * @param entidade
 * @param funcionalidade
 */
/*
LogExcecao::LogExcecao(Usuario usuario, Data data, std::string entidade, std::string funcionalidade) : Logs(usuario, data, entidade)
{
    this->funcionalidade = funcionalidade;
}*/

/**
 * @brief Construct a new Log Excecao:: Log Excecao object
 *
 */
LogExcecao::LogExcecao()
{
}

/**
 * @brief Destroy the Log Excecao:: Log Excecao object
 *
 */
LogExcecao::~LogExcecao()
{
}

/*std::string LogExcecao::getLog()
{
    std::string log ("***Log de Excecao***\nUsuario da operacao: "+ this->usuario.getLogin() + "\nEntidade: " +this->entidade+"\n"+"Funcionalidade: "+this->funcionalidade);
    return log;
}*/

/**
 * @brief Seta o historico do log de exceção
 *
 * @param historicoLogExcecao
 */
void LogExcecao::setHistoricoLogExcecao(std::vector<std::string> historicoLogExcecao)
{
    this->historicoLogExcecao = historicoLogExcecao;
}

/**
 * @brief Retorna o historico do log de exceção
 *
 * @return std::vector<std::string>
 */
std::vector<std::string> LogExcecao::getHistoricoLogExcecao()
{
    return this->historicoLogExcecao;
}

/**
 * @brief Seta a funcionalidade da exceção
 *
 * @param funcionalidade
 */
void LogExcecao::setFuncionalidade(std::string funcionalidade)
{
    this->funcionalidade = funcionalidade;
}

/**
 * @brief Retorna a funcionalidade da exceção
 *
 * @return std::string
 */
std::string LogExcecao::getFuncionalidade()
{
    return this->funcionalidade;
}