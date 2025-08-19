#include <stdio.h>
#include <conio.h>


//Escreva um procedimento que leia 4 números, após a leitura multiplique todos e exibir o resultado. 
//Este procedimento deverá ser chamado através do programa principal.

void resultado(){
	float num1, num2, num3, num4, mult;
	
	printf("Digite um numero: ");
		scanf("%f", &num1);
	printf("Digite um numero: ");
		scanf("%f", &num2);
	printf("Digite um numero: ");
		scanf("%f", &num3);
	printf("Digite um numero: ");
		scanf("%f", &num4);
		
	mult = num1 * num2 * num3 * num4;	
	printf("Resultado: %0.2f", mult);
}


void main(){
	resultado();
}
