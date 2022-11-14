#include <iostream>
#include "autoload.hpp"


void testaCliente(){

	Cliente lojao2("Lojao", "123456789", "Rua 1", "jao@jao.jao",1,"987654321");
	//c.setTipo(0);// 0 - Física, 1 - Jurídica

	std::cout << "Nome: " << lojao2.getNome() << std::endl;
}

void testaFuncionario()
{
	Cargo c1, c2, c3, c4, c5;
	c1.setNome("Chefao");
	c2.setNome("Engenheiro");
	c3.setNome("Pedreiro");
	c4.setNome("ADM");
	c5.setNome("Analista");
	std::vector<Cargo> cargos1;
	std::vector<Cargo> cargos2;
	cargos2.push_back(c1);
	cargos1.push_back(c2);
	cargos1.push_back(c3);
	cargos2.push_back(c4);
	cargos2.push_back(c5);
	//Departamento construcao("Departamento de Construcao", cargos1);
	Departamento adm("Departamento de ADM");

	//Funcionario f1("Joao", "123456789", "Rua 1", "a@a.com");
}

int main()
{

	int a = 0;
	std::cout << "+-----------------+"<<std::endl;
	std::cout<<"Bem vindo ao sistema de testes do sistema CEFIMl(eh so as iniciais dos nomes dos integrantes do grupo!)"<<std::endl;
	std::cout<<"Digite 1 para funcionario e 2 para cliente: "<<std::endl;
	std::cin>>a;
	std::cout << "+-----------------+"<<std::endl;
	switch (a)
	{
	case 1:
		testaFuncionario();
		break;
	case 2:
		testaCliente();
		break;		
	default:
		std::cout<<"Opcao invalida"<<std::endl;
		break;
	}							
	
	return 0;
}