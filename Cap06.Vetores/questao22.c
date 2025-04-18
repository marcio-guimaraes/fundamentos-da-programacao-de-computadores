/*. Faça um programa que leia um vetor A de dez posições. Em seguida, compacte o vetor, retirando os
valores nulos e negativos. Armazene esse resultado no vetor B. Mostre o vetor B. (Lembre-se: o vetor B
pode não ser completamente preenchido.)*/

#include <stdio.h>

int main()
{
    int vetorA[10], vetorB[10];
    int i, n = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &vetorA[i]);

        if (vetorA[i] > 0)
        {
            vetorB[n] = vetorA[i];
            n++;
        }
    }

    printf("\nVetor B (compactado):\n");
    for (i = 0; i < n; i++)
    {
        printf("Vetor B[%d] = %d\n", i, vetorB[i]);
    }

    return 0;
}
