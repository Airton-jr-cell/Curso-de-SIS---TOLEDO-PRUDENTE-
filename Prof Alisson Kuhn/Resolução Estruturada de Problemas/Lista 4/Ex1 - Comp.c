#include <stdio.h>
#include <conio.h>

 
//1. Faça uma função que leia um número inteiro e retorne 1 se ele for par ou 2 se for ímpar.


int par_impar(){
	int num, res;
	printf("Digite o numero, sera exibido 1, caso for par, 2 caso for impar: ");
		scanf("%d", &num);
	if (num %2 == 0){
		res = 1;
	
	}else{
		res = 2;
	}
}

void main(){
	int par_impar();
}
