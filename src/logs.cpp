#include <iostream>
#include "logs.hpp"

/**
 * @brief Construct a new Logs:: Logs object
 * 
 */
Logs::Logs()
{	
}

/**
 * @brief Destroy the Logs:: Logs object
 * 
 */
Logs::~Logs()
{
}

/**
 * @brief Construct a new Logs:: Logs object
 * 
 * @param usuarioLogado 
 * @param data 
 * @param entidade 
 */
/*
Logs::Logs(UsuarioLogado usuario, Data data, std::string entidade)
{
    this->usuario = usuario;
    this->data = data;
    this->entidade = entidade;
}
*/
/**
 * @brief Seta o usuario do log
 * 
 * @param usuario 
 */
void Logs::setUsuario(UsuarioLogado* usuario)
{
    this->usuario = usuario;
}

/**
 * @brief Retorna o usuario do log
 * 
 * @return Usuario 
 */
UsuarioLogado* Logs::getUsuario()
{
    return this->usuario;
}

/**
 * @brief Seta a data do log
 * 
 * @param data 
 */
void Logs::setData(Data data)
{
    this->data = data;
}

/**
 * @brief Retorna a data do log
 * 
 * @return Data 
 */
Data Logs::getData()
{
    return this->data;
}

/**
 * @brief Seta a entidade do log
 * 
 * @param entidade 
 */
void Logs::setEntidade(std::string entidade)
{
    //printar entidade
    std::cout<<"A ENTEDADE: "<<entidade<<std::endl;
    this->entidade = entidade;
}

/**
 * @brief Retorna a entidade do log
 * 
 * @return std::string 
 */
std::string Logs::getEntidade()
{
    return this->entidade;
}
