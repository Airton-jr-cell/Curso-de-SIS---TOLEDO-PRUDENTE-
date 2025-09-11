#include <stdio.h>
#include <conio.h>
#define TF 10

//4.	Ler um vetor C de 10 elementos inteiros, 
//		trocar todos os valores negativos do vetor C por 0.
// 		Escrever o vetor C modificado.

void carregar(int C[TF]){
	int i;
	for(i=0;i<TF;i++){
	printf("Digite o numero %d: ", i);
		scanf("%d", &C[i]);
	}
}

void exibir(int C[TF]){
	int i;
	for(i=0;i<TF;i++){
		
		if(C[i] < 0){
			printf("\n posicao numero %d = 1", i);
		}
		else{
			printf("\n posicao numero %d = %d", i,C[i]);
		}
	}
}
	
void main(){
	
	int C[TF];
	carregar(C);
	exibir(C);
}
	
			

