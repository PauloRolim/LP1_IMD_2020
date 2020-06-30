#include "Diary.h"
#include <string>
#include <iostream>

Diary::Diary(const std::string& nome_arquivo) :

    nome_arquivo(nome_arquivo),
    mensagens(nullptr),
    mensagem_tamanho(0),
    mensagem_capacidade(10)

{
    mensagens = new Mensagem[mensagem_capacidade]; //alocação dinâmica de mensagens
    std::cout << "Memoria alocada com sucesso!" << std::endl;
}

Diary::~Diary()
{
    delete[] mensagens;
}

void Diary::add(const std::string& mensagem){

    if (mensagem_tamanho >= mensagem_capacidade)
    {
        return;
    }
    
    Mensagem m1; 
    m1.conteudo = mensagem;
    mensagens[mensagem_tamanho] = m1;
    mensagem_tamanho +=1;

    std::cout << mensagens[mensagem_tamanho].conteudo << " | " << mensagem_tamanho << std::endl;

}

void Diary::write(){



}