#ifndef _VEICULO_HPP_
#define _VEICULO_HPP_

#include <string>
#include <vector>

#include "exceptions.hpp"
#include "funcionario.hpp"
#include "empresa.hpp"

class Veiculo
{
private:
    int tipo;
    int capacidade;
    // std::string placa;
    std::vector<Funcionario*> cargas;

public:
    Veiculo()
    {
    }

    /**
     * @brief Destroy the Veiculo:: Veiculo object
     *
     */
    ~Veiculo()
    {
    }

    /**
     * @brief Seta o tipo do veiculo
     *
     * @param tipo
     */
    void setTipo(int tipo)
    {
        std::string permissao = "setarTipoVeiculo";
        std::string atributos = "tipo";
        Empresa::getEmpresa()->gerarLogEscrita("veiculo", atributos);
        if (!Empresa::getEmpresa()->verificaPermissao(permissao))
        {
            Empresa::getEmpresa()->gerarLogExcecao("veiculo", "setTipo");
            throw AcessDeniedException();
        }
        else
        {
            this->tipo = tipo;
        }
    }

    /**
     * @brief Retorna o tipo do veiculo
     *
     * @return std::string
     */
    int getTipo()
    {
        std::string permissao = "verificarTipoVeiculo";
        std::string informacao = "tipo";
        Empresa::getEmpresa()->gerarLogLeitura("veiculo", informacao);
        if (!Empresa::getEmpresa()->verificaPermissao(permissao))
        {
            Empresa::getEmpresa()->gerarLogExcecao("veiculo", "getTipo");
            throw AcessDeniedException();
        }
        else
        {
            return this->tipo;
        }
    }

    /**
     * @brief retorna o tipo do veiculo (onibus ou micro-onibus)
     *
     * @param void
     */
    std::string retornaTipoVeiculo()
    {
        std::string permissao = "retornarTipoVeiculo";
        std::string informacao = "tipo";
        Empresa::getEmpresa()->gerarLogLeitura("veiculo", informacao);
        if (!Empresa::getEmpresa()->verificaPermissao(permissao))
        {
            Empresa::getEmpresa()->gerarLogExcecao("veiculo", "retornaTipoVeiculo");
            throw AcessDeniedException();
        }
        else
        {
            if (this->tipo == 0)
            {
                return "onibus";
            }
            else
            {
                return "micro-onibus";
            }
        }
    }

    /**
     * @brief Altera o horario de saida do veiculo
     *
     * @param horario
     */
    void alteraHorario(std::string horario)
    {
        std::string permissao = "alterarHorarioVeiculo";
        std::string atributos = "horario: " + horario;
        Empresa::getEmpresa()->gerarLogEscrita("veiculo", atributos);
        if (!Empresa::getEmpresa()->verificaPermissao(permissao))
        {
            Empresa::getEmpresa()->gerarLogExcecao("veiculo", "alteraHorario");
            throw AcessDeniedException();
        }
        else
        {
            // this->horario = horario;
        }
    }

    int getCapacidade()
    {
        std::string permissao = "verificarCapacidadeVeiculo";
        std::string informacao = "capacidade";
        Empresa::getEmpresa()->gerarLogLeitura("veiculo", informacao);
        if (!Empresa::getEmpresa()->verificaPermissao(permissao))
        {
            Empresa::getEmpresa()->gerarLogExcecao("veiculo", "getCapacidade");
            throw AcessDeniedException();
        }
        else
        {
            return this->capacidade;
        }
    }

    void setCapacidade(int capacidade)
    {
        std::string permissao = "setarCapacidadeVeiculo";
        std::string atributos = "capacidade: " + std::to_string(capacidade);
        Empresa::getEmpresa()->gerarLogEscrita("veiculo", atributos);
        if (!Empresa::getEmpresa()->verificaPermissao(permissao))
        {
            Empresa::getEmpresa()->gerarLogExcecao("veiculo", "setCapacidade");
            throw AcessDeniedException();
        }
        else
        {
            this->capacidade = capacidade;
        }
    }

    /**
     * @brief Adiciona um funcionario na carga do veiculo
     *
     * @param funcionario
     */
    void addCarga(Funcionario *funcionario)
    {
        std::string permissao = "adicionarCargaVeiculo";
        std::string atributos = "funcionario: " + funcionario->getNome();
        Empresa::getEmpresa()->gerarLogEscrita("veiculo", atributos);
        if (!Empresa::getEmpresa()->verificaPermissao(permissao))
        {
            Empresa::getEmpresa()->gerarLogExcecao("veiculo", "addCarga");
            throw AcessDeniedException();
        }
        else
        {
            this->cargas.push_back(funcionario);
        }
    }

    /**
     * @brief Remove um funcionario da carga do veiculo
     *
     * @param funcionario
     */
    void removeCarga(Funcionario *funcionario)
    {
        std::string permissao = "removerCargaVeiculo";
        std::string atributos = "funcionario: " + funcionario->getNome();
        Empresa::getEmpresa()->gerarLogEscrita("veiculo", atributos);
        if (!Empresa::getEmpresa()->verificaPermissao(permissao))
        {
            Empresa::getEmpresa()->gerarLogExcecao("veiculo", "removeCarga");
            throw AcessDeniedException();
        }
        else
        {
            for (unsigned int i = 0; i < this->cargas.size(); i++)
            {
                if (this->cargas[i] == funcionario)
                {
                    this->cargas.erase(this->cargas.begin() + i);
                }
            }
        }
    }

    /**
     * @brief Retorna a carga do veiculo
     *
     * @return std::vector<Funcionario*>
     */
    std::vector<Funcionario *> getCarga()
    {
        std::string permissao = "verificarCargaVeiculo";
        std::string informacao = "carga";
        Empresa::getEmpresa()->gerarLogLeitura("veiculo", informacao);
        if (!Empresa::getEmpresa()->verificaPermissao(permissao))
        {
            Empresa::getEmpresa()->gerarLogExcecao("veiculo", "getCarga");
            throw AcessDeniedException();
        }
        else
        {
            return this->cargas;
        }
    }
    /**
     * @brief Verifica se o veiculo esta cheio
     *
     * @return true
     * @return false
     */
    //fazer funcao para verificar se o veiculo esta cheio
    bool verificaVeiculoCheio()
    {
        std::string permissao = "verificarVeiculoCheio";
        std::string informacao = "veiculo cheio";
        Empresa::getEmpresa()->gerarLogLeitura("veiculo", informacao);
        if (!Empresa::getEmpresa()->verificaPermissao(permissao))
        {
            Empresa::getEmpresa()->gerarLogExcecao("veiculo", "verificaVeiculoCheio");
            throw AcessDeniedException();
        }
        else
        {
            if (this->cargas.size() == this->capacidade)
            {
                return true;
                throw VeiculoCheioException();
            }
            else
            {
                std::cout<<"Veiculo nao esta cheio"<<std::endl;
                return false;
            }
        }
    }
};

#endif