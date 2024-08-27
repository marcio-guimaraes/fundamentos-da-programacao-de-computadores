/*Faça um programa que receba três números e mostre o maior.*/

#include <stdio.h>

int main()
{

    int numero1, numero2, numero3;

    printf("Numero 1: ");
    scanf("%d", &numero1);
    printf("Numero 2: ");
    scanf("%d", &numero2);
    printf("Numero 3: ");
    scanf("%d", &numero3);

    if (numero1 > numero2 && numero1 > numero3)
    {
        printf("%d\n", numero1);
    }
    else if (numero2 > numero1 && numero2 > numero3)
    {
        printf("%d\n", numero2);
    }
    else if (numero3 > numero1 && numero3 > numero2)
    {
        printf("%d\n", numero3);
    }
    else
    {
        printf("Invalido\n");
    }

    return 0;
}