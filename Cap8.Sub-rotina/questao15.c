/*Elabore uma sub-rotina que receba um vetor X de 15 números inteiros como parâmetro e retorne a
quantidade de valores pares em X.*/

#include <stdio.h>

#define QUANTIDADE 15

int pares(int numeros[]);

int main()
{

    int numeros[QUANTIDADE];

    for (int i = 0; i < QUANTIDADE; i++)
    {
        printf("Numero: ");
        scanf("%d", &numeros[i]);
    }

    int resultado = pares(numeros);
    printf("Quantidade de valores pares = %d\n", resultado);

        return 0;
}

int pares(int numeros[])
{

    int resultado = 0;

    for (int i = 0; i < QUANTIDADE; i++)
    {
        if (numeros[i] % 2 == 0)
        {
            resultado++;
        }
    }

    return resultado;
}