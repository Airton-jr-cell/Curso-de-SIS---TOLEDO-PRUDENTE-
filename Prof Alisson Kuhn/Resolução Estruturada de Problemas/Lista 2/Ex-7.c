#include <stdio.h>
#include <conio.h>



// Escreva um procedimento que ao realizar a leitura de um número qualquer 
// seja capaz de verificar se o mesmo é positivo ou negativo. Fazer a chamada no programa principal.


void numero(){
	float num;
	
	printf("Digite um numero: ");
		scanf("%f", &num);	
	
	if(num < 0){
		printf("Negativo");
	}
	else if(num > 0){
		printf("Positivo");
	}

	
}


void main(){
	numero();
}
