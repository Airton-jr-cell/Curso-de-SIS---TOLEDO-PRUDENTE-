#include <stdio.h>
#include <conio.h>

// Escreva uma fun��o que leia 4 n�meros, ap�s a leitura multiplique todos e retorne o resultado. 
// Est� fun��o dever� ser chamada atrav�s do programa principal. Exibir conte�do retornado.


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
