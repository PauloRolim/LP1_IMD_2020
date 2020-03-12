#include <iostream>
#include "Retangulo.h"

Retangulo::Retangulo(int l, int a): 
    largura(l), altura(a)
    {
    total++;
}

Retangulo::~Retangulo()
{
    std::cout << "Adeus mundo cruel!!";
    total--;
}

int Retangulo::getAltura(){
    return altura;
}

int Retangulo::getLargura(){
    return largura;
}

void Retangulo::setAltura(int a){
    altura = a;
}

void Retangulo::setLargura(int l){
    largura = l;
}

int Retangulo::getTotal()
{
    return total;
}