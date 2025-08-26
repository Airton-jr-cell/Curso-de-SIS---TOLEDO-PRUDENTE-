#include <stdio.h>
#include <conio.h>

// 4. Escreva uma função que receba a Largura e o 
// Comprimento do quadrado/retângulo, calcule e retorne a área.


int calc_area(float comp, float larg){
	float area;
	area = comp * larg;
	printf("A Area eh de: %0.2f", area);
	return area;		
}

void main(){
	float comp, larg;
	
	
	printf("Digite o comprimento: ");
		scanf("%f", &comp);
	
	printf("Digite a largura: ");
		scanf("%f", &larg);
		
	calc_area(comp,larg);
		
}
