#include <stdio.h>
#include <conio.h>

//1.	Escreva um programa para ler o raio de um c�rculo, calcular e escrever a sua �rea.

void main(){

	float raio, area;
	
	printf("Digite o raio da circunferencia: ");
		scanf("%f", &raio);

	area = 3.14 * raio * raio;
	
	printf("a area do circulo eh de: %0.2f", area);
	
}
