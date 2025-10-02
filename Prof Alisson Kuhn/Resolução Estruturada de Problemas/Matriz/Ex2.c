#include <stdio.h>
#include <conio.h>
#define TL 3
#define TC 3
//2.	Carregar uma matriz 4x4 com números fornecidos pelo usuário. 
//Ao final ler um número informado pelo usuário e procurar se o mesmo está na matriz.

void matriz(int mat[TL][TC]){
	int l,c;
	for (l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			printf("matriz[%d][%d]: ", l,c);
				scanf("%d", &mat[l][c]);
		}
	}
}

void verificar(int mat[TL][TC]){
	
		int l,c, num, cont = 0;
		
		printf("\nDigite um numero, para verificar se tem na matriz: ");
			scanf("%d", &num);
		
		
			for (l = 0; l < TL; l++){
				for(c = 0; c < TC; c++){
			
				if (num == mat[l][c]){
					printf("\n Há um correspondente: [%d]", num);
					cont++;
				}
			
			}
		}	
	
		if(cont == 0){
			printf("nn ha um correspondente");
		}
}



void main(){
	int l,c, mat[TL][TC];
	matriz(mat);
	verificar(mat);
}
