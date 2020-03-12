#include "aluno.h"
using namespace std;

string Aluno::getMatricula()
{
	return matricula;
}
void Aluno::setMatricula(string var_matricula)
{
	matricula = var_matricula;
}

short Aluno::getIdade(){
	return idade;
}

void Aluno::setIdade(short var_idade){
	idade = var_idade;
}

string Aluno::getContato1(){
	return contato1;
}

void Aluno::setContato1(string var_contato1){
	contato1 = var_contato1;
}

string Aluno::getEndereco(){
	return endereco;
}

void Aluno::setEndereco(string var_enredeco){
	endereco = var_enredeco;
}

string Aluno::getNome(){
	return nome;
}
void Aluno::setNome(string var_nome){
	nome = var_nome;

}
// Aluno::Aluno(){
// 	matricula = "";
// 	idade = 0;
// 	contato1 = "";
// 	endereco = "";
// 	nome = "";	
// }
// Aluno::Aluno(string mat, short idade1,string c1,string endereco1,string nome1){
// 	matricula = mat;
// 	idade = idade1;
// 	contato1 = c1;
// 	endereco = endereco1;
// 	nome = nome1;	
// }

Aluno::Aluno(string mat, short idade1,string c1,string endereco1,string nome1):
	matricula(mat), idade(idade1), contato1(c1), endereco(endereco1), nome(nome1){}

Aluno::Aluno():
	matricula(""), idade(-1), contato1(""), endereco(""), nome(""){}