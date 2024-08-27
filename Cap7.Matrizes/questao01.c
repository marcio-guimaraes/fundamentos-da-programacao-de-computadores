/*. Faça um programa que preencha uma matriz 3 x 5 com números inteiros, calcule e mostre a quantidade de
elementos entre 15 e 20.*/

#include <stdio.h>

#define linha 3
#define coluna 5

int main()
{

    int matriz[linha][coluna], entre15e20 = 0;

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            printf("Elemento[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] >= 15 && matriz[i][j] <= 20)
            {
                entre15e20++;
            }
        }
    }

    printf("Quantidade entre 15 e 20 = %d\n", entre15e20);

    return 0;
}