#include <iostream>
#include "aluno.hpp"
#include "turma.h"

using namespace std;

int main()
{
    Aluno aluno1("20180101",20,"emerson@mail.com","Rua fulano de tal, 1000","Emerson", "074.586.258-11");
    Aluno aluno2("20180101",65,"silvio@mail.com","Rua fulano de tal, 1000","Silvio", "258.963.789-10");
    Aluno aluno3("20180101",20,"Davi@mail.com","Rua teste, 1000","Davi Tubarão", "089.654.258-00");

    Turma turma("LP1","Linguagem de Programação",40);


    turma.addParticipantes(aluno1);
    turma.addParticipantes(aluno2);
    turma.addParticipantes(aluno3);

    turma.mostrarAlunos();
    
    return 0;
}