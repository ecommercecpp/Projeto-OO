#include "logs.hpp"

Logs::Logs()
{	
}

Logs::~Logs()
{
}

Logs::Logs(Usuario usuario, Data data, std::string entidade)
{
    this->usuario = usuario;
    this->data = data;
    this->entidade = entidade;
}


void Logs::setUsuario(Usuario usuario)
{
    this->usuario = usuario;
}

Usuario Logs::getUsuario()
{
    return this->usuario;
}

void Logs::setData(Data data)
{
    this->data = data;
}

Data Logs::getData()
{
    return this->data;
}

void Logs::setEntidade(std::string entidade)
{
    this->entidade = entidade;
}

std::string Logs::getEntidade()
{
    return this->entidade;
}
