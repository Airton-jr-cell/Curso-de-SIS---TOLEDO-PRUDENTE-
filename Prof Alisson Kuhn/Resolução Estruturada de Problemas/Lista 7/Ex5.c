#include <stdio.h>
#include <conio.h>

//4.	Escreva um procedimento que receba a Largura e o Comprimento 
//	do quadrado/ret�ngulo por par�metro 
//	calcule e retorne tamb�m por par�metro a �rea (Area).

void calc_area(float larg, float comp, float *area){
	*area = larg * comp;
	
	
}

void main(){
	float larg, comp, area;
	calc_area(larg, comp, &area);
	printf("%d")
}
