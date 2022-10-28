#ifndef _CATEGORIA_HPP_
#define _CATEGORIA_HPP_

#include <string>

class Categoria
{
	private:
		std::string nome;
	public:
		Categoria(std::string name);
		std::string getNome();
};

#endif