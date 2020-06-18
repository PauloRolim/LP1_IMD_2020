#include <iostream>
#include <string>
#include <fstream>

void show_usage(const std::string &prog_name);

int main(int argc, char *argv[]) {
    
    std::fstream file("mensagem.txt", std::ios::app | std::ios::in | std::ios::out);
    std::string message;
    std::string action = argv[1];

    if (!file.is_open()){
        std::cerr << "O arquivo não pode ser criado." << std::endl;
        return 1;
    }

    if (argc == 1) {
        show_usage(argv[0]);
        return 1;
    }  

    if (action != "add" && action != "list"){
        show_usage(argv[0]);
        return 1;
    }

    if (argc == 2 && action == "add")
    {
        std::cout << "Informe a mensagem: " << std::endl;
        std::getline(std::cin, message);
        file << message << std::endl;
        return 0;
    }
      
    if(argc > 2 && action == "add"){  

        message = argv[2];

        file << message << std::endl;
    
        std::cout << "Mensagem Adicionada" << std::endl;

        return 0;

    } else {
        message = argv[2];
    }

    int line_number = 0;

    if(action == "list"){

        
        while(file.eof()){

            ++line_number;

            std::getline(file, message);
             
            std::cout << line_number << ". " << message << std::endl;
        }
        
    }
 
    return 0;
}

void show_usage(const std::string &prog_name){
    std::cout << "Uso: " << prog_name << " add <mensagem>" << std::endl;
    std::cout << "Uso: " << prog_name << " list" << std::endl;
}