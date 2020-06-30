#include "Data.h"
#include <sstream>
#include <ctime>

Data::Data() : ano(0), mes(0), dia(0)
{
    
}

void Data::set_from_string (const std::string &data){
    char discard;
    std::stringstream stream(data);
    
    stream >> dia;
    stream >> discard;
    stream >> mes;
    stream >> discard;
    stream >> ano;

}

std::string Data::to_string()
{
    std::stringstream stream;

    if (dia < 10) {
        stream << 0;
    }
    stream << dia;
    stream << '/';

    if (mes < 10) {
        stream << "0";
    }
    stream << mes << "/";
    stream << ano;

    return stream.str();
}

std::string format_current_date(const std::string &format) 
{
  std::time_t time = std::time(nullptr);
  char result[1024];

  std::strftime(result, sizeof(result), format.c_str(), std::localtime(&time));

  return std::string(result);
}

std::string get_current_date() { return format_current_date("%d/%m/%Y"); }