#include "aluno.h"

int main() {
	Aluno* eu = new Aluno();

	eu->setMatricula("12345");
	eu->setNome("Davi");
	eu->setIdade(23);
	eu->setContato1("string");
	eu->setEndereco("show de bola");

	cout << "meu nome é: " << eu->getNome() << " idade: " << eu->getIdade() << endl;
	return 0;
}