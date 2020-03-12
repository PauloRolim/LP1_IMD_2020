#include "turma.h"
#include <iostream>
using namespace std;

void Turma::setCodigo(string cd){
	codigo = cd;
}
string Turma::getCodigo(){
	return codigo;
}
void Turma::setDescricao(string ds){
	descricao = ds;
}
string Turma::getDescricao(){
	return descricao;
}
void Turma::setCapacidade(short cp){
	capacidade = cp;
	participantes = new Aluno[capacidade];
	lotacao = 0;
}

short Turma::getCapacidade(){
	return capacidade;
}

void Turma::addParticipantes(Aluno umAluno){
	if (lotacao < capacidade)
	{
		participantes[lotacao++] = umAluno;
	}
	
}
void Turma::mostrarAlunos()
{
    for (short i = 0; i < lotacao; i++)
    {
        // students[i].details();
        cout << "Nome: " << participantes[i].getNome() << endl;
        cout << "Matricula: " << participantes[i].getMatricula() << endl;
        cout << endl;
    }
}

// Turma::Turma(){
//  	codigo = "";
// 	descricao = "";
// 	capacidade = 0;
// 	lotacao = 0;
// }
// Turma::Turma(string cod,string desc, short cap){
// 	codigo = cod;
// 	descricao = desc;
// 	capacidade = cap;
// 	participantes = new Aluno[cap]; 
// 	lotacao = 0;
// }

Turma::Turma(string cod,string desc, short cap):
	codigo(cod), descricao(desc), capacidade(cap), lotacao(0){
		participantes = new Aluno[cap];
	}

Turma::Turma():
	codigo(""), descricao(""), capacidade(0), lotacao(0){}

Turma::~Turma(){

//	for (int i = 0; i < lotacao; i++){
		delete participantes[] ;
//	}

	cout << "Objetos Destruídos!" << endl;

}