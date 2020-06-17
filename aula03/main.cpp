#include <iostream>
#include <string>
#include <fstream>


int main (int argc, char *argv[]){

    std::ifstream arquivo_entrada("dados.txt");
    std::ofstream arquivo_saida("mensagem.txt", std::ios::app);
    
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

    if(arquivo_saida.fail()){
        std::cout << "Arquivo de destino não localizado!" << std::endl;
        return 1;
    }

    arquivo_saida << mensagem << std::endl;

    std::cout << "Mensagem Adicionada!" << std::endl;
    
    return 0;
}