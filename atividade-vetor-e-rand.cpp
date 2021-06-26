#include<cstdlib>

#include<ctime>

#include<iostream>

#define TAMANHO_VETOR 50

int main() { 
	srand(time(NULL));
	
	int numeros[TAMANHO_VETOR];
	
	for (int i = 0; i < TAMANHO_VETOR; i++){
		numeros [i] = rand () % 100;
	}
	
	for (int i = 0; i < TAMANHO_VETOR; i++){
		int posicaoAnterior = 1; 
		if(i > 0){
			posicaoAnterior = numeros[i - 1];
		}
		std::cout << "posicao: "<< i << " Valor: " << numeros[i] << "\n"; 
		std::cout << "Posicao: "<< i << " calculo: " << numeros[i] * posicaoAnterior << "\n"; 
	}
	return 0; 
	
}
