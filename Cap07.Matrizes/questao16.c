/*Elabore um programa que preencha uma matriz 5  5 e crie dois vetores de cinco posições cada um, que
contenham, respectivamente, as somas das linhas e das colunas da matriz. O programa deverá escrever
a matriz e os vetores criados. */

#include <stdio.h>

#define dimensao 5

int main()
{

    int matriz[dimensao][dimensao], linha[dimensao] = {0}, coluna[dimensao] = {0};

    for (int i = 0; i < dimensao; i++)
    {
        for (int j = 0; j < dimensao; j++)
        {
            scanf("%d", &matriz[i][j]);
            linha[i] += matriz[i][j];
            coluna[j] += matriz[i][j];
        }
    }

    printf("\nMatriz original\n");
    for (int i = 0; i < dimensao; i++)
    {
        for (int j = 0; j < dimensao; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nSoma das linhas\n");
    for (int i = 0; i < dimensao; i++)
    {
        printf("Linha %d = %d\n", i, linha[i]);
    }

    printf("\nSoma das colunas\n");
    for (int i = 0; i < dimensao; i++)
    {
        printf("Coluna %d = %d\n", i, coluna[i]);
    }

    return 0;
}