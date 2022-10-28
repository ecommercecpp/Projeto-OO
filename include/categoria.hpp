#ifndef _CATEGORIA_HPP_
#define _CATEGORIA_HPP_

#include <string>

class Categoria
{
	private:
		string nome;
	public:
		Categoria(string name);
		string getNome();
};

#endif