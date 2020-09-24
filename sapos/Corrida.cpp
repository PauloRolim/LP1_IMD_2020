#include "Corrida.hpp"
#include "Sapo.hpp"

#include <iostream>

void Corrida::listarSapos(){
    for (int i = 0; i < 4; i++)
    {
        std::cout << "Sapo ", sapos[i]->getIdendificador() << std::endl;
    }
}

void Corrida::vencedor(){
    for (int i = 0; i < 4; i++)
    {
        if (sapos[i]->getDistancia_percorrida() == getDistancia_total_corrida())
        {
            std::cout << sapos[i]->getIdendificador() << " " << sapos[i]->getDistancia_percorrida() <<
            " " << sapos[i]->getQuantidade_pulos_dados() << std::endl;
        }
    }
}

void Corrida::addSapo(Sapo* sapos){
    Sapo* sapos = new Sapo;
}

void Corrida::remSapo(int id){
    bool encontrou = false;
    for (int i = 0; i < 4; i++)
    {
        if (this->sapos[i]->getIdendificador() == id)
        {
            Sapo* local = sapos[i];
            sapos[i] = sapos[i+1];
            sapos[i+1] = local;
            encontrou = true;
        }
        
    }
    if (encontrou == true)
    {
        delete sapos[];
    }
    
}