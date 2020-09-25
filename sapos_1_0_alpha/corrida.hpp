#include "sapo.hpp"
#include <iostream>

#define MAX_SAPOS 3

class Corrida
{
private:
    std::string titulo;
    Sapo* sapos[MAX_SAPOS];
    int concorrentes;
    int distancia_corrida;
    bool final;
public:
    Corrida(std::string titulo, int distancia_corrida);
    ~Corrida();
    std::string getTitulo();
    int getConcorrentes();
    int getDistancia_corrida();
    void addSapo(Sapo* novo);
    void remSapo(std::string id);
    void run();
    void setFinal(bool var_final);
    bool getFinal();
};


