#include <stdio.h>
#include <conio.h>
#define TF 10



// Fazer um programa para ler um vetor de vinte números inteiros positivos 
// e um número qualquer. Mostrar quantas vezes 
// o número lido por último aparece no vetor.

void carregar_vetor(int vet[TF]){
	int i;
	for(i=0;i<TF;i++){
		do{
		printf("Informe um numero positivo: ");
			scanf("%d", &vet[i]);
			if(vet[i] < 0){
				printf("Invalido, tem que ser positivo \n");
			}
		}while(vet[i] <= 0);
	}
}

void carregar_iguais(int vet[TF]){
	int i, cont_iguais = 0;
	for(i=0; i<TF; i++){
		if(vet[i] == vet[TF-1]){
			cont_iguais++;
		}
	}
	printf("Qtde posicoes iguais ultima: %d", cont_iguais);
}



void main(){
	int vet[TF];
	carregar_vetor(vet);
	carregar_iguais(vet);

	 	
	
	
}
