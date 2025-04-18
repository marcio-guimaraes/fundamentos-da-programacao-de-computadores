/*Faça um programa que preencha dois vetores de dez posições cada, determine e mostre um terceiro contendo os elementos
dos dois vetores anteriores ordenados de maneira decrescente.*/

#include <stdio.h>

int main()
{

    int count = 10, vetor1[10], vetor2[10], juncao[20];

    int n = 0;
    for (int i = 0; i < count; i++)
    {
        printf("Numero vetor 1: ");
        scanf("%d", &vetor1[i]);
        juncao[n] = vetor1[i];
        n++;
    }

    for (int i = 0; i < count; i++)
    {
        printf("Numero vetor 2: ");
        scanf("%d", &vetor2[i]);
        juncao[n] = vetor2[i];
        n++;
    }

    for (int x = 0; x < 20; x++)
    {
        for (int y = x; y < 20; y++)
        {
            if (juncao[x] < juncao[y])
            {
                int auxiliar = juncao[x];
                juncao[x] = juncao[y];
                juncao[y] = auxiliar;
            }
        }
    }

    for (int i = 0; i < 20; i++)
    {
        printf("%d\n", juncao[i]);
    }

    return 0;
}