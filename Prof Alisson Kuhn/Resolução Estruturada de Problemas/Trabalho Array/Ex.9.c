#include <stdio.h>

#define TF 8  

//
//9. Faça um algoritmo que leia um vetor de 8 posições do tipo float 
//   e divida todos os seus elementos pelo maior valor do vetor. 
//   Mostre o vetor após os cálculos.


int main() {
    float v[TF];
    float m;
    int i;

    
    for (i = 0; i < TF; i++) {
        printf("Digite v[%d]: ", i);
        scanf("%f", &v[i]);
    }


    m = v[0];
    for (i = 1; i < TF; i++) {
        if (v[i] > m) {
            m = v[i];
        }
    }

    
    for (i = 0; i < TF; i++) {
        v[i] = v[i] / m;
    }

    printf("\nVetor final:\n");
    for (i = 0; i < TF; i++) {
        printf("v[%d] = %.2f\n", i, v[i]);
    }


}

