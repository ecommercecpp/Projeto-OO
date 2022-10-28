#ifndef _PERMISSAO_HPP_
#define _PERMISSAO_HPP_

#include <string>
#include <map>

#include "lote.hpp"

class Permissao
{
	private:
		std::map<std::string, bool> permissao;
	public:
		Permissao();
    void editaPermissao(std::string, bool);
    void editaPermissao(std::map<std::string, bool>);
    bool temPermisssao(std::string);
};

#endif