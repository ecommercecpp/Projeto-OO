#ifndef _ROTA_HPP_
#define _ROTA_HPP_

#include <string>
#include <iostream>
#include <vector>
#include <cmath>

#include "exceptions.hpp"
#include "funcionario.hpp"
#include "empresa.hpp"
//#include "turno.hpp"


class Rota
{
private:
    std::vector<Funcionario*> funcionarios;
    //Funcionario* funcionario;
    int Id;
    //Turno turno;
    std::vector<float> ordemRotas;
    std::vector<float> tempoViagens;
    std::vector<Funcionario*> ordemFuncionarios;
    std::vector<float> horarios;

public:
    Rota()
    {
    }
    ~Rota() {}
    /**
     * @brief Verifica se o produto está disponivel no estoque
     *
     * @param x1
     * @param x2
     * @param y1
     * @param y2
     * @return true
     */
    float calculaDistancia(float x1, float y1, float x2, float y2)
    {
        return 110.57 * sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    }

    /**
     * @brief Seta o funcionario da rota
     *
     * @param funcionario
     */
    void setFuncionario(Funcionario* funcionario)
    {
        std::string permissao = "setarFuncionarioRota";
        std::string atributos = "funcionario";
        Empresa::getEmpresa()->gerarLogEscrita("rota", atributos);
        if (!Empresa::getEmpresa()->verificaPermissao(permissao))
        {
            Empresa::getEmpresa()->gerarLogExcecao("rota", "setFuncionario");
            throw AcessDeniedException();
        }
        else
        {
            this->funcionarios.push_back(funcionario);
        }
    }

    /**
     * @brief Retorna o funcionario da rota
     *
     * @return Funcionario*
     */
    std::vector<Funcionario*> getFuncionario()
    {
        std::string permissao = "verificarFuncionarioRota";
        std::string atributos = "funcionario";
        Empresa::getEmpresa()->gerarLogEscrita("rota", atributos);
        if (!Empresa::getEmpresa()->verificaPermissao(permissao))
        {
            Empresa::getEmpresa()->gerarLogExcecao("rota", "getFuncionario");
            throw AcessDeniedException();
        }
        else
        {
            return this->funcionarios;
        }
    }

    /**
     * @brief Seta o id da rota
     *
     * @param id
     */
    void setId(int id)
    {
        std::string permissao = "setarIdRota";
        std::string atributos = "id";
        Empresa::getEmpresa()->gerarLogEscrita("rota", atributos);
        if (!Empresa::getEmpresa()->verificaPermissao(permissao))
        {
            Empresa::getEmpresa()->gerarLogExcecao("rota", "setId");
            throw AcessDeniedException();
        }
        else
        {
            this->Id = id;
        }
    }

    /**
     * @brief Retorna o id da rota
     *
     * @return int
     */
    int getId()
    {
        std::string permissao = "verificarIdRota";
        std::string atributos = "id";
        Empresa::getEmpresa()->gerarLogEscrita("rota", atributos);
        if (!Empresa::getEmpresa()->verificaPermissao(permissao))
        {
            Empresa::getEmpresa()->gerarLogExcecao("rota", "getId");
            throw AcessDeniedException();
        }
        else
        {
            return this->Id;
        }
    }

