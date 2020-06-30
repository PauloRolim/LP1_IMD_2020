#include "Tempo.h"
#include <sstream>

Tempo::Tempo() : horas(0), minutos(0), segundos(0)
{

}

void Tempo::set_from_string (const std::string &tempo){
    char discard;
    std::stringstream stream(tempo);

    stream >> horas;
    stream >> discard;
    stream >> minutos;
    stream >> discard;
    stream >> segundos;

}

std::string Tempo::to_string()
{
    std::stringstream stream;

    stream << horas;
    stream << ":";
    stream << minutos;
    stream << ":";
    stream << segundos;

    return stream.str();

}