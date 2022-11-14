#include <iostream>

#include "categoria.hpp"

Categoria::Categoria()
{
}

Categoria::Categoria(std::string nome)
{
    setNome(nome);
}

Categoria::~Categoria()
{
}

std::string Categoria::getNome()
{
    return nome;
}

void Categoria::setNome(std::string nome)
{
    this->nome = nome;
}
