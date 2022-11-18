#ifndef _EXCEPTIONS_HPP_
#define _EXCEPTIONS_HPP_

#include <exception>

class UserOfflineException : public std::exception
{
	public:
		UserOfflineException() {}
		const char* what() const throw()
		{
			return "Nenhum usuario logado, porfavor faca login para continuar...";
		}
};

class AcessDeniedException : public std::exception
{
	public:
		AcessDeniedException() {}
		const char* what() const throw()
		{
			return "Permissao de acesso negada";
		}
};
class InvalidCPFException : public std::exception
{
	public:
		InvalidCPFException() {}
		const char* what() const throw()
		{
			return "CPF invalido";
		}
};

class InvalidCNPJException : public std::exception
{
	public:
		InvalidCNPJException() {}
		const char* what() const throw()
		{
			return "CNPJ invalido";
		}
};

class InvalidCPFCNPJException : public std::exception
{
	public:
		InvalidCPFCNPJException() {}
		const char* what() const throw()
		{
			return "CPF/CNPJ inválido";
		}
};

class InvalidEmailException : public std::exception
{
	public:
		InvalidEmailException() {}
		const char* what() const throw()
		{
			return "Email inválido";
		}
};

class InvalidTypeException : public std::exception
{
	public:
		InvalidTypeException() {}
		const char* what() const throw()
		{
			return "Tipo inválido";
		}
};

class InvalidSalarioException : public std::exception
{
	public:
		InvalidSalarioException() {}
		const char* what() const throw()
		{
			return "Salário inválido";
		}
};

class InvalidMotivoException : public std::exception
{
	public:
		InvalidMotivoException() {}
		const char* what() const throw()
		{
			return "Motivo inválido";
		}
};


class InvalidTelefoneException : public std::exception
{
	public:
		InvalidTelefoneException() {}
		const char* what() const throw()
		{
			return "Telefone inválido";
		}
};

class InvalidQuantidadeLoteException : public std::exception
{
	public:
		InvalidQuantidadeLoteException() {}
		const char* what() const throw()
		{
			return "Quantidade inválida";
		}
};


class QuantidadeDeVendaIndisponivelException : public std::exception
{
	public:
		QuantidadeDeVendaIndisponivelException() {}
		const char* what() const throw()
		{
			return "Quantidade de venda indisponível";
		}
};

#endif