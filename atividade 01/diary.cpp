#include <iostream>
#include <string>
#include <fstream>

void show_usage(const std::string &programa)
{
    std::cout << "Uso: " << programa << " add <mensagem>" << std::endl;
    std::cout << "Uso: " << programa << " list" << std::endl;
};

void list()
{

    std::fstream file("mensagem.txt");
    std::string message;
    int line_number = 0;

    while (!file.eof())
    {
        ++line_number;
        std::getline(file, message);

        if (message.size() == 0)
        {             //essa função mede o tamanho dos caracteres da linha em bytes
            continue; //serve para testar se há algum conteúdo na linha
        }

        std::cout << line_number << ". " << message << std::endl;
    }
}

int main(int argc, char *argv[])
{
    std::ofstream arquivo_saida("mensagem.txt", std::ios::app);

    if (argc == 1)
    {
        show_usage(argv[0]);
        return 1;
    }

    std::string action = argv[1];

    std::string mensagem;

    if (action != "add" && action != "list")
    {
        show_usage(argv[0]);
        return 1;
    }

    if (action == "list" && argc != 1)
    {
        list();
        return 0;
    }

    if (action == "add" && argc == 2)
    {

        std::cout << "++++++Informe agora sua mensagem!++++++" << std::endl;
        std::getline(std::cin, mensagem);
    }
    else
    {
        mensagem = argv[2];
    }

    if (arquivo_saida.fail())
    {
        std::cerr << "Arquivo de destino não localizado!" << std::endl;
        return 1;
    }

    arquivo_saida << mensagem << std::endl;

    std::cout << "Mensagem Adicionada!" << std::endl;

    return 0;
}