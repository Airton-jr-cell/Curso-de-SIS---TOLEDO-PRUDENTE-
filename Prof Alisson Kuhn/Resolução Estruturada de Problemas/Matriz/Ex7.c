#include <stdio.h>
#include <conio.h>
#define TL 5
#define TC 5

//7.	Faça um procedimento que receba, por parâmetro, duas matrizes A(5,5) e B(5,5) 
//e retorna uma matriz C, também por parâmetro, que seja a multiplicação da matriz A e B.


void matriz(int matA[TL][TC], int matB[TL][TC]){
	int l,c;
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			printf("digite os itens da matriz da matriz A [%d][%d]: ", l,c);
				scanf("%d", &matA[l][c]);		
		}
	
	}
	printf("\n \n");
	
		for(l=0;l<TL;l++){
			for(c=0;c<TC;c++){
				printf("digite os itens da matriz da matriz B [%d][%d]: ", l,c);
					scanf("%d", &matB[l][c]);
				
		}
	
	}
}

void multiplicar(int matA[TL][TC], int matB[TL][TC], int mult[TL][TC]){
	int l,c, posicao = 0;
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			mult[l][c] = matA[l][c] * matB[l][c];
			printf("\n soma n %d = [%d][%d] = [[%d]]",posicao,l,c,mult[l][c]);
			posicao++;
		}
	
	}
}




void main(){
	int matA[TL][TC], matB[TL][TC], mult[TL][TC];
	matriz(matA,matB);
	multiplicar(matA,matB,mult);
	
} 
