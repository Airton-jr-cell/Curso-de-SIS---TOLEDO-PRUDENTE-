#include <stdio.h>
#include <conio.h>


// - Escreva um algoritmo que tenha em seu programa principal 
// a exibi��o de um menu de op��es conforme abaixo:
// 1 - Calcular Idade
// 2 - M�dia de 3 Notas
// 3 - Maior N�mero
// 4 - Menor N�mero
// 5 - Sair

// O usu�rio dever� escolher qual op��o deseja executar. 
// Caso o usu�rio escolha uma op��o inv�lida, 
// uma mensagem dever� ser exibida de advert�ncia e o 
// menu dever� ser exibido novamente para que seja escolhido uma nova op��o. 
// Para cada op��o escolhida, o algoritmo dever� chamar o procedimento correspondente a op��o, 
// ou seja, teremos no m�nimo 4 procedimentos diferentes no algoritmo.
//Cada procedimento dever� ter suas leituras e processamentos correspondentes ao objetivo da op��o escolhida.

void calc_idade(){
	int ano_atual, ano_nasc, idade;
	
	printf("Digite o ano atual: ");
		scanf("%d", &ano_atual);
	printf("Digite o ano do seu nascimento");
		scanf("%d", &ano_nasc);
	idade = ano_atual - ano_nasc;
	printf("A sua idade eh de: %d", idade);
}

void media(){
	float nota1, nota2, nota3, media;
	printf("Digite sua nota: ");
		scanf("%f", &nota1);
	
	printf("Digite sua nota: ");
		scanf("%f", &nota2);
	
	printf("Digite sua nota: ");
		scanf("%f", &nota3);
		
	media = (nota1 + nota2 + nota3)/3;
}


void maior(){
	float num1, num2;
	
	printf("Digite um numero: ");
		scanf("%f", &num1);
	printf("Digite um numero: ");
		scanf("%f", &num2);
		
	 if(num1 > num2){
	 	printf("O numero %f, eh maior que o %f", num1, num2);
	 }
	 if(num2 > num1){
	 	printf("O numero %f, eh maior que o %f", num2, num1);
	 }
}


void menor(){
	float num1, num2;
	
	printf("Digite um numero: ");
		scanf("%f", &num1);
	printf("Digite um numero: ");
		scanf("%f", &num2);
		
	 if(num1 < num2){
	 	printf("O numero %f, eh menor que o %f", num1, num2);
	 }
	 if(num2 < num1){
	 	printf("O numero %f, eh menor que o %f", num2, num1);
	 }
}

void menu(){
	int op = 1;
	while(op != 5){
		system("cls");
		printf("// Selecione: \n 1 - Calcular Idade \n 2 - M�dia de 3 Notas \n 3 - Maior Numero \n 4 - Menor Numero  \n 5 - Sair : \n\n = ");
		scanf("%d", &op);
	
			switch (op){
				case 1:
				calc_idade();
				break;
				
				case 2:
				media();
				break;
				
				case 3:
				maior();
				break;
				
				case 4:
				menor();
				break;
				
				case 5:
				printf("voc� saiu do programa!");
				break;
				
				default:
				printf("Numero invalido");
			
			
			}
			printf("\n\n");
			system("pause");
		}

	
	}
	
void main(){
	menu();

}
