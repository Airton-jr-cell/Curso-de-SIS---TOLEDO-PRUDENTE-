#include <stdio.h>
#include <conio.h>
#define TL 4
#define TC 4

//3.	Ler uma matriz SOMA 4x4, calcular e escrever as seguintes somas:
//a) da linha 3
//b) da coluna 2
//c) de todos os elementos da matriz

void matriz(int mat[TL][TC]){
	int l,c;
	
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			printf("matriz [%d][%d]: ", l,c);
				scanf("%d", &mat[l][c]);
		}
	}
	 
}

void soma(int mat[TL][TC]){
	int l,c, somar =0 , somar2=0, somarTudo=0;
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC; c++){
			if (l == 2){
				somar += mat[l][c];
			}
			if (c == 1){
				somar2 += mat[l][c];
				
			}
			somarTudo += mat[l][c];
		}
	}
	printf("\nSoma linha 3: [%d]", somar);
	printf("\nSoma coluna 2: [%d]", somar2);
	printf("\nTotal: [%d]", somarTudo);	
}

void main(){
	
	int mat[TL][TC];
	
	matriz(mat);
	soma(mat);
}


