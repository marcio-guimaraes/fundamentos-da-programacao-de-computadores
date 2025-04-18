/*Crie um programa que preencha uma matriz 6 x 10, some as colunas individualmente e acumule as somas na 7a
 linha da matriz. O programa deverá mostrar o resultado de cada coluna. */

#include <stdio.h>

#define linha 7
#define coluna 10

int main()
{

    int matriz[linha][coluna] = {0};

    for (int i = 0; i < linha - 1; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            scanf("%d", &matriz[i][j]);
            matriz[linha - 1][j] += matriz[i][j];
        }
    }

    for (int i = 0; i < coluna; i++)
    {
        printf("Soma da coluna do indice(%d): %d\n", i, matriz[linha - 1][i]);
    }

    return 0;
}
