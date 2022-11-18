#ifndef _USUARIOLOGADO_HPP_
#define _USUARIOLOGADO_HPP_

#include <string>

#include "usuario.hpp"

class UsuarioLogado : public Usuario
{
	private:
		static Usuario *usuario;
		UsuarioLogado(std::string nome, std::string cpf_cnpj, std::string endereco, std::string email, int tipo, std::string login, std::string senha);
		
	public:
    	UsuarioLogado(UsuarioLogado &other) = delete;
		void operator=(const UsuarioLogado &) = delete;
		static UsuarioLogado *GetInstance();
};

#endif