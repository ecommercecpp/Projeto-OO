#include <iostream>
#include <algorithm>  // std::find

#include "Data.h"
#include "empresa.hpp"
#include "usuario.hpp"
#include "usuarioLogado.hpp"

/**
 * @brief Construct a new Empresa:: Empresa singleton object
 *
 */
Empresa *Empresa::empresa = nullptr;

/**
 * @brief Construct a new Empresa:: Empresa object
 *
 */
Empresa::Empresa()
{
}

/**
 * @brief Retorna a instancia da empresa
 *
 * @return Empresa*
 */
Empresa *Empresa::getEmpresa()
{
    if(empresa == nullptr){
        empresa = new Empresa;
    }
    return empresa;
}

/**
 * @brief Destroi a instancia da empresa
 *
 */
Empresa::~Empresa()
{
    delete empresa;
}

/**
 * @brief Adiciona um departamento a empresa
 *
 * @param departamento
 */
void Empresa::adicionarDepartamento(Departamento *departamento)
{
    departamentos.push_back(departamento);
}

/**
 * @brief Remove um departamento da empresa
 *
 * @param departamento
 */
void Empresa::removerDepartamento(Departamento *departamento)
{
    for (unsigned int i = 0; i < departamentos.size(); i++)
    {
        if (departamentos[i] == departamento)
        {
            departamentos.erase(departamentos.begin() + i);
        }
    }
}

/**
 * @brief Adiciona um cargo a empresa
 *
 * @param cargo
 */
void Empresa::adicionarCargo(Cargo *cargo)
{
    cargos.push_back(cargo);
}

/**
 * @brief Remove um cargo da empresa
 *
 * @param cargo
 */
void Empresa::removerCargo(Cargo *cargo)
{
    for (unsigned int i = 0; i < cargos.size(); i++)
    {
        if (cargos[i] == cargo)
        {
            cargos.erase(cargos.begin() + i);
        }
    }
}

/**
 * @brief Adiciona um funcionario a empresa
 *
 * @param funcionario
 */
void Empresa::adicionarFuncionario(Funcionario* funcionario)
{
    funcionario->admitir();
    funcionarios.push_back(funcionario);
    //printar funcionarios no vetor de funcionarios
    /*for (unsigned int i = 0; i < funcionarios.size(); i++)
    {
        std::cout <<"Funcao adicionarFuncionario "<< funcionarios[i]->getNome() << std::endl;
    }*/
}

/**
 * @brief Remove um funcionario da empresa
 *
 * @param funcionario
 */
void Empresa::removerFuncionario(Funcionario* funcionario)
{  
    funcionario->demitir();
    for (unsigned int i = 0; i < funcionarios.size(); i++)
    {
        if (funcionarios[i] == funcionario)
        {
            funcionarios.erase(funcionarios.begin() + i);
        }
    }
    /*for (unsigned int i = 0; i < funcionarios.size(); i++)
    {
        std::cout <<"Funcao removerFuncionario "<< funcionarios[i]->getNome() << std::endl;
    }*/
}

/**
 * @brief Adiciona um cliente a empresa
 *
 * @param cliente
 */
void Empresa::adicionarCliente(Cliente *cliente)
{
    clientes.push_back(cliente);
}

/**
 * @brief Remove um cliente da empresa
 *
 * @param cliente
 */
void Empresa::removerCliente(Cliente *cliente)
{
    for (unsigned int i = 0; i < clientes.size(); i++)
    {
        if (clientes[i] == cliente)
        {
            clientes.erase(clientes.begin() + i);
        }
    }
}

/**
 * @brief Adiciona uma ordem de produção a empresa
 *
 * @param ordemProducao
 */
void Empresa::adicionarOrdemProducao(OrdemProducao *ordemProducao)
{
    ordemProducaoLista.push_back(ordemProducao);
}

/**
 * @brief Remove uma ordem de produção da empresa
 *
 * @param ordemProducao
 */
void Empresa::removerOrdemProducao(OrdemProducao *ordemProducao)
{
    for (unsigned int i = 0; i < ordemProducaoLista.size(); i++)
    {
        if (ordemProducaoLista[i] == ordemProducao)
        {
            ordemProducaoLista.erase(ordemProducaoLista.begin() + i);
        }
    }
}

/**
 * @brief Adiciona um produto a empresa
 *
 * @param produto
 */
