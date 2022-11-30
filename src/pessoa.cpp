#include "pessoa.hpp"
#include "empresa.hpp"
#include "usuario.hpp"
#include "usuarioLogado.hpp"
#include "exceptions.hpp"
#include "logEscrita.hpp"
#include "validacpfcnpj.hpp"

#include <iostream>

using namespace std;

bool validaCPF(string Cpf)
{
  if (Cpf == "00000000000" || Cpf == "11111111111" || Cpf == "22222222222" ||
      Cpf == "33333333333" || Cpf == "44444444444" || Cpf == "55555555555" ||
      Cpf == "66666666666" || Cpf == "77777777777" || Cpf == "88888888888" ||
      Cpf == "99999999999")
    return false;

  int i, digito1, digito2, resto, soma;
  string nDigResult;
  soma = 0;
  digito1 = 0;
  digito2 = 0;
  resto = 0;
  for (i = 1; i <= 9; i++)
    soma = soma + (stoi(Cpf.substr(i - 1, 1)) * (11 - i));
  resto = (soma * 10) % 11;
  if ((resto == 10) || (resto == 11))
    resto = 0;
  digito1 = resto;
  soma = 0;
  for (i = 1; i <= 10; i++)
    soma = soma + (stoi(Cpf.substr(i - 1, 1)) * (12 - i));
  resto = (soma * 10) % 11;
  if ((resto == 10) || (resto == 11))
    resto = 0;
  digito2 = resto;
  nDigResult = Cpf.substr(9, 2);
  if ((nDigResult == to_string(digito1) + to_string(digito2)))
    return true;
  else
    return false;
}

bool validaCNPJ(string Cnpj)
{
  if (Cnpj == "00000000000000" || Cnpj == "11111111111111" ||
      Cnpj == "22222222222222" || Cnpj == "33333333333333" ||
      Cnpj == "44444444444444" || Cnpj == "55555555555555" ||
      Cnpj == "66666666666666" || Cnpj == "77777777777777" ||
      Cnpj == "88888888888888" || Cnpj == "99999999999999")
    return false;

  int tamanho = Cnpj.length() - 2;
  string numeros = Cnpj.substr(0, tamanho);
  string digitos = Cnpj.substr(tamanho);
  int soma = 0;
  int pos = tamanho - 7;

  for (int i = tamanho; i >= 1; i--)
  {
    soma += stoi(numeros.substr(tamanho - i, 1)) * pos--;
    if (pos < 2)
      pos = 9;
  }

  int resultado = soma % 11 < 2 ? 0 : 11 - soma % 11;
  if (resultado != stoi(digitos.substr(0, 1)))
    return false;

  tamanho = tamanho + 1;
  numeros = Cnpj.substr(0, tamanho);
  soma = 0;
  pos = tamanho - 7;
  for (int i = tamanho; i >= 1; i--)
  {
    soma += stoi(numeros.substr(tamanho - i, 1)) * pos--;
    if (pos < 2)
      pos = 9;
  }

  resultado = soma % 11 < 2 ? 0 : 11 - soma % 11;
  if (resultado != stoi(digitos.substr(1, 1)))
    return false;
  return true;
}

/**
 * @brief Construct a new Pessoa:: Pessoa object
 *
 */
Pessoa::Pessoa()
{
}

/**
 * @brief Construct a new Pessoa:: Pessoa object
 *
 * @param nome
 * @param cpf_cnpj
 * @param endereco
 * @param email
 * @param tipo
 */
Pessoa::Pessoa(std::string nome, std::string cpf_cnpj, std::string endereco, std::string email, int tipo)
{
	//criar uma string com a permissao de cadastrarPessoa
	std::string permissao = "cadastrarPessoa";
	//UsuarioLogado::verificaPermissao(permissao)
	if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
		Empresa::getEmpresa()->gerarLogExcecao("pessoa", "Pessoa");
		throw AcessDeniedException();
	}else{
		this->nome = nome;
		this->cpf_cnpj = cpf_cnpj;
		this->endereco = endereco;
		this->email = email;
		this->tipo = tipo;
	}
	std::string atributos = "nome: " + nome + " cpf_cnpj: " + cpf_cnpj + " endereco: " + endereco + " email: " + email + " tipo: " + std::to_string(tipo);

	Empresa::getEmpresa()->gerarLogEscrita("pessoa", atributos);
	//Empresa::getEmpresa()->imprimirLogsEscrita();
}

