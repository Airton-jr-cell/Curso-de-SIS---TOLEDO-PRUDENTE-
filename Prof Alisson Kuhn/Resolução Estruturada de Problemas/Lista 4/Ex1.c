#include <stdio.h>
#include <conio.h>

// Escreva uma função que leia 2 números, após a leitura somar e retornar o resultado. 
// Está função deverá ser chamado através do programa principal. Exibir conteúdo retornado.

int soma2(){
	int n1,n2,soma;
	printf("informe o N1: ");
		scanf("%d", &n1);
	printf("informe o N2: ");
		scanf("%d", &n2);
	soma = n1 + n2;	
	return soma;
}



void main (){
	int ret;

	ret = soma2();
	printf("Soma: %d", ret);
}
