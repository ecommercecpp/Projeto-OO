#include <iostream>

#include "empresa.hpp"

Empresa *Empresa::empresa = new Empresa();

Empresa::Empresa()
{
}

Empresa *Empresa::getEmpresa()
{
  return empresa;
}

void Empresa::adicionarDepartamento(Departamento* departamento){
    departamentos.push_back(departamento);
}

void Empresa::removerDepartamento(Departamento* departamento){
    for (unsigned int i = 0; i < departamentos.size(); i++){
        if (departamentos[i] == departamento){
            departamentos.erase(departamentos.begin() + i);
        }
    }
}

void Empresa::adicionarCargo(Cargo* cargo){
    cargos.push_back(cargo);
}

void Empresa::removerCargo(Cargo* cargo){
    for (unsigned int i = 0; i < cargos.size(); i++){
        if (cargos[i] == cargo){
            cargos.erase(cargos.begin() + i);
        }
    }
}

void Empresa::adicionarFuncionario(Funcionario* funcionario){
    funcionarios.push_back(funcionario);
}

void Empresa::removerFuncionario(Funcionario* funcionario){
    for (unsigned int i = 0; i < funcionarios.size(); i++){
        if (funcionarios[i] == funcionario){
            funcionarios.erase(funcionarios.begin() + i);
        }
    }
}

void Empresa::adicionarCliente(Cliente* cliente){
    clientes.push_back(cliente);
}

void Empresa::removerCliente(Cliente* cliente){
    for (unsigned int i = 0; i < clientes.size(); i++){
        if (clientes[i] == cliente){
            clientes.erase(clientes.begin() + i);
        }
    }
}

void Empresa::adicionarOrdemProducao(OrdemProducao* ordemProducao){
    ordemProducaoLista.push_back(ordemProducao);
}

void Empresa::removerOrdemProducao(OrdemProducao* ordemProducao){
    for (unsigned int i = 0; i < ordemProducaoLista.size(); i++){
        if (ordemProducaoLista[i] == ordemProducao){
            ordemProducaoLista.erase(ordemProducaoLista.begin() + i);
        }
    }
}

void Empresa::adicionarProduto(Produto* produto){
    produtos.push_back(produto);
}

void Empresa::removerProduto(Produto* produto){
    for (unsigned int i = 0; i < produtos.size(); i++){
        if (produtos[i] == produto){
            produtos.erase(produtos.begin() + i);
        }
    }
}

void Empresa::adicionarCategoria(Categoria* categoria){
    categorias.push_back(categoria);
}

void Empresa::removerCategoria(Categoria* categoria){
    for (unsigned int i = 0; i < categorias.size(); i++){
        if (categorias[i] == categoria){
            categorias.erase(categorias.begin() + i);
        }
    }
}

void Empresa::adicionarLote(Lote* lote){
    lotes.push_back(lote);
}

void Empresa::removerLote(Lote* lote){
    for (unsigned int i = 0; i < lotes.size(); i++){
        if (lotes[i] == lote){
            lotes.erase(lotes.begin() + i);
        }
    }
}

void Empresa::adicionarVenda(Venda* venda){
    vendas.push_back(venda);
}

void Empresa::removerVenda(Venda* venda){
    for (unsigned int i = 0; i < vendas.size(); i++){
        if (vendas[i] == venda){
            vendas.erase(vendas.begin() + i);
        }
    }
}

void Empresa::adicionarLogEscrita(LogEscrita* logEscrita){
    logsEscrita.push_back(logEscrita);
}

void Empresa::removerLogEscrita(LogEscrita* logEscrita){
    for (unsigned int i = 0; i < logsEscrita.size(); i++){
        if (logsEscrita[i] == logEscrita){
            logsEscrita.erase(logsEscrita.begin() + i);
        }
    }
}

void Empresa::adicionarLogLeitura(LogLeitura* logLeitura){
    logsLeitura.push_back(logLeitura);
}

void Empresa::removerLogLeitura(LogLeitura* logLeitura){
    for (unsigned int i = 0; i < logsLeitura.size(); i++){
        if (logsLeitura[i] == logLeitura){
            logsLeitura.erase(logsLeitura.begin() + i);
        }
    }
}

void Empresa::adicionarLogExcecao(LogExcecao* logExcecao){
    logsExcecao.push_back(logExcecao);
}

void Empresa::removerLogExcecao(LogExcecao* logExcecao){
    for (unsigned int i = 0; i < logsExcecao.size(); i++){
        if (logsExcecao[i] == logExcecao){
            logsExcecao.erase(logsExcecao.begin() + i);
        }
    }
}