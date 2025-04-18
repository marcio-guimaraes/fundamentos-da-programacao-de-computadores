/*Faça um programa que receba dez números inteiros e armazene-os em um vetor. Calcule e mostre dois
vetores resultantes: o primeiro com os números pares e o segundo, com os números ímpares. */

#include <stdio.h>

int main()
{

    int count = 10, numeros[count], pares[10] = {0}, impares[10] = {0};

    int indice1 = 0, indice2 = 0;
    for (int i = 0; i < count; i++)
    {
        printf("Numero: ");
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 == 0)
        {
            pares[indice1] = numeros[i];
            indice1++;
        }
        else if (numeros[i] % 2 != 0)
        {
            impares[indice2] = numeros[i];
            indice2++;
        }
    }

    printf("Pares = ");
    for (int i = 0; i < indice1; i++)
    {
        printf("%d ", pares[i]);
    }
    printf("\nImpares = ");
    for (int i = 0; i < indice2; i++)
    {
        printf("%d ", impares[i]);
    }
    printf("\n");

    return 0;
}