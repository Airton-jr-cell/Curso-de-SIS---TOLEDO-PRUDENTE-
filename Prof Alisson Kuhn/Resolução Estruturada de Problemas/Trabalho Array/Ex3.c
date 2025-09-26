#include <stdio.h>
#include <conio.h>

#define TF 1000  

//
//3. Fazer uma rotina que recebe um array do tipo float e o número de valores 
//   que devem ser solicitados ao usuário e retornar o array preenchido 
//   com os valores digitados. O vetor deverá ser preenchido somente até 
//   a quantidade de elementos que o usuário solicitar.



void preenche(float v[], int q) {
    int i;
    for (i = 0; i < q; i++) {
        printf("Digite v[%d]: ", i);
        scanf("%f", &v[i]);
    }
}

int main() {
    float v[TF];
    int n, i;

    printf("Quantos valores deseja inserir (max %d)? ", TF);
    scanf("%d", &n);

    if (n > TF || n <= 0) {
        printf("Quantidade invalida!\n");
        getch();
        return 0;
    }

    preenche(v, n);

    printf("\nValores digitados:\n");
    for (i = 0; i < n; i++) {
        printf("v[%d] = %.2f\n", i, v[i]);
    }

}

