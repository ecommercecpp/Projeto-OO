#include <iostream>
#include <ctime>

#include "pedidoDeCompra.hpp"
#include "empresa.hpp"


/**
 * @brief Construct a new Pedido De Compra:: Pedido De Compra object
 * 
 */
PedidoDeCompra::PedidoDeCompra()
{
}

/**
 * @brief Construct a new Pedido De Compra:: Pedido De Compra object
 * 
 * @param id 
 * @param data 
 * @param historicoVendas 
 * @param status 
 * @param registroAtual 
 */
PedidoDeCompra::PedidoDeCompra(int id, Data data, std::vector<Venda> historicoVendas, bool status, std::string registroAtual)
{
    std::string permissao = "cadastrarPedidoDeCompra";
    std::string atributos = "id data historicoVendas status registroAtual";
    Empresa::getEmpresa()->gerarLogEscrita("pedidoDeCompra", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("pedidoDeCompra", "PedidoDeCompra");
        throw AcessDeniedException();
    }else{    
        this->id = id;
        this->data = data;
        this->historicoVendas = historicoVendas;
        this->status = status;
        this->registroAtual = registroAtual;
    }
}

/**
 * @brief Retorna o id do pedido de compra
 * 
 * @return int 
 */
int PedidoDeCompra::getId()
{
    std::string permissao = "verificarIdPedidoDeCompra";
    std::string atributos = "id: " + std::to_string(id);
    Empresa::getEmpresa()->gerarLogEscrita("pedidoDeCompra", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("pedidoDeCompra", "getId");
        throw AcessDeniedException();
    }else{    
        return this->id;
    }
}

/**
 * @brief Seta o id do pedido de compra
 * 
 * @param id 
 */
void PedidoDeCompra::setId(int id)
{
    std::string permissao = "alterarIdPedidoDeCompra";
    std::string atributos = "id: " + std::to_string(id);
    Empresa::getEmpresa()->gerarLogEscrita("pedidoDeCompra", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("pedidoDeCompra", "setId");
        throw AcessDeniedException();
    }else{    
        this->id = id;
    }
}

/**
 * @brief Retorna a data do pedido de compra
 * 
 * @return Data 
 */
Data PedidoDeCompra::getData()
{
    std::string permissao = "verificarDataPedidoDeCompra";
    std::string atributos = "data: " + data.getData();
    Empresa::getEmpresa()->gerarLogEscrita("pedidoDeCompra", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("pedidoDeCompra", "getData");
        throw AcessDeniedException();
    }else{    
        return this->data;
    }
}

/**
 * @brief Seta a data do pedido de compra
 * 
 * @param data 
 */
void PedidoDeCompra::setData(Data data)
{
    std::string permissao = "alterarDataPedidoDeCompra";
    std::string atributos = "data: " ;//+ data.getData();
    Empresa::getEmpresa()->gerarLogEscrita("pedidoDeCompra", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("pedidoDeCompra", "setData");
        throw AcessDeniedException();
    }else{    
        this->data = data;
    }
}

/**
 * @brief Retorna o historico de vendas do pedido de compra
 * 
 * @return std::vector<Venda> 
 */
std::vector<Venda> PedidoDeCompra::getHistoricoVendas()
{
    std::string permissao = "verificarHistoricoVendasPedidoDeCompra";
    std::string atributos = "historicoVendas: " + std::to_string(historicoVendas.size());
    Empresa::getEmpresa()->gerarLogEscrita("pedidoDeCompra", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("pedidoDeCompra", "getHistoricoVendas");
        throw AcessDeniedException();
    }else{    
        return this->historicoVendas;
    }
}

/**
 * @brief Seta o historico de vendas do pedido de compra
 * 
 * @param historicoVendas 
 */
