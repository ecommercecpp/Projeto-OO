#include <iostream>

#include "permissao.hpp"

/**
 * @brief Construct a new Permissao:: Permissao object
 *
 */
Permissao::Permissao()
{
}

/**
 * @brief Edita a permissão que um usuário possui
 *
 * @param permissao
 * @param valor
 */
void Permissao::editaPermissao(std::string permissao, bool valor)
{
    this->permissao[permissao] = valor;
}

/**
 * @brief Edita a permissão que vários usuários possuem
 *
 * @param permissao
 */
void Permissao::editaPermissao(std::map<std::string, bool> permissao)
{
    this->permissao = permissao;
}

/**
 * @brief Retorna se o usuário tem permissão ou não
 *
 * @param permissao
 * @return true
 * @return false
 */
bool Permissao::temPermisssao(std::string permissao)
{
    return this->permissao[permissao];
}

/**
 * @brief Gera o log sobre as permissãos
 *
 */
void Permissao::gerarLog()
{
    std::cout << "Log gerado" << std::endl;
}
