/*Faça um programa que preencha uma matriz 3 x 4, calcule e mostre:
■■ a quantidade de elementos pares;
■■ a soma dos elementos ímpares;
■■ a média de todos os elementos*/

#include <stdio.h>

#define linha 3
#define coluna 4

int main()
{

    int matriz[linha][coluna] = {0}, pares = 0, somaImpares = 0, total = 0;

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            scanf("%d", &matriz[i][j]);
            total += matriz[i][j];
            if (matriz[i][j] % 2 == 0)
            {
                pares++;
            }
            else
            {
                somaImpares += matriz[i][j];
            }
        }
    }

    printf("Quantidade de numero pares: %d\n", pares);
    printf("Soma dos numeros impares: %d\n", somaImpares);
    printf("Media dos numeros da matriz: %.2f\n", (float)total / (linha * coluna));

    return 0;
}