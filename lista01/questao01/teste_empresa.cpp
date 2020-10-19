#include <iostream>

#include "Empresa.hpp"

int main(){

    Funcionario* novo = new Funcionario();
    novo->setNome("Feather Bot");
    novo->setData_admissao("18/07/2020");
    novo->setSalario(1045.50);

    Funcionario* maisUm = new Funcionario();
    maisUm->setNome("Gustavo Lima");
    maisUm->setSalario(100000.01);
    maisUm->setData_admissao("08/09/2020");

    Empresa ABC;
    ABC.addFuncionarios(novo);
    ABC.addFuncionarios(maisUm);

    ABC.setRazao_social("Amber Beer Company");
    ABC.setCnpj("11.568.014/0001-22");
    ABC.setRegime_tributos("Simples Nacional");

    std::cout << "A empresa " << ABC.getRazao_social();
    std::cout << " tem os seguintes funcionarios: " << std::endl;
    ABC.mostrarFuncionarios();

    std::cout << "Estamos demitindo: " << std::endl;
    ABC.removerFuncionario("Gustavo Lima");
    ABC.removerFuncionario("Feather Bot");
    ABC.mostrarFuncionarios();


    return 0;
}