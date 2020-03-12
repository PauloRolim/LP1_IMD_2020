#include <iostream>
#include "Retangulo.h"

int Retangulo::total = 0;

int main(){

    Retangulo r(10, 5);
    std::cout << "Largura = " << r.getLargura() << std::endl;
    std::cout << "Altura = " << r.getAltura() << std::endl;

    Retangulo s(11, 6);
    std::cout << "Largura = " << s.getLargura() << std::endl;
    std::cout << "Altura = " << s.getAltura() << std::endl;

    Retangulo *novo = new Retangulo(9, 9);
    std::cout << "Largura = " << novo->getLargura() << std::endl;
    std::cout << "Altura = " << novo->getAltura() << std::endl;
    delete novo;

    std::cout << "Numero de instancias: ";
    std::cout << Retangulo::getTotal() << std::endl;

    return 0;
}