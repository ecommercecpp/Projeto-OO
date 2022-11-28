#include <iostream>

#include "exceptions.hpp"
#include "empresa.hpp"
#include "salario.hpp"

/**
 * @brief Construct a new Salario:: Salario object
 *
 */
Salario::Salario()
{
}

/**
 * @brief Construct a new Salario:: Salario object
 *
 * @param valor
 * @param status
 * @param motivo // 1 - Promoção 2 - Reajuste (dissidio)
 */
Salario::Salario(double valor, bool status, int motivo)
{
	std::string permissao = "cadastrarSalario";
	std::string atributos = "valor, status, motivo";
	Empresa::getEmpresa()->gerarLogEscrita("funcionario", atributos);
	if(!Empresa::getEmpresa()->verificaPermissao(permissao))
	{
		Empresa::getEmpresa()->gerarLogExcecao("salario", "Salario");
		throw AcessDeniedException();
	}else
	{
		this->valor = valor;
		this->status = status;
		this->motivo = motivo;
	}
}
/*
Salario::Salario(double valor, bool status, int motivo)
	: status(status)
{
	setValor(valor);
	setMotivo(motivo);
	this->status = status;
	data = Data();
}*/

/**
 * @brief Seta o motivo para o salário
 *
 * @param motivo
 */
void Salario::setMotivo(int motivo)
{
	std::string permissao = "cadastrarMotivoSalario";
	Empresa::getEmpresa()->gerarLogEscrita("funcionario", "motivo");
	if(!Empresa::getEmpresa()->verificaPermissao(permissao))
	{
		Empresa::getEmpresa()->gerarLogExcecao("salario", "setMotivo");
		throw AcessDeniedException();
	}else
	{
		this->motivo = motivo;
	}
}

/**
 * @brief Seta o valor do salário
 *
 * @param valor
 */
void Salario::setValor(double valor)
{
	std::string permissao = "cadastrarValorSalario";
	Empresa::getEmpresa()->gerarLogEscrita("funcionario", "valor");
	if(!Empresa::getEmpresa()->verificaPermissao(permissao))
	{
		Empresa::getEmpresa()->gerarLogExcecao("salario", "setValor");
		throw AcessDeniedException();
	}else
	{
		this->valor = valor;
	}
}

/**
 * @brief Retorna o valor do salário
 *
 * @return double
 */
double Salario::getValor()
{
	std::string permissao = "verificarValorSalario";
	std::string atributos = "valor" ;
	if(!Empresa::getEmpresa()->verificaPermissao(permissao))
	{
		Empresa::getEmpresa()->gerarLogExcecao("salario", "getLatitude");
		throw AcessDeniedException();
	}else
	{
		return valor;
	}
}

/**
 * @brief Retorna o status do salário
 *
 * @return bool
 */
bool Salario::getStatus()
{
	std::string permissao = "verificarStatusSalario";
	std::string atributos = "status" ;
	if(!Empresa::getEmpresa()->verificaPermissao(permissao))
	{
		Empresa::getEmpresa()->gerarLogExcecao("salario", "getStatus");
		throw AcessDeniedException();
	}else
	{
		return status;
	}
}


/**
 * @brief Retorna o motivo do salário
 *
 * @return int
 */
int Salario::getMotivo()
{
	std::string permissao = "verificarMotivoSalario";
	std::string atributos = "motivo" ;
	if(!Empresa::getEmpresa()->verificaPermissao(permissao))
	{
		Empresa::getEmpresa()->gerarLogExcecao("salario", "getMotivo");
		throw AcessDeniedException();
	}else
	{
		return motivo;
	}
}

/**
 * @brief Retorna a data do salário
 *
 * @return Data
 */
Data Salario::getDataAlteracao()
{
	std::string permissao = "verificarDataSalario";
	std::string atributos = "dataAlteracao" ;
	if(!Empresa::getEmpresa()->verificaPermissao(permissao))
	{
		Empresa::getEmpresa()->gerarLogExcecao("salario", "getDataAlteracao");
		throw AcessDeniedException();
	}else
	{
		return data;
	}
}
