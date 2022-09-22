#ifndef _FUNCIONARIO_HPP_
#define _FUNCIONARIO_HPP_

#include "salario.hpp"

#include <iostream>
#include <string>

using namespace std;

class Funcionario : public pessoa{
  protected:
    int matricula;
    Data dataNascimento;
    Departamento departamento;
    Cargo cargo;
    Data dataAdmissao;
    Data dataDemissao;
    bool situacao;
    Salario salario[];
  public:
    funcionario();
    funcionario(string nome, string cpfCnpj,       string endereco, int matricula, Data           dataNascimento, bool situacao, Salario         salario);
    int getMatricula();
    void setMatricula(int matricula);
    Data getDataNascimento();
    void setDataNascimento(Data               
    dataNascimento);
    Departamento getDepartamento();
    void setDepartamento(Departamento departamento);
    Cargo getCargo();
    void setCargo(Cargo cargo);
    Data getDataAdmissao();
    Data getDataDemissao();
    void setDataDemissao(Data dataDemissao);
    bool getSituacao();
    void setSituacao(bool situacao);
    Salario getSalario();
    void setSalario(Salario salario);
};

#endif