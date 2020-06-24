#include "Diary.h"
#include <string>

Diary::Diary(const std::string& nome_arquivo){

    this -> mensagem_capacidade = 10;
    this -> mensagem_tamanho = 0;
    this -> nome_arquivo = nome_arquivo;
    this -> mensagens = nullptr;

    mensagens = new Mensagem[mensagem_capacidade]; //alocação dinâmica de mensagens
}

void Diary::add(const std::string& mensagem){

    Mensagem m1; //variavel de inicialização

    m1.conteudo = mensagem;

    this -> mensagens[this->mensagem_tamanho] = m1;
    this -> mensagem_tamanho +=1;

}

void Diary::write(){



}