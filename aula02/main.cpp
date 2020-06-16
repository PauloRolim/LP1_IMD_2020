#include <iostream>
#include <string>

int main(int argc, char *argv[]) {

  std::string mensagem;

  if (argc == 1){
        std::cout << "Uso: " << argv[0] << " add <mensagem>." << std::endl;
        return -1;
    } 

  std::cout << "++++++Informe agora sua mensagem!++++++" << std::endl;

  std::getline(std::cin, mensagem);

  std::cout << "Mensagem Adicionada!" << argv[1] << std::endl;

   
  /*std::cout << mensagem;*/ 
  
  return 0;
}