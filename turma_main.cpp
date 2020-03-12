#include <iostream>
#include "aluno.h"
#include "turma.h"

using namespace std;

int main()
{
    Aluno aluno1("20180101",20,"emerson@mail.com","Rua fulano de tal, 1000","Emerson");


    Aluno aluno2("20180101",65,"silvio@mail.com","Rua fulano de tal, 1000","Silvio");


    Aluno aluno3("20180101",20,"Davi@mail.com","Rua teste, 1000","Davi Tubarão");


    Turma turma("LP1","Linguagem de Programação",40);


    turma.addParticipantes(aluno1);
    turma.addParticipantes(aluno2);
    turma.addParticipantes(aluno3);

    turma.mostrarAlunos();
    
    return 0;
}