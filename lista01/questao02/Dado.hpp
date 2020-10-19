#ifndef _DADO_
#define _DADO_

#include <random>

class Dado
{
private:

    int valor;
    std::random_device rd;
    std::default_random_engine gen;
    std::uniform_int_distribution<> dis;

public:
    Dado();
    int jogar();
    int getValor();
};
#endif