    /**
     * @brief Calcula distancia entre funcionarios e adiciona no vetor de ordem de rotas 
     *
     * @param funcionarios
     */
    //usar a calculaDistancia para calcular a distancia entre as latitudes e longitudes de todos os funcionarios no vetor
    void calculaDistanciaEntreFuncionarios(std::vector<Funcionario*> f)
    {
        //printa o vetor de funcionarios
        /*for (int i = 0; i < f.size(); i++)
        {
            std::cout << f[i]->getNome() << std::endl;
        }*/
        std::string permissao = "calcularDistanciaFuncionarios";
        std::string atributos = "funcionario";
        Empresa::getEmpresa()->gerarLogEscrita("rota", atributos);
        if (!Empresa::getEmpresa()->verificaPermissao(permissao))
        {
            Empresa::getEmpresa()->gerarLogExcecao("rota", "calculaDistanciaEntreFuncionarios");
            throw AcessDeniedException();
        }
        else
        {
            std::vector<float> aux;
            std::vector<Funcionario*> aux2;
            for (unsigned int i = 0; i < f.size(); i++)
            {
                for (unsigned int j = 0; j < f.size(); j++)
                {
                    if (i != j)
                    {
                        //std::cout << "Distancia entre " << f[i]->getNome() << " e " << f[j]->getNome() << " = " << calculaDistancia(f[i]->getLatitude(), f[i]->getLongitude(), f[j]->getLatitude(), f[j]->getLongitude()) << std::endl;
                        float distancia = calculaDistancia(f[i]->getLatitude(), f[i]->getLongitude(), f[j]->getLatitude(), f[j]->getLongitude());
                        //setar as distancias no setDistancia do respectivo funcionario
                        //f[i]->setDistancia(distancia);
                        //criar vetor auxiliar para ordemRotas
                        

                        //adicionar as distancias em ordem crescente no vetor de ordemRotas
                        aux.push_back(distancia);
                        //coloca o vetor de ordemRotas em ordem crescente
                        std::sort(aux.begin(), aux.end());
                        //fazer o vetor de ordemRotas receber o vetor auxiliar
                        this->ordemRotas = aux;
                        //printar nome dos funcionarios em ordem crescente de distancia
                        //colocar vetor de funcionarios em ordem crescente de distancia
                        aux2.push_back(f[j]);
                        //fazer o vetor de funcionarios receber o vetor auxiliar
    
                       /* for (unsigned int i = 0; i < aux.size(); i++)
                        {
                            for (unsigned int j = 0; j < f.size(); j++)
                            {
                                if (aux[i] == f[j]->getDistancia())
                                {
                                    //std::cout << f[j]->getNome() << std::endl;
                                    //adicionar os funcionarios em ordem crescente de distancia no vetor de ordemFuncionarios
                                    //adicionar os funcionarios ao vetor de ordemFuncionarios
                                    //criar vetor auxiliar para ordemFuncionarios
                                    

                                    aux2.push_back(f[j]);
                                    //imprimir o nome dos funcionarios em ordem crescente de distancia
                                    std::cout << f[j]->getNome() << std::endl;
                                    //fazer o vetor de ordemFuncionarios receber o vetor auxiliar
                                    this->ordemFuncionarios = aux2;
                                }
                            }
                        }*/
                    }
                }
            }
            this->ordemRotas = aux;
            this->ordemFuncionarios = aux2;
            //imprimir o vetor de ordemRotas
            /*for (unsigned int i = 0; i < aux.size(); i++)
            {
                std::cout<<"ruiti"<<std::endl;
                std::cout << ordemRotas[i] << std::endl;
            }
            //imprimir o vetor de ordemFuncionarios
            for (unsigned int i = 0; i < aux2.size(); i++)
            {
                std::cout<<"asdas"<<std::endl;
                std::cout << aux2[i]->getNome() << std::endl;
            }*/

        }
    }

