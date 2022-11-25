#include <iostream>
#include "veiculo.hpp"
#include "usuarioLogado.hpp"
#include "usuario.hpp"
#include "cliente.hpp"
#include "funcionario.hpp"
#include "salario.hpp"
#include "empresa.hpp"
#include "Data.h"

void testUserSingleton(){
	std::cout << "-----------------" << std::endl;
	UsuarioLogado *U = UsuarioLogado::GetInstance();

	U->setNome("User 1");
	U->setSenha("123");
	U->setTipo(0);
	U->setcpf_cnpj("19169517711");
	U->setEmail("email1@gmail.com");
	
	std::cout << "Nome do singleton: " << U->getNome() << "aaaaaa ;-;" << std::endl;
	std::cout << "Carregando classe UsuarioLogado" << std::endl;
	
	// Criando outro usuário pra ver se quando chama o singleton ele não cria outro
	UsuarioLogado *usuarioLogado = UsuarioLogado::GetInstance();
	std::cout << usuarioLogado->getNome() << std::endl;
	std::cout << "-----------------" << std::endl;
}

void testaCliente(){

	Cliente lojao2("Lojao", "123456789", "Rua 1", "jao@jao.jao",1,"987654321");
	//c.setTipo(0);// 0 - Física, 1 - Jurídica

	std::cout << "Nome: " << lojao2.getNome() << std::endl;
}

void testaFuncionario()
{
	UsuarioLogado *U = UsuarioLogado::GetInstance();

	//adicionar permisse de cadastrarPessoa ao usuarioLogado
	U->addPermissao("cadastrarCliente");
	//printar o vector de permissoes
	
	std::cout << "Permissoes do usuario logado: " << std::endl;
	//imprimir getPermissoes

	std::cout<< "Permissoes do usuario na main: " << U->getPermissoes().size() << std::endl;
	
	for (unsigned int i = 0; i < U->getPermissoes().size(); i++)
	{
		std::cout << "aqui oh -> " << U->getPermissoes()[i] << std::endl;
	}


	//		Funcionario(std::string nome, std::string cpf_cnpj, std::string endereco, std::string email, Data nascimento, Data admissao, std::vector<Salario> salario, Departamento departamento, Cargo cargo);
	std::vector <Salario> salario;
	Salario s(10000.00, true, 1);
	salario.push_back(s);
	Departamento adm("Departamento de ADM");
	Cargo gerente("Gerente");
	Data nascimento(1990, 1, 1); 
	Data admissao(2010, 1, 1); 
	Funcionario f("Joao", "1234567891", "Rua 1", "joao@joao.com",nascimento, admissao, salario, adm, gerente);
	f.setNome("Joaozinho");
	f.setTipo(0);

	std::cout << "Nome do funcionario: " << f.getNome() << std::endl;
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
	std::cout<<"-------teste mil----------"<<std::endl;


}
void testaPessoa()
{
	//criar um usuario e adicionar a permissao cadastrarPessoa no vetor de permissões
	//Empresa *e = Empresa::getEmpresa();
	//criar um usuarioLogado
	UsuarioLogado *U = UsuarioLogado::GetInstance();

	//adicionar permisse de cadastrarPessoa ao usuarioLogado
	U->addPermissao("cadastrarPessoa");
	//printar o vector de permissoes
	
	std::cout << "Permissoes do usuario logado: " << std::endl;
	//imprimir getPermissoes

	std::cout << U->getPermissoes().size() << std::endl;
	
	for (unsigned int i = 0; i < U->getPermissoes().size(); i++)
	{
		std::cout << "aqui oh -> " << U->getPermissoes()[i] << std::endl;
	}

	Usuario usuario("Joao", "1234567891", "Rua 1", "email@email.com", 0, "123456", "123456");


	std::cout<<"-------teste mil grau----------"<<std::endl;
	Pessoa p("Joao", "1234567891", "Rua 1", "email@email.com", 0);
	p.setNome("Joao");
	p.setcpf_cnpj("12345678911");
	p.setEndereco("Rua 1");
	p.setEmail("email@email.com");
	p.setTipo(0);

	std::cout << "Nome: " << p.getNome() << std::endl;
}	

int main()
{
	//std::cout << "testando a pessoa amada em 3 dias" << std::endl;
	//testaPessoa();
	//std::cout << "testando usuarioLogado singleton" << std::endl;
	//testUserSingleton();
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