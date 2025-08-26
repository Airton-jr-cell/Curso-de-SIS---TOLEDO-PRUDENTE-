#include <stdio.h>
#include <conio.h>

// 2.Escreva um procedimento que receba a data de nascimento de uma pessoa (DataNascimento), 
// a data atual calcule a idade e retorne (Idade) por parâmetro.

void calc_idade(int DataNascimento, int AnoAtual, int *idade){
	
	*idade = AnoAtual - DataNascimento;
}
	

void main(){
	int DataNascimento, AnoAtual, idade;
	
	printf("Digite o ano atual: ");
		scanf("%d", &AnoAtual);
		
	printf("Digite o ano do seu nascimento: ");
		scanf("%d", &DataNascimento);
		
	calc_idade(DataNascimento,AnoAtual,&idade);
	
	printf("Idade: %d", idade);
}
