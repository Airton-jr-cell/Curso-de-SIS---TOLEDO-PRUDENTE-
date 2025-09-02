#include <stdio.h>
#include <conio.h>

//6.	POR REFERÊNCIA: Escreva um procedimento que receba a data de nascimento de uma pessoa 
//	(DataNascimento), 
//	a data atual calcule a idade e retorne (Idade) por parâmetro


void idade(int Nascimento, int Atual){
	int idades;
	idades = Atual - Nascimento;
	printf("sua idade eh de: %d", idades);
}



void main(){
	int Nascimento, Atual;
	
	printf("Digite o ano atual: ");
		scanf("%d", &Atual);
	printf("Digite o ano do seu nascimento: ");
		scanf("%d", &Nascimento);
		idade(Nascimento,Atual);
	
}