void Empresa::adicionarProduto(Produto *produto)
{
    produtos.push_back(produto);
}

/**
 * @brief Remove um produto da empresa
 *
 * @param produto
 */
void Empresa::removerProduto(Produto *produto)
{
    for (unsigned int i = 0; i < produtos.size(); i++)
    {
        if (produtos[i] == produto)
        {
            produtos.erase(produtos.begin() + i);
        }
    }
}

/**
 * @brief Adiciona uma categoria a empresa
 *
 * @param categoria
 */
void Empresa::adicionarCategoria(Categoria *categoria)
{
    categorias.push_back(categoria);
}

/**
 * @brief Remove uma categoria da empresa
 *
 * @param categoria
 */
void Empresa::removerCategoria(Categoria *categoria)
{
    for (unsigned int i = 0; i < categorias.size(); i++)
    {
        if (categorias[i] == categoria)
        {
            categorias.erase(categorias.begin() + i);
        }
    }
}

/**
 * @brief Adiciona um lote a empresa
 *
 * @param lote
 */
void Empresa::adicionarLote(Lote *lote)
{
    lotes.push_back(lote);
}

/**
 * @brief Remove um lote da empresa
 *
 * @param lote
 */
void Empresa::removerLote(Lote *lote)
{
    for (unsigned int i = 0; i < lotes.size(); i++)
    {
        if (lotes[i] == lote)
        {
            lotes.erase(lotes.begin() + i);
        }
    }
}

/**
 * @brief Adiciona uma venda a empresa
 *
 * @param venda
 */
void Empresa::adicionarVenda(Venda *venda)
{
    vendas.push_back(venda);
}

/**
 * @brief Remove uma venda da empresa
 *
 * @param venda
 */
void Empresa::removerVenda(Venda *venda)
{
    for (unsigned int i = 0; i < vendas.size(); i++)
    {
        if (vendas[i] == venda)
        {
            vendas.erase(vendas.begin() + i);
        }
    }
}

/**
 * @brief Adiciona um Log de escrita a empresa
 *
 * @param LogEscrita
 */
void Empresa::adicionarLogEscrita(LogEscrita *logEscrita)
{
    logsEscrita.push_back(logEscrita);
}

/**
 * @brief Remove um Log de escrita da empresa
 *
 * @param LogEscrita
 */
void Empresa::removerLogEscrita(LogEscrita *logEscrita)
{
    for (unsigned int i = 0; i < logsEscrita.size(); i++)
    {
        if (logsEscrita[i] == logEscrita)
        {
            logsEscrita.erase(logsEscrita.begin() + i);
        }
    }
}

/**
 * @brief Adiciona um Log de leitura a empresa
 *
 * @param LogLeitura
 */
void Empresa::adicionarLogLeitura(LogLeitura *logLeitura)
{
    logsLeitura.push_back(logLeitura);
}

/**
 * @brief Remove um Log de leitura da empresa
 *
 * @param LogLeitura
 */
void Empresa::removerLogLeitura(LogLeitura *logLeitura)
{
    for (unsigned int i = 0; i < logsLeitura.size(); i++)
    {
        if (logsLeitura[i] == logLeitura)
        {
            logsLeitura.erase(logsLeitura.begin() + i);
        }
    }
}

/**
 * @brief Adiciona um Log de exceção a empresa
 *
 * @param LogEcecao
 */
void Empresa::adicionarLogExcecao(LogExcecao *logExcecao)
{
    logsExcecao.push_back(logExcecao);
}

/**
 * @brief Remove um Log de exceção da empresa
 *
 * @param LogExcecao
 */
void Empresa::removerLogExcecao(LogExcecao *logExcecao)
{
    for (unsigned int i = 0; i < logsExcecao.size(); i++)
    {
        if (logsExcecao[i] == logExcecao)
        {
            logsExcecao.erase(logsExcecao.begin() + i);
        }
    }
}

bool Empresa::verificaPermissao(std::string valor){
   // std::cout << "Tamanho do vetor de permissoes de usuario logado(classe empresa): " << usuarioLogado->getPermissoes().size() << std::endl;
    int cont = 0;
    for (unsigned int i = 0; i < usuarioLogado->getPermissoes().size(); i++)
    {
        //usuarioLogado->getPermissoes()[i]
        if (usuarioLogado->getPermissoes()[i] == valor)
        {
            //std::cout << "Mostra as permissoes(classe empresa) TRUE" << usuarioLogado->getPermissoes()[i] << std::endl;
            cont++;
        }/*else{
            std::cout << "Mostra as permissoes(classe empresa) FALSE" << usuarioLogado->getPermissoes()[i] << std::endl;
        }*/
    }
    if(cont > 0){
        return true;
    }else{
        return false;
    }

}

