#include <stdio.h>
#include <conio.h>
#define TF 10

//4.Fazer um programa em "C" que leia um conjunto de 10 valores inteiros 
//e verificar se algum dos valores é igual à média dos mesmos


void main(){
	int i;
	int num, soma;
	float media;
	
		for(i=0;i<TF;i++){
				printf("Digite um numero: ");
					scanf("%d", &num);
				soma += num;
				media = soma/TF;
				
				
			}
			if(num == media){
				printf("\nMedia: %0.2f", media);
				printf("\nO numero [%d] eh igual a media [%0.2f]", num, media);
					
			}else{
				printf("\nMedia: %0.2f", media);
				printf("\nNenhum numero eh igual a media");
			}
			
}
