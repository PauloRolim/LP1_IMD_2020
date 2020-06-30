#ifndef DATA_H
#define DATA_H

#include <string>

struct Data
{
    Data();
    unsigned ano;
    unsigned mes;
    unsigned dia;

    void set_from_string(const std::string &data);
    std::string to_string();
    std::string get_current_date();
};
#endif