#include <stdio.h>
#include <conio.h>

//3.Escreva um procedimento que receba 2 parâmetros (Nota1 e Nota2) 
//calcule e retorne também por parâmetro a média (Media).



void calc_media(float nota1, float nota2, float *media){
	*media = (nota1 + nota2)/2;
	
}

void main(){
	float nota1, nota2, media;
	
	printf("Digite a sua nota: ");
		scanf("%f", &nota1);
	printf("Digite a sua nota: ");
		scanf("%f", &nota2);
		
	calc_media(nota1, nota2, &media);
	
	printf("A sua media eh de: %0.2f", media);
	
}
