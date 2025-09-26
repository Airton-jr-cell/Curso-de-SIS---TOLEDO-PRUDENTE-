#include <stdio.h>
#include <conio.h>
#define TF 7

//8. Escreva um algoritmo que leia 7 valores para um vetor de 7 posições. Mostre depois somente os positivos.

void ler(int vet_ler[TF]){
	int i;
	for(i=0;i<TF;i++){
		printf("Digite um numero: ");
			scanf("%d", &vet_ler[i]);
	}
	
}

void positivos(int vet_ler[TF]){
	int i, positivo;
	for(i=0;i<TF;i++){
		if (vet_ler[i]> 0){
			positivo = vet_ler[i];
			printf("\nNumero = %d", positivo);
		}
	}	
		
	
}


void main(){
	int vet_ler[TF];
	
	ler(vet_ler);
	positivos(vet_ler);
}
