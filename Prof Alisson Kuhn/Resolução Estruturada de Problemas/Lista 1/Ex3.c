#include <stdio.h>
#include <conio.h>

//3.	Escreva um programa que leia o c�digo de origem de um produto e imprima na tela a regi�o de sua proced�ncia conforme a tabela abaixo:
//-c�digo 1 : Sul 			-c�digo 5 ou 6 : Nordeste
//-c�digo 2 : Norte 			-c�digo 7, 8 ou 9 : Sudeste
//-c�digo 3 : Leste 			-c�digo 10 : Centro-Oeste
//-c�digo 4 : Oeste 			-c�digo 11 : Noroeste

 
void main(){
	int code;
	printf("Digite o codigo do produto: ");
		scanf("%d", &code);
	
	switch(code){
	case 1:
		printf("Sul");
		break;
	case 2:
		printf("Norte");
		break;
	case 3:
		printf("Leste");
		break;		
	case 4:
		printf("Oeste");
		break;
	case 5:
	case 6:
		printf("Nordeste");
		break;
	case 7:
	case 8:
	case 9:
		printf("Sudeste");
		break;
	case 10:
		printf("Centro-Oeste");
		break;
	case 11:
		printf("Noroeste");
		break;
	default:
		
	}	
	
}

