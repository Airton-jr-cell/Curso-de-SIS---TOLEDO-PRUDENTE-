#include <stdio.h>
#include <conio.h>
#define TL 7
#define TC 7
	
//5.	Faça uma função que recebe, 
//por parâmetro, uma matriz A(7,7) e 
//retorna a soma dos elementos da linha 5 e da coluna 3.


int matriz(int mat[TL][TC]){
	int l,c, soma = 0, resultado;
	for(l = 0; l < TL; l++){
		for(c = 0; c < TC ; c++){
			printf("Digite um numero para a matriz [%d][%d]: ",l,c);
				scanf("%d", &mat[l][c]);
				
			if(l == 4 || c == 2){
				soma += mat[l][c];
			}
		}

	}
	return printf("Resultado: %d", soma);;
	
}



void main(){
	int mat[TL][TC];
	matriz(mat);

}



