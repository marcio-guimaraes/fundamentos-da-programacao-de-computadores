/*Faça um programa que receba a medida de dois ângulos de um triângulo, calcule e mostre a medida do
terceiro ângulo. Sabe-se que a soma dos ângulos de um triângulo é 180 graus.*/

#include <stdio.h>

int main()
{

    float angulo1, angulo2, angulo3;

    printf("Valor do angulo 1: ");
    scanf("%f", &angulo1);
    printf("Valor do angulo 2: ");
    scanf("%f", &angulo2);

    angulo3 = 180 - (angulo1 + angulo2);
    printf("Angulo 3 = %.2f", angulo3);

    return 0;
}