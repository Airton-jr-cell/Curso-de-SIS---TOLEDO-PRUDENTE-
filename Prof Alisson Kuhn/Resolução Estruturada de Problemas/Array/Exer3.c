#include <stdio.h>
#include <conio.h>
#define TF 5

//3.	Preencher um vetor B de 5 elementos com 1 se o número informado pelo usuário ímpar e com 0 se for par. 
//	Escrever o vetor B após o seu total preenchimento.

void carregar(int vetA[TF]){
	
	int i;
	
	for(i=0;i<TF;i++){
	printf("Digite um numero: ");
		scanf("%d", &vetA[i]);
	}	
}


void exibir(int vetA[TF]){
	
	int i;
	
	for(i=0;i<TF;i++){
		if(vetA[i] % 2 == 0){
			printf("\n0");
		}
		else{
			printf("\n1");
		}
		
	}
		
}



void main(){
	int vetA[TF];
	
	carregar(vetA);
	exibir(vetA);
		
}
