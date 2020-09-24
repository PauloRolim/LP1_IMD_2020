#include <iostream>
#include "Sapo.hpp"

int main() {

    Sapo sapo02 (14, 0, 0);
    sapo02.pular();
    sapo02.pular();
    std::cout << "Temos um participante: " << sapo02.getIdendificador() << std::endl;
    std::cout << "Quantidade de pulos: " << sapo02.getQuantidade_pulos_dados() << std::endl;
    std::cout << "Distancia percorrida: " << sapo02.getDistancia_percorrida() << std::endl;

    Sapo sapo03 (88, 0, 0);
    sapo03.pular();
    sapo03.pular();
    std::cout << "Temos um participante: " << sapo03.getIdendificador() << std::endl;
    std::cout << "Quantidade de pulos: " << sapo03.getQuantidade_pulos_dados() << std::endl;
    std::cout << "Distancia percorrida: " << sapo03.getDistancia_percorrida() << std::endl;

    return 0;
}