#include <stdio.h>
#include <conio.h>
#define TF 10

//1.Fazer um programa em "C" que lê 10 valores e imprime o maior e o menor valor lido.


void main(){
	int i;
	int maior = 0, menor = 9999, num;
	
	for(i=0;i<TF;i++){
		printf("Digite um numero: ");
			scanf("%d", &num);
		
		if(maior < num){
			maior = num;
			
		}
		if(menor > num){
			menor = num;
		}	
		
	}
	
	printf("\nMaior numero: %d", maior);
	printf("\nMenor numero: %d", menor);

}
