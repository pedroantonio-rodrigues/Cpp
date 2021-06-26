#include<iostream>
 
 
 
 float adicao (float num1, float num2){
 	return num1 + num2;
 }
 
 float multiplicacao (float num1, float num2){
 	return num1 * num2;
 }
 
 float divisao (float num1, float num2){
 	return num1 / num2;
 }
 
 float subtracao (float num1, float num2){
 	return num1 - num2;
 }
 
 
int main(){
	float numero1 = 0;
	float numero2 = 0; 
	
	std::cout << "digite o primeiro numero: ";
	std::cin >> numero1;
	std::cout << "Digite o segundo numero: ";
	std::cin >> numero2;
	
	std::cout << "Adição: " << adicao (numero1, numero2) << "\n";
	std::cout << "Subtração: " << subtracao (numero1, numero2) << "\n";
	std::cout << "divisão: " << divisao (numero1, numero2) << "\n";
	std::cout << "multiplicação " << multiplicacao (numero1, numero2) << "\n";
 
 return 0;
 

}