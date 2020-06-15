#include <iostream>

int main(int argc, char *argv[]) {

    int numero1;
    int numero2;
    int soma;

    std::cout << "Informe o primeiro número: ";
    std::cin >> numero1;

    std::cout << "Informe o segundo número";
    std::cin >> numero2;

    soma = numero1 + numero2;

    std::cout << "A soma dos numeros informados é: " << soma << std::endl;
    
    return 0;
}