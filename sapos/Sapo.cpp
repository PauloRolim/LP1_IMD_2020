#include "Sapo.hpp"
#include <iostream>
#include <cstdlib>

using namespace std;

/*
Sapo::Sapo(){
  this->identificador = identificador;
  this->distancia_percorrida = distancia_percorrida;
  this->quantidade_pulos_dados = quantidade_pulos_dados;
}
*/
Sapo::Sapo(int identificador, int distancia_percorrida, 
int quantidade_pulos_dados): identificador(identificador), 
distancia_percorrida(distancia_percorrida), 
quantidade_pulos_dados(quantidade_pulos_dados){}

Sapo::~Sapo(){}

int Sapo::getIdendificador(){
  return identificador;
}

int Sapo::getDistancia_percorrida(){
  return distancia_percorrida;
}

int Sapo::getQuantidade_pulos_dados(){
  return quantidade_pulos_dados;
}

void Sapo::setIdentificador(int identificador){
  identificador = identificador;
}

void Sapo::setDistancia_percorrida(int distancia_percorrida){
  distancia_percorrida = distancia_percorrida;
}

void Sapo::setQuantidade_pulos_dados(int quantidade_pulos_dados){
  quantidade_pulos_dados = quantidade_pulos_dados;
}

int Sapo::pular(){
  int pulo = rand () % 10;
  distancia_percorrida = distancia_percorrida + pulo;
  quantidade_pulos_dados++;
  return distancia_percorrida;
}
