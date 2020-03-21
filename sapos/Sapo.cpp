#include "Sapo.h"
#include <iostream>
#include <cstdlib>

using namespace std;

int Sapo::getIdendificador(){
  return identificador;
}

int Sapo::getDistancia_percorrida(){
  return distancia_percorrida;
}

int Sapo::getQuantidade_pulos_dados(){
  return quantidade_pulos_dados;
}

void Sapo::setIdentificador(int var_ident){
  identificador = var_ident;
}

void Sapo::setDistancia_percorrida(int var_distancia){
  distancia_percorrida = var_distancia;
}

void Sapo::setQuantidade_pulos_dados(int var_pulos){
  quantidade_pulos_dados = var_pulos;
}

int Sapo::pular(){
  distancia_percorrida = rand() % 10;
  return distancia_percorrida;
}
