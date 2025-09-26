#include <stdio.h>
#include <conio.h>

#define TF 10  


//11. Faça um algoritmo que leia um vetor A[10]. 
//    Inverta então os valores de A: troque o primeiro pelo último, 
//    segundo pelo penúltimo e assim por diante.
//    Mostre o vetor A após as alterações.


int main() {
    float A[TF];
    float troca;
    int i;

   
    for (i = 0; i < TF; i++) {
        printf("Digite A[%d]: ", i);
        scanf("%f", &A[i]);
    }


    for (i = 0; i < TF / 2; i++) {
        troca = A[i];
        A[i] = A[TF - 1 - i];
        A[TF - 1 - i] = troca;
    }

    
    printf("\nVetor invertido:\n");
    for (i = 0; i < TF; i++) {
        printf("A[%d] = %.2f\n", i, A[i]);
    }

}

