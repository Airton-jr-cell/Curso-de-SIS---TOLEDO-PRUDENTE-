#include <stdio.h>
#include <conio.h>
#define TL 4
#define TC 3


//10.	Fazer um programa para ler uma matriz A (4 x 3); 
//criar a matriz T que é a matriz transposta de A; mostrar as matrizes organizadas.

void matriz(int mat[TL][TC]){
	int l,c;
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			printf("Matriz[%d][%d]= ", l,c);
				scanf("%d", &mat[l][c]);
		}
	}
}

void organizar(int mat[TL][TC]){
		for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			printf("Matriz[%d][%d]= ", l,c);
				scanf("%d", &mat[l][c]);
		}
	}
}


void main(){
	int mat[TL][TC];
	matriz(mat);
	organizar(mat);
}