/**
 * @brief Seta o cpf ou cnpj da pessoa
 *
 * @param cpf_cnpj
 */
void Pessoa::setcpf_cnpj(std::string cpf_cnpj)
{
	std::string permissao = "cadastrarDocumentoPessoa";
	Empresa::getEmpresa()->gerarLogEscrita("pessoa", "cpf_cnpj");
	//criar uma instancia de validacpfcnpj
	//ValidaCPFCNPJ *valida = new ValidaCPFCNPJ();
	
	if (!Empresa::getEmpresa()->verificaPermissao(permissao))
	{
		Empresa::getEmpresa()->gerarLogExcecao("pessoa", "setcpf_cnpj");
		throw AcessDeniedException();
	}
	else
	{
		if (cpf_cnpj.length() >= 11 && cpf_cnpj.length() <= 13)
		{
			tipo = 0;

			if (!ValidaCPFCNPJ::GetInstance()->validaCPF(cpf_cnpj)) // Concertar
			{
				//std::cout << "CPF invalido (valida) -> " << cpf_cnpj.length() << std::endl;
				Empresa::getEmpresa()->gerarLogExcecao("pessoa", "setcpf_cnpj");
				throw InvalidCPFException();
			}
			else
			{
				this->cpf_cnpj = cpf_cnpj;
			}
		}
		else if (cpf_cnpj.length() >= 14 && cpf_cnpj.length() <= 15)
		{
			tipo = 1;
			if (!ValidaCPFCNPJ::GetInstance()->validaCNPJ(cpf_cnpj))
			{
				//std::cout << "CMNPJ invalido (valida)" << std::endl;
				Empresa::getEmpresa()->gerarLogExcecao("pessoa", "setcpf_cnpj");
				throw InvalidCNPJException();
			}
			else
			{
				this->cpf_cnpj = cpf_cnpj;
			}
		}
		else
		{
			//std::cout << "CPF ou CNPJ invalido" << cpf_cnpj.length() << " <- o tamain | o numero -> " << cpf_cnpj << std::endl;
			Empresa::getEmpresa()->gerarLogExcecao("pessoa", "setcpf_cnpj");
			throw InvalidCPFException();
		}
	}
}

/**
 * @brief Seta o email da pessoa
 *
 * @param email
 */
void Pessoa::setEmail(std::string email)
{
	std::string permissao = "cadastrarEmailPessoa";
	Empresa::getEmpresa()->gerarLogEscrita("pessoa", "email");
	if (!Empresa::getEmpresa()->verificaPermissao(permissao))
	{
		Empresa::getEmpresa()->gerarLogExcecao("pessoa", "setEmail");
		throw AcessDeniedException();
	}
	else
	{
		this->email = email;
	}
}

/**
 * @brief Seta o tipo da pessoa
 *
 * @param tipo
 */
void Pessoa::setTipo(int tipo)
{
	std::string permissao = "cadastrarTipoPessoa";
	Empresa::getEmpresa()->gerarLogEscrita("pessoa", "tipo");
	if (!Empresa::getEmpresa()->verificaPermissao(permissao))
	{
		Empresa::getEmpresa()->gerarLogExcecao("pessoa", "setTipo");
		throw AcessDeniedException();
	}
	else
	{
		// nao permite tipos que não sejam 0 ou 1
		if (tipo == 0 || tipo == 1)
		{
			this->tipo = tipo;
		}
		else
		{
			Empresa::getEmpresa()->gerarLogExcecao("pessoa", "setTipo");
			throw InvalidTypeException();
		}

	}
}

/**
 * @brief Retorna o nome da pessoa
 *
 * @return std::string
 */
