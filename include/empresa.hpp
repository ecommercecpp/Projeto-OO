#ifndef _EMPRESA_HPP_
#define _EMPRESA_HPP_

#include <string>
#include <vector>
#include <algorithm>

#include "estoque.hpp"
#include "produto.hpp"

#include "categoria.hpp"
#include "produto.hpp"
#include "departamento.hpp"
#include "funcionario.hpp"
#include "cargo.hpp"
#include "cliente.hpp"
#include "venda.hpp"
#include "lote.hpp"
#include "logs.hpp"
#include "logEscrita.hpp"
#include "logLeitura.hpp"
#include "logExcecao.hpp"

#include "usuario.hpp"
#include "usuarioLogado.hpp"

class Empresa
{
	private:
		static Empresa *empresa;
		UsuarioLogado* usuarioLogado;
		Usuario* usuario;

		std::vector<Produto*> produtos;
		std::vector<Categoria*> categorias;
		std::vector<Lote*> lotes;
		std::vector<Departamento*> departamentos;
		std::vector<Cargo*> cargos;
		std::vector<Funcionario*> funcionarios;
		std::vector<Cliente*> clientes;
		std::vector <OrdemProducao*> ordemProducaoLista;
		//Estoque estoque;
		std::vector<Venda*> vendas;
		//Usuario* usuarioLogado;
		std::vector <LogEscrita*> logsEscrita;
    	std::vector <LogLeitura*> logsLeitura;
		std::vector <LogExcecao*> logsExcecao;
		//std::vector <Veiculo*> veiculos; 
		//std::vector <MateriaPrima*> materiaPrimaLista;

		bool online;
		//std::vector <std::string> permissoes;//mudar pra um vetor de permissoes?

		//std::map<Cliente, Permissao> permissao;
		Empresa();
	public:
		Empresa(Empresa &other) = delete;
		//void operator=(const Empresa &) = delete;
		static Empresa* getEmpresa();
		
		
		//Usuario* getUsuarioLogado();
		//void setUsuarioLogado(Usuario* usuario);
		//void adicionarPermissao(Cliente* cliente, Permissao permissao);
		//void removerPermissao(Cliente* cliente);
		//Permissao getPermissao(Cliente* cliente);
		void adicionarDepartamento(Departamento* departamento);
		void removerDepartamento(Departamento* departamento);
		void adicionarCargo(Cargo* cargo);
		void removerCargo(Cargo* cargo);
		void adicionarLote(Lote* lote);
		void removerLote(Lote* lote);
		void adicionarFuncionario(Funcionario* funcionario);
		void removerFuncionario(Funcionario* funcionario);
		void adicionarCliente(Cliente* cliente);
		void removerCliente(Cliente* cliente);
		void adicionarOrdemProducao(OrdemProducao* ordemProducao);
		void removerOrdemProducao(OrdemProducao* ordemProducao);
		void adicionarVenda(Venda* venda);
		void removerVenda(Venda* venda);
		void adicionarLogEscrita(LogEscrita* logEscrita);
		void removerLogEscrita(LogEscrita* logEscrita);
		void adicionarLogLeitura(LogLeitura* logLeitura);
		void removerLogLeitura(LogLeitura* logLeitura);
		void adicionarLogExcecao(LogExcecao* logExcecao);
		void removerLogExcecao(LogExcecao* logExcecao);
		//void adicionarVeiculo(Veiculo* veiculo);
		//void removerVeiculo(Veiculo* veiculo);
		//void adicionarMateriaPrima(MateriaPrima* materiaPrima);
		//void removerMateriaPrima(MateriaPrima* materiaPrima);
		void adicionarProduto(Produto* produto);
		void removerProduto(Produto* produto);
		void adicionarCategoria(Categoria* categoria);
		void removerCategoria(Categoria* categoria);
		void adicionarEstoque(Estoque* estoque);
		void removerEstoque(Estoque* estoque);

		bool verificaPermissao(std::string valor);
		std::vector<std::string> getPermissoesUsuarioLogado();
		
		std::string getNomeUsuarioLogado();

		void logar(UsuarioLogado *usuarioLogado);
};

#endif