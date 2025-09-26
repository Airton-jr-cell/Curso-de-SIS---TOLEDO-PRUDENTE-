//6.	Escreva um algoritmo que leia dois vetores de 10 posições e faça a
// 		multiplicação dos elementos de mesmo índice, colocando o resultado em um 
//		terceiro vetor. Mostre o vetor resultante.

#include <stdio.h>
#include <conio.h>

#define TF 10

void carregar_vetor(int vet[TF], int vet1[TF]){
	int i;
	for(i = 0; i < TF; i++){
		printf("\nDigite um valor vet[%d]: ", i);
		scanf("%d", &vet[i]);
	}
	printf("\n----------------------------\n");
	for(i = 0; i < TF; i++){
		printf("\nDigite um valor vet[%d]: ", i);
		scanf("%d", &vet1[i]);
	}	
}

void multiplicar(int vet[TF], int vet1[TF], int vet2[TF]){
	int i;
	for(i = 0; i < TF; i++){
		vet2[i] = vet[i] * vet1[i];
		printf("\nVetor[%d]: %d", i, vet2[i]);
	}
}

void main(){
	int vet[TF], vet1[TF], vet2[TF];
	
	carregar_vetor(vet, vet1);
	multiplicar(vet, vet1, vet2);
}
