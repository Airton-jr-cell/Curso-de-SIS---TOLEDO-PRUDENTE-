#include <stdio.h>
#include <conio.h>

// Escreva uma função que leia 4 números, após a leitura multiplique todos e retorne o resultado. 
// Está função deverá ser chamada através do programa principal. Exibir conteúdo retornado.


int multiplication(){
	int n1, n2, n3, n4, mult;
	printf("Informe n1: ");
		scanf("%d", &n1);
	printf("Informe n2: ");
		scanf("%d", &n2);
	printf("Informe n3: ");
		scanf("%d", &n3);
	printf("Informe n1: ");
		scanf("%d", &n4);
	mult = n1 * n2 * n3 * n4;
	return mult;
	
}

void main(){
	int resultado;
	resultado = multiplication();
	printf("Multiplicacao: %d", resultado);
	
}
