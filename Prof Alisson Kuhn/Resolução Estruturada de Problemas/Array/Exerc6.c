#include <stdio.h>
#include <conio.h>
#define TF 10

//6.	Criar um programa para ler um vetor de dez números reais; 
//		e mostrar os números contidos nos índices pares.

void carregar(int num[TF]){
	int i;
	
	for(i=0;i<TF;i++){
		printf("Digite o numero n.%d", i);
		scanf("%d", &num[i]);	
	}
}

void exibir(int num[TF]){
	
		int i;
		printf("Bloco dos pares: ");
		for(i=0;i<TF;i++){
			if(num[i] % 2 == 0){
				printf("\n%d", num[i]);
			}
		}
		printf("Bloco comum: ");
			for(i=0;i<TF;i++){
				printf("\n%d", num[i]);
			}
		}

}
		


void main(){
	float num[TF];
	
	carregar(num);
	exibir(num);

	
}