void PedidoDeCompra::setHistoricoVendas(std::vector<Venda> historicoVendas)
{
    std::string permissao = "alterarHistoricoVendasPedidoDeCompra";
    std::string atributos = "historicoVendas: " + std::to_string(historicoVendas.size());
    Empresa::getEmpresa()->gerarLogEscrita("pedidoDeCompra", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("pedidoDeCompra", "setHistoricoVendas");
        throw AcessDeniedException();
    }else{    
        this->historicoVendas = historicoVendas;
    }
}

/**
 * @brief Retorna o status do pedido de compra
 * 
 * @return bool 
 */
bool PedidoDeCompra::getStatus()
{
    std::string permissao = "verificarStatusPedidoDeCompra";
    std::string atributos = "status: " + std::to_string(status);
    Empresa::getEmpresa()->gerarLogEscrita("pedidoDeCompra", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("pedidoDeCompra", "getStatus");
        throw AcessDeniedException();
    }else{    
        return this->status;
    }
}

/**
 * @brief Seta o status do pedido de compra
 * 
 * @param status 
 */
void PedidoDeCompra::setStatus(bool status)
{
    std::string permissao = "alterarStatusPedidoDeCompra";
    std::string atributos = "status: " + std::to_string(status);
    Empresa::getEmpresa()->gerarLogEscrita("pedidoDeCompra", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("pedidoDeCompra", "setStatus");
        throw AcessDeniedException();
    }else{    
        this->status = status;
    }
}

/**
 * @brief Retorna o registro atual do pedido de compra
 * 
 * @return std::string 
 */
std::string PedidoDeCompra::getRegistroAtual()
{
    std::string permissao = "verificarRegistroAtualPedidoDeCompra";
    std::string atributos = "registroAtual: " + registroAtual;
    Empresa::getEmpresa()->gerarLogEscrita("pedidoDeCompra", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("pedidoDeCompra", "getRegistroAtual");
        throw AcessDeniedException();
    }else{    
        return this->registroAtual;
    }
}

/**
 * @brief Seta o registro atual do pedido de compra
 * 
 * @param registroAtual 
 */
void PedidoDeCompra::setRegistroAtual(std::string registroAtual)
{
    std::string permissao = "alterarRegistroAtualPedidoDeCompra";
    std::string atributos = "registroAtual: " + registroAtual;
    Empresa::getEmpresa()->gerarLogEscrita("pedidoDeCompra", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("pedidoDeCompra", "setRegistroAtual");
        throw AcessDeniedException();
    }else{    
        this->registroAtual = registroAtual;
    }
}


/**
 * @brief Recebe os dados do usuário para selecionar e executar o método de pagamento
 * 
 * @param credito 
 * @param boleto 
 */
void PedidoDeCompra::selecionaMetodo(Cliente *cliente, Credito *credito, Boleto *boleto)
{
    std::string permissao = "selecionarMetodoPagamentoPedidoDeCompra";
    std::string atributos = "cliente: " + cliente->getNome() + "credito e boleto";
    Empresa::getEmpresa()->gerarLogEscrita("pedidoDeCompra", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("pedidoDeCompra", "selecionaMetodo");
        throw AcessDeniedException();
    }
    else
    {
        std::cout << "Selecione o metodo de pagamento: " << std::endl;
        std::cout << "1 - Credito" << std::endl;
        std::cout << "2 - Boleto" << std::endl;
        int opcao;
        std::cin >> opcao;
        switch (opcao)
        {
        case 1:
        {
            std::cout << "Digite o numero do cartao: ";
            std::string numeroDoCartao;
            std::cin >> numeroDoCartao;
            credito->setNumeroDoCartao(numeroDoCartao);
            std::cout << "Nome do titular: " << cliente->getNome() << std::endl;
            credito->setNomeDoTitular(cliente->getNome());
            std::cout << "Digite a data de validade: ";
            Data dataDeValidade;
            credito->setDataDeVencimento(dataDeValidade);
            std::cout << "Digite o codigo de seguranca: ";
            std::string codigoDeSeguranca;
            std::cin >> codigoDeSeguranca;
            credito->setCodigoDeSeguranca(codigoDeSeguranca);
            std::cout << "***Compra finalizada com sucesso*** " << std::endl;
            break;
        }
        case 2:
        {
            std::cout << "Digite o codigo do boleto: ";
            int codigoDeBarras;
            std::cin >> codigoDeBarras;
            boleto->setCodigoDeBarras(codigoDeBarras);
            std::cout << "Nome do pagador: " << cliente->getNome() << std::endl;
            boleto->setNomeDoPagador(cliente->getNome());
            std::cout << "Digite a data de vencimento: ";
            Data dataDeVencimento;
            boleto->setDataDeVencimento(dataDeVencimento);
            std::cout << "Digite o prazo de pagamento: 1 - 30d, 2 - 60d, 3 - 90d: ";
            int prazoDePagamento;
            std::cin >> prazoDePagamento;
            if (prazoDePagamento == 1)
            {
                boleto->setPrazoDePagamento(30);
            }
            else if (prazoDePagamento == 2)
            {
                boleto->setPrazoDePagamento(60);
            }
            else if (prazoDePagamento == 3)
            {
                boleto->setPrazoDePagamento(90);
            }
            else
            {
                std::cout << "Opcao invalida" << std::endl;
                throw PrazoErradoException();
            }
            boleto->setPrazoDePagamento(prazoDePagamento);
            std::cout << "***Compra finalizada com sucesso*** " << std::endl;
            break;
        }
        default:
            std::cout << "Opcao invalida!" << std::endl;
            break;
        }
    }
}

