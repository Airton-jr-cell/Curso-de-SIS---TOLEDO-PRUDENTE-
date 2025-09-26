#include <stdio.h>
#include <conio.h>


//5.	Faça um algoritmo que leia um vetor N[10]. 
//A seguir, encontre o menor elemento do vetor N e a sua posição dentro do vetor


int main() {
    int N[10];
    int i, menor, posicao;    
    int TF = 0; 

    for(i = 0; i < 10; i++) {
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &N[i]);
    }
    
    menor = N[0];
    posicao = 0;
    TF = 1; 


    for(i = 1; i < 10; i++) {
        if(N[i] < menor) {
            menor = N[i];
            posicao = i;
        }
    }

    printf("\nVetor completo:\n");
    for(i = 0; i < 10; i++) {
        printf("N[%d] = %d\n", i, N[i]);
    }

    if(TF == 1) {
        printf("\nO menor valor e: %d\n", menor);
        printf("Ele está na posicao: %d (índice do vetor)\n", posicao);
    } else {
        printf("\nNao foi encontrado nenhum valor no vetor.\n");
    }

    return 0;
}

