#include "Diary.h"
#include <iostream>

int main(int argc, char* argv[]){

    Diary d("teste.md");

    for (size_t i = 0; i < 100; i++)
    {
        d.add("Mensagem");

    }

    std::cout << d.mensagem_tamanho << std::endl;
    

    return 0;

}