/*Elabore um programa que preencha uma matriz 6  3, calcule e mostre:

■■ o maior elemento da matriz e sua respectiva posição, ou seja, linha e coluna;
■■ o menor elemento da matriz e sua respectiva posição, ou seja, linha e coluna.*/

#include <stdio.h>

#define LINHA 6
#define COLUNA 3

int main()
{
    int matriz[LINHA][COLUNA];
    int i_maior[2] = {0}, i_menor[2] = {0};
    int maior, menor;

    // Preenchendo a matriz
    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            printf("Digite o valor para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Inicializando maior e menor com o primeiro elemento da matriz
    maior = matriz[0][0];
    menor = matriz[0][0];

    // Encontrando o maior e o menor valor e suas posições
    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
                i_maior[0] = i;
                i_maior[1] = j;
            }
            if (matriz[i][j] < menor)
            {
                menor = matriz[i][j];
                i_menor[0] = i;
                i_menor[1] = j;
            }
        }
    }

    printf("Maior: %d - [%d][%d]\n", maior, i_maior[0], i_maior[1]);
    printf("Menor: %d - [%d][%d]\n", menor, i_menor[0], i_menor[1]);

    return 0;
}
