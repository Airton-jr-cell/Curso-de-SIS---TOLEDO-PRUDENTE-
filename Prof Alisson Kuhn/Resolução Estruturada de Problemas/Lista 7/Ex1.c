#include <stdio.h>
#include <conio.h>

// 1.Escreva um procedimento que receba por parâmetro os valores de A e B e 
// retorne os valores invertidos, ou seja, 
// A receberá o conteúdo de B e B receberá o conteúdo de A. 
// Os parâmetros deverão ser por referência.

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
