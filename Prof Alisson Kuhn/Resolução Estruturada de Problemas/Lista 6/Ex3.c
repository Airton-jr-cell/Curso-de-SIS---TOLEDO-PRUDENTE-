#include <stdio.h>
#include <conio.h>


//3. Escreva uma fun��o que receba 2 par�metros (Nota1 e Nota2) calcule e retorne a m�dia


int notas(float nota1, float nota2){
	float media;
	media = (nota1 + nota2)/2;
	printf("Sua media eh de: %0.2f", media);
	return media;
	
}


void main(){
	float A,B;
	printf("Digite sua primeira nota: ");
		scanf("%f", &A);
	
	printf("Digite sua segunda nota: ");
		scanf("%f", &B);
		
	notas(A,B);
		
}
