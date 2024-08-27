/*Elabore um programa que preencha uma matriz 4 x 5, calcule e mostre um vetor com cinco posições,
onde cada posição contém a soma dos elementos de cada coluna da matriz. O programa deverá mostrar
apenas os elementos do vetor maiores que dez. Se não existir nenhum elemento maior que dez, deverá
mostrar uma mensagem. 
*/

#include <stdio.h>

#define linha 4
#define coluna 5

int main()
{

    int matriz[linha][coluna] = {0}, soma[coluna] = {0};

    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            scanf("%d", &matriz[i][j]);
            soma[j] += matriz[i][j];
        }
    }

    for (int i = 0; i < coluna; i++)
    {
        if (soma[i] > 10)
        {
            printf("Soma da coluna do indice(%d): %d\n", i, soma[i]);
        }
        else
        {
            printf("A soma da coluna do indice %d eh menor ou igual a 10\n", i);
        }
    }

    return 0;
}