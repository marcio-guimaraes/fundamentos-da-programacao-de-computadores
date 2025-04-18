/*Faça um programa que receba o salário atual de um funcionário e, usando a tabela a seguir, calcule e
mostre o valor do aumento e o novo salário.

SALÁRIO     ||    PERCENTUAL
Salario <= 300R$.....15%......
(300R$ - 600R$)......10%......
[600R$ - 900R$]......5%.......
Salario > 900R$......0%.......
*/

#include <stdio.h>

int main()
{

    float salario;
    printf("Valor do salario: ");
    scanf("%f", &salario);

    if (salario <= 300)
    {
        printf("Salario com gratificacao = %.2f\n", salario * 1.15);
    }
    else if (salario > 300 && salario < 600)
    {
        printf("Salario com gratificacao = %.2f\n", salario * 1.10);
    }
    else if (salario >= 600 && salario <= 900)
    {
        printf("Salario com gratificacao = %.2f\n", salario * 1.05);
    }
    else if (salario > 900)
    {
        printf("Salario com gratificacao = %.2f\n", salario);
    }
    else
    {
        printf("Invalido\n");
    }
    
    return 0;
}