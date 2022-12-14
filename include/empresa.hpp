#ifndef _EMPRESA_HPP_
#define _EMPRESA_HPP_

#include <string>
#include <vector>
#include <algorithm>
#include <ctime>

#include "Data.h"

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
#include "ordemProducao.hpp"

#include "usuario.hpp"
#include "usuarioLogado.hpp"

class Empresa
{
	private:
		static Empresa *empresa;
		UsuarioLogado* usuarioLogado;
		Usuario* usuario;
		Funcionario* funcionario;
		//LogEscrita *logEscrita;

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
		float latitudeE;
		float longitudeE;
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
		~Empresa();
		//criar get e set latitude e longitude
		void setLatitudeE(float latitudeE){
			this->latitudeE = latitudeE;
		}
		float getLatitudeE(){
			return latitudeE;
		}
		void setLongitudeE(float longitudeE){
			this->longitudeE = longitudeE;
		}
		float getLongitudeE(){
			return longitudeE;
		}
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
		void removerLogEscrita(LogEscrita *logEscrita);
		void adicionarLogLeitura(LogLeitura *logLeitura);
		void removerLogLeitura(LogLeitura *logLeitura);
		void adicionarLogExcecao(LogExcecao *logExcecao);
		void removerLogExcecao(LogExcecao *logExcecao);
		/*void adicionarVeiculo(Veiculo *veiculo)
		{
			veiculos.push_back(veiculo);
		}

		void removerVeiculo(Veiculo *veiculo)
		{
			for (unsigned int i = 0; i < veiculos.size(); i++)
			{
				if (veiculos[i] == veiculo)
				{
					veiculos.erase(veiculos.begin() + i);
				}
			}
		}*/
		
		// void adicionarMateriaPrima(MateriaPrima* materiaPrima);
		// void removerMateriaPrima(MateriaPrima* materiaPrima);
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
		void deslogar();

		void gerarLogEscrita(std::string entidade, std::string atributoAlterado);
		void gerarLogLeitura(std::string entidade, std::string informacao);
		void gerarLogExcecao(std::string entidade, std::string funcionalidade);

		void imprimirLogsEscrita();
		void imprimirLogsLeitura();
		void imprimirLogsExcecao();

		void imprimirLogs();
		void salvarLogs();
};

#endif