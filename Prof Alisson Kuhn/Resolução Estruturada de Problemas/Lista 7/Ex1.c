#include <stdio.h>
#include <conio.h>

// 1.Escreva um procedimento que receba por par�metro os valores de A e B e 
// retorne os valores invertidos, ou seja, 
// A receber� o conte�do de B e B receber� o conte�do de A. 
// Os par�metros dever�o ser por refer�ncia.

void inverter_valores(int *a, int *b){
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}

void main(){
	int a,b;
	printf("Informe o valor de A: ");
		scanf("%d", &a);
	printf("Informe o valor de B: ");
		scanf("%d", &b);
		inverter_valores(&a,&b);
		printf("\n\Valor de A: %d", a);
		printf("\n\Valor de B: %d", b);
}
