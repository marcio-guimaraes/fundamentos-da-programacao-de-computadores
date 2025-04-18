/*Faça uma sub-rotina que receba um vetor X de 30 elementos inteiros como parâmetro e retorne dois vetores A e B.
O vetor A deve conter os elementos de X que sejam maiores que zero e o vetor B, os elementos menores ou iguais a zero.
*/

#include <stdio.h>

#define QUANTIDADE_ELEMENTOS 30

void vetores(int x[], int a[], int b[], int *contadorA, int *contadorB);

int main()
{
    int x[QUANTIDADE_ELEMENTOS], a[QUANTIDADE_ELEMENTOS], b[QUANTIDADE_ELEMENTOS];

    for (int i = 0; i < QUANTIDADE_ELEMENTOS; i++)
    {
       scanf("%d", &x[i]);
    }

    int contadorA = 0, contadorB = 0;
    vetores(x, a, b, &contadorA, &contadorB);

    printf("\nVetor A\n");
    for (int i = 0; i < contadorA; i++)
    {
        printf("%d\n", a[i]);
    }
    printf("\nVetor B\n");
    for (int i = 0; i < contadorB; i++)
    {
        printf("%d\n", b[i]);
    }
}

void vetores(int x[], int a[], int b[], int *contadorA, int *contadorB)
{

    for (int i = 0; i < QUANTIDADE_ELEMENTOS; i++)
    {
        if (x[i] < 0)
        {
            a[*contadorA] = x[i];
            (*contadorA)++;
        }
        else
        {
            b[*contadorB] = x[i];
            (*contadorB)++;
        }
    }
}