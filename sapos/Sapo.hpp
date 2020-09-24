#ifndef SAPO_H_
#define SAPO_H_

#include <cstdlib>

class Sapo{
  private:

    int identificador;
    int distancia_percorrida = 0;
    int quantidade_pulos_dados;

  public:
  //Construtores
  Sapo();
  Sapo(int identificador, int distancia_percorrida, 
  int quantidade_pulos_dados);

  //Destrutor
  ~Sapo();


  //getters
    int getIdendificador();
    int getDistancia_percorrida();
    int getQuantidade_pulos_dados();

  //setters

    void setIdentificador(int identificador);
    void setDistancia_percorrida(int distancia_percorrida);
    void setQuantidade_pulos_dados(int quantidade_pulos_dados);
  
  //Método pular

    int pular();

};
#endif
