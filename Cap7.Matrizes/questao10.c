/*Crie um programa que preencha uma matriz 5  5 com números inteiros, calcule e mostre a soma:

■■ dos elementos da linha 4;
■■ dos elementos da coluna 2;
■■ dos elementos da diagonal principal;
■■ dos elementos da diagonal secundária;
■■ de todos os elementos da matriz.*/

#include <stdio.h>

#define dimensao 5

int main()
{

    int matriz[dimensao][dimensao], linha4 = 0, coluna2 = 0, d_principal = 0, d_secundaria = 0, total = 0;

    for (int i = 0; i < dimensao; i++)
    {
        for (int j = 0; j < dimensao; j++)
        {
            scanf("%d", &matriz[i][j]);
            total += matriz[i][j];
            if (i == 3)
            {
                linha4 += matriz[i][j];
            }
            if (j == 1)
            {
                coluna2 += matriz[i][j];
            }
            if (i == j)
            {
                d_principal += matriz[i][j];
            }
            if (i + j == 4)
            {
                d_secundaria += matriz[i][j];
            }
        }
    }

    printf("Soma dos elementos da linha 4: %d\n", linha4);
    printf("Soma dos elementos da coluna 2: %d\n", coluna2);
    printf("Soma da diagonal principal: %d\n", d_principal);
    printf("Soma da diagonal secundaria: %d\n", d_secundaria);
    printf("Total: %d\n", total);
    return 0;
}