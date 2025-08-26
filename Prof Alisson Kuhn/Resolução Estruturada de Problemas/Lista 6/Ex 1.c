#include <stdio.h>
#include <conio.h>

//1.	Escreva uma função, 
//que receba por parâmetro dois valores A e B, calcule e retorne a soma dos valores.


int somar(int A, int B){
	int soma;
	soma = A + B;
	printf("A soma eh de: %d", soma);
	return soma;

}

void main(){
	int A, B, ret;
	printf("Digite o valor de A: ");
		scanf("%d", &A);
	printf("Digite o valor de B: ");
		scanf("%d", &B);
	ret = somar(A,B);
}
