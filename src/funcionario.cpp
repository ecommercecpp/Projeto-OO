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
	std::string atributos = "nome: " + nome + " cpf_cnpj: " + cpf_cnpj + " endereco: " + endereco + " email: " + email + " tipo: " + std::to_string(tipo);
	Empresa::getEmpresa()->gerarLogEscrita("funcionario", atributos);
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		Empresa::getEmpresa()->gerarLogExcecao("funcionario", "Funcionario");
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
	std::string atributos = "void" ;
	Empresa::getEmpresa()->gerarLogEscrita("funcionario", atributos);
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		Empresa::getEmpresa()->gerarLogExcecao("funcionario", "admitir");
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
	std::string atributos = "void" ;
	Empresa::getEmpresa()->gerarLogEscrita("funcionario", atributos);
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		Empresa::getEmpresa()->gerarLogExcecao("funcionario", "demitir");
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
	std::string permissao = "empregadoFuncionario";
	std::string atributos = "void" ;
	Empresa::getEmpresa()->gerarLogEscrita("funcionario", atributos);
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		Empresa::getEmpresa()->gerarLogExcecao("funcionario", "empregado");
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
	std::string atributos = "matricula: " + std::to_string(matricula);
	Empresa::getEmpresa()->gerarLogEscrita("funcionario", atributos);
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		Empresa::getEmpresa()->gerarLogExcecao("funcionario", "setMatricula");
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
	std::string atributos = "matricula: " + std::to_string(matricula);
	Empresa::getEmpresa()->gerarLogEscrita("funcionario", atributos);
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		Empresa::getEmpresa()->gerarLogExcecao("funcionario", "getMatricula");
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
	std::string atributos = "nascimento: " + nascimento.getData();
	Empresa::getEmpresa()->gerarLogEscrita("funcionario", atributos);
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		Empresa::getEmpresa()->gerarLogExcecao("funcionario", "setNascimento");
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

	Empresa::getEmpresa()->gerarLogLeitura("funcionario", "nascimento");
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		Empresa::getEmpresa()->gerarLogExcecao("funcionario", "getNascimento");
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
	std::string atributos = "admissao: " + admissao.getData();
	Empresa::getEmpresa()->gerarLogEscrita("funcionario", atributos);
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		Empresa::getEmpresa()->gerarLogExcecao("funcionario", "setAdmissao");
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
	std::string atributos = "void" ;
	Empresa::getEmpresa()->gerarLogEscrita("funcionario", atributos);
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		Empresa::getEmpresa()->gerarLogExcecao("funcionario", "getAdmissao");
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
	std::string atributos = "demissao: " + demissao.getData();
	Empresa::getEmpresa()->gerarLogEscrita("funcionario", atributos);
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		Empresa::getEmpresa()->gerarLogExcecao("funcionario", "setDemissao");
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
	std::string atributos = "void" ;
	Empresa::getEmpresa()->gerarLogEscrita("funcionario", atributos);
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		Empresa::getEmpresa()->gerarLogExcecao("funcionario", "getDemissao");
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
	std::string atributos = "salario: " ;//+ salario[0].getSalario();
	Empresa::getEmpresa()->gerarLogEscrita("funcionario", atributos);
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		Empresa::getEmpresa()->gerarLogExcecao("funcionario", "setSalario");
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
	std::string atributos = "void" ;
	Empresa::getEmpresa()->gerarLogEscrita("funcionario", atributos);
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		Empresa::getEmpresa()->gerarLogExcecao("funcionario", "getSalario");
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
	std::string atributos = "departamento: " + departamento.getNome();
	Empresa::getEmpresa()->gerarLogEscrita("funcionario", atributos);
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		Empresa::getEmpresa()->gerarLogExcecao("funcionario", "setDepartamento");
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
	std::string atributos = "void" ;
	Empresa::getEmpresa()->gerarLogEscrita("funcionario", atributos);
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		Empresa::getEmpresa()->gerarLogExcecao("funcionario", "getDepartamento");
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
	std::string atributos = "cargo: " + cargo.getNome();
	Empresa::getEmpresa()->gerarLogEscrita("funcionario", atributos);
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		Empresa::getEmpresa()->gerarLogExcecao("funcionario", "setCargo");
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
	std::string atributos = "void" ;
	Empresa::getEmpresa()->gerarLogEscrita("funcionario", atributos);
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		Empresa::getEmpresa()->gerarLogExcecao("funcionario", "getCargo");
		throw AcessDeniedException();
	}else{
		return this->cargo;
	}
}

