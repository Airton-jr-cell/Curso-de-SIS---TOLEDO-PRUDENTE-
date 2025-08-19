#include <stdio.h>
#include <conio.h>
 
 
//2. Escreva um programa que tenha um menu com duas opções: 
//1 - Calcular Área Circulo
//2 - Calcular Perímetro Circulo
//3 - Finalizar
//Após ler a opção escolhida pelo usuário chama a função correspondente. 
//Caso o usuário escolha finalizar uma mensagem deverá ser exibida.
//Área = PI * r2;  = (3.14 * raio * raio)
//Perímetro = PI * 2 * r; (3.14 * 2 * raio)
//O programa deverá validar a opção escolhida pelo usuário e 
//o menu ser reexibido em caso de opção inválida!


float circle(){
	float raio, Area;
	printf("Digite o raio, para calcular a area: ");
	printf("\n");
		scanf("%f", raio);
	Area = (3.14 * raio * raio);
	return Area;
}

float perimetro(){
	float raio, perime;
	printf("Digite o raio, para calcular a area: ");
	printf("\n");
		scanf("%f", raio);
	perime = (3.14 * 2 * raio);
	return perime;
}

void menu(){
	int op;
	printf("\n >> Digite uma opcao <<");
	printf("\n 1- Calcular Area Circulo \n 2 - Calcular Perímetro Circulo \n 3 - Finalizar");
	printf("\n \n");
		scanf("%d", &op);		
		
	switch(op){
		case 1:
			printf("%f",circle());
		break;
		
		case 2:
			printf("%f",perimetro());
		break;
		
		case 3:
			printf("Fim");
		break;
		
		default:
		printf("Invalido");
		break;
				
		}
		
}
	
int main(){
	menu();
}
