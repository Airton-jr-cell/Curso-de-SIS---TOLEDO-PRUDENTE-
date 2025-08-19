#include <stdio.h>
#include <conio.h>


// Escreva um procedimento que lei 3 números e ao final subtraia o primeiro do segundo e dívida 
// o resultado pelo terceiro. Fazer a chamada no programa principal.

void resultado(){
	float num1, num2, num3, sub, div;
	
	printf("Digite um numero: ");
		scanf("%f", &num1);
			
	printf("Digite um numero: ");
		scanf("%f", &num2);
		
	printf("Digite um numero: ");
		scanf("%f", &num3);
		
	sub = num1 - num2;
	div = sub/num3;
	
	
	printf("O resultado da formula eh de: %0.2f", div);
}



void main(){
	resultado();	
}
