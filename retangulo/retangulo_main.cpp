#include <iostream>
#include "Retangulo.h"

int Retangulo::total = 0;

int main(){

    Retangulo r(10,5);

    std::cout << "Largura= " << r.getLargura() << std::endl;
    std::cout << "Altura= " << r.getAltura();

    std::cout << "numero de instancias" << std::endl;
    std::cout << Retangulo::getTotal();

    return 0;
}