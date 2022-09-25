#ifndef _CARGO_HPP_
#define _CARGO_HPP_

#include <string>

class Cargo
{
	protected:
		std::string nome;
	public:
		Cargo();
		Cargo(std::string nome);
		std::string getNome();
		void setNome(std::string nome);
};

#endif