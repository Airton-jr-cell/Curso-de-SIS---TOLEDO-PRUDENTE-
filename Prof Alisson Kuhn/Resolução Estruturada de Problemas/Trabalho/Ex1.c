#include <stdio.h>
#include <conio.h>


//1.	POR VALOR - Fa�a um programa que:
//a.	leia os valores de A, B;
//b.	se o n�mero A e B for pares, fazer o procedimento soma;
//c.	se o n�mero A e B forem impares, fazer a fun��o subtra��o;
//d.	se o n�mero A for PAR e B for IMPAR, fazer a m�dia de ambos os n�meros;
//e.	se o n�mero A for IMPAR e B for PAR, fazer uma fun��o para exibir o maior n�mero;

void soma(int A, int B){
	int somado;
	somado = A + B;
	printf("Soma: %d", somado);
	
	
}
int sub(int A, int B){
	int subtra;
	subtra = A - B;
	printf("Subtracao: %d", subtra);
	return sub;
}
void med(float A, float B){
	float media;
	media = (A+B)/2;
	printf("media: %0.2f", media);
}


int maiores(int A, int B){
	if(A > B){
		printf("A (%d) eh maior que B (%d)", A,B);
		
	}else{
		printf("B (%d) eh maior que A (%d)", B,A);
	}
	return sub;
}






void main(){
			int A,B;
			printf("Digite um numero A: ");
				scanf("%d", &A);
			printf("Digite um numero B: ");
				scanf("%d", &B);
			
			if (A % 2 == 0 && B % 2 == 0){
				soma(A,B);
			}else{
					if (A % 2 == 1 && B % 2 == 1){
						sub(A,B);
				}else{
						if (A % 2 == 0 && B % 2 == 1){
							med(A,B);
					}else{
						if (A % 2 == 1 && B % 2 == 0){
								maiores(A,B);
							}
						}
					}
				}
			}
	


