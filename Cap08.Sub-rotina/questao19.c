/*Faça uma sub-rotina que receba como parâmetro dois vetores de dez números inteiros, determine
e mostre o vetor intersecção entre eles.*/

#include <stdio.h>

#define TAM 10

int intersccao(int vetor1[], int vetor2[], int *x);

int main()
{

    int vetor1[TAM], vetor2[TAM], resultado[TAM]={0};

    for (int i = 0; i < TAM; i++)
    {
        printf("%d numero do vetor 1: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    for (int i = 0; i < TAM; i++)
    {
        printf("%d numero do vetor 2: ", i + 1);
        scanf("%d", &vetor2[i]);
    }

    printf("\nInterseccao\n");
    int count = intersccao(vetor1, vetor2, resultado);
    for (int i = 0; i < count; i++)
    {
        printf("%d\n", resultado[i]);
    }
    
}

int intersccao(int vetor1[], int vetor2[], int *x)
{
    int contador = 0;
    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            if (vetor1[i] == vetor2[j])
            {
                *x = vetor1[i];
                x++;
                contador++;
            }
        }
    }


    return contador;
}