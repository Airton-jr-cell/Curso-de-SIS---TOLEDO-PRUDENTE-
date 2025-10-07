#include <stdio.h>
#include <conio.h>
#define TL 7 
#define TC 3

//8.programa para ler uma matriz (7 x 3)  e mostrar a média dos elementos da 3ª e 5ª linhas.

void matriz(int mat[TL][TC]){
	int l,c;
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			printf("Digite ([%d][%d]) = ", l,c);
				scanf("%d", &mat[l][c]);
		}
	}
}

void media(int mat[TL][TC]){
	int l,c,terceira,quinta = 0;
	float med, med2 = 0;
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			if(l == 2){
				terceira += mat[l][c];
			}
		}
	}
	
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			if(l == 4){
				quinta += mat[l][c];
			}
		}
	}
	
		med = terceira/(TC);
		med2 = quinta/(TC);
	
		printf("\n media linha 3 = %0.2f", med2);	
		printf("\n media linha 5  = %0.2f", med);
}

void main(){
	int mat[TL][TC];
	matriz(mat);
	media(mat);
}
