#ifndef _EXCEPTIONS_HPP_
#define _EXCEPTIONS_HPP_

#include <exception>

class InvalidCPFException : public std::exception
{
	public:
		InvalidCPFException() {}
		const char* what() const throw()
		{
			return "CPF inválido";
		}
};

class InvalidCNPJException : public std::exception
{
	public:
		InvalidCNPJException() {}
		const char* what() const throw()
		{
			return "CNPJ inválido";
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

#endif