#include <iostream>
#include <string>
#include <fstream>
#include <ctime>

std::string format_current_date(const std::string &format)
{
    std::time_t time = std::time(nullptr);
    char result[1024];

    std::strftime(result, sizeof(result), format.c_str(), std::localtime(&time));

    return std::string(result);
}

std::string get_current_date() { return format_current_date("%d/%m/%Y"); }

std::string get_current_time() { return format_current_date("%H:%M:%S"); }

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
        {             // essa função mede o tamanho dos caracteres da linha em bytes
            continue; // e testa se há algum conteúdo na linha
        }

        std::cout << line_number << ". " << message << std::endl;
    }
}

int main(int argc, char *argv[])
{
    std::ofstream arquivo_saida("mensagem.txt", std::ios::app);
    std::fstream file("mensagem.txt", std::ios::in | std::ios::app);

    std::string teste;
    const std::string parametro = "#";

    while (!file.eof())
    {
        std::getline(file, teste);

        if (teste.substr(0, 1) == parametro)
        {
            break;
        }

        arquivo_saida << "# " << get_current_date() << std::endl;
        arquivo_saida << std::endl;
    }

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
        arquivo_saida << "- " << get_current_time() << " ";
        arquivo_saida << mensagem << std::endl;
        std::cout << "Mensagem Adicionada!" << std::endl;
    }
    else
    {
        mensagem = argv[2];
        arquivo_saida << "- " << get_current_time() << " ";
        arquivo_saida << mensagem << std::endl;
        std::cout << "Mensagem Adicionada!" << std::endl;
    }

    if (arquivo_saida.fail())
    {
        std::cerr << "Arquivo de destino não localizado!" << std::endl;
        return 1;
    }

    //arquivo_saida << "# " << get_current_date() << std::endl; // falta verificar se ja existe essa data
    //arquivo_saida << std::endl;

    return 0;
}