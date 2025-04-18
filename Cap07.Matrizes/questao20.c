/*Elabore um programa que preencha uma matriz 5 x 5 com números reais e encontre o maior valor da
matriz. A seguir, o programa deverá multiplicar cada elemento da diagonal principal pelo maior valor
encontrado e mostrar a matriz resultante após as multiplicações.*/

#include <stdio.h>

#define dimensao 5

int main()
{

    double matriz[dimensao][dimensao], maior;

    for (int i = 0; i < dimensao; i++)
    {
        for (int j = 0; j < dimensao; j++)
        {
            scanf("%lf", &matriz[i][j]);
            if (i == 0 && j == 0)
            {
                maior = matriz[i][j];
            }
            else if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
            }
        }
    }

    printf("\nMatriz resultante\n");
    for (int i = 0; i < dimensao; i++)
    {
        for (int j = 0; j < dimensao; j++)
        {
            matriz[i][j] *= maior;
            printf("%.2lf ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}