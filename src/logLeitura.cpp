#include <iostream>
#include <string>

#include "logLeitura.hpp"

/**
 * @brief Construct a new Log Leitura:: Log Leitura object
 *
 * @param usuario
 * @param data
 * @param entidade
 * @param informacao
 *//*
LogLeitura::LogLeitura(Usuario usuario, Data data, std::string entidade, std::string informacao)
{
    this->usuario = usuario;
    this->data = data;
    this->entidade = entidade;
    this->informacao = informacao;
}*//*
LogLeitura::LogLeitura(Usuario usuario, Data data, std::string entidade, std::string informacao) : Logs(usuario, data, entidade)
{
    this->informacao = informacao;
}*/

/**
 * @brief Construct a new Log Leitura:: Log Leitura object
 *
 */
LogLeitura::LogLeitura()
{
}

/**
 * @brief Destroy the Log Leitura:: Log Leitura object
 *
 */
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

/**
 * @brief Seta a informação da leitura
 *
 * @param informacao
 */
void LogLeitura::setInformacao(std::string informacao)
{
    this->informacao = informacao;
}

/**
 * @brief Retorna a informação da leitura
 */
std::string LogLeitura::getInformacao()
{
    return this->informacao;
}