#include <stdio.h>
#include <conio.h>

// 3 - Escreva um algoritmo que tenha em seu programa principal a 
// exibi��o de um menu de op��es conforme abaixo:
// 1 - Calcular Idade
// 2 - M�dia de 4 Notas
// 3 - Multiplica��o de 2 N�mero
// 4 - Divis�o de 2 N�mero
// 5 - Sair
//
// O usu�rio dever� escolher qual op��o deseja executar. 
// Caso o usu�rio escolha uma op��o inv�lida, uma mensagem dever� ser 
// exibida de advert�ncia e o menu dever� ser exibido novamente 
// para que seja escolhido uma nova op��o. 
// Para cada op��o escolhida, o algoritmo dever� chamar a fun��o 
// correspondente a op��o, ou seja, teremos no m�nimo 4 fun��es diferentes no algoritmo.
// Cada fun��o dever� ter suas leituras e processamentos correspondentes 
// ao objetivo da op��o escolhida. Retornar e exibir o resultado no programa principal.



int calc_idade(){
		int ano_nasc, ano_atual, idade;
			printf("Digite o ano de nascimento: ");
				scanf("%d",&ano_nasc);
			printf("Digite o ano atual: ");
				scanf("%d",&ano_atual);
			idade = ano_atual - ano_nasc;
		return idade;
	}
	
float calc_medias (){
	float n1s,n2s,n3s,n4s, media;
		printf("Digite a nota: ");
			scanf("%f", &n1s);
		printf("Digite a nota: ");
			scanf("%f", &n2s);
		printf("Digite a nota: ");
			scanf("%f", &n3s);
		printf("Digite a nota: ");
			scanf("%f", &n4s);
		media = (n1s + n2s + n3s + n4s)/4;
	return media;
}

int calc_num (){
		int n1z,n2z,result;
			printf("Digite n1: ");
				scanf("%d", &n1z);
			printf("Digite n2: ");
				scanf("%d", &n2z);
			result = n1z * n2z;
		return result;
	}
	
	
float calc_div(){
	float n1p, n2p, div;
		printf("Digite um numero: ");
			scanf("%f", &n1p);
		printf("Digite um numero: ");
			scanf("%f", &n2p);
		div = n1p/n2p;
		return div;
}
	
void menu (){
	int op;
		
		do{
			system("cls");
			printf("\n");
			printf(" 1 - Calcular Idade \n 2 - M�dia de 4 Notas \n 3 - Multiplica��o de 2 N�mero \n 4 - Divis�o de 2 N�mero \n 5 - Sair \n \n \n >>Informe um valor<<: ");
					scanf("%d", &op);
			
			switch(op){
				case 1:
					printf("Idade: %d",calc_idade());
				break;
					case 2:
					printf("Media: %f", calc_medias());
				break;
					case 3:
					printf("multiplcacao: %d", calc_num());
				break;
					case 4:	
					printf("divisao: %f", calc_div());
				break;
					case 5:
						printf(">>fim<<");
					break;
					default:
						printf("Invalido, digite novamente: ");
					break;
			}
			printf("\n \n");
			system("pause");
		}while(op!=5);
}

void main(){
	menu();
}