std::vector<std::string> Empresa::getPermissoesUsuarioLogado(){
    return usuarioLogado->getPermissoes();
}

//criar uma função que retorna o nome do usuario logado
std::string Empresa::getNomeUsuarioLogado(){
    return usuarioLogado->getNome();
}

void Empresa::logar(UsuarioLogado *usuarioLogado){
    this->usuarioLogado = usuarioLogado;
}

void Empresa::deslogar(){
    this->usuarioLogado = NULL;
}

void Empresa::gerarLogEscrita(std::string entidade, std::string atributoAlterado){
    //criar um vector de atributos alterados
    LogEscrita *logEscrita = new LogEscrita();
    this->logsEscrita.push_back(logEscrita);

    std::vector <std::string> atributosAlterados;
    atributosAlterados.push_back(atributoAlterado);
    std::string nome = usuarioLogado->getNome();
    //std::cout << "Nome do usuario logado:(log escrita) " << nome << std::endl;
    //imprimir a entidade
    //std::cout << "Entidade:(log escrita) " << entidade << std::endl;
    Data data = Data();
    // Declaring argument for time()
    time_t tt;
    // Declaring variable to store return value of
    // localtime()
    struct tm * ti;
    // Applying time()
    time (&tt);
    // Using localtime()
    ti = localtime(&tt);
  
    //std::cout << "Current Day, Date and Time is = " << asctime(ti);
    logEscrita->setHorario(asctime(ti));
    logEscrita->setEntidade(entidade);
    logEscrita->setAtributosAnteriores(atributosAlterados);
    logEscrita->setUsuario(usuarioLogado);
    logEscrita->setData(data.dateNow());
    //std::cout << "Data:(log escrita) " << data.printData() << std::endl;
    adicionarLogEscrita(logEscrita);
}
//imprimir logs de escrita no vetor de logs de escrita da empresa
void Empresa::imprimirLogsEscrita(){
    //std::cout << "tamanho do vetor de logsEscrita: "<< logsEscrita.size() << std::endl;
    for (unsigned int i = 0; i < logsEscrita.size(); i++)
    {
        std::cout << "Entidade: " << logsEscrita[i]->getEntidade() << std::endl;
        std::cout << "Atributos alterados: " << logsEscrita[i]->getAtributosAnteriores()[0] << std::endl;
        std::cout << "Usuario: " << logsEscrita[i]->getUsuario()->getNome() << std::endl;
        std::cout << "Data: " << logsEscrita[i]->getHorario() << std::endl;
    }
}

void Empresa::gerarLogLeitura(std::string entidade, std::string informacaoLida){
    LogLeitura *logLeitura = new LogLeitura();
    this->logsLeitura.push_back(logLeitura);

    std::string nome = usuarioLogado->getNome();
   // std::cout << "Nome do usuario logado:(log leitura) " << nome << std::endl;
    //imprimir a entidade
    //std::cout << "Entidade:(log leitura) " << entidade << std::endl;
    Data data = Data();
    // Declaring argument for time()
    time_t tt;
    // Declaring variable to store return value of
    // localtime()
    struct tm * ti;
    // Applying time()
    time (&tt);
    // Using localtime()
    ti = localtime(&tt);
  
    //std::cout << "Current Day, Date and Time is = " << asctime(ti);
    logLeitura->setHorario(asctime(ti));
    logLeitura->setEntidade(entidade);
    logLeitura->setUsuario(usuarioLogado);
    logLeitura->setData(data.dateNow());
    logLeitura->setInformacao(informacaoLida);
    adicionarLogLeitura(logLeitura);
}

//função para imprimir o vetor logs de leitura
void Empresa::imprimirLogsLeitura(){
    //std::cout << "tamanho do vetor de logsLeitura: "<< logsLeitura.size() << std::endl;
    for (unsigned int i = 0; i < logsLeitura.size(); i++)
    {
        std::cout << "Entidade: " << logsLeitura[i]->getEntidade() << std::endl;
        std::cout << "Informacao lida: " << logsLeitura[i]->getInformacao() << std::endl;
        std::cout << "Usuario: " << logsLeitura[i]->getUsuario()->getNome() << std::endl;
        std::cout << "Data: " << logsLeitura[i]->getHorario() << std::endl;
    }
}

