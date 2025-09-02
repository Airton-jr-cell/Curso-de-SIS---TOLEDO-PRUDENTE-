#include <stdio.h>
#include <conio.h>

//8.	POR REFERÊNCIA: Escreva um procedimento que receba a Largura e 
//o Comprimento do quadrado/retângulo por parâmetro, 
//calcule e retorne também por parâmetro a área (Area).

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
