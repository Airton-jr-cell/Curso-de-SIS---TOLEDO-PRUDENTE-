#include <stdio.h>
#include <conio.h>

//8.	POR REFER�NCIA: Escreva um procedimento que receba a Largura e 
//o Comprimento do quadrado/ret�ngulo por par�metro, 
//calcule e retorne tamb�m por par�metro a �rea (Area).

void calculo(float *larg, float *comp){
	float area;
	
	area =  *larg * *comp;
	
	printf("%0.21f", area);
}






void main(){
	float larg, comp;
	
	printf("Digite a largura: ");
		scanf("%f", &larg);
	printf("Digite o comprimento: ");
		scanf("%f", &comp);
		
	calculo(&larg,&comp);
		
}
