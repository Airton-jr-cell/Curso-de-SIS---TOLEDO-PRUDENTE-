#include <stdio.h>
#include <conio.h>

//5.	POR REFER�NCIA: Escreva um procedimento que receba por par�metro os valores de A e  B e 
//	retorne os valores invertidos, ou seja, 
//	A receber� o conte�do de B e B receber� o conte�do de A. 
//	Os par�metros dever�o ser por refer�ncia.


void inverso(int *A, int *B){
	int reverse_A, reverse_B;
	reverse_A = *B;
	reverse_B = *A;
	
	printf("\nNovo valor de A: %d", reverse_A);
	printf("\nNovo valor de B: %d", reverse_B);
}




void main(){
	int A,B;
		printf("Digite um numero A: ");
				scanf("%d", &A);
			printf("Digite um numero B: ");
				scanf("%d", &B);
				
				inverso(&A,&B);
				
			
				
}
