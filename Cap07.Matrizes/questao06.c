/*. Faça um programa que preencha uma matriz 20  10 com números inteiros, e some cada uma das colunas,
armazenando o resultado da soma em um vetor. A seguir, o programa deverá multiplicar cada elemento da
matriz pela soma da coluna e mostrar a matriz resultante. */

#include <stdio.h>

#define linha 20
#define coluna 10

int main()
{

    int matriz[linha][coluna], soma_colunas[coluna] = {0};

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            scanf("%d", &matriz[i][j]);
            soma_colunas[j] += matriz[i][j];
        }
    }

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            matriz[i][j] *= soma_colunas[j];
            printf("%d\n", matriz[i][j]);
        }
    }

    return 0;
}