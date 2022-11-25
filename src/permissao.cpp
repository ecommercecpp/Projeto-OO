#include <iostream>

#include "permissao.hpp"

/**
 * @brief Construct a new Permissao:: Permissao object
 * 
 */
Permissao::Permissao()
{
    permissoes.push_back("Cadastrar");
    permissoes.push_back("Editar");
    permissoes.push_back("Excluir");
    permissoes.push_back("Visualizar");
}