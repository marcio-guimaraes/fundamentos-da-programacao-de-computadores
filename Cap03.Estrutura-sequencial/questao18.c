/*Faça um programa que receba uma temperatura em Celsius, calcule e mostre essa temperatura em
Fahrenheit. Sabe-se que F = 180*(C + 32)/100.
OBS: A fórmula do enunciado está errada. A correta seria: (180/100 * C) + 32 */

#include <stdio.h>

int main()
{

    float celsius, farenheit;

    printf("Digite a temperatura em graus celsius: ");
    scanf("%f", &celsius);

    farenheit = (9 / 5.0 * celsius) + 32;
    printf("%.3ff", farenheit);

    return 0;
}