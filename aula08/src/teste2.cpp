#include "Data.h"
#include "Diary.h"

#include <iostream>
#include <sstream>
#include <string>

int main(int argc, char* argv[])
{

  //  std::string date = "25/06/2020";
    Data d1;

   /* std::stringstream stream(date);
    char discard;

    stream >> d1.dia;
    stream >> discard;
    stream >> d1.mes;
    stream >> discard;
    stream >> d1.ano;*/

    d1.get_current_date();
    std::cout << "ok" << std::endl;
    std::cout << d1.to_string();

    return 0;
}