void Empresa::gerarLogExcecao(std::string entidade, std::string funcionalidade){
    LogExcecao *logExcecao = new LogExcecao();
    this->logsExcecao.push_back(logExcecao);

    std::string nome = usuarioLogado->getNome();
    //std::cout << "Nome do usuario logado:(log excecao) " << nome << std::endl;
    //imprimir a entidade
    //std::cout << "Entidade:(log excecao) " << entidade << std::endl;
    Data data = Data();
    // Declaring argument for time()
    time_t tt;
    // Declaring variable to store return value of
    // localtime()
    struct tm * ti;
    // Applying time()
    time (&tt);
    // Using localtime()
    ti = localtime(&tt);
  
    //std::cout << "Current Day, Date and Time is = " << asctime(ti);
    logExcecao->setHorario(asctime(ti));
    logExcecao->setEntidade(entidade);
    logExcecao->setUsuario(usuarioLogado);
    logExcecao->setData(data.dateNow());
    logExcecao->setFuncionalidade(funcionalidade);
    adicionarLogExcecao(logExcecao);
}

//função para imprimir o vetor logs de excecao
void Empresa::imprimirLogsExcecao(){
    //std::cout << "tamanho do vetor de logsExcecao: "<< logsExcecao.size() << std::endl;
    for (unsigned int i = 0; i < logsExcecao.size(); i++)
    {
        std::cout << "Entidade: " << logsExcecao[i]->getEntidade() << std::endl;
        std::cout << "Funcionalidade: " << logsExcecao[i]->getFuncionalidade() << std::endl;
        std::cout << "Usuario: " << logsExcecao[i]->getUsuario()->getNome() << std::endl;
        std::cout << "Data: " << logsExcecao[i]->getHorario() << std::endl;
    }
}

//função para imprimir todos os logs
void Empresa::imprimirLogs(){
    std::cout << "Exibindo os logs de todas as operacoes realizadas" << std::endl;
    std::cout << "-----------------" << std::endl;
    std::cout<<"Imprimindo logs de escrita: "<<std::endl;
    imprimirLogsEscrita();
    std::cout << "-----------------" << std::endl;
    std::cout<<"Imprimindo logs de leitura: "<<std::endl;
    imprimirLogsLeitura();
    std::cout << "-----------------" << std::endl;
    std::cout<<"Imprimindo logs de excecao: "<<std::endl;
    imprimirLogsExcecao();
}

//função para salvar todos os logs em um arquivo
void Empresa::salvarLogs(){
    std::ofstream arquivo;
    arquivo.open("logs.txt");
    if(arquivo.is_open()){
        for (unsigned int i = 0; i < logsEscrita.size(); i++)
        {
            arquivo << "Entidade: " << logsEscrita[i]->getEntidade() << std::endl;
            arquivo << "Informacao escrita: " << logsEscrita[i]->getAtributosAnteriores()[0] << std::endl;
            arquivo << "Usuario: " << logsEscrita[i]->getUsuario()->getNome() << std::endl;
            arquivo << "Data: " << logsEscrita[i]->getHorario() << std::endl;
            arquivo << "-----------------" << std::endl;
        }
        for (unsigned int i = 0; i < logsLeitura.size(); i++)
        {
            arquivo << "Entidade: " << logsLeitura[i]->getEntidade() << std::endl;
            arquivo << "Informacao lida: " << logsLeitura[i]->getInformacao() << std::endl;
            arquivo << "Usuario: " << logsLeitura[i]->getUsuario()->getNome() << std::endl;
            arquivo << "Data: " << logsLeitura[i]->getHorario() << std::endl;
            arquivo << "-----------------" << std::endl;
        }
        for (unsigned int i = 0; i < logsExcecao.size(); i++)
        {
            arquivo << "Entidade: " << logsExcecao[i]->getEntidade() << std::endl;
            arquivo << "Funcionalidade: " << logsExcecao[i]->getFuncionalidade() << std::endl;
            arquivo << "Usuario: " << logsExcecao[i]->getUsuario()->getNome() << std::endl;
            arquivo << "Data: " << logsExcecao[i]->getHorario() << std::endl;
            arquivo << "-----------------" << std::endl;
        }
    }
    arquivo.close();
}