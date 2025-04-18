/*Faça um programa que receba o número de horas trabalhadas, o valor do salário mínimo e o número
de horas extras trabalhadas, calcule e mostre o salário a receber, de acordo com as regras a seguir:
a) a hora trabalhada vale 1/8 do salário mínimo;
b) a hora extra vale 1/4 do salário mínimo;*/

#include <stdio.h>

int main()
{

    int h_trabalhadas, h_extras;
    float salario_minimo, salario;

    printf("Numero de horas trabalhadas: ");
    scanf("%d", &h_trabalhadas);
    printf("Salario minimo: ");
    scanf("%f", &salario_minimo);
    printf("Numero de horas extras: ");
    scanf("%d", &h_extras);

    h_trabalhadas = h_trabalhadas - h_extras;
    salario = (1.0 / 8 * h_trabalhadas * salario_minimo) + (1.0 / 4 * h_extras * salario_minimo);
    printf("Salario = %f\n", salario);

    return 0;
}