/*Crie um programa que preencha uma matriz 12 x 13 e divida todos os elementos de cada linha pelo
maior elemento em módulo daquela linha. O programa deverá escrever a matriz lida e a modificada. 
*/

#include <stdio.h>

#define linha 12
#define coluna 13

int main()
{

    int matriz[linha][coluna], maior[linha];

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            scanf("%d", &matriz[i][j]);
            if (j == 0)
            {
                maior[i] = matriz[i][j];
            }
            else if (maior[i] < matriz[i][j])
            {
                maior[i] = matriz[i][j];
            }
        }
    }

     printf("\n");
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            printf("%d - %.2lf\t", matriz[i][j], (double)matriz[i][j]/maior[i]);
        }
        printf("\n");
    }

    return 0;
}