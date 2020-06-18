#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char *argv[]){

    std::ifstream file("mensagem.txt");

    if(!file.is_open()){
        std::cerr << "Arquivo inexistente ou sem premissão de leitura." << std::endl;

        return 1;
    }

    std::string message;
    
    int line_number = 0;

    while(!file.eof()){
        ++line_number;
        std::getline(file, message);

        if(message.size() == 0){ //essa função mede o tamanho dos caracteres da linha em bytes
            continue;            //serve para testar se há algum conteúdo na linha
        }

        std::cout << line_number << ". " << message << std::endl;
    }

    file.close();

    return 0;
}