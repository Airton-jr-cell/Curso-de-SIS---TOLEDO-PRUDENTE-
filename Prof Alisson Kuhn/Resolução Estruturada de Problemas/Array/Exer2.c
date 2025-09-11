#include <stdio.h>
#include <conio.h>
#define TF 5

//2.	Preencher um vetor A de 5 elementos com os números fornecidos pelos usuários.  
//	Escrever o vetor A após o seu total preenchimento.

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
	printf("\n numeros dados pelo usuario: %d", vetA[i]);
	}
		
}





void main(){
	int vetA[TF];
	
	carregar(vetA);
	exibir(vetA);
	
	
}
