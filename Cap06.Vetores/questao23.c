/*Faça um programa que leia dois vetores (A e B) com cinco posições para números inteiros. O programa
deve, então, subtrair o primeiro elemento de A do último de B, acumulando o valor, subtrair o segundo
elemento de A do penúltimo de B, acumulando o valor e assim por diante. Ao final, mostre o resultado
de todas as subtrações realizadas.*/

#include <stdio.h>

int main()
{

    int vetor1[5], vetor2[5], n = 4;

    for (int i = 0; i < 5; i++)
    {
        printf("Numero vetor 1: ");
        scanf("%d", &vetor1[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Numero vetor 2: ");
        scanf("%d", &vetor2[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        vetor1[i] = vetor1[i] - vetor2[n];
        n--;
        printf("%d\n", vetor1[i]);
    }

    return 0;
}