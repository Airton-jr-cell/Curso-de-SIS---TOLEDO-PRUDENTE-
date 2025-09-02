#include <stdio.h>
#include <conio.h>
//
//2.	POR VALOR - Faça um programa que simule um calculador de 4 operações. Seu programa devera:
//a.	ler dois números e o operador;
//b.	chamar procedimentos/função com passagem de parâmetros para efetuar os cálculos;
//c.	escrever o resultado ao final.


void soma(int A, int B){
	int somado;
	somado = A + B;
	printf("Soma: %d", somado);
}

void sub(int A, int B){
	int subi;
	subi  = A - B;
	printf("Subtracao: %d", subi);
}

void div(float A, float B){
	float division;
	division = A / B;
	printf("Divisao: %f", division);
}
void mult(float A, float B){
	float multi;
	multi = A * B;
	printf("Divisao: %f", multi);
}


void main(){
	int A,B, op;
	
	printf("\n Escolha uma opcao");
	printf("\n 1- Somar");
	printf("\n 2- Subtrair");
	printf("\n 3- Dividir");
	printf("\n 4- Multiplicar \n");
	printf("\n = ");
	scanf("%d", &op);
	
	printf("Escolha um numero: ");
		scanf("%d", &A);
	printf("Escolha um numero: ");
		scanf("%d", &B);
	
	switch(op){
		case 1:
			soma(A,B);
		break;
		case 2:
			sub(A,B);
		break;
		case 3:
			div(A,B);
		break;
		case 4:
			mult(A,B);
		break;
		default:
			printf("invalido");
	}
	
	
	
	
}
