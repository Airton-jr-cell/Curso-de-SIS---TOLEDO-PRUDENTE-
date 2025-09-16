#include <stdio.h>
#include <conio.h>
//#define TF

//  3. Fazer uma rotina que recebe um array do tipo float e 
//	o número de valores que devem ser solicitados ao usuário 
//	e retornar o array preenchido com os valores digitados. 
//	O vetor deverá ser preenchido somente até a quantidade 
//  de elementos que o usuário solicitar.

void escolha(float vet, float num, float TF){
	int i;
	for(i=0;i<TF;i++){
		printf("Digite um numero: ");
			scanf("%f", &num);
	
	}
		printf("Numero %f correspodente ao array numero %f", num, TF);
	
	
} 
 



void main(){
	float num;
	float TF;
	float vet;
		printf("Digite a quantidade de vezes que vc deseja, que o programa rode: ");
		scanf("%f", &TF);
	escolha(vet, num, TF);
	exibir(vet, num, TF);
	
	
}



