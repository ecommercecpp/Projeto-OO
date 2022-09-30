#include "departamento.hpp"

Departamento::Departamento()
{

}

Departamento::Departamento(std::string nome, std::vector<Cargo> cargos) : nome(nome), cargos(cargos)
{

}

std::string Departamento::getNome()
{
	return nome;
}

void Departamento::setNome(std::string s)
{
	nome = s;
}

std::vector<Cargo> Departamento::getCargos(){
	return cargos;
}
void Departamento::setCargos(std::vector<Cargo> cargos){
	this->cargos = cargos;
}
