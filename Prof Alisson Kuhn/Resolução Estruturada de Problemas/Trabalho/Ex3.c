#include <stdio.h>
#include <conio.h>

//
//3.POR VALOR - Faça um programa que:
//a.leia os valores de A, B e C;
//b.chamar um procedimento com passagem de parâmetros para efetuar os cálculos e exibir o resultado da adição;
//c.chamar um procedimento com passagem de parâmetros para efetuar os cálculos e exibir o resultado da média;
//d.chamar um procedimento com passagem de parâmetros para verificar e exibir o maior número;
//e.chamar um procedimento com passagem de parâmetros para verificar e exibir o menor número;

void soma(int A, int B, int C){
	int somado;
	somado = A + B + C;
	printf("Soma = %d: ", somado);
}

void media(float A, float B, float C){
	float divisao;
	divisao = (A + B + C)/3;
	printf("media = %f", divisao);
}

void maior(int A, int B, int C){
		if(A > C){
			if (A > B){
				printf("O numero (%d) eh o maior: ", A);
			}
		}
		
		if(B > C){
			if (B > A){
				printf("O numero (%d) eh o maior: ", B);
			}
		}
		
		if(C > B){
			if (C > A){
				printf("O numero (%d) eh o maior: ", C);
			}
		}
		
		if(C == B){
			if (C == A){
				printf("Sao todos iguais");
			}
		}
		
		
		
}

void menor(int A, int B, int C){
		if(A < C){
			if (A < B){
				printf("O numero (%d) eh o menor: ", A);
			}
		}
		
		if(B < C){
			if (B < A){
				printf("O numero (%d) eh o menor: ", B);
			}
		}
		
		if(C < B){
			if (C < A){
				printf("O numero (%d) eh o menor: ", C);
			}
		}
		
		if(C == B){
			if (C == A){
				printf("Sao todos iguais");
			}
		}
}



void main(){
	int A,B,C, op;
	
	printf("\n Escolha uma opcao");
	printf("\n 1- Somar");
	printf("\n 2- Media");
	printf("\n 3- Maior");
	printf("\n 4- Menor \n");
	printf("\n = ");
	scanf("%d", &op);
	
	printf("Escolha um numero: ");
		scanf("%d", &A);
	printf("Escolha um numero: ");
		scanf("%d", &B);
	printf("Escolha um numero: ");
		scanf("%d", &C);
	
	switch(op){
		case 1:
			soma(A,B,C);
		break;
		case 2:
			media(A,B,C);
		break;
		case 3:
			maior(A,B,C);
		break;
		case 4:
			menor(A,B,C);
		break;
		default:
			printf("invalido");
	}
	
	
}
