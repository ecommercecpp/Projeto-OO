#include <iostream>
//Tá uma baguncinha aqui, mas é só pra testar 
//copilot que sugeriu escrever isso ^ 

#include "autoload.hpp"

void testaCliente(){
	
}

void testaFuncionario()
{
	Funcionario f1("Leonardo", "123456789", "Rua 1", "leo@leo.leo", 1, 123, Data(), Data(), true, std::vector<Salario>(), Departamento(), Cargo());

	int id;
	std::cout << "Informe o ID do funcionario:" << std::endl;
	std::cin >> id;
}

int main()
{
	int a = 0;
	std::cout << "+-----------------+"<<std::endl;
	std::cout<<"Bem vindo ao sistema de testes do sistema CEFILa(eh so as iniciais dos nomes dos integrantes do grupo!)"<<std::endl;
	std::cout<<"Digite 1 para cliente e 2 para funcionario: "<<std::endl;
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