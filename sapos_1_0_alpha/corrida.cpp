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

void Corrida::run() //Essa função é responsável por rodar a corrida
{
    
    int i = 0; // variável usada como contador no for
    bool final = false; // variável usada para entrar e sair do laço while

    while (final == false)
    {
        for (i = 0; i < 3; i++) // Esse for repete os pulos entes os três sapos corredores
        {
            sapos[i]->pular(); //faz os sapos pularem distâncias randômicas de acordo com o MAX_PULO
            std::cout << "O sapo " << sapos[i]->getId() << " percorreu a distância: "
            << sapos[i]->getDistancia() << std::endl;

            if (sapos[i]->getDistancia() >= Corrida::getDistancia_corrida()) // aqui é testado a condição de parada do laço while
            {
                final = true;
                std::cout << "`;." << "O vencedor é: " << sapos[i]->getId() << ".;´ " << std::endl;
                break;
            }
            
        }
        
    }
        
}