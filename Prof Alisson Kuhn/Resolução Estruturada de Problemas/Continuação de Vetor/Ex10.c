#include <stdio.h>
#include <conio.h>
#define TF 10


//10. Escrever um programa para ler um vetor de seis números inteiros; 
//    e mostrar a quantidade de números ímpares.


void carregar_inteiros(int vet[TF]){
	int i;
	for(i=0;i<TF;i++){
		printf("Informe um numero positivo: ");
			scanf("%d", &vet[i]);
	
	}
}

void carregar_iguais(int vet[TF]){
	int i, cont_impar = 0, cont_par = 0;
	for(i=0; i<TF; i++){
		if(vet[i] % 2 == 0){
			cont_par++;
		}else{
			cont_impar++;
		}
	}
	printf("Qtde de par: %d\n", cont_par);
	printf("Qtde de impar: %d\n", cont_impar);
}



void main(){
	int vet[TF];
	carregar_inteiros(vet);
	carregar_iguais(vet);

	 	
	
	
}
