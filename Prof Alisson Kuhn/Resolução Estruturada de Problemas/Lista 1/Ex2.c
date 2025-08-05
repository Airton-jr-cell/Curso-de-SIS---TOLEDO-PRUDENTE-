#include <stdio.h>
#include <conio.h>

//2.Escreva um programa para ler as dimensões de uma cozinha retangular 
//(comprimento, largura e altura), calcular e escrever a quantidade de 
//caixas de azulejos para se colocar em todas as suas paredes 
//(considere que não será descontada a área ocupada por portas e janelas). 
//Cada caixa de azulejos possui 1,5 m2.'

void main(){
 	float comp, larg, alt, caixas, area, soma;
	int i;	

	for(i=1;i<=2;i++){
	
	printf("Digite o comprimento: ");
		scanf("%f", &comp);
	
	printf("Digite o largura: ");
		scanf("%f", &larg);
		
	printf("Digite o altura: ");
		scanf("%f", &alt);
		
	area = comp * larg * alt;
	area = area * 2;
	soma += area;	
		
	}
	
	caixas = soma/1.5;
	printf("A quantidade de caixas eh de: %0.2f", caixas);
	
			

}
