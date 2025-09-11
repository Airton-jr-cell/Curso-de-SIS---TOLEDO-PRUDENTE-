#include <stdio.h>
#include <conio.h>
#define TF 10
//1.Carregar um vetor X de 10 elementos com os valores de 10 em 10 e exibi-lo no final.

void main(){
	int i;
	int X[TF];
	for (i=0;i<TF; i++){
		X[i] = i * 10;
		printf("\nvetor[%d], %d", i, X[i]);
	}	
}
