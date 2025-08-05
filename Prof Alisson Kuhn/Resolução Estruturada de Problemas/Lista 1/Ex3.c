#include <stdio.h>
#include <conio.h>

//3.	Escreva um programa que leia o código de origem de um produto e imprima na tela a região de sua procedência conforme a tabela abaixo:
//-código 1 : Sul 			-código 5 ou 6 : Nordeste
//-código 2 : Norte 			-código 7, 8 ou 9 : Sudeste
//-código 3 : Leste 			-código 10 : Centro-Oeste
//-código 4 : Oeste 			-código 11 : Noroeste

 
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

