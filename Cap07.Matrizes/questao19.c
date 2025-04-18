/*Faça um programa que preencha uma matriz 8 x 6 de inteiros, calcule e mostre a média dos elementos
das linhas pares da matriz. */

#include <stdio.h>

#define linha 8
#define coluna 6

int main()
{

    int matriz[linha][coluna], somaLinhas = 0;
    double media = linha / 2 * coluna;

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            scanf("%d", &matriz[i][j]);
            if (i % 2 == 0)
            {
                somaLinhas += matriz[i][j];
            }
        }
    }

    media = (double)somaLinhas / media;
    printf("Media = %.2lf\n", media);

    return 0;
}