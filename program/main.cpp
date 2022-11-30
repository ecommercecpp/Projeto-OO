#include <iostream>
#include "veiculo.hpp"
#include "usuarioLogado.hpp"
#include "usuario.hpp"
#include "cliente.hpp"
#include "funcionario.hpp"
#include "salario.hpp"
#include "empresa.hpp"
#include "Data.h"
#include "materiaPrima.hpp"
#include "lote.hpp"
#include "orcamento.hpp"
#include "pedidoDeCompra.hpp"
#include "credito.hpp"
#include "boleto.hpp"
#include "rota.hpp"
#include "veiculo.hpp"

std::vector<std::string> permissao() {
  std::vector<std::string> permissoes;
	permissoes.push_back("cadastrarEmailPessoa");
	permissoes.push_back("cadastrarTipoPessoa");
	permissoes.push_back("verificarNomePessoa");
	permissoes.push_back("verificarDocumentoPessoa");
	permissoes.push_back("verificarEnderecoPessoa");
	permissoes.push_back("verificarEmailPessoa");
	permissoes.push_back("verificarTipoPessoa");
	permissoes.push_back("cadastrarNomePessoa");
	permissoes.push_back("cadastrarEnderecoPessoa");
	permissoes.push_back("cadastrarPessoa");
	permissoes.push_back("cadastrarDocumentoPessoa");

	permissoes.push_back("cadastrarFuncionario");
	permissoes.push_back("admitirFuncionario");
	//permissoes.push_back("demitirFuncionario");
	permissoes.push_back("empregadoFuncionario");
	permissoes.push_back("verificarStatusFuncionario");
	permissoes.push_back("cadastrarMatriculaFuncionario");
	permissoes.push_back("verificarMatriculaFuncionario");
	permissoes.push_back("cadastrarNascimentoFuncionario");
	permissoes.push_back("verificarNascimentoFuncionario");
	permissoes.push_back("cadastrarAdmissaoFuncionario");
	permissoes.push_back("verificarAdmissaoFuncionario");
	permissoes.push_back("cadastrarDemissaoFuncionario");
	permissoes.push_back("verificarDemissaoFuncionario");
	permissoes.push_back("cadastrarSalarioFuncionario");
	permissoes.push_back("verificarSalarioFuncionario");
	permissoes.push_back("cadastrarDepartamentoFuncionario");
	permissoes.push_back("verificarDepartamentoFuncionario");
	permissoes.push_back("cadastrarCargoFuncionario");
	permissoes.push_back("verificarCargoFuncionario");
	permissoes.push_back("cadastrarLatitudeFuncionario");
	permissoes.push_back("verificarLatitudeFuncionario");
	permissoes.push_back("cadastrarLongitudeFuncionario");
	permissoes.push_back("verificarLongitudeFuncionario");
	permissoes.push_back("cadastrarTurnoFuncionario");
	permissoes.push_back("verificarTurnoFuncionario");
	permissoes.push_back("cadastrarDistanciaFuncionario");
	permissoes.push_back("verificarDistanciaFuncionario");

	permissoes.push_back("cadastrarSalario");
	permissoes.push_back("verificarSalario");
	permissoes.push_back("cadastrarValorSalario");
	permissoes.push_back("cadastrarMotivoSalario");
	permissoes.push_back("verificarMotivoSalario");
	permissoes.push_back("cadastrarStatusSalario");
	permissoes.push_back("verificarDataSalario");
	permissoes.push_back("verificarValorSalario");
	permissoes.push_back("verificarStatusSalario");

	permissoes.push_back("cadastrarDepartamento");
	permissoes.push_back("verificarIdDepartamento");
	permissoes.push_back("verificarNomeDepartamento");
	permissoes.push_back("cadastrarNomeDepartamento");

	permissoes.push_back("verificarNomeCargo");
	permissoes.push_back("verificarIdCargo");
	permissoes.push_back("cadastrarNomeCargo");
	permissoes.push_back("cadastrarIdCargo");

	permissoes.push_back("verificarTelefoneCliente");
	permissoes.push_back("cadastrarTelefoneCliente");
	permissoes.push_back("cadastrarCliente");

	permissoes.push_back("cadastrarUsuario");
	permissoes.push_back("verificarLoginUsuario");
	permissoes.push_back("cadastrarLoginUsuario");
	permissoes.push_back("verificarSenhaUsuario");
	permissoes.push_back("cadastrarSenhaUsuario");
	permissoes.push_back("verificarPermissoesUsuario");
	permissoes.push_back("cadastrarPermissoesUsuario");

	permissoes.push_back("cadastrarUsuarioLogado");

	permissoes.push_back("setNomeProduto");
	permissoes.push_back("setCodigoProduto");
	permissoes.push_back("setValorDeVendaProduto");
	permissoes.push_back("setTamanhoDoLoteMinimoProduto");
	permissoes.push_back("setCategoriaProduto");
	permissoes.push_back("setEstoqueMinimoProduto");
	permissoes.push_back("setQtdEstoqueProduto");
	permissoes.push_back("getNomeProduto");
	permissoes.push_back("getCodigoProduto");
	permissoes.push_back("getValorDeVendaProduto");
	permissoes.push_back("getTamanhoDoLoteMinimoProduto");
	permissoes.push_back("getCategoriaProduto");
	permissoes.push_back("getEstoqueMinimoProduto");
	permissoes.push_back("getQtdEstoqueProduto");
	permissoes.push_back("adicionarEstoqueProduto");
	permissoes.push_back("removerEstoqueProduto");
	permissoes.push_back("verificarEstoqueProduto");
	permissoes.push_back("imprimirMateriaPrimaProduto");
	permissoes.push_back("imprimirProduto");
	permissoes.push_back("adicionarMateriaPrimaProduto");

	permissoes.push_back("instanciarUsuarioLogado");

	permissoes.push_back("cadastrarOrcamento");
	permissoes.push_back("verificarProdutosOrcamento");
	permissoes.push_back("cadastrarProdutosOrcamento");
	permissoes.push_back("verificarClienteOrcamento");
	permissoes.push_back("cadastrarClienteOrcamento");
	permissoes.push_back("verificarValorTotalOrcamento");
	permissoes.push_back("cadastrarValorTotalOrcamento");
	permissoes.push_back("verificarDataOrcamento");
	permissoes.push_back("cadastrarDataOrcamento");
	permissoes.push_back("cadastrarDataStringOrcamento");
	permissoes.push_back("verificarDataStringOrcamento");
	permissoes.push_back("verificarOrdemProducaoOrcamento");
	permissoes.push_back("cadastrarOrdemProducaoOrcamento");
	permissoes.push_back("imprimirOrcamento");
	permissoes.push_back("gerarOrcamento");

	permissoes.push_back("cadastrarCategoria");
	permissoes.push_back("verificarNomeCategoria");
	permissoes.push_back("cadastrarNomeCategoria");

	permissoes.push_back("setCodigoOrdemProducao");
	permissoes.push_back("getCodigoOrdemProducao");
	permissoes.push_back("setLoteOrdemProducao");
	permissoes.push_back("setDataOrdemProducao");
	permissoes.push_back("getLoteOrdemProducao");
	permissoes.push_back("getDataOrdemProducao");
	permissoes.push_back("getQuantidadeOrdemProducao");
	permissoes.push_back("setQuantidadeOrdemProducao");
	permissoes.push_back("setDataStringOrdemProducao");
	permissoes.push_back("getDataStringOrdemProducao");
	permissoes.push_back("imprimeOrdemProducao");
	permissoes.push_back("gerarOrdemProducao");

	permissoes.push_back("cadastrarPedidoDeCompra");
	permissoes.push_back("verificarIdPedidoDeCompra");
	permissoes.push_back("alterarIdPedidoDeCompra");
	permissoes.push_back("verificarDataPedidoDeCompra");
	permissoes.push_back("alterarDataPedidoDeCompra");
	permissoes.push_back("verificarHistoricoVendasPedidoDeCompra");
	permissoes.push_back("alterarHistoricoVendasPedidoDeCompra");
	permissoes.push_back("verificarStatusPedidoDeCompra");
	permissoes.push_back("alterarStatusPedidoDeCompra");
	permissoes.push_back("verificarRegistroAtualPedidoDeCompra");
	permissoes.push_back("alterarRegistroAtualPedidoDeCompra");
	permissoes.push_back("selecionarMetodoPagamentoPedidoDeCompra");
	permissoes.push_back("alterarDataPedidoDeCompra");
	permissoes.push_back("exibirDataPedidoDeCompra");
	permissoes.push_back("gerarPedidoDeCompra");
	permissoes.push_back("imprimirPedidoDeCompra");

	permissoes.push_back("cadastrarMetodoPagamento");
	permissoes.push_back("verificarCodigoMetodoPagamento");
	permissoes.push_back("alterarCodigoMetodoPagamento");
	permissoes.push_back("verificarNomeMetodoPagamento");
	permissoes.push_back("alterarNomeMetodoPagamento");
	permissoes.push_back("verificarDataDeVencimentoMetodoPagamento");
	permissoes.push_back("alterarDataDeVencimentoMetodoPagamento");

	permissoes.push_back("cadastrarCredito");
	permissoes.push_back("verificarCodigoDeSegurancaCredito");
	permissoes.push_back("alterarCodigoDeSegurancaCredito");
	permissoes.push_back("verificarNomeDoTitularCredito");
	permissoes.push_back("alterarNomeDoTitularCredito");
	permissoes.push_back("verificarDataDeVencimentoCredito");
	permissoes.push_back("alterarDataDeVencimentoCredito");
	permissoes.push_back("verificarNumeroDoCartaoCredito");
	permissoes.push_back("alterarNumeroDoCartaoCredito");
	
	permissoes.push_back("cadastrarBoleto");
	permissoes.push_back("verificarCodigoDeBarrasBoleto");
	permissoes.push_back("alterarCodigoDeBarrasBoleto");
	permissoes.push_back("verificarNomeDoPagadorBoleto");
	permissoes.push_back("alterarNomeDoPagadorBoleto");
	permissoes.push_back("verificarDataDeVencimentoBoleto");
	permissoes.push_back("alterarDataDeVencimentoBoleto");
	permissoes.push_back("verificarPrazoDePagamentoBoleto");
	permissoes.push_back("alterarPrazoDePagamentoBoleto");
	permissoes.push_back("verificarValorBoleto");

	permissoes.push_back("adicionarProduto");
	permissoes.push_back("removerProduto");
	permissoes.push_back("verificarProduto");
	permissoes.push_back("verificarProdutos");
	permissoes.push_back("setarProduto");
	permissoes.push_back("validarEstoqueMinimo");
	permissoes.push_back("atualizarEstoque");
	permissoes.push_back("verificarDisponibilidade");
	permissoes.push_back("verificarEstoque");

	permissoes.push_back("adicionarProduto");
	permissoes.push_back("removerProduto");
	permissoes.push_back("verificarProduto");
	permissoes.push_back("verificarProdutos");
	permissoes.push_back("setarProdutos");
	permissoes.push_back("validarEstoqueMinimo");
	permissoes.push_back("atualizarEstoque");
	permissoes.push_back("verificarDisponibilidade");
	permissoes.push_back("verificarEstoque");

	permissoes.push_back("setarNomeMateriaPrima");
	permissoes.push_back("setarQuantidadeMateriaPrima");
	permissoes.push_back("setarEstoqueMinimoMateriaPrima");
	permissoes.push_back("setarUnidadeMedidaMateriaPrima");
	permissoes.push_back("atualizarQuantidadeMateriaPrima");
	permissoes.push_back("getQuantidadeMateriaPrima");
	permissoes.push_back("getNomeMateriaPrima");
	permissoes.push_back("getEstoqueMinimoMateriaPrima");
	permissoes.push_back("getUnidadeMedidaMateriaPrima");
	permissoes.push_back("setarEstoqueTotalMateriaPrima");
	permissoes.push_back("getEstoqueDisponivelMateriaPrima");

	permissoes.push_back("gerarOrdemCompra");

	permissoes.push_back("gerarOrcamentoMP");

	permissoes.push_back("setarTipoVeiculo");
	permissoes.push_back("verificarTipoVeiculo");
	permissoes.push_back("retornarTipoVeiculo");
	permissoes.push_back("alterarHorarioVeiculo");
	permissoes.push_back("verificarCargaVeiculo");
	permissoes.push_back("removerCargaVeiculo");
	permissoes.push_back("adicionarCargaVeiculo");
	permissoes.push_back("setarCapacidadeVeiculo");
	permissoes.push_back("verificarCapacidadeVeiculo");
	permissoes.push_back("verificarVeiculoCheio");

	permissoes.push_back("setarFuncionarioRota");
	permissoes.push_back("verificarFuncionarioRota");
	permissoes.push_back("setarIdRota");
	permissoes.push_back("verificarIdRota");
	permissoes.push_back("calcularDistanciaFuncionarios");
	permissoes.push_back("imprimirOrdemRotas");
	permissoes.push_back("calcularTempoViagem");
	permissoes.push_back("imprimirTempoViagem");
	permissoes.push_back("calcularHorarioChegada");

	
  return permissoes;
}

