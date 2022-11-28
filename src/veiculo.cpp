#include <iostream>

#include "veiculo.hpp"
#include "empresa.hpp"

/**
 * @brief Construct a new Veiculo:: Veiculo object
 *
 */
Veiculo::Veiculo()
{
}

/**
 * @brief Destroy the Veiculo:: Veiculo object
 *
 */
Veiculo::~Veiculo()
{
}

/**
 * @brief Seta o tipo do veiculo
 *
 * @param tipo
 */
void Veiculo::setTipo(std::string tipo)
{
    std::string permissao = "setarTipoVeiculo";
    std::string atributos = "tipo: " + tipo;
    Empresa::getEmpresa()->gerarLogEscrita("veiculo", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("veiculo", "setTipo");
        throw AcessDeniedException();
    }
    else
    {
        this->tipo = tipo;
    }
}

/**
 * @brief Retorna o tipo do veiculo
 *
 * @return std::string
 */
std::string Veiculo::getTipo()
{
    std::string permissao = "verificarTipoVeiculo";
    std::string informacao = "tipo";
    Empresa::getEmpresa()->gerarLogLeitura("veiculo", informacao);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("veiculo", "getTipo");
        throw AcessDeniedException();
    }
    else
    {
        return this->tipo;
    }
}

/**
 * @brief retorna o tipo do veiculo (onibus ou micro-onibus)
 *
 * @param void
 */
std::string Veiculo::retornaTipoVeiculo()
{
    std::string permissao = "retornarTipoVeiculo";
    std::string informacao = "tipo";
    Empresa::getEmpresa()->gerarLogLeitura("veiculo", informacao);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("veiculo", "retornaTipoVeiculo");
        throw AcessDeniedException();
    }
    else
    {
        if(this->tipo == 0){
            return "onibus";
        }else{
            return "micro-onibus";
        }
    }   
}

/**
 * @brief Altera o horario de saida do veiculo
 *
 * @param horario
 */
void Veiculo::alteraHorario(std::string horario)
{
    std::string permissao = "alterarHorarioVeiculo";
    std::string atributos = "horario: " + horario;
    Empresa::getEmpresa()->gerarLogEscrita("veiculo", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("veiculo", "alteraHorario");
        throw AcessDeniedException();
    }
    else
    {
        //this->horario = horario;
    }
}

