#include<iostream>

int main(){
	int Alunos = 0;
	std::cout << "informe a quantidade de alunos: ";
	std::cin >> Alunos;
	
	std::string vetorNomes [Alunos];
	
	float vetorNotas1 [Alunos];
	float vetorNotas2 [Alunos];
	
	for (int i = 0; i < Alunos; i++){
		std::cout << "informe o nome do " << i + 1 << " Aluno \n" ;
		std::cin >> vetorNomes [i];
		std::cout << "informe a nota do(a) " << vetorNomes[i] << " referente ao primeiro bimestre: \n";
		std::cin >> vetorNotas1[i];
		std::cout << "informe a nota do(a) " << vetorNomes[i] << " referente ao segundo bimestre: \n";
		std::cin >> vetorNotas2[i];
	}
	for (int i = 0; i < Alunos; i++){
		float media = (vetorNotas1[i] + vetorNotas2[i]) / 2;
		
		if (media >= 6 ) {
			std::cout << "aluno: "<< vetorNomes[i]  << media << " e esta APROVADO! \n";
			
		}else {
			std::cout << "aluno: " << vetorNomes[i]  << media << " e esta REPROVADO! \n";
		}
	}

	
	return 0;
}