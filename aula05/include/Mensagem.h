#ifdef MENSAGEM_H
#define MENSAGEM_H

#include <string>

struct mensagem
{
    Data dada;
    Tempo tempo;
    std::string informacao;

    bool checando_datas(const Mensagem &outra_mensagem);
};

struct Tempo
{
    std::string segundo;
    std::string minuto;
    std::string hora;
};

struct Data
{
    std::string dia;
    std::string mes;
    std::string ano;
};

#endif
