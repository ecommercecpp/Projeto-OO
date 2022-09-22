#include "departamento.hpp"

#include<iostream>

Departamento::Departamento(string nome){
  _nome  = nome;
}

Departamento::setNome(string nome){
  _nome  = nome;
}

string Departamento::getNome(){
  return _nome;
}