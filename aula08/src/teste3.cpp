#include "Tempo.h"
#include "Diary.h"

#include <iostream>
#include <sstream>
#include <string>

int main(int argc, char* argv[])
{
  //  std::string hora = "17:13:00";
    Tempo h1;

    /*std::stringstream stream(hora);
    char discard;

    stream >> h1.horas;
    stream >> discard;
    stream >> h1.minutos;
    stream >> discard;
    stream >> h1.segundos;
    
    std::cout << h1.horas;
    std::cout << discard;
    std::cout << h1.minutos;
    std::cout << discard;
    std::cout << h1.segundos << std::endl;*/

    h1.set_from_string("18:24:16");
    std::cout << h1.to_string();

    return 0;
}