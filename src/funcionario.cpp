#include "funcionario.hpp"

Funcionario::funcionario(){}

Funcionario::funcionario(string nome,         string cpfCnpj, string endereco, int matricula, Data dataNascimento, bool situacao, Salario salario)
{
  this->nome = nome;
  this->cpfCnpj = cpfCnpj;
  this->matricula = matricula;
  this->dataNascimento = dataNascimento;
  this->situacao = situacao;
  this->salario = salario;
}

int Funcionario::getMatricula(){
  return this->matricula;
}

void Funcionario::setMatricula(matricula){
  this->matricula = matricula;
}

Data Funcionario::getDataNascimento(){
  return this->dataNascimento;
}

void Funcionario::setDataNascimento(dataNascimento){
  this->dataNascimento = dataNascimento;
}

Departamento Funcionario::getDepartamento(){
  reutnr this->departamento;
}

void Funcionario::setDepartamento(departamento){
  this->departamento = departamento;
}

Cargo Funcionario::getCargo(){
  return this->cargo;
}

void Funcionario::setCargo(cargo){
  this->cargo = cargo;
}

Data Funcionario::getDataAdmissao(){
  return this->dataAdmissao;
}

Data Funcionario::getDataDemissao(){
  return this->DataDemissao;
}

void Funcionario::setDataDemissao(dataDemissao){
  this->dataDemissao = dataDemissao;
}

bool Funcionario::getSituacao(){
  return this->situacao;
}

void Funcionario::setSituacao(situacao){
  this->situacao = situacao
}

Salario Funcionario::getSalario(){
  return this->salario;
}

void Funcionario::setSalario(){
  this->salario = salario;
}