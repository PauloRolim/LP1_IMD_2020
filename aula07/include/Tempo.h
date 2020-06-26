#ifndef TEMPO_H
#define TEMPO_H

#include <string>

struct Tempo
{
    unsigned horas;
    unsigned minutos;
    unsigned segundos;

    void set_from_string(const std::string &tempo);
};
#endif