#include <stdio.h>
#include <conio.h>
#define TF 5


//  Faça um procedimento que recebe, por parâmetro, 
// 	2 vetores de 10 elementos inteiros e que calcule e retorne, 
//	também por parâmetro, a soma dos dois primeiros vetores.   
//	vetor c recebe os outros 2 vetor 

void carregar_primeiro(int vet[TF]){
	int i;
	for(i=0;i<TF;i++){
		printf("\nInforme um numero, posicao numero {%d}: ", i);
			scanf("%d", &vet[i]);
	}
	
}


void carregar_segundo(int veta[TF]){
	int i;
	for(i=0;i<TF;i++){
		printf("\nInforme um numero, posicao numero {%d}: ", i);
			scanf("%d", &veta[i]);
	
	}
}

void carregar_soma(int vet[TF], int veta[TF], int vetor[TF]){
	int i, soma=0;
	for(i = 0;i< TF;i++){
		vetor[TF] = vet[i] + veta[i];
		printf("\n vetor[C]: %d", vetor[TF]);
	}
}




void main(){
	int vet[TF], veta[TF], vetor[TF];
	carregar_primeiro(vet);
	carregar_segundo(veta);	
	carregar_soma(vet, veta, vetor);	

}
