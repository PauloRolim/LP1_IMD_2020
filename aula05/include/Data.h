#ifndef TEMPO_H
#define TEMPO_H

#include <string>

struct Data
{
    unsigned ano;
    unsigned mes;
    unsigned dia;

    void set_from_string(const std::string &data);
};
#endif