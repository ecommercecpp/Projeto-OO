#ifndef Departamento_H
#define Departamento_H

using namespace std;

class Departamento{
  protected:
  string _nome;
  
  public:
  Departamento(string nome);
  string getNome();
  void setNome(string nome);
}








#endif