#include <stdio.h>
#include <conio.h>

//5.	POR REFERÊNCIA: Escreva um procedimento que receba por parâmetro os valores de A e  B e 
//	retorne os valores invertidos, ou seja, 
//	A receberá o conteúdo de B e B receberá o conteúdo de A. 
//	Os parâmetros deverão ser por referência.


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
