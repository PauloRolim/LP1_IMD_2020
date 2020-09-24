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
  Sapo(int identificador, int distancia_percorrida, int quantidade_pulos_dados);

  //Destrutor
  ~Sapo();


  //getters
    int getIdendificador();
    int getDistancia_percorrida();
    int getQuantidade_pulos_dados();

  //setters

    void setIdentificador(int var_ident);
    void setDistancia_percorrida(int var_distancia);
    void setQuantidade_pulos_dados(int var_pulos);
  
  //Método pular

    int pular();

};
#endif
