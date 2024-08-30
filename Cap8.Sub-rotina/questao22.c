/*Criar um programa que:

■■ utilize uma sub-rotina para receber os elementos de uma matriz 10X5 de números reais;
■■ utilize uma sub-rotina para calcular a soma de todos os elementos localizados abaixo da sexta linha
dessa matriz; */

#include <stdio.h>

#define LINHA 10
#define COLUNA 2

void receber_numeros(float matriz[][COLUNA]);
float calcular_soma(float matriz[][COLUNA]);

int main()
{

    float matriz[LINHA][COLUNA];

    receber_numeros(matriz);

    float soma = calcular_soma(matriz);

    printf("Soma = %.2f\n", soma);

    return 0;
}

void receber_numeros(float matriz[][COLUNA])
{

    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            printf("Numero: ");
            scanf("%f", &matriz[i][j]);
        }
    }
}

float calcular_soma(float matriz[][COLUNA])
{

    float soma = 0;

    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            if (i > 5)
            {
                soma += matriz[i][j];
            }
        }
    }

    return soma;
}