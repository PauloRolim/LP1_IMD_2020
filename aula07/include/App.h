#ifndef APP_H
#define APP_H

#include <iostream>
#include <string>
#include "Diary.h"

struct App
{

    Diary diary;

    App(const std::string &nome_arquivo);
    int run(int argc, char *argv[]);
    int show_usage();
    void add();
    void add(const std::string mensagem);
    void lista_mensagens();
};

#endif