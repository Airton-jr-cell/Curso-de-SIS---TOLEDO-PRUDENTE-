#include <stdio.h>
#include <conio.h>

// 2.Escreva um procedimento que receba a data de nascimento de uma pessoa (DataNascimento), 
// a data atual calcule a idade e retorne (Idade) por parâmetro.

void calc_idade(int DataNascimento, int AnoAtual, int *idade){
	
	*idade = DataNascimento - AnoAtual;
}
	

void main(){
	int DataNascimento, AnoAtual, idade;
	calc_idade(Dn,At);
	printf("Digite o ano atual: ");
		scanf("%d", &At);
	printf("Digite o ano do seu nascimento: ");
		scanf("%d", &Dn);
}
