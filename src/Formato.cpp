#include <iostream>
#include <math.h>
#include <string>
#include <string.h>
#include <cstddef>
#include "Formato.h"
#include "ExecaoCustomizada.h"

using namespace std;

/**
 * @brief Construct a new Formato:: Formato object
 *
 */
Formato::Formato()
{
    nome = "PT-BR";
    separadorData = '/';
    separadorHorario = ':';
}

/**
 * @brief Construct a new Formato:: Formato object
 *
 * @param valNome
 */
Formato::Formato(string valNome)
{
    nome = valNome;
    if (strcmp(valNome.c_str(), "PT-BR") == 0)
        separadorData = '/';
    else if (strcmp(valNome.c_str(), "EN-US") == 0)
        separadorData = '-';
    separadorHorario = ':';
}

/**
 * @brief Destroy the Formato:: Formato object
 *
 */
Formato::~Formato() {}

/**
 * @brief Retorna o nome do formato
 *
 * @return string
 */
string Formato::getNome()
{
    return nome;
}

/**
 * @brief Retorna o separador de data
 *
 * @return string
 */
string Formato::getSeparadorData()
{
    return separadorData;
}

/**
 * @brief Retorna o separador de horario
 *
 * @return string
 */
string Formato::getSeparadorHorario()
{
    return separadorHorario;
}
