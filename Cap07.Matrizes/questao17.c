/*Faça um programa que preencha e mostre a média dos elementos da diagonal principal de uma matriz
10 x 10.*/

#include <stdio.h>

#define dimensao 10

int main()
{

    int matriz[dimensao][dimensao], soma = 0, quantidade = 0;

    for (int i = 0; i < dimensao; i++)
    {
        for (int j = 0; j < dimensao; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < dimensao; i++)
    {
        for (int j = 0; j < dimensao; j++)
        {
            if (i == j)
            {
                soma += matriz[i][j];
                quantidade++;
            }
        }
    }

    double media = (double)soma / quantidade;
    printf("Media = %.2lf\n", media);

    return 0;
}