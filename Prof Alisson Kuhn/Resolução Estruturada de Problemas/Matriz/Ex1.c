#include <stdio.h>
#include <conio.h>
#define TL 2
#define TC 2

//1.	Carregar uma matriz 3x3 e preencher com valores de 10 em 10 e exibir a soma da matriz no final.

void ler_matriz(int mat[TL][TC]){
	int l, c, soma;
	printf("\n<--Preencha de 10 em 10-->\n");
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			printf("\nMatriz[%d][%d]: ",l,c);
			scanf("%d", &mat[l][c]);
			
		}
	}
	
}
void somar_matriz(int mat[TL][TC]){
	int l,c, soma;
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			soma += mat[l][c];	
			
		}
	}
	printf("\n<--resultado-->");
	printf("\nTotal = %d", soma);
}




void main(){
	int l,c, mat [TL][TC];
	ler_matriz(mat);
	somar_matriz(mat);
	
}
