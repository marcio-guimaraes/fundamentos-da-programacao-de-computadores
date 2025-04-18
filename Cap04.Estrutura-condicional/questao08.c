/*Faça um programa para calcular e mostrar o salário reajustado de um funcionário. O percentual de aumento
encontra-se na tabela a seguir.

SALÁRIO - PERCENTUAL DE AUMENTO
S <= 300,00 - 35%
S > 300,00 - 15%*/

#include <stdio.h>

int main()
{

    float salario;

    printf("Valor do salario: ");
    scanf("%f", &salario);

    if (salario <= 300)
    {
        printf("%.2f", salario * 1.35);
    }
    else if (salario > 300)
    {
        printf("%.2f", salario * 1.15);
    }
    
    return 0;
}