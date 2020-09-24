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
int Corrida::getDistancia(){
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

void Corrida::run(){
    std::cout << "Fazer a corrida!" << std::endl;
}