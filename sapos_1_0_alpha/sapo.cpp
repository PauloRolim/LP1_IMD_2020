#include "sapo.hpp"

Sapo::Sapo(std::string id, int max_pulo):id(id),max_pulo(max_pulo),rd(),gen(rd()),
dis(1,max_pulo){
    this->distancia = 0;
    this->pulos = 0;
}

Sapo::~Sapo(){}

std::string Sapo::getId(){
    return this->id;
}

int Sapo::getDistancia(){
    return this->distancia;
}

int Sapo::getPulos(){
    return this->pulos;
}

int Sapo::getMaxPulo(){
    return this->max_pulo;
}

void Sapo::pular(){
    this->pulos++;
    this->distancia += round(dis(gen)); //sorteia um valor aleatório entre 1 e max_pulo
}