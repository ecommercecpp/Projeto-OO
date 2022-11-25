#ifndef _USUARIO_HPP_
#define _USUARIO_HPP_

#include <string>
#include <vector>

#include "pessoa.hpp"

class Usuario : public Pessoa
{
	private:
		std::string login;
		std::string senha;
		std::vector<std::string> permissoes;
	public:
		Usuario();
		Usuario(std::string nome, std::string cpf_cnpj, std::string endereco, std::string email, int tipo, std::string login, std::string senha);
		std::string getLogin();
		void setLogin(std::string login);
		std::string getSenha();
		void setSenha(std::string senha);
		std::vector<std::string> getUsuarioPermissoes();
		void setPermissoes(std::vector<std::string> permissoes);
		void addPermissaoUsuario(std::string valor);
		void removePermissaoUsuario(std::string valor);

};


#endif