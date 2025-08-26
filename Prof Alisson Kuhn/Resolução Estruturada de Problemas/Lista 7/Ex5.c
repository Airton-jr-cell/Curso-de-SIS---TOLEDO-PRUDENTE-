#include <stdio.h>
#include <conio.h>

//4.	Escreva um procedimento que receba a Largura e o Comprimento 
//	do quadrado/retângulo por parâmetro 
//	calcule e retorne também por parâmetro a área (Area).

void calc_area(float larg, float comp, float *area){
	*area = larg * comp;
	
	
}

void main(){
	float larg, comp, area;
	calc_area(larg, comp, &area);
	printf("%d")
}
