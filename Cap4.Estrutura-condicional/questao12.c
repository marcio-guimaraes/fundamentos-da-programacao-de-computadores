/* Faça um programa que receba o salário bruto de um funcionário e, usando a tabela a seguir, calcule e mostre o valor a receber.
Sabe-se que este é composto pelo salário bruto acrescido de gratificação e descontado o imposto de 7% sobre o salário.

TABELA DAS GRATIFICAÇÕES
SALÁRIO                ||    GRATIFICAÇÃO
Salario <= 350R$.............100R$.........
(350R$ - 600R$]..............75R$..........
(600R$ - 900R$]..............50R$..........
Salario > 900R$..............35R$..........
*/

#include <stdio.h>

int main()
{

    float salario;
    printf("Valor do salario: ");
    scanf("%f", &salario);

    if (salario <= 350)
    {
        float gratificacao = 100;
        printf("Salario = %.2f\n", (salario + gratificacao) * 0.93);
    }
    else if (salario > 350 && salario < 600)
    {
        float gratificacao = 75;
        printf("Salario = %.2f\n", (salario + gratificacao) * 0.93);
    }
    else if (salario >= 600 && salario <= 900)
    {
        float gratificacao = 50;
        printf("Salario = %.2f\n", (salario + gratificacao) * 0.93);
    }
    else if (salario > 900)
    {
        float gratificacao = 35;
        printf("Salario = %.2f\n", (salario + gratificacao) * 0.93);
    }

    return 0;
}