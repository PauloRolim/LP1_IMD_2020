#include "Retangulo.h"


Retangulo::getAltura(){
    return altura;
}

Retangulo::getLargura(){
    return largura;
}

Retangulo::setAltura(int a){
    altura = a;
}

Retangulo::setLargura(int l){
    largura = l;
}

Retangulo::Retangulo(int l, int a): 
    largura(l), altura(a)
{
    total++;
}

Retangulo::~Retangulo()
{
}