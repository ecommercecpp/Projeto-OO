#ifndef _EMPRESA_HPP_
#define _EMPRESA_HPP_

#include "autoload.hpp"
#include "estoque.hpp"
#include "permissao.hpp"
#include "categoria.hpp"

class Empresa
{
	private:
		static Empresa *empresa;
		std::map<int, Departamento> departamento;
		std::map<int, Cargo> cargo;
		std::map<int, Funcionario> funcionarios;
		std::vector<Cliente> clientes;
		Estoque estoque;
		std::map<int, Venda> venda;
		bool online;
		Pessoa usuarioLogado;
		std::map<Cliente, Permissao> permissao;
		Empresa();
	public:
		Empresa(Empresa &other) = delete;
		void operator=(const Empresa &) = delete;
		static Empresa *GetInstance();
		void atualizaDepartamento(Departamento);
		void atualizaCargo(Cargo);
		void atualizaFuncionario(Funcionario);
		void atualizaCliente(Cliente);
		void atualizaProduto(Produto);
		void atualizaVenda(Venda);
		void deletaDepartamento(Departamento);
		void deletaCargo(Cargo);
		void deletaFuncionario(Funcionario);
		void deletaCliente(Cliente);
		void deletaProduto(Produto);
		void deletaVenda(Venda);
		Departamento getDepartamento();
		std::map<int, Cargo> getCargos();
		std::map<int, Funcionario> getFuncionarios();
		std::vector<Cliente> getClientes();
		Estoque getEstoque();
		std::map<int, Venda> getVendas();
		void login(Pessoa);
};

#endif