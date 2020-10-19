#include "Funcionario.hpp"
#include <string>
#include <iostream>


Funcionario::~Funcionario(){
    std::cout << "Fui demitido" << std::endl;
}

std::string Funcionario::getNome(){
    return this->nome;
}

float Funcionario::getSalario(){
    return this->salario;
}

std::string Funcionario::getData_admissao(){
    return this->data_admissao;
}

void Funcionario::setNome(std::string var_nome){
    nome = var_nome;
}

void Funcionario::setSalario(float var_salario){
    salario = var_salario;
}

void Funcionario::setData_admissao(std::string var_data_admissao){
    data_admissao = var_data_admissao;
}