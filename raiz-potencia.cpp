#include <iostream>


using namespace std;

int main (){
	int numero = 0;
	cout << "digite um numero inteiro: ";
	cin >> numero;
	
	if (numero < 0 ){
		int pow = numero * numero;
		cout << "pow: " << pow;
		
	} else {
		int controleImpar = 0;
		int controle = 1;
		int resto = numero;

		do {
			if (controle % 2 != 0 ){
				resto = resto - controle;
				controleImpar ++;
				
			}
			controle++;
			
		} while (resto > 0);
		cout << "Raiz :" << controleImpar;
		
	} 
	
	return 0; 
}