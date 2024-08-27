/*Faça um programa que receba dois números e mostre o menor.*/

#include <stdio.h>

int main()
{

    int numero1, numero2;

    printf("Numero 1: ");
    scanf("%d", &numero1);
    printf("Numero 2: ");
    scanf("%d", &numero2);

    if (numero1 < numero2)
    {
        printf("%d\n", numero1);
    }
    else if (numero2 < numero1)
    {
        printf("%d\n", numero2);
    }
    else
    {
        printf("Invalido\n");
    }

    return 0;
}