    /**
     * @brief Imprime vetor de ordem de rotas 
     *
     * @param void
     */
    //funcao pra imprimir vetor de ordem de rotas
    void imprimeOrdemRotas()
    {
        std::string permissao = "imprimirOrdemRotas";
        std::string atributos = "ordemRotas";
        Empresa::getEmpresa()->gerarLogEscrita("rota", atributos);
        if (!Empresa::getEmpresa()->verificaPermissao(permissao))
        {
            Empresa::getEmpresa()->gerarLogExcecao("rota", "imprimeOrdemRotas");
            throw AcessDeniedException();
        }
        else
        {
            for (unsigned int i = 0; i < ordemRotas.size(); i++)
            {
                std::cout << ordemRotas[i] << std::endl;
            }
        }
    }
    /**
     * @brief Calcula o tempo de viagem de cada funcionario
     *
     * @param void
     */
    //funcao para calcular o tempo de viagem de acordo com cada distancia dentro do vetor de ordem de rotas
    void calculaTempoViagem()
    {
        /*std::cout<<"Tempo de viagem: "<<std::endl;
        for (unsigned int i = 0; i < ordemRotas.size(); i++)
        {
            std::cout << ordemRotas[i] / 60 << " minutos" << std::endl;
        }*/
        std::string permissao = "calcularTempoViagem";
        std::string atributos = "tempoViagem";
        Empresa::getEmpresa()->gerarLogEscrita("rota", atributos);
        if (!Empresa::getEmpresa()->verificaPermissao(permissao))
        {
            Empresa::getEmpresa()->gerarLogExcecao("rota", "calculaTempoViagem");
            throw AcessDeniedException();
        }
        else
        {
            //considerando cada distancia no vetor de ordem de rotas em km e a velocidade media de 18km/h para calcular o tempo de cada viagem 
            for (unsigned int i = 0; i < ordemRotas.size(); i++)
            {
                float tempoViagem = ordemRotas[i] / 18;
                this->tempoViagens.push_back(tempoViagem);
            }
        }
    }
    /**
     * @brief Imprime o tempo de viagem de cada funcionario
     *
     * @param void
     */
    //printar o tempo de viagem de cada funcionario em ordem crescente de distancia e seus respectivos nomes
    void imprimeTempoViagem()
    {
        std::string permissao = "imprimirTempoViagem";
        std::string atributos = "tempoViagem";
        Empresa::getEmpresa()->gerarLogEscrita("rota", atributos);
        if (!Empresa::getEmpresa()->verificaPermissao(permissao))
        {
            Empresa::getEmpresa()->gerarLogExcecao("rota", "imprimeTempoViagem");
            throw AcessDeniedException();
        }
        else
        {
            for (unsigned int i = 0; i < tempoViagens.size(); i++)
            {
                std::cout << ordemFuncionarios[i]->getNome() << " = " << tempoViagens[i] << std::endl;
                
                //verificar qual o turno de cada funcionario e subtrair o tempo de viagem do tempo de trabalho do respectivo turno
            }
        }
    }
    /**
     * @brief Calcula o horario de embarque de cada funcionario
     *
     * @param void
     */
    //funcao para calcular de acordo com o turno e o tempo de viagem quando o funcionario deve chegar no trabalho
    void calculaHorarioChegada()
    {
        std::cout<< "Horario de embarque dos funcionarios: " << std::endl;
        std::string permissao = "calcularHorarioChegada";
        std::string atributos = "horarioChegada";
        Empresa::getEmpresa()->gerarLogEscrita("rota", atributos);
        if (!Empresa::getEmpresa()->verificaPermissao(permissao))
        {
            Empresa::getEmpresa()->gerarLogExcecao("rota", "calculaHorarioChegada");
            throw AcessDeniedException();
        }
        else
        {
            //printar ordemFuncionarios.size
            //std::cout<< this->ordemFuncionarios.size()<<std::endl;
            //excluir valores repetidos do vetor de ordemFuncionarios
            for (unsigned int i = 0; i < ordemFuncionarios.size(); i++)
            {
                for (unsigned int j = i + 1; j < ordemFuncionarios.size(); j++)
                {
                    if (ordemFuncionarios[i] == ordemFuncionarios[j])
                    {
                        ordemFuncionarios.erase(ordemFuncionarios.begin() + j);
                    }
                }
            }
            for (unsigned int i = 0; i < ordemFuncionarios.size(); i++)
            {
                if (ordemFuncionarios[i]->getTurno() == 8.00)
                {
        
                    float horarioChegada = 8 - tempoViagens[i];
                    //converte o horario de chegada para o formato hh:mm
                    int hora = horarioChegada;
                    int minuto = (horarioChegada - hora) * 60;
                    std::cout << "Horario de embarque de: " << ordemFuncionarios[i]->getNome() << " = " << hora << ":" << minuto << std::endl;
                    //std::cout << "Horario de embarque de: " << ordemFuncionarios[i]->getNome() << " = " << horarioChegada << " hrs"<< std::endl;
                    //horarioChegadas.push_back(horarioChegada);
                }
                else if (ordemFuncionarios[i]->getTurno() == 12.00)
                {
                    float horarioChegada = 12 - tempoViagens[i];
                    //imprimir o nome do funcionario e o horario de chegada
                    int hora = horarioChegada;
                    int minuto = (horarioChegada - hora) * 60;
                    std::cout << "Horario de embarque de: " << ordemFuncionarios[i]->getNome() << " = " << hora << ":" << minuto << std::endl;
                    //std::cout << "Horario de embarque de: " << ordemFuncionarios[i]->getNome() << " = " << horarioChegada << " hrs"<< std::endl;
                    //horarioChegadas.push_back(horarioChegada);
                }
                else if (ordemFuncionarios[i]->getTurno() == 18.00)
                {
                    float horarioChegada = 18 - tempoViagens[i];
                    int hora = horarioChegada;
                    int minuto = (horarioChegada - hora) * 60;
                    std::cout << "Horario de embarque de: " << ordemFuncionarios[i]->getNome() << " = " << hora << ":" << minuto << std::endl;
                    //std::cout << "Horario de embarque de: " << ordemFuncionarios[i]->getNome() << " = " << horarioChegada << " hrs"<< std::endl;
                    //horarioChegadas.push_back(horarioChegada);
                }else{
                    throw InvalidTimeException();
                }
            }
        }
    }


};
#endif