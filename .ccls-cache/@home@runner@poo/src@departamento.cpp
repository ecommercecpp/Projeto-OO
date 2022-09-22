#include "../include/departamento.hpp"

#include<iostream>

Departamento::Departameto(string nome){
  _nome  = nome;
}

Departamento::setNome(string nome){
  _nome  = nome;
}

string Departamento::getNome(string nome){
  return _nome;
}