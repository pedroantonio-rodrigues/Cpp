#include <iostream>
#include <cmath>

using namespace std;

int main () {
int numero = 0;

cout << "Digite um valor: ";
 cin >> numero;
 
 if (numero < 0) {
 int pot = pow (numero, 2.0);
 	cout << "Potencia: " << pot;
 	
 } else {
 	int raiz = sqrt (numero); 
 	cout << "Raiz: " << raiz;
 }
	return 0;
}