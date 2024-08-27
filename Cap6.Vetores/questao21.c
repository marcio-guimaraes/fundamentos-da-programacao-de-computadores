/*. Faça um programa que leia um vetor com dez posições para números inteiros. Crie um segundo vetor,
substituindo os valores nulos por 1. Mostre os dois vetores.*/

#include <stdio.h>

int main()
{

    int vetor1[10], vetor2[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Numero: ");
        scanf("%d", &vetor1[i]);

        if (vetor1[i] == 0)
            vetor2[i] = 1;
        else
            vetor2[i] = vetor1[i];
    }

    printf("\nVetor 1\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Vetor 1 posicao %d = %d\n", i, vetor1[i]);
    }
    printf("\nVetor 2\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Vetor 2 posicao %d = %d\n", i, vetor2[i]);
    }

    return 0;
}