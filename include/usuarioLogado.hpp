#ifndef _USUARIOLOGADO_HPP_
#define _USUARIOLOGADO_HPP_

#include <string>

#include "usuario.hpp"

class UsuarioLogado : public Usuario
{
	private:
		static UsuarioLogado *usuario;
		//UsuarioLogado(std::string nome, std::string cpf_cnpj, std::string endereco, std::string email, int tipo, std::string login, std::string senha, std::vector<std::string> permissoes);
		UsuarioLogado();
		//Usuario *user;
	public:
    	UsuarioLogado(UsuarioLogado &other) = delete;
		void operator=(const UsuarioLogado &) = delete;
		static UsuarioLogado *GetInstance();
		//bool getAcesso(std::string valor);
		Usuario* getUsuario();
		std::string getNome();
		std::string getCpf_cnpj();
		std::string getEndereco();
		std::string getEmail();
		int getTipo();
		std::string getLogin();
		std::string getSenha();
		std::vector<std::string> getPermissoes();
		void setPermissoes(std::vector<std::string> permissoes);

		void removePermissao(std::string valor);

};

#endif