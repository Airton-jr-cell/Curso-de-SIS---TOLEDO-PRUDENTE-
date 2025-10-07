#include <stdio.h>
#include <conio.h>
#define TL 5
#define TC 6

//9.	Fazer um programa para ler uma matriz (5 x 6)  
//e mostrar a quantidade de elementos da 5ª coluna 
//que estão abaixo da média dos elementos da 4ª linha

void matriz(int mat[TL][TC]){
	int l,c;
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
			printf("Matriz [%d][%d]= ", l,c);
				scanf("%d", &mat[l][c]);
		}
	}
}
	
void media(int mat[TL][TC]){
	int l,c,quarta = 0, qtde = 0;
	float med = 0;
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
				if(l == 3){
					quarta += mat[l][c];
				}
			}
		}
	
		med = quarta/TC;
	
		
		
	for(l=0;l<TL;l++){
		for(c=0;c<TC;c++){
				if(l == 4){
					if(mat[l][c]<med){
						qtde++;
					}
				}
			}
		}
		printf("\nMedia: %0.2f", med);
		printf("\nQuantidade de numeros menores que a media: %d ", qtde);
	}

void main(){
	int mat[TL][TC];
	matriz(mat);
	media(mat); 
}
