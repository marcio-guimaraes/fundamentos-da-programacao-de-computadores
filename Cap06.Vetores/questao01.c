/*Faça um programa que preencha um vetor com seis elementos numéricos inteiros. Calcule e mostre:
■■ todos os números pares;
■■ a quantidade de números pares;
■■ todos os números ímpares;
■■ a quantidade de números ímpares. */

#include <stdio.h>

int main()
{

    int valores[6];
    int total_pares = 0, total_impares = 0;

    for (int i = 0; i < 6; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &valores[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        if (valores[i] % 2 == 0)
        {
            printf("%d\n", valores[i]);
            total_pares++;
        }
    }
    printf("Quantidade de numeros pares: %d\n", total_pares);

    for (int i = 0; i < 6; i++)
    {
        if (valores[i] % 2 != 0)
        {
            printf("%d\n", valores[i]);
            total_impares++;
        }
    }
    printf("Quantidade de numeros pares: %d\n", total_impares);

    return 0;
}