void testaCliente(){
	//Instanciar um objeto da classe Empresa.
	Empresa *e = Empresa::getEmpresa();
	//Instanciar um objeto de um usuário logado
	UsuarioLogado *U = UsuarioLogado::GetInstance();
	U->setNome("UsuarioCliente");
	U->setSenha("123");
	U->setTipo(0);// 0 - Física, 1 - Jurídica
	U->setcpf_cnpj("08167486669");
	U->setEmail("user@user.com");
	//Todas as permissoes foram adicionadas ao vetor, exceto ao metodo que permite a exclusao de um funcionario da empresa
	U->setPermissoes(permissao());

	//logando usuario na empresa
	e->logar(U);

	std::cout << "Nome do usuario logado(TestaCliente): " << U->getNome() << std::endl;
	std::cout <<"Quantidade de Permissoes no vetor de permissoes do usuario Logado: "<< U->getPermissoes().size() << std::endl;
	
	std::cout<<"-------Gerando a Cliente----------"<<std::endl;
	Cliente cFisico;
	Cliente cJuridico;
	cFisico.setNome("Jorge");
	cFisico.setcpf_cnpj("37063436066");
	cFisico.setEndereco("Rua 5");
	cFisico.setEmail("jorge@email.com");
	cFisico.setTipo(0); // 0 - Física, 1 - Jurídica
	cFisico.setTelefone("9876543210");
	cJuridico.setNome("Sergio");
	cJuridico.setcpf_cnpj("57304164000120");
	cJuridico.setEndereco("Rua 6");
	cJuridico.setEmail("sergio@email.com");
	cJuridico.setTipo(1); // 0 - Física, 1 - Jurídica
	cJuridico.setTelefone("9876543290");

	std::cout << "Nome do Cliente Fisico criado: " << cFisico.getNome() << " | Documento: " << cFisico.getCpf_cnpj() << std::endl;
	std::cout << "Nome do Cliente Juridico criado: " << cJuridico.getNome() << " | Documento: " << cJuridico.getCpf_cnpj() << std::endl;

	// criar  um orcamento
	Orcamento *o = new Orcamento();
	Lote *lote = new Lote();
	Produto *produto = new Produto();

	produto->setNome("Mesa");
	produto->setCodigo(1);
	produto->setValorDeVenda(30.0);
	produto->setEstoqueMinimo(20);
	produto->setQtdEstoque(20);
	produto->setTamanhoDoLoteMinimo(20); // definir certo
	Categoria *categoria = new Categoria();
	categoria->setNome("Moveis");
	produto->setCategoria(categoria);

	lote->produzir(produto, produto->getEstoqueMinimo());
	// criar materia prima e adicionar ao produto
	MateriaPrima *materiaPrima = new MateriaPrima();
	MateriaPrima *materiaPrima2 = new MateriaPrima();
	MateriaPrima *materiaPrima3 = new MateriaPrima();
	MateriaPrima *materiaPrima4 = new MateriaPrima();

	materiaPrima->setNome("Madeira");
	materiaPrima->setQuantidade(450);
	materiaPrima->setUnidadeMedida("g");
	materiaPrima->setEstoquemin(1000);
	materiaPrima->setEstoqueTotal(1500);
	produto->adicionarMateriaPrima(materiaPrima);

	materiaPrima2->setNome("Plastico");
	materiaPrima2->setQuantidade(150);
	materiaPrima2->setUnidadeMedida("g");
	materiaPrima2->setEstoquemin(1000);
	materiaPrima2->setEstoqueTotal(1500);
	produto->adicionarMateriaPrima(materiaPrima2);

	materiaPrima3->setNome("Aluminio");
	materiaPrima3->setQuantidade(100);
	materiaPrima3->setUnidadeMedida("g");
	materiaPrima3->setEstoquemin(1000);
	materiaPrima3->setEstoqueTotal(1500);
	produto->adicionarMateriaPrima(materiaPrima3);

	materiaPrima4->setNome("Parafusos");
	materiaPrima4->setQuantidade(8);
	materiaPrima4->setUnidadeMedida("un");
	materiaPrima4->setEstoquemin(20);
	materiaPrima4->setEstoqueTotal(30);
	produto->adicionarMateriaPrima(materiaPrima4);

	std::cout << "Nome: " << produto->getNome() << std::endl;
	std::cout << "Preco: " << produto->getValorDeVenda() << std::endl;
	std::cout << "Quantidade estoque min: " << produto->getEstoqueMinimo() << std::endl;
	std::cout << "Codigo: " << produto->getCodigo() << std::endl;
	std::cout << "Estoque depois de efetuar a compra: " << materiaPrima->getEstoqueDisponivel() << " "<< materiaPrima->getUnidadeMedida() << std::endl;

	produto->imprimirMateriaPrima();

	std::vector<Produto *> produtos;
	produtos.push_back(produto);

	//fazendo o orcamento pedido nos testes
	o->gerarOrcamento(&cJuridico, 10, produtos);
	o->imprimeOrcamento(&cJuridico, produtos);

	PedidoDeCompra *p = new PedidoDeCompra();
	Credito *credito = new Credito();
	Boleto *boleto = new Boleto();
	p->setId(1);
	p->gerarPedidoDeCompra();
	p->selecionaMetodo(&cJuridico,credito,boleto);

	int opcao = 0;
	std::cout << "Deseja imprimir os logs?\n1 - Sim\n2 - Nao" << std::endl;
	std::cin >> opcao;
	if (opcao == 1)
	{
		e->imprimirLogs();
	}else if(opcao == 2){
		std::cout << "Ok, nao vamos imprimir os logs!" << std::endl;
	}else{
		std::cout << "Opcao invalida" << std::endl;
	}
	e->salvarLogs();
}

