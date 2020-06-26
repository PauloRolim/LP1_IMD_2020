#include "include/Data.h"
#include "Diary.h"

#include <iostream>
#include <sstream>
#include <string>

int main(int argc, char* argv[]){

    std::string date = "25/06/2020";
    Data d1;

    std::stringstream stream;
    char discard;

    stream >> d1.dia;
    stream >> discard;
    stream >> d1.mes;
    stream >> discard;
    stream >> d1.ano;


    std::cout << d1.dia << std::endl;
    std::cout << d1.mes << std::endl;
    std::cout << d1.ano << std::endl;

    return 0;
}