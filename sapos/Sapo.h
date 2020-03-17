#ifndef_SAPO_H_
#define_SAPO_H_

#include <cstdlib>

class Sapo{
  private:

    int identificador;
    int distancia_percorrida;
    int quantidade_pulos_dados;

  public:

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
