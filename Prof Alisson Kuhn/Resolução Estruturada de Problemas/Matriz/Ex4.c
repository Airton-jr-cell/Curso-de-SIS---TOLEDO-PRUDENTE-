//1.	Carregar uma matriz 3x3 com número inteiros
//gerar uma nova matriz com os número da matriz carregada, multiplicados por 2.

#include <stdio.h>
#include <conio.h>
#define TL 3
#define TC 3

void matriz(int mat[TL][TC]){
	int l,c;
		for(l=0;l<TL;l++){
			for(c=0;c<TC;c++){
				printf("\nNumeros inteiros, matriz: [%d][%d]: ", l,c);
					scanf("%d", &mat[l][c]);
			}
		}
	printf("\n\n");
}

void multiplicar(int mat[TL][TC]){
	int l,c;
		for(l=0;l<TL;l++){
			for(c=0;c<TC;c++){
				printf("\nNumeros inteiros, matriz (multiplicados): [%d][%d] = [%d]",l,c ,mat[l][c] * 2);
			}
		}
}

void main(){
	int mat[TL][TC];
	
	matriz(mat);
	multiplicar(mat);
}



