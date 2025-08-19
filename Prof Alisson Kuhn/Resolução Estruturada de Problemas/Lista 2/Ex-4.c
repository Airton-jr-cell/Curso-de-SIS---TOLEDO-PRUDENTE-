#include <stdio.h>
#include <conio.h>


// Escreva um procedimento que leia 2 números, após a leitura somar e exibir o resultado. 
// Este procedimento deverá ser chamado através do programa principal.

void soma(){
	int num1, num2, soma;
	printf("Digite um numero: ");
		scanf("%d", &num1);
	printf("Digite outro numero: ");
		scanf("%d", &num2);
	soma = num1 + num2;
	printf("O resultado da soma eh de: %d", soma);
}




void main(){
	soma();	
}
