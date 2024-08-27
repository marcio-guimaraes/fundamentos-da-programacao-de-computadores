/*João recebeu seu salário e precisa pagar duas contas atrasadas. Em razão do atraso, ele deverá pagar
multa de 2% sobre cada conta. Faça um programa que calcule e mostre quanto restará do salário de
João.*/

#include <stdio.h>
int main()
{
    float salario, conta1, conta2, restante;

    printf("Digite o valor do seu salario: ");
    scanf("%f", &salario);
    printf("Digite o valor da conta 1: ");
    scanf("%f", &conta1);
    printf("Digite o valor da conta 2: ");
    scanf("%f", &conta2);

    conta1 = conta1 * 1.02;
    conta2 = conta2 * 1.02;
    restante = salario - (conta1 + conta2);

    printf("Restante = %.2f", restante);

    return 0;
}