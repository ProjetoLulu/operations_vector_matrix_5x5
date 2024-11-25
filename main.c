#include <stdio.h>

#define SIZE 5

int main() {
    int vetor[SIZE];
    int matriz[SIZE][SIZE];
    int resultado[SIZE] = {0}; 

   
    printf("Preencha o vetor de 5 elementos:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("Elemento [%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    
    printf("\nPreencha a matriz 5x5:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    
    for (int j = 0; j < SIZE; j++) {
        for (int i = 0; i < SIZE; i++) {
            resultado[j] += vetor[i] * matriz[i][j];
        }
    }

   
    printf("\nResultado da multiplicação do vetor pelas colunas da matriz:\n");
    for (int j = 0; j < SIZE; j++) {
        printf("Elemento [%d]: %d\n", j, resultado[j]);
    }

    
    printf("\nDividindo os elementos do vetor pela linha 3 da matriz:\n");
    for (int i = 0; i < SIZE; i++) {
        if (matriz[2][i] != 0) { 
            vetor[i] /= matriz[2][i];
            printf("Elemento [%d]: %d\n", i, vetor[i]);
        } else {
            printf("Elemento [%d]: Divisão por zero não permitida.\n", i);
        }
    }

    return 0;
}