/**
 * @brief seta data em string
 * 
 * @param data
 */
void PedidoDeCompra::setDataString(std::string data)
{
    std::string permissao = "alterarDataPedidoDeCompra";
    std::string atributos = "data: " + data;
    Empresa::getEmpresa()->gerarLogEscrita("pedidoDeCompra", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("pedidoDeCompra", "setDataString");
        throw AcessDeniedException();
    }else{    
        this->dataString = data;
    }
}

/**
 * @brief exibe data em objeto
 * 
 * @param data
 */
std::string PedidoDeCompra::getDataString()
{
    std::string permissao = "exibirDataPedidoDeCompra";
    std::string atributos = "data: " + dataString;
    Empresa::getEmpresa()->gerarLogEscrita("pedidoDeCompra", atributos);
    if(!Empresa::getEmpresa()->verificaPermissao(permissao)){
        Empresa::getEmpresa()->gerarLogExcecao("pedidoDeCompra", "getDataString");
        throw AcessDeniedException();
    }else{    
        return this->dataString;
    }
}

/**
 * @brief gera pedido de compra
 * 
 * @param void
 */
void PedidoDeCompra::gerarPedidoDeCompra()
{
    std::string permissao = "gerarPedidoDeCompra";
    std::string atributos = "void";
    Empresa::getEmpresa()->gerarLogEscrita("pedidoDeCompra", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("pedidoDeCompra", "gerarPedidoDeCompra");
        throw AcessDeniedException();
    }
    else
    {
        // printar o id do pedido de compra
        Data data;
        time_t tt;
        struct tm *ti;
        time(&tt);
        ti = localtime(&tt);

        this->id = this->getId();
        this->data = data.dateNow();
        this->dataString = asctime(ti);
    }
}

/**
 * @brief imprime o pedido de compra
 *
 * @param void
 */
void PedidoDeCompra::imprimePedidoDeCompra()
{
    std::string permissao = "imprimirPedidoDeCompra";
    std::string atributos = "void";
    Empresa::getEmpresa()->gerarLogEscrita("pedidoDeCompra", atributos);
    if (!Empresa::getEmpresa()->verificaPermissao(permissao))
    {
        Empresa::getEmpresa()->gerarLogExcecao("pedidoDeCompra", "imprimePedidoDeCompra");
        throw AcessDeniedException();
    }
    else
    {
        std::cout << "------Imprimindo o pedido de compra------" << std::endl;
        std::cout << "Id: " << this->getId() << std::endl;
        std::cout << "Data: " << this->getDataString() << std::endl;
    }
}
