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
Funcionario::Funcionario(std::string nome, std::string cpf_cnpj, std::string endereco, std::string email, Data nascimento, Data admissao, std::vector<Salario> salario, Departamento departamento, Cargo cargo) : Pessoa(nome, cpf_cnpj, endereco, email, tipo)
{
	std::string permissao = "cadastraFuncionario";
	//criar uma variavel para armazenar o vetor de permissao do usuario logado
	//usar o ponteiro de usuarioLogado da classe empresa para armazenar o vetor de permissao do usuario logado em uma variavel
	//std::vector<std::string> permissao = Empresa::getEmpresa()->getPermissoesUsuarioLogado();
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
 * @brief Demite um funcionario
 *
 */
void Funcionario::demitir()
{
	this->status = false;
}

/**
 * @brief Retorna se o funcionario está ativo
 *
 * @return true
 * @return false
 */
bool Funcionario::empregado()
{
	return this->status;
}

/**
 * @brief Seta a matrícula do funcionário
 *
 * @param matricula
 */
void Funcionario::setMatricula(int matricula)
{
	this->matricula = matricula;
}

/**
 * @brief Retorna a matrícula do funcionário
 *
 * @return int
 */
int Funcionario::getMatricula()
{
	return this->matricula;
}

/**
 * @brief Seta a data de nascimento do funcionário
 *
 * @param nascimento
 */
void Funcionario::setNascimento(Data nascimento)
{
	this->nascimento = nascimento;
}

/**
 * @brief Retorna a data de nascimento do funcionário
 *
 * @return Data
 */
Data Funcionario::getNascimento()
{
	return this->nascimento;
}

/**
 * @brief Seta a data de admissão do funcionário
 *
 * @param admissao
 */
void Funcionario::setAdmissao(Data admissao)
{
	this->admissao = admissao;
}

/**
 * @brief Retorna a data de admissão do funcionário
 *
 * @return Data
 */
Data Funcionario::getAdmissao()
{
	return this->admissao;
}

/**
 * @brief Seta a data de demissão do funcionário
 *
 * @param demissao
 */
void Funcionario::setDemissao(Data demissao)
{
	this->demissao = demissao;
}

/**
 * @brief Retorna a data de demissão do funcionário
 *
 * @return Data
 */
Data Funcionario::getDemissao()
{
	return this->demissao;
}

/**
 * @brief Seta o status do funcionário
 *
 * @param status
 */
void Funcionario::setStatus(bool status)
{
	this->status = status;
}

/**
 * @brief Retorna o status do funcionário
 *
 * @return true
 * @return false
 */
bool Funcionario::getStatus()
{
	return this->status;
}

/**
 * @brief Seta o salário do funcionário
 *
 * @param salario
 */
void Funcionario::setSalario(std::vector<Salario> salario)
{
	this->salario = salario;
}

/**
 * @brief Retorna o salário do funcionário
 *
 * @return std::vector<Salario>
 */
std::vector<Salario> Funcionario::getSalario()
{
	return this->salario;
}

/**
 * @brief Seta o departamento do funcionário
 *
 * @param departamento
 */
void Funcionario::setDepartamento(Departamento departamento)
{
	this->departamento = departamento;
}

/**
 * @brief Retorna o departamento do funcionário
 *
 * @return Departamento
 */
Departamento Funcionario::getDepartamento()
{
	return this->departamento;
}

/**
 * @brief Seta o cargo do funcionário
 *
 * @param cargo
 */
void Funcionario::setCargo(Cargo cargo)
{
	this->cargo = cargo;
}

/**
 * @brief Retorna o cargo do funcionário
 *
 * @return Cargo
 */
Cargo Funcionario::getCargo()
{
	return this->cargo;
}

