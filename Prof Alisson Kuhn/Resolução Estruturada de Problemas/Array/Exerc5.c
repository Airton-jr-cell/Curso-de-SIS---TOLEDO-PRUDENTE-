#include <stdio.h>
#include <conio.h>
#define TF 4

//5.	Ler um vetor D de 4 elementos. Criar um vetor E, com todos os elementos de D na ordem inversa, ou seja, 
//o último elemento passará a ser o primeiro, o penúltimo será o segundo e assim por diante. 
//Escrever todo o vetor D e todo o vetor E.

void carregar(int D[TF]){
	int i;
	for (i=0;i<TF; i++){
		printf("\nInforme o valor da posicao n.%d: ", i);
		scanf("%d", &D[i]);		
	}	
}

void inverter(int D[TF], int E[TF]){
	int i, r;
	for (i=0,r=TF-1;i<TF;i++,r--){
		E[r] = D[i];
	}
}

void exibir(int E[TF]){
	int i;
	for(i=0;i<TF;i++){
		printf("\n vetor[%d] = %d",i,E[i]);
	}
}

void main(){
	int D[TF];
	int E[TF];
	
	carregar(D);
	inverter(D,E);
	exibir(E);
	
}
