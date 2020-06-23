#ifndef DIARY_H
#define DIARY_H

#include "Mensagem.h"
#include <string>

struct Diary
{
    Diary(const std::string &nome_arquivo);

    std::string nome_arquivo;
    Mensagem *mensagens;
    size_t mensagem_tamanho;
    size_t mensagem_capacidade;

    void add(const std::string &mensagem);
    void write();
};
#endif