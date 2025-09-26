//7.	Faça um algoritmo que leia um vetor K[5]. Troque a seguir, todos os elementos
//		de ordem ímpar do vetor com os elementos de ordem par imediatamente posterior.

#include <stdio.h>
#include <conio.h>

#define K 5

void carregar_vetor(int vet[K]){
	int i;
	for (i = 0; i < K; i++){
		printf("\nInforme um numero vet[%d]: ", i);
		scanf("%d", &vet[i]);		
	}
}

void troca(int vet[K]){
	int i, troca = 0;
	for(i = 1; i < K-1; i+= 2){
		troca = vet[i];
		vet[i] = vet[i+1];
		vet[i+1] = troca; 
				
	}
	for(i = 0; i < K; i++){
		printf("\nVetor [%d]: %d", i, vet[i]);
	}
}



void main(){
	int vet[K];
	
	carregar_vetor(vet);
	troca(vet);
}
