#include <iostream>

#include "exceptions.hpp"
#include "usuarioLogado.hpp"

Usuario *UsuarioLogado::usuario = nullptr;

/**
 * @brief Construct a new Usuario Logado:: Usuario Logado object
 *
 */
UsuarioLogado::UsuarioLogado(std::string nome, std::string cpf_cnpj, std::string endereco, std::string email, int tipo, std::string login, std::string senha) : Usuario(nome, cpf_cnpj, endereco, email, tipo, login, senha)
{
    

}

/**
 * @brief Retorna a instancia do usuario que está logado (singleton)
 *
 * @return UsuarioLogado*
 */
UsuarioLogado *UsuarioLogado::GetInstance()
{
    /*if (usuario == nullptr)
    {
        //usuario = new UsuarioLogado("Nome", "123456789", "Endereco", "email", 1, "login", "senha");
        //throw UserOfflineException();
    }*/
    return (UsuarioLogado *)usuario;
}