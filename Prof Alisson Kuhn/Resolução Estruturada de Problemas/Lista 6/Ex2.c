#include <stdio.h>
#include <conio.h>


//2.Escreva uma função que receba a data de nascimento de uma pessoa (DataNascimento), 
//calcule e retorne a idade.

int idade(int Ano, int Nasc){
	int idade;
	idade = Ano - Nasc;
	printf("Voce tem: %d de idade", idade);
	return idade;
	
}

void main(){
	int ret, Ano, Nasc;
	printf("Digite o ano atual: ");
		scanf("%d", &Ano);
	printf("Digite o ano do seu Nascimento: ");
		scanf("%d", &Nasc);
	idade(Ano, Nasc);
}

