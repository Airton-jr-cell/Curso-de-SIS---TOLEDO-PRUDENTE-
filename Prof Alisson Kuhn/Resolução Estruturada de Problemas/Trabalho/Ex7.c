#include <stdio.h>
#include <conio.h>

//7.	POR REFERÊNCIA: Escreva um procedimento que receba 2 parâmetros 
//	(Nota1 e Nota2) calcule e retorne também por parâmetro a média (Media).
	
void media(float *n1, float *n2){
	float nota_final;
	
	nota_final = (*n1 + *n2)/2;
	printf("a media eh de %0.2f", nota_final);
	
	
}	
	
	
void main(){
	float n1, n2;
	
	printf("Digite sua primeira nota: ");
		scanf("%f", &n1);
	printf("Digite sua primeira nota: ");
		scanf("%f", &n2);
		
	media(&n1,&n2);
	
	
	
}
