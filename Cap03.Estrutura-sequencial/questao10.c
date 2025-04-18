/*Faça um programa que calcule e mostre a área de um quadrado. Sabe-se que: A = lado * lado.*/

#include <stdio.h>

int main()
{
    float lado;
    scanf("%f", &lado);
    printf("Area do quadrado = %.2f\n", lado * lado);
    return 0;
}