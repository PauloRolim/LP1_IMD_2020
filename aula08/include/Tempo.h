#ifndef TEMPO_H
#define TEMPO_H

#include <string>

struct Tempo
{
    Tempo();
    unsigned horas;
    unsigned minutos;
    unsigned segundos;

    void set_from_string(const std::string &tempo);
    std::string to_string();
};
#endif