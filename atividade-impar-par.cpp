#include <iostream>

using namespace std;

int main () {
	
	int numero =  0;
	cout << "digite um numero: ";
	cin >> numero;
	
	if (numero % 2 == 0){
		cout << "Numero Par!";
		
	} else {
		cout << "Numero Impar";
		
	}
	
	return 0;  
}