void testaFuncionario()
{
	Empresa *e = Empresa::getEmpresa();
	UsuarioLogado *U = UsuarioLogado::GetInstance();
	U->setNome("User 1");
	U->setSenha("123");
	U->setTipo(0);
	U->setcpf_cnpj("19169517711");
	U->setEmail("user1@user.com");

	U->setPermissoes(permissao());

	//logar usuario na empresa
	e->logar(U);

	std::cout << "-----------------" << std::endl;
	std::cout << "Gerando Funcionario" << std::endl;

	std::vector <Salario> salario;
	Salario s(10000.00, true, 1);
	salario.push_back(s);
	Departamento adm("Departamento de ADM");
	Departamento vendas("Departamento de Vendas");
	Cargo vendedor("Vendedor");
	Cargo gerente("Gerente");
	Data nascimento(1990, 1, 1); 
	Data admissao(2010, 1, 1); 
	Funcionario f;//"Joao", "12345678912", "Rua 1", "joao@joao.com",0, nascimento, admissao, salario, adm, gerente
	f.setNome("Joaozinho");
	f.setTipo(0);
	f.setcpf_cnpj("12345678912");
	f.setEndereco("Rua 1");
	f.setEmail("joao@joao.com");
	f.setNascimento(nascimento);
	f.setAdmissao(admissao);
	f.setSalario(salario);
	f.setDepartamento(adm);
	f.setCargo(gerente);
	f.setLatitude(-19.7760268);
	f.setLongitude(-43.9312126);
	f.setTurno(8.00);

	Funcionario f2;
	f2.setNome("Joaozinho2");
	f2.setTipo(0);
	f2.setcpf_cnpj("12345678912");
	f2.setEndereco("Rua 1");
	f2.setEmail("j2@joao.com");
	f2.setNascimento(nascimento);
	f2.setAdmissao(admissao);
	f2.setSalario(salario);
	f2.setDepartamento(adm);
	f2.setCargo(gerente);
	f2.setLatitude(-19.870682);
	f2.setLongitude(-43.9699246);
	f2.setTurno(8.00);

	Funcionario f3;
	f3.setNome("Joaozinho3");
	f3.setTipo(0);
	f3.setcpf_cnpj("12345678912");
	f3.setEndereco("Rua 1");
	f3.setEmail("j3@joao.com");
	f3.setNascimento(nascimento);
	f3.setAdmissao(admissao);
	f3.setSalario(salario);
	f3.setDepartamento(vendas);
	f3.setCargo(vendedor);
	f3.setLatitude(-19.7655718);
	f3.setLongitude(-43.8280941);
	f3.setTurno(8.00);

	//imprime nome dos funcionarios
	std::cout << "Nome dos Funcionarios atuais da empresa: " << std::endl;

	std::cout << "Nome do funcionario 1: " << f.getNome() << std::endl;
	std::cout << "Nome do funcionario 2: " << f2.getNome() << std::endl;
	std::cout << "Nome do funcionario 3: " << f3.getNome() << std::endl;

	e->adicionarFuncionario(&f);
	e->adicionarFuncionario(&f2);
	e->adicionarFuncionario(&f3);

	//criar um veiculo
	std::cout<<"-----------------"<<std::endl;
	std::cout<<"Gerando Veiculo"<<std::endl;
	Veiculo *v = new Veiculo();
	v->setTipo(1);
	std::cout<<"Tipo do veiculo: "<<v->retornaTipoVeiculo()<<std::endl;
	v->setCapacidade(20);
	v->addCarga(&f);
	v->addCarga(&f2);
	v->addCarga(&f3);
	v->verificaVeiculoCheio();

	//criar uma rota
	std::cout<<"-----------------"<<std::endl;
	std::cout<<"Gerando Rota"<<std::endl;
	Rota *r = new Rota();
	r->setId(1);

	//criar vetor de funcionarios para passar na funcao de rota calculaDistanciaEntreFuncionarios
	std::vector <Funcionario*> funcionarios;
	funcionarios.push_back(&f);
	funcionarios.push_back(&f2);
	funcionarios.push_back(&f3);

	r->calculaDistanciaEntreFuncionarios(funcionarios);

	r->calculaTempoViagem();

	r->calculaHorarioChegada();

	//imprimindo os logs antes de sair devido a excecao de remover funcionario
	int opcao = 0;
	std::cout << "Deseja imprimir os logs?\n1 - Sim\n2 - Nao" << std::endl;
	std::cin >> opcao;
	if (opcao == 1)
	{
		e->imprimirLogs();
	}else if(opcao == 2){
		std::cout << "Ok, nao vamos imprimir os logs!" << std::endl;
	}else{
		std::cout << "Opcao invalida" << std::endl;
	}

	e->salvarLogs();
	e->removerFuncionario(&f);//vai exibir a excecao de acesso negado devido ao pedido na sprint 8
}

