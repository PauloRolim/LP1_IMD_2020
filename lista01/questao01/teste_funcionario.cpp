#include <iostream>
#include "Funcionario.hpp"

int main(){

    Funcionario novo;
    novo.setNome("Feather Bot");
    novo.setData_admissao("18/07/2020");
    novo.setSalario(1045.50);

    Funcionario* maisUm = new Funcionario();
    maisUm->setNome("Gustavo Lima");
    maisUm->setSalario(100000.01);
    maisUm->setData_admissao("08/09/2020");

    std::cout << "O nome do funcionario e " << novo.getNome() << " contratado no dia " 
    << novo.getData_admissao() << std::endl;
    std::cout << "Eu " << novo.getNome() << " ganho " << novo.getSalario() << std::endl;
    std::cout << "--------------------------------------" << std::endl;
    std::cout << "O nome do funcionario e " << maisUm->getNome() << " contratado no dia " 
    << maisUm->getData_admissao() << std::endl;
    std::cout << "Eu " << maisUm->getNome() << " ganho " << maisUm->getSalario() << std::endl;

    return 0;
}