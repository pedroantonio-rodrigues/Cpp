#include<iostream>

void quadrado (float lado){
	float area = lado * lado;
	float perimetro = lado * 4;
	std::cout << "Figura Geometrica: Quadrado \n";
	std::cout << "area " << area << "\n";
	std::cout << "Perimetro " << perimetro << "\n";
	  
}
void retangulo (float base, float altura){
	float area = base * altura;
	float perimetro = (base + altura) * 2;
	std::cout << "Figura Geometrica: Retangulo \n";
	std::cout << "area " << area << "\n";
	std::cout << "Perimetro " << perimetro << "\n";
	  
}
void triangulo (float base, float altura){
	float area = (base * altura) / 2;
	float perimetro = base + ( altura* 2);
	std::cout << "Figura Geometrica: triangulo \n";
	std::cout << "area " << area << "\n";
	std::cout << "Perimetro " << perimetro << "\n";
	  
}
void circulo (float diametro){
	float PI = 3.1415;
	float area = PI * (diametro / 2 );
	float perimetro = (2 * PI) * (diametro / 2);
	std::cout << "Figura Geometrica: Circulo \n";
	std::cout << "area " << area << "\n";
	std::cout << "Perimetro " << perimetro << "\n";
	  
}
int main() {
	quadrado (6.5);
	triangulo (10.1, 15.1);
	retangulo (11.1, 13.4);
	circulo (30.0);
}