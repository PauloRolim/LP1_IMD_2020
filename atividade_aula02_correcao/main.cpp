#include <iostream>
#include <string>

/*Correção do exercício da aula anterior*/

int main (int argc, char *argv[]){
    if (argc == 1){
        std::cout << "Uso: " << argv[0] << " add <mensagem>" << std::endl;
        return 1;
    }

    std::string action = argv[1];

    if (action != "add"){
        std::cout << "Uso: " << argv[0] << " add <mensagem>" << std::endl;
        return 1;
    }

    std::string mensagem;

    if(argc == 2){
        std::cout << "++++++Informe agora sua mensagem!++++++" << std::endl;
        std::getline(std::cin, mensagem);
    } else {
        mensagem = argv[2];
    }

    std::cout << "Mensagem Adicionada!" << std::endl;
    
    return 0;
}