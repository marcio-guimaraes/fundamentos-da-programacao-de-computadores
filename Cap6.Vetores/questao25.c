/*Faça um programa que leia um vetor com quinze posições para números inteiros.
Depois da leitura, divida todos os seus elementos pelo maior valor do vetor. Mostre o vetor após os cálculos. */

#include <stdio.h>

int main()
{

    int count = 15, maior = 0;
    int valores[count];

    for (int i = 0; i < count; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &valores[i]);
        if (valores[i] > maior)
        {
            maior = valores[i];
        }
    }

    for (int i = 0; i < count; i++)
    {
        printf("%.2f\n", (float)valores[i] / maior);
    }

    return 0;
}