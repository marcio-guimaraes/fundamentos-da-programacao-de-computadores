/*Faça um programa que preencha uma matriz 5 x 5 de números reais. A seguir, o programa deverá
multiplicar cada linha pelo elemento da diagonal principal daquela linha e mostrar a matriz após as
multiplicações*/

#include <stdio.h>

#define dimensao 5

int main()
{

    double matriz[dimensao][dimensao], diagonal[dimensao];

    for (int i = 0; i < dimensao; i++)
    {
        for (int j = 0; j < dimensao; j++)
        {
            scanf("%lf", &matriz[i][j]);
            if (i == j)
            {
                diagonal[i] = matriz[i][j];
            }
        }
    }

    for (int i = 0; i < dimensao; i++)
    {
        for (int j = 0; j < dimensao; j++)
        {
            matriz[i][j] *= diagonal[i];
            printf("%.2lf ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}