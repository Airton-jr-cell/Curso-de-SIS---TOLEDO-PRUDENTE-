#include <stdio.h>
#include <conio.h>


// - Escreva um algoritmo que tenha em seu programa principal 
// a exibição de um menu de opções conforme abaixo:
// 1 - Calcular Idade
// 2 - Média de 3 Notas
// 3 - Maior Número
// 4 - Menor Número
// 5 - Sair

// O usuário deverá escolher qual opção deseja executar. 
// Caso o usuário escolha uma opção inválida, 
// uma mensagem deverá ser exibida de advertência e o 
// menu deverá ser exibido novamente para que seja escolhido uma nova opção. 
// Para cada opção escolhida, o algoritmo deverá chamar o procedimento correspondente a opção, 
// ou seja, teremos no mínimo 4 procedimentos diferentes no algoritmo.
//Cada procedimento deverá ter suas leituras e processamentos correspondentes ao objetivo da opção escolhida.

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
		printf("// Selecione: \n 1 - Calcular Idade \n 2 - Média de 3 Notas \n 3 - Maior Numero \n 4 - Menor Numero  \n 5 - Sair : \n\n = ");
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
				printf("você saiu do programa!");
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
