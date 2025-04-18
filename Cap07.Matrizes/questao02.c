/*Crie um programa que preencha uma matriz 2  4 com números inteiros, calcule e mostre:

■■ a quantidade de elementos entre 12 e 20 em cada linha;
■■ a média dos elementos pares da matriz. */

#include <stdio.h>

#define LINHA 2
#define COLUNA 4

int main()
{
    int matriz[LINHA][COLUNA];
    int soma = 0, pares = 0;

    // Preenchimento da matriz e cálculo da soma dos pares
    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            printf("Digite o valor para matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            
            // Verifica se o número é par
            if (matriz[i][j] % 2 == 0)
            {
                soma += matriz[i][j];
                pares++;
            }
        }
    }

    // Contagem de elementos entre 12 e 20 em cada linha
    for (int i = 0; i < LINHA; i++)
    {
        int entre12e20 = 0;
        for (int j = 0; j < COLUNA; j++)
        {
            if (matriz[i][j] >= 12 && matriz[i][j] <= 20)
            {
                entre12e20++;
            }
        }
        printf("Linha %d - %d elementos entre 12 e 20\n", i, entre12e20);
    }

    // Cálculo e exibição da média dos pares
    if (pares > 0) {
        printf("Média dos pares: %.2lf\n", (double)soma / pares);
    } else {
        printf("Não há elementos pares para calcular a média.\n");
    }

    return 0;
}
