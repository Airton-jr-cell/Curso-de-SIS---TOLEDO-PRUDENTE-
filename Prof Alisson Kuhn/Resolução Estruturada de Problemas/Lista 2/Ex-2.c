#include <stdio.h>
#include <conio.h>

// 2 - Escreva um procedimento que leia seu nome e ap�s a leitura e exiba o nome lido. 
// Este procedimento dever� ser chamado atrav�s do programa principal.


void buscar_nome(){
	char nome[10];
	printf("Qual seu nome: ");
		scanf("%s", nome);
	printf("Seu nome eh:  %s", nome);
}

void main(){
	buscar_nome();
}
