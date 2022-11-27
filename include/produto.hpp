#ifndef _PRODUTO_HPP_
#define _PRODUTO_HPP_

#include <vector>
#include <string>

#include "lote.hpp"
#include "categoria.hpp"
#include "ordemProducao.hpp"
#include "materiaPrima.hpp"

class Produto
{
	private:
		std::string nome;
		int codigo;
		double valorDeVenda;
		//std::map<int, Lote, std::less<int>> lotes; Comentei por nao saber como trabalhar com esse tipo de map
		std::vector<Lote*> lotes;
		int tamanhoDoLoteMinimo;
		Categoria* categoria;
		int estoqueMinimo;
		int qtdEstoque;
		OrdemProducao* ordem;
		std::vector<MateriaPrima*> materiaPrimaLista;
		//std::map<int,MateriaPrima>
		void atualizarEstoque();
	public:
		Produto();
		//Produto(std::string nome, int codigo, double valorDeVenda, int tamanhoDoLoteMinimo, Categoria* categoria, int estoqueMinimo);
		~Produto();
		void setNome(std::string nome);
		void setCodigo(int codigo);
		void setValorDeVenda(double valorDeVenda);
		void setTamanhoDoLoteMinimo(int tamanhoDoLoteMinimo);
		void setCategoria(Categoria* categoria);
		void setEstoqueMinimo(int estoqueMinimo);
		void setQtdEstoque(int qtdEstoque);
		void setOrdem(OrdemProducao* ordem);
		std::string getNome();
		int getCodigo();
		double getValorDeVenda();
		int getTamanhoDoLoteMinimo();
		Categoria* getCategoria();
		int getEstoqueMinimo();
		int getQtdEstoque();
		OrdemProducao* getOrdem();
		void adicionarLote(Lote* lote);
		void removerLote(Lote* lote);
		void adicionarEstoque(int qtd);
		void removerEstoque(int qtd);
		bool verificarEstoque();
		bool verificaOrdem();
		void criarOrdem();
		void removerOrdem();
		bool verificarOrdem();
		void adicionarOrdem(OrdemProducao* ordem);
		void removerOrdem(OrdemProducao* ordem);
		void adicionarMateriaPrima(MateriaPrima* materiaPrima);
		void removerMateriaPrima(MateriaPrima* materiaPrima);
		void atualizarEstoque(int qtd);
		void atualizarEstoqueMinimo(int qtd);
		void atualizarTamanhoDoLoteMinimo(int qtd);
		void atualizarValorDeVenda(double valor);
		void atualizarCategoria(Categoria* categoria);
		void atualizarOrdem(OrdemProducao* ordem);
		void atualizarMateriaPrima(MateriaPrima* materiaPrima);
		void imprimir();

		/*Produto(std::string nome, unsigned int codigo, unsigned int quantidadeMinima, double preco, std::map<int, Lote> lotes, Categoria categoria);
		Produto(std::string nome, unsigned int codigo, unsigned int quantidadeMinima ,double preco, Lote lote);*/
		/*void atualizaCategoria(Categoria categoria);
		bool disponivel(int quantidade);
		std::map<int, Lote> getLotes();
		void validaEstoqueMinimo();
		void emiteOrdemProducao();*/
};

#endif