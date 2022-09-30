#ifndef _CARGO_HPP_
#define _CARGO_HPP_

#include <string>

class Cargo
{
	protected:
		int id;
		static int current_id;
		std::string nome;
	public:
		Cargo();
		Cargo(std::string nome);
		std::string getNome();
		int getId();
};

#endif