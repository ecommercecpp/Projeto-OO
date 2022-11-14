#include <iostream>

#include "permissao.hpp"

Permissao::Permissao()
{
}

void Permissao::editaPermissao(std::string permissao, bool valor)
{
    this->permissao[permissao] = valor;
}

void Permissao::editaPermissao(std::map<std::string, bool> permissao)
{
    this->permissao = permissao;
}

bool Permissao::temPermisssao(std::string permissao)
{
    return this->permissao[permissao];
}

void Permissao::gerarLog()
{
    std::cout << "Log gerado" << std::endl;
}