void Funcionario::setLatitude(float latitude)
{
	std::string permissao = "cadastrarLatitudeFuncionario";
	std::string atributos = "latitude: " ;//+ latitude;
	Empresa::getEmpresa()->gerarLogEscrita("funcionario", atributos);
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		Empresa::getEmpresa()->gerarLogExcecao("funcionario", "setLatitude");
		throw AcessDeniedException();
	}else{
		this->latitude = latitude;
	}
}

float Funcionario::getLatitude()
{
	std::string permissao = "verificarLatitudeFuncionario";
	std::string atributos = "void" ;
	Empresa::getEmpresa()->gerarLogEscrita("funcionario", atributos);
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		Empresa::getEmpresa()->gerarLogExcecao("funcionario", "getLatitude");
		throw AcessDeniedException();
	}else{
		return this->latitude;
	}
}

void Funcionario::setLongitude(float longitude)
{
	std::string permissao = "cadastrarLongitudeFuncionario";
	std::string atributos = "longitude: " ;//+ longitude;
	Empresa::getEmpresa()->gerarLogEscrita("funcionario", atributos);
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		Empresa::getEmpresa()->gerarLogExcecao("funcionario", "setLongitude");
		throw AcessDeniedException();
	}else{
		this->longitude = longitude;
	}
}

float Funcionario::getLongitude()
{
	std::string permissao = "verificarLongitudeFuncionario";
	std::string atributos = "void" ;
	Empresa::getEmpresa()->gerarLogEscrita("funcionario", atributos);
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		Empresa::getEmpresa()->gerarLogExcecao("funcionario", "getLongitude");
		throw AcessDeniedException();
	}else{
		return this->longitude;
	}
}


void Funcionario::setTurno(float turno)
{
	std::string permissao = "cadastrarTurnoFuncionario";
	std::string atributos = "turno: " ;//+ turno;
	Empresa::getEmpresa()->gerarLogEscrita("funcionario", atributos);
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		Empresa::getEmpresa()->gerarLogExcecao("funcionario", "setTurno");
		throw AcessDeniedException();
	}else{
		this->turno = turno;
	}
}

float Funcionario::getTurno()
{
	std::string permissao = "verificarTurnoFuncionario";
	std::string atributos = "void" ;
	Empresa::getEmpresa()->gerarLogEscrita("funcionario", atributos);
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		Empresa::getEmpresa()->gerarLogExcecao("funcionario", "getTurno");
		throw AcessDeniedException();
	}else{
		return this->turno;
	}
}

void Funcionario::setDistancia(float distancia)
{
	std::string permissao = "cadastrarDistanciaFuncionario";
	std::string atributos = "distancia: " ;//+ distancia;
	Empresa::getEmpresa()->gerarLogEscrita("funcionario", atributos);
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		Empresa::getEmpresa()->gerarLogExcecao("funcionario", "setDistancia");
		throw AcessDeniedException();
	}else{
		this->distancia = distancia;
	}
}

float Funcionario::getDistancia()
{
	std::string permissao = "verificarDistanciaFuncionario";
	std::string atributos = "void" ;
	Empresa::getEmpresa()->gerarLogEscrita("funcionario", atributos);
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		Empresa::getEmpresa()->gerarLogExcecao("funcionario", "getDistancia");
		throw AcessDeniedException();
	}else{
		return this->distancia;
	}
}