#ifndef SCHOOL_CLASS_H
#define SCHOOL_CLASS_H

#include <iostream>
#include "aluno.hpp"

using namespace std;

class Turma
{
private:
	string codigo;
	string descricao;
	short capacidade;
	Aluno* participantes;
	int lotacao;
public:
	// get & set
	void setCodigo(string cd);
	string getCodigo();
	void setDescricao(string ds);
	string getDescricao();
	void setCapacidade(short cp);
	short getCapacidade();
	// void setParticipantes();

	void addParticipantes(Aluno umAluno);
	void mostrarAlunos();

	Turma();
	Turma(string cod,string desc, short cap);
	
	~Turma();

};
#endif