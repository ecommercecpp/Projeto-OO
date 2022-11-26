#include <iostream>

#include "funcionario.hpp"
#include "empresa.hpp"
#include "exceptions.hpp"
/**
 * @brief Construct a new Funcionario:: Funcionario object
 *
 * @param nome
 * @param cpf_cnpj
 * @param endereco
 * @param email
 * @param nascimento
 * @param admissao
 * @param salario
 * @param departamento
 * @param cargo
 */
Funcionario::Funcionario()//std::string nome, std::string cpf_cnpj, std::string endereco, std::string email, int tipo, Data nascimento, Data admissao, std::vector<Salario> salario, Departamento departamento, Cargo cargo) : Pessoa(nome, cpf_cnpj, endereco, email, tipo)
{
	std::string permissao = "cadastrarFuncionario";
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		throw AcessDeniedException();
	}else{
		this->status = true;
		this->nome = nome;
		this->cpf_cnpj = cpf_cnpj;
		this->endereco = endereco;
		this->email = email;
		this->nascimento = nascimento;
		this->tipo = tipo;
		this->admissao = admissao;
		this->salario = salario;
		this->departamento = departamento;
		this->cargo = cargo;
	}
}

/**
 * @brief Admitir funcionario
 *
 */
void Funcionario::admitir()
{
	std::string permissao = "admitirFuncionario";
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		throw AcessDeniedException();
	}else{
		this->status = true;
	}
}

/**
 * @brief Demite um funcionario
 *
 */
void Funcionario::demitir()
{
	std::string permissao = "demitirFuncionario";
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		throw AcessDeniedException();
	}else{
		this->status = false;
	}
}

/**
 * @brief Retorna se o funcionario está ativo
 *
 * @return true
 * @return false
 */
bool Funcionario::empregado()
{
	std::string permissao = "verificarStatusFuncionario";
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		throw AcessDeniedException();
	}else{
		return this->status;
	}
}

/**
 * @brief Seta a matrícula do funcionário
 *
 * @param matricula
 */
void Funcionario::setMatricula(int matricula)
{
	std::string permissao = "cadastrarMatriculaFuncionario";
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		throw AcessDeniedException();
	}else{
		this->matricula = matricula;
	}
}

/**
 * @brief Retorna a matrícula do funcionário
 *
 * @return int
 */
int Funcionario::getMatricula()
{
	std::string permissao = "verificarMatriculaFuncionario";
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		throw AcessDeniedException();
	}else{
		return this->matricula;
	}
}

/**
 * @brief Seta a data de nascimento do funcionário
 *
 * @param nascimento
 */
void Funcionario::setNascimento(Data nascimento)
{
	std::string permissao = "cadastrarNascimentoFuncionario";
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		throw AcessDeniedException();
	}else{
		this->nascimento = nascimento;
	}
}

/**
 * @brief Retorna a data de nascimento do funcionário
 *
 * @return Data
 */
Data Funcionario::getNascimento()
{
	std::string permissao = "verificarNascimentoFuncionario";
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		throw AcessDeniedException();
	}else{
		return this->nascimento;
	}
}

/**
 * @brief Seta a data de admissão do funcionário
 *
 * @param admissao
 */
void Funcionario::setAdmissao(Data admissao)
{
	std::string permissao = "cadastrarAdmissaoFuncionario";
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		throw AcessDeniedException();
	}else{
		this->admissao = admissao;
	}
}

/**
 * @brief Retorna a data de admissão do funcionário
 *
 * @return Data
 */
Data Funcionario::getAdmissao()
{
	std::string permissao = "verificarAdmissaoFuncionario";
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		throw AcessDeniedException();
	}else{
		return this->admissao;
	}
}

/**
 * @brief Seta a data de demissão do funcionário
 *
 * @param demissao
 */
void Funcionario::setDemissao(Data demissao)
{
	std::string permissao = "cadastrarDemissaoFuncionario";
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		throw AcessDeniedException();
	}else{
		this->demissao = demissao;
	}
}

/**
 * @brief Retorna a data de demissão do funcionário
 *
 * @return Data
 */
Data Funcionario::getDemissao()
{
	std::string permissao = "verificarDemissaoFuncionario";
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		throw AcessDeniedException();
	}else{
		return this->demissao;
	}
}

/**
 * @brief Seta o salário do funcionário
 *
 * @param salario
 */
void Funcionario::setSalario(std::vector<Salario> salario)
{
	std::string permissao = "cadastrarSalarioFuncionario";
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		throw AcessDeniedException();
	}else{
		this->salario = salario;
	}
}

/**
 * @brief Retorna o salário do funcionário
 *
 * @return std::vector<Salario>
 */
std::vector<Salario> Funcionario::getSalario()
{
	std::string permissao = "verificarSalarioFuncionario";
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		throw AcessDeniedException();
	}else{
		return this->salario;
	}
}

/**
 * @brief Seta o departamento do funcionário
 *
 * @param departamento
 */
void Funcionario::setDepartamento(Departamento departamento)
{
	std::string permissao = "cadastrarDepartamentoFuncionario";
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		throw AcessDeniedException();
	}else{
		this->departamento = departamento;
	}
}

/**
 * @brief Retorna o departamento do funcionário
 *
 * @return Departamento
 */
Departamento Funcionario::getDepartamento()
{
	std::string permissao = "verificarDepartamentoFuncionario";
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		throw AcessDeniedException();
	}else{
		return this->departamento;
	}
}

/**
 * @brief Seta o cargo do funcionário
 *
 * @param cargo
 */
void Funcionario::setCargo(Cargo cargo)
{
	std::string permissao = "cadastrarCargoFuncionario";
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		throw AcessDeniedException();
	}else{
		this->cargo = cargo;
	}
}

/**
 * @brief Retorna o cargo do funcionário
 *
 * @return Cargo
 */
Cargo Funcionario::getCargo()
{
	std::string permissao = "verificarCargoFuncionario";
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		throw AcessDeniedException();
	}else{
		return this->cargo;
	}
}

void Funcionario::setLatitude(float latitude){
	std::string permissao = "cadastrarLatitudeFuncionario";
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		throw AcessDeniedException();
	}else{
		this->latitude = latitude;
	}
}

float Funcionario::getLatitude(){
	std::string permissao = "verificarLatitudeFuncionario";
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		throw AcessDeniedException();
	}else{
		return this->latitude;
	}
}

void Funcionario::setLongitude(float longitude){
	std::string permissao = "cadastrarLongitudeFuncionario";
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		throw AcessDeniedException();
	}else{
		this->longitude = longitude;
	}
}

float Funcionario::getLongitude(){
	std::string permissao = "verificarLongitudeFuncionario";
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		throw AcessDeniedException();
	}else{
		return this->longitude;
	}
}