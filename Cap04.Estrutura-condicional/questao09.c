/*Um banco concederá um crédito especial aos seus clientes, de acordo com o saldo médio no último ano. Faça
um programa que receba o saldo médio de um cliente e calcule o valor do crédito, de acordo com a tabela a
seguir. Mostre o saldo médio e o valor do crédito.

SALDO MÉDIO || PERCENTUAL
S > 400.........30%
[400-300).......25%
[300-200).......20%
S <= 200........10%*/

#include <stdio.h>

int main()
{

    float salario;
    printf("Media salarial: ");
    scanf("%f", &salario);

    if (salario > 400)
    {
        printf("Credito = %.2f\n", salario * 0.3);
    }
    else if (salario <= 400 && salario > 300)
    {
        printf("Credito = %.2f\n", salario * 0.25);
    }
    else if (salario <= 300 && salario > 200)
    {
        printf("Credito = %.2f\n", salario * 0.2);
    }
    else if (salario <= 200)
    {
        printf("Credito = %2.f\n", salario * 0.1);
    }

    return 0;
}