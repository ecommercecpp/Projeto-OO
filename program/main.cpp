#include <iostream>
#include "autoload.hpp"

void testaCliente(){
	Cliente c;
	Cliente lojao;
	c.setNome("João");
	c.setTipo(0);// 0 - Física, 1 - Jurídica
	c.setcpf_cnpj("73118815019");
	c.setEndereco("Rua 1");
	c.setEmail("jao@jao.jao");
	c.setTelefone("123456789");
	
	lojao.setNome("Lojão");
	lojao.setEndereco("Rua 2");
	lojao.setEmail("lojao@gamil.com");
	lojao.setTipo(1);// 0 - Física, 1 - Jurídica
	lojao.setcpf_cnpj("50324999000100");
	lojao.setTelefone("987654321");

	std::cout << c.getNome() << ", " << c.getcpf_cnpj() << ", " << c.getEmail() << std::endl;	
	std::cout << lojao.getNome() << ", " << lojao.getcpf_cnpj() << ", " << lojao.getEmail() << std::endl;
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
	Departamento construcao("Departamento de Construcao", cargos1);
	Departamento gestao("Departamento de Gestao", cargos2);
	Funcionario f1;
	f1.setNome("Leonardo");
	f1.setMatricula(123456789);
	f1.setEmail("leo@leo.leo");
	f1.setCargo(c1);
	f1.setDepartamento(gestao);
	std::cout << f1.getNome() << ", " << f1.getMatricula() << ", " << f1.getEmail() << std::endl;
	std::cout << f1.getCargo().getNome() << ", " << f1.getDepartamento().getNome() << std::endl;
}

int main()
{
	int a = 0;
	std::cout << "+-----------------+"<<std::endl;
	std::cout<<"Bem vindo ao sistema de testes do sistema CEFILa(eh so as iniciais dos nomes dos integrantes do grupo!)"<<std::endl;
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