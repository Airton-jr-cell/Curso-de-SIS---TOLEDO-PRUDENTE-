#include <stdio.h>
#include <conio.h>

// Escreva uma fun��o que leia 2 n�meros, ap�s a leitura somar e retornar o resultado. 
// Est� fun��o dever� ser chamado atrav�s do programa principal. Exibir conte�do retornado.

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
