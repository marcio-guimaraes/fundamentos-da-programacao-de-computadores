/*8. Crie um programa que preencha duas matrizes 3  8 com números inteiros, calcule e mostre:
■■ a soma das duas matrizes, resultando em uma terceira matriz também de ordem 3  8;
■■ a diferença das duas matrizes, resultando em uma quarta matriz também de ordem 3  8. */

#include <stdio.h>

#define LINHA 3
#define COLUNA 8

int main() {
    int matriz1[LINHA][COLUNA], matriz2[LINHA][COLUNA];
    int soma[LINHA][COLUNA], diferenca[LINHA][COLUNA];

    printf("Digite os elementos da primeira matriz (%dx%d):\n", LINHA, COLUNA);
    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COLUNA; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Digite os elementos da segunda matriz (%dx%d):\n", LINHA, COLUNA);
    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COLUNA; j++) {
            scanf("%d", &matriz2[i][j]);
            soma[i][j] = matriz1[i][j] + matriz2[i][j];
            diferenca[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }

    printf("\nMatriz Soma:\n");
    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COLUNA; j++) {
            printf("Soma [%d][%d]: %d\n", i, j, soma[i][j]);
        }
    }

    // Exibir a matriz diferença
    printf("\nMatriz Diferença:\n");
    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COLUNA; j++) {
            printf("Diferença [%d][%d]: %d\n", i, j, diferenca[i][j]);
        }
    }

    return 0;
}
