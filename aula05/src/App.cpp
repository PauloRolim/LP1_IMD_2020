#include "App.h"
#include <string>

App::App(const std::string& nome_arquivo) : diary(nome_arquivo)
{
    //Diary diary(nome_arquivo);
}

int App::run(int argc, char* argv[]){
    
    if (argc == 1){
        return show_usage();
    }

    std::string action = argv[1];

    if (action == "add") {
        if (argc == 2) {
            add();
        } else   {
            add(argv[2]);
        }
        
    } else if (action == "list") {
        lista_mensagens();
    } else if (action == "search") {
        
    } else
    {
        return show_usage();
    }
    
    
    return 0;
    
}

void App::add(){
    std::string mensagem;
    std::cout << "Digite sua mensagem:" << std::endl;
    std::getline(std::cin, mensagem);

    add(mensagem);
}

void App::add(const std::string mensagem){
    diary.add(mensagem);
    diary.write();
}

void App::lista_mensagens(){
    for (size_t i = 0; i < diary.mensagem_tamanho; i++){
        const Mensagem& mensagem = diary.mensagens[i];
        std::cout << "-" << mensagem.conteudo << std::endl;
    }
}

int App::show_usage(){
    return 1;
}