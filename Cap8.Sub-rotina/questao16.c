/*Faça uma sub-rotina que receba um vetor X de 20 de números reais como parâmetro e retorne a soma
dos elementos de X.*/

#include <stdio.h>

#define QUANTIDADE 20

float calcular_soma(float numeros[]);

int main()
{

    float numeros[QUANTIDADE];

    for (int i = 0; i < QUANTIDADE; i++)
    {
        printf("Numero: ");
        scanf("%f", &numeros[i]);
    }

    float soma = calcular_soma(numeros);

    printf("Resultado da soma = %.2f\n", soma);

    return 0;
}

float calcular_soma(float numeros[])
{

    float soma = 0;

    for (int i = 0; i < QUANTIDADE; i++)
    {
        soma += numeros[i];
    }

    return soma;
}