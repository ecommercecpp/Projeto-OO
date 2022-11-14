#include <iostream>

#include "usuarioLogado.hpp"

Usuario *UsuarioLogado::usuario = nullptr;

UsuarioLogado::UsuarioLogado()
{
}

UsuarioLogado *UsuarioLogado::GetInstance()
{
    if (usuario == nullptr)
    {
        usuario = new UsuarioLogado();
    }
    return (UsuarioLogado *)usuario;
}

