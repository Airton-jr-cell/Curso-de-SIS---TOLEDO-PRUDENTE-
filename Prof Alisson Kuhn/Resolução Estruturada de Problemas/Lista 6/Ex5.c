#include <stdio.h>
#include <conio.h>

//5.	Escreva uma função que recebe a idade de um nadador por 
//parâmetro e retorna à categoria desse nadador de acordo com a tabela abaixo:   
//
//Idade			Categoria
//5 a 7 anos		1
//8 a 10 anos		2
//11-13 anos		3
//14-17 anos		4
//>= 18 anos		5

int categoria(int idade){
	
	switch(idade){
	case 5:
	case 6:
	case 7:
		return printf("categoria 1");
	break;
	
	case 8:
	case 9:
	case 10:
		return printf("categoria 2");
	break;
	
	case 11:
	case 12:
	case 13:
		return printf("categoria 3");
	break;
	
	case 14:
	case 15:
	case 16:
	case 17:
		return printf("categoria 4");
	break;
	default:
		if (idade >= 18){
			return printf("categoria 5");
		}
		else{
			return printf("idade invalida");
		}
	}


}

void main(){
	int idade;
	printf("Qual sua idade?: ");
		scanf("%d", &idade);
	categoria(idade);
}

