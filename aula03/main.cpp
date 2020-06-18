#include <iostream>
#include <string>
#include <fstream>

void show_usage(const std::string &programa);

int main (int argc, char *argv[]){

    std::ifstream arquivo_entrada("dados.txt");
    std::ofstream arquivo_saida("mensagem.txt", std::ios::app);
    
    if (argc == 1){
        std::cout << "Uso: " << argv[0] << " add <mensagem>" << std::endl;
        return 1;
    }

    std::string action = argv[1];

    if (action != "add"){
        show_usage(argv[0]);
        return 1;
    }

    std::string mensagem;

    if(argc == 2){
        std::cout << "++++++Informe agora sua mensagem!++++++" << std::endl;
        std::getline(std::cin, mensagem);
    } else {
        mensagem = argv[2];
    }

    if(arquivo_saida.fail()){ //tratamento de possível erro
        std::cerr << "Arquivo de destino não localizado!" << std::endl; //mensagem de erro
        return 1;
    }

    arquivo_saida << mensagem << std::endl;

    arquivo_saida.close();

    std::cout << "Mensagem Adicionada!" << std::endl;
    
    void show_usage(const std::string &programa) {
        std::cout << "Uso: " << programa << " add <mensagem>" << std::endl;
    }

    return 0;
}