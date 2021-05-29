#include <iostream>


using namespace std;

int main ()  {
	
	int numA = 0;
	int numB = 0; 
	
	cout << "digite um numero A: ";
	 cin >> numA;
	cout << "digite um numero B: ";
	 cin >> numB;
	
	if (numA < numB ) {
		cout << "numero A maior que numero B";
	} if (numA == numB) {
		cout << "numero A igual numero B ";
	} else  if (numB < numA) {
		cout << "numero B maior que numero A ";
	}
	 return 0;
}