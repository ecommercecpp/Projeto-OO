#ifndef _CARGO_HPP_
#define _CARGO_HPP_

#include <iostream>
#include <string>

using namespace std;

class Cargo
{
	protected:
    string nome;
	public:
		Cargo();
		Cargo(string nome);
    std::string getNome();
    void setNome(std::string nome);
};

#endif