#include "Sapo.hpp"
#include <iostream>
#include <cstdlib>

using namespace std;


Sapo::Sapo(){
  this->identificador = identificador;
  this->distancia_percorrida = distancia_percorrida;
  this->quantidade_pulos_dados = quantidade_pulos_dados;
}



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
  int pulo = rand () % 10;
  distancia_percorrida = distancia_percorrida + pulo;
  quantidade_pulos_dados++;
  return distancia_percorrida;
}
