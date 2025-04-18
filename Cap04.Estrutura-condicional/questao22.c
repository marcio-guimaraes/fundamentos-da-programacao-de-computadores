/* Faça um programa que receba a idade e o peso de uma pessoa. De acordo com a tabela a seguir, verifique
e mostre em qual grupo de risco essa pessoa se encaixa.

IDADE                                 ||    PESO                                ||    GRUPO DE RISCO
Menores que 20..............................Até 60....................................9..........
............................................Entre 60 e 90 (inclusive).................8..........
............................................Acima de 90...............................7..........
De 20 a 50..................................Até 60....................................6..........
............................................Entre 60 e 90 (inclusive).................5..........
............................................Acima de 90...............................4..........
Maiores que 50..............................Até 60....................................3..........
............................................Entre 60 e 90 (inclusive).................2..........
............................................Acima de 90...............................1..........
*/

#include <stdio.h>

int main()
{
    int idade;
    float peso;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite o peso: ");
    scanf("%f", &peso);

    int g_risco;

    if (idade < 20)
    {
        if (peso <= 60)
            g_risco = 9;
        else if (peso <= 90)
            g_risco = 8;
        else
            g_risco = 7;
    }
    else if (idade <= 50)
    {
        if (peso <= 60)
            g_risco = 6;
        else if (peso <= 90)
            g_risco = 5;
        else
            g_risco = 4;
    }
    else
    {
        if (peso <= 60)
            g_risco = 3;
        else if (peso <= 90)
            g_risco = 2;
        else
            g_risco = 1;
    }

    printf("Grupo de risco: %d\n", g_risco);

    return 0;
}
