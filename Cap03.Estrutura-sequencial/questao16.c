/*Faça um programa que receba o valor dos catetos de um triângulo, calcule e mostre o valor da hipo-
tenusa.*/

#include <stdio.h>
#include <math.h>

int main()
{
    float cateto1, cateto2, hipotenusa;

    printf("Digite o valor do cateto 1: ");
    scanf("%f", &cateto1);
    printf("Digite o valor do cateto 2: ");
    scanf("%f", &cateto2);

    hipotenusa = pow(cateto1, 2) + pow(cateto2, 2);
    printf("Valor da hipotenusa: %.2f", sqrt(hipotenusa));

    return 0;
}