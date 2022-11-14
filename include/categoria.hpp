#ifndef _CATEGORIA_HPP_
#define _CATEGORIA_HPP_

#include <string>

class Categoria
{
	private:
		std::string nome;
	public:
		Categoria();
		Categoria(std::string nome);
		~Categoria();
		std::string getNome();
		void setNome(std::string name);
};

#endif