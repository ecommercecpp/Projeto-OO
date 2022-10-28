#ifndef _USUARIOLOGADO_HPP_
#define _USUARIOLOGADO_HPP_

#include "usuario.hpp"
#include <string>

class UsuarioLogado : public Usuario
{
	private:
		static Usuario *usuario;
		
	public:
		UsuarioLogado();
    		UsuarioLogado(UsuarioLogado &other) = delete;
		void operator=(const UsuarioLogado &) = delete;
		static UsuarioLogado *GetInstance();
		
};

#endif