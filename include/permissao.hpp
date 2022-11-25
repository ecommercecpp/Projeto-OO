#ifndef _PERMISSAO_HPP_
#define _PERMISSAO_HPP_

#include <string>
#include <map>

#include "lote.hpp"

class Permissao
{
	private:
    std::vector <std::string> permissoes;
		//std::map<std::string, bool> permissao;
	public:
		Permissao();
    void editaPermissao(std::string, bool);
    void editaPermissao(std::vector<std::string>);
    bool temPermisssao(std::string);
    void gerarLog();
};

#endif