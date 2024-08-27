/*Faça um programa que receba o número de lados de um polígono convexo, calcule e mostre o número
de diagonais desse polígono. Sabe-se que ND = N * (N − 3)/2, em que N é o número de lados do
polígono.*/

#include <stdio.h>

int main()
{
    int n;
    float nd;

    printf("Numero de lados: ");
    scanf("%d", &n);
    nd = n * (n - 3) / 2.0;

    printf("Numero de diagonais = %.2f", nd);
    return 0;
}