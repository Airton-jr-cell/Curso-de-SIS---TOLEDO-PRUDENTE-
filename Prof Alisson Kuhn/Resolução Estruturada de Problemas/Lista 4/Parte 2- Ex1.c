#include <stdio.h>
#include <conio.h>

 
//1. Fa�a uma fun��o que leia um n�mero inteiro e retorne 1 se ele for par ou 2 se for �mpar.


int par_impar(){
	
	int num, res;
	printf(">> Descobridor de numeros pares e impares<<");
		printf("\n");
	printf("Digite o numero a ser descoberto: ");
		
			printf("\n");
	
		printf(">> Caso apareca 1, o numero eh Par <<");
			printf("\n");
		printf(">> Caso apareca 2, o numero eh Impar Impar <<");
			printf("\n");
			
		scanf("%d", &num);
		
	
		
	if (num %2 == 0){
		res = 1;
	
	}else{
		res = 2;
	
	}
	return res;
}

void main(){
	printf("\n");
	printf("%d", par_impar());
	printf("\n");

	
	
}
