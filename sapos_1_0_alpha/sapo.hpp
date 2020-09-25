#ifndef _SAPO_
#define _SAPO_

#include<iostream>
#include<random>

#define MAX_PULO 10;

class Sapo {
private:
    std::string id;
    int max_pulo;
    int distancia;
    int pulos;
    std::random_device rd;
    std::default_random_engine gen;
    std::uniform_int_distribution<>dis;

public:
    Sapo();
    Sapo(std::string id, int max_pulo);
    ~Sapo();
    std::string getId();
    int getDistancia();
    int getPulos();
    int getMaxPulo();
    void pular();


};

#endif