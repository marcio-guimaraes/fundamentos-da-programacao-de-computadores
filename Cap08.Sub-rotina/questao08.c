/*Faça uma sub-rotina que receba um valor inteiro e positivo, calcule e mostre seu fatorial. */

#include <stdio.h>

int fatorial(int numero);

int main()
{

    int numero;
    printf("Numero: ");
    scanf("%d", &numero);

    int resultado = fatorial(numero);
    printf("Resultado = %d\n", resultado);

    return 0;
}

int fatorial(int numero)
{
    int mult = 1;
    for (int i = 1; i <= numero; i++)
    {
        mult *= i;
    }

    return mult;
}