void inicializaTestes()
{
	Empresa *e = Empresa::getEmpresa();
	UsuarioLogado *U = UsuarioLogado::GetInstance();
	std::vector<std::string> permissoes;
	
	U->setPermissoes(permissao());
	U->setNome("Usuario funciona pfvr");
	U->setSenha("123");
	U->setTipo(0);
	U->setcpf_cnpj("09169507600");
	U->setEmail("user@user.com");
	e->logar(U);

	Pessoa p("Joao", "12345678911", "Rua 1", "email@email.com", 0);
	p.setNome("Joao");
	p.setcpf_cnpj("12345678911");
	p.setEndereco("Rua 1");
	p.setEmail("email@email.com");
	p.setTipo(0);
	
}	

int main()
{
	int a = 0;
	std::cout << "+-----------------+"<<std::endl;
	std::cout<<"Bem vindo ao sistema de testes do sistema CEFIMl(eh so as iniciais dos nomes dos integrantes do grupo!)\n"<<std::endl;
	std::cout << "Acesse nosso repositorio no Github pelo link: https://github.com/ecommercecpp/Projeto-OO"<<std::endl;
	std::cout << "Acesse nossa documentacao pelo link: https://ecommercecpp.github.io/Projeto-OO/md__c___users_felip__one_drive__documentos__git_hub_poo__r_e_a_d_m_e.html"<<std::endl;	
	std::cout << "+-----------------+"<<std::endl;
	std::cout<<"\nDecidimos separar os testes em TestaFuncionario e TestaCliente para uma melhor organizacao do trabalho e para \nevitar que o programa se encerre desnecessariamente ao chamar a excecao de acesso negado solicitada em um dos testes.\n"<<std::endl;
	std::cout << "+-----------------+"<<std::endl;
	std::cout<<"\nDigite 1 para funcionario e 2 para cliente: "<<std::endl;
	std::cin>>a;
	inicializaTestes();
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