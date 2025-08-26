#include <stdio.h>
#include <conio.h>

//5.	Faça um procedimento que recebe a idade de um nadador por parâmetro e 
//retorne também por parâmetro, a categoria desse nadador de acordo com a tabela abaixo:   
//Idade	Categoria
//5 a 7 anos	A
//8 a 10 anos	B
//11-13 anos	C
//14-17 anos	D
//>= 18 anos	E

void categoria(int idade, char *cat){
	switch(idade){
		case 5:
		case 6:
		case 7:
			*cat = 'A';
		break;
		
		case 8:
		case 9:
		case 10:
			*cat = 'B';
		break;
		
		case 11:
		case 12:
		case 13:
			*cat = 'C';
		break;
		
		case 14:
		case 15:
		case 16:
		case 17:
			*cat = 'D';
		break;
		default:
			if (idade >= 18){
				*cat = 'E';
			}
			else{
				printf("Numero invalido");
			}
			
	}
}

void main(){
	int idade;
	char cat;
	printf("Digite a sua idade: ");
		scanf("%d", &idade);
		
	categoria(idade, &cat);
	
	printf("%c", cat);
	
	
}

