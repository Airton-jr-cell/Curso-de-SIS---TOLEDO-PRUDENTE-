#include <stdio.h>
#include <conio.h>
#define TF 5

//2.	Fazer uma rotina que recebe como parâmetro um array de 5 posições 
//contendo as notas de um aluno ao longo do ano e retornar a média.
	
void nota(int vetNotas[TF]){
	int i, somar_notas = 0;
	float media;
	for(i=0;i<TF;i++){
	printf("Digite sua nota: ");
		scanf("%d", &vetNotas[i]);
		somar_notas += vetNotas[i];
			
	}
	media = somar_notas/TF;
	printf("sua media foi de: %0.2f", media);
	
}



	
	

void main(){
	int vetNotas[TF];
	nota(vetNotas);
	
}