std::string Pessoa::getNome()
{
	std::string informacao = "nome: " + nome;
	std::string entidade = "pessoa";
	std::string funcionalidade = "getNome";
	Empresa::getEmpresa()->gerarLogLeitura(entidade, informacao);
	//Empresa::getEmpresa()->imprimirLogsLeitura();
	std::string permissao = "verificarNomePessoa";
	if (!Empresa::getEmpresa()->verificaPermissao(permissao))
	{
		Empresa::getEmpresa()->gerarLogExcecao(entidade, funcionalidade);
		//Empresa::getEmpresa()->imprimirLogsExcecao();
		throw AcessDeniedException();
	}
	else
	{
		return nome;
	}
}

/**
 * @brief Retorna o cpf ou cnpj da pessoa
 *
 * @return std::string
 */
std::string Pessoa::getCpf_cnpj()
{
	std::string informacao = "getCpf_Cnpj: " + cpf_cnpj;
	std::string entidade = "cpf_cnpj";
	std::string funcionalidade = "getCpf_cnpj";
	Empresa::getEmpresa()->gerarLogLeitura(entidade, informacao);
	std::string permissao = "verificarDocumentoPessoa";
	//gerar log de leitura

	if (!Empresa::getEmpresa()->verificaPermissao(permissao))
	{
		Empresa::getEmpresa()->gerarLogExcecao(entidade, funcionalidade);
		throw AcessDeniedException();
	}
	else
	{
	return cpf_cnpj;
	}
}

/**
 * @brief Retorna o endereco da pessoa
 *
 * @return std::string
 */
std::string Pessoa::getEndereco()
{
	std::string informacao = "getEndereco: " + endereco;
	Empresa::getEmpresa()->gerarLogLeitura("endereco", informacao);
	std::string permissao = "verificarEnderecoPessoa";
	if (!Empresa::getEmpresa()->verificaPermissao(permissao))
	{
		Empresa::getEmpresa()->gerarLogExcecao("endereco", "getEndereco");
		throw AcessDeniedException();
	}
	else
	{
	return endereco;
	}
}

/**
 * @brief Retorna o email da pessoa
 *
 * @return std::string
 */
std::string Pessoa::getEmail()
{
	std::string informacao = "getEmail: " + email;
	Empresa::getEmpresa()->gerarLogLeitura("email", informacao);
	std::string permissao = "verificarEmailPessoa";
	if (!Empresa::getEmpresa()->verificaPermissao(permissao))
	{
		Empresa::getEmpresa()->gerarLogExcecao("email", "getEmail");
		throw AcessDeniedException();
	}
	else
	{
	return email;
	}
}


/**
 * @brief Retorna o tipo da pessoa
 *
 * @return int
 */
int Pessoa::getTipo(){
	std::string informacao = "getTipo: " + std::to_string(tipo);
	Empresa::getEmpresa()->gerarLogLeitura("tipo", informacao);
	std::string permissao = "verificarTipoPessoa";
	if (!Empresa::getEmpresa()->verificaPermissao(permissao))
	{
		Empresa::getEmpresa()->gerarLogExcecao("tipo", "getTipo");
		throw AcessDeniedException();
	}
	else
	{
	return tipo;
	}
}

/**
 * @brief Seta o nome da pessoa
 *
 * @param nome
 */
void Pessoa::setNome(std::string nome)
{
	std::string permissao = "cadastrarNomePessoa";
	Empresa::getEmpresa()->gerarLogEscrita("pessoa", "nome");
	if (!Empresa::getEmpresa()->verificaPermissao(permissao))
	{
		Empresa::getEmpresa()->gerarLogExcecao("pessoa", "setNome");
		throw AcessDeniedException();
	}
	else
	{
		this->nome = nome;
	}
}

/**
 * @brief Seta o endereco da pessoa
 *
 * @param endereco
 */
void Pessoa::setEndereco(std::string endereco)
{
	std::string permissao = "cadastrarEnderecoPessoa";
	Empresa::getEmpresa()->gerarLogEscrita("pessoa", "endereco");
	if (!Empresa::getEmpresa()->verificaPermissao(permissao))
	{
		Empresa::getEmpresa()->gerarLogExcecao("pessoa", "setEndereco");
		throw AcessDeniedException();
	}
	else
	{
		this->endereco = endereco;
	}
}
