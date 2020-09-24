#ifndef CORRIDA_H_
#define CORRIDA_H_

#include <iostream>
#include "Sapo.hpp"

class Corrida{
private:

    Sapo* sapos[3];

public:

    void addSapo(Sapo* novo);
    void remSapo(int identificador);
    static int distancia_total_corrida;
    static int getDistancia_total_corrida();
    void listarSapos();
    void vencedor();

};
#endif