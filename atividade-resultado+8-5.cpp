#include <iostream>


using namespace std;

int main () {
	int num1 = 0;
	int num2 = 0; 
	int resultado;
	 
	 cout << "digite primeiro numero: ";
	  cin >> num1;
	 cout << "digite segundo numero: ";
	  cin >> num2;
	 
	 resultado = num1 + num2;
	 
	 if (resultado > 20 ) { 
	 cout << resultado + 8;
	} else {
		cout << resultado - 5;
		
	}
	return 0; 
	 
}