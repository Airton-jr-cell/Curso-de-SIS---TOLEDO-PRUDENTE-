#include <stdio.h>
#include <conio.h>

// Escreva um procedimento que leia seu nome e em uma segunda vari�vel leia seu sobrenome e 
// ao final exiba seu nome concatenado com seu sobrenome. 
// Este procedimento dever� ser chamado atrav�s do programa principal.


void nome(){
	char nome[100];
	char sobrenome[100];
	printf("Qual eh seu nome: ");
		scanf("%s", nome);
	printf("Qual seu sobrenome: ");
		scanf("%s", sobrenome);
	printf("nome completo: %s %s", nome, sobrenome);
}

void main(){
	nome();
}
