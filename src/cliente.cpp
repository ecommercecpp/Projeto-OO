#include "cliente.hpp"

Cliente ::Cliente(){}

Cliente ::Cliente(std::string nome, std::string CpfCnpj, std::string endereco, std::string email,int tipo, std::string telefone){
  this->nome = nome;
  this->cpfCnpj = CpfCnpj;
  this->endereco = endereco;
  this->email = email;
  this->tipo = tipo;
  this->telefone = telefone;
}

std::string Cliente::getTelefone(){
  return this->telefone;
}
void Cliente::setTelefone(std::tring telefone){
  this->telefone = telefone;
}

