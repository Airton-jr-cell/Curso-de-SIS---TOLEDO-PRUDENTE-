//10.	Faça um algoritmo que leia dois vetores (A e B) de 5 posições de números. 
//		O algoritmo deve, então, subtrair o primeiro elemento de A do último de B, 
//		subtrair o segundo elemento de A do penúltimo de B, e assim por diante. 
//		Mostre o resultado da subtração.

#include <stdio.h>
#include <conio.h>

#define TF 5

void carregar_vetor(int vetA[TF], int vetB[TF]){
	int i;
	for(i = 0; i < TF; i++){
		printf("\nDigite um valor para o vetA[%d]: ", i);
		scanf("%d", &vetA[i]);
	}
	printf("\n --------------- \n");
	
	for(i = 0; i < TF; i++){
		printf("\nDigite um valor para o vetB[%d]: ", i);
		scanf("%d", &vetB[i]);
	}
}

void subtracao_vetor(int vetA[TF], int vetB[TF]){
	int i, j = 5;
	for(i = 0; i < TF; i++, j--){
		vetA[i] = vetA[i] - vetB[j - 1];
	}
}

exibir_vetor_subtraido(int vetA[TF]){
	int i;
	for(i = 0; i < TF; i++){
		printf("\nVetorA[%d]: %d", i, vetA[i]);
	}
}

void main(){
	int vetA[TF], vetB[TF];
	
	carregar_vetor(vetA, vetB);
	subtracao_vetor(vetA, vetB);
	exibir_vetor_subtraido(vetA);
	
}
