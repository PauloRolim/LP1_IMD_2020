#include "corrida.hpp"
#include <iostream>

Corrida::Corrida(std::string titulo, int distancia_corrida):titulo(titulo), concorrentes(0),
distancia_corrida(distancia_corrida){}

Corrida::~Corrida()
{
}

std::string Corrida::getTitulo(){
    return this->titulo;
}
int Corrida::getConcorrentes(){
    return this->concorrentes;
}
int Corrida::getDistancia_corrida(){
    return this->distancia_corrida;
}
void Corrida::addSapo(Sapo* novo){
    if (this->concorrentes<MAX_SAPOS){
        this->sapos[this->concorrentes++] = novo;
    } else
    {
        std::cout << "Corrida lotada! " << novo->getId() << " ficou de fora" << std::endl;
    }
    
}
void Corrida::remSapo(std::string id){
    
}

void Corrida::setFinal(bool var_final){
    final = var_final;
};

bool Corrida::getFinal(){
    return this-> final;
}

void Corrida::run(){

    int contador = 0;
    Sapo* vencedor = new Sapo;
    
    while (sapos[contador]->getDistancia() >= distancia_corrida)
    {
        sapos[contador]->pular();
        std::cout << "O sapo " << sapos[contador]->getId() << " percorreu a distância: "
        << sapos[contador]->getDistancia() << std::endl;
        contador++;
    }

    vencedor = sapos[contador];
    std::cout << "O vencedor foi " << vencedor->getId() << std::endl;
    
}