#include <string>
#include <iostream>
#include "Empresa.hpp"

std::string Empresa::getRazao_social(){
    return this->razao_social;
}

std::string Empresa::getCnpj(){
    return this->cnpj;
}

std::string Empresa::getRegime_tributos(){
    return this->regime_tributos;
}

int Empresa::getQuantidade_funcionarios(){
    return this->quantidade_funcionarios;
}

void Empresa::setRazao_social(std::string var_razao_social){
    this->razao_social = var_razao_social;
}

void Empresa::setCnpj(std::string var_cnpj){
    this-> cnpj = var_cnpj;
}

void Empresa::setRegime_tributos(std::string var_regime_tributos){
    this-> regime_tributos = var_regime_tributos;
}

void Empresa::addFuncionarios(Funcionario* novo){
    if (quantidade_funcionarios < CAPACIDADE_MAX)
    {
        quadro_funcionarios[quantidade_funcionarios++] = novo;   
    }
    
}

void Empresa::mostrarFuncionarios(){
    for (int i = 0; i < this->quantidade_funcionarios; i++)
    {
        std::cout << quadro_funcionarios[i]->getNome() << std::endl;        
    }
    
}
void Empresa::removerFuncionario(std::string var_nome){
    bool achou = false;

    for (int o = 0; o < this->quantidade_funcionarios; o++)
    {
        if (this->quadro_funcionarios[o]->getNome() == var_nome)
        {
            Funcionario* local = quadro_funcionarios[o];
            quadro_funcionarios[o] = quadro_funcionarios[o+1];
            quadro_funcionarios[o+1] = local;
            achou = true;

        } 
    }
    if (achou == true)
    {
        delete quadro_funcionarios[this->quantidade_funcionarios];
        this->quantidade_funcionarios--;
    }      
}