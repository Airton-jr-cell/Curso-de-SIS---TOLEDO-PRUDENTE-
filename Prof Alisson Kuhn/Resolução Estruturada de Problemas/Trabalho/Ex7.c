#include <stdio.h>
#include <conio.h>

//7.	POR REFER�NCIA: Escreva um procedimento que receba 2 par�metros 
//	(Nota1 e Nota2) calcule e retorne tamb�m por par�metro a m�dia (Media).
	
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
