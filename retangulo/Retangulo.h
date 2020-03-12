#include <iostream>

class Retangulo
{
private:
    int largura;
    int altura;
    /* data */
public:
    Retangulo(int l, int a);
    static int total;
    static int getTotal();
    ~Retangulo();
    Retangulo();

    //getters
    int getAltura();
    int getLargura();

    //setters
    void setAltura(int a);
    void setLargura(int l);
};


