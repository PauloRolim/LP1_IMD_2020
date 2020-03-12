#include <iostream>
#include <iomanip>

int main(void)
{
	float imc = 0;
	float peso = 0;
	float altura = 0;

	std::cout << "Digite sua altura em metros: ";
	std::cin >> altura;
	std::cout << "Agora seu peso em kilos: ";
	std::cin >> peso;

	imc = peso/(altura*altura);
	std::cout << "Seu IMC é " << std::setprecision(2) << std::fixed << imc << std::endl;
	if(imc < 17){
		std::cout << "Você sofre de subnutrição, Procure um nutricionista" << std::endl;
	} else if(imc >= 17 && imc <= 18.49){
		std::cout << "Você esta abaixo do peso recomendado" << std::endl;
	} else if(imc >= 18.50 && imc <= 24.99){
		std::cout << "Parabéns! Seu IMC indica um peso normal!" << std::endl;
	} else if(imc >= 25 && imc <= 29.99){
		std::cout << "Você está acima do peso para seu IMC" << std::endl;
	} else if(imc >= 30 && imc <= 34.99){
		std::cout << "Você sofre de Obesidade I, Procure uma academia" << std::endl;
	} else if(imc >= 35 && imc <= 39.99){
		std::cout << "Você sofre de Obesidade II (Severa)" << std::endl;
	} else if(imc >= 40){
		std::cout << "Você sofre de Obesidade III (Morbida)" << std::endl;
	}

	return 0;
}