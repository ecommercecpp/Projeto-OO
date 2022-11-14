#include <iostream>

#include "usuarioLogado.hpp"

Usuario *UsuarioLogado::usuario = nullptr;

/**
 * @brief Construct a new Usuario Logado:: Usuario Logado object
 *
 */
UsuarioLogado::UsuarioLogado()
{
}

/**
 * @brief Retorna a instancia do usuario que está logado (singleton)
 *
 * @return UsuarioLogado*
 */
UsuarioLogado *UsuarioLogado::GetInstance()
{
    if (usuario == nullptr)
    {
        usuario = new UsuarioLogado();
    }
    return (UsuarioLogado *)usuario;
}
