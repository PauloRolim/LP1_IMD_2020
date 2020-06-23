#include "Diary.h"
#include <string>

Diary::Diary(const std::string& nome_arquivo){

    this -> mensagem_capacidade = 50;
    this -> mensagem_tamanho = 0;
    this -> nome_arquivo = nome_arquivo;

}

void Diary::add(const std::string& mensagem){

    this -> mensagens[this->mensagem_tamanho] = diary.mensagem_tamanho;
    this -> mensagem_tamanho +=1;

}

void Diary::write(){

}