/*Faça um programa que receba dois números e execute as operações listadas a seguir, de acordo com a escolha do usuário.

ESCOLHA DO USUÁRIO - OPERAÇÃO
1 - Média entre os números digitados
2 - Diferença do maior pelo menor
3 - Produto entre os números digitados
4 - Divisão do primeiro pelo segundo

Se a opção digitada for inválida, mostre uma mensagem de erro e termine a execução do programa.
Lembre-se de que, na operação 4, o segundo número deve ser diferente de zero.*/

#include <stdio.h>

int main()
{

    float numero1, numero2, a, b, c, d;

    printf("Numero 1: ");
    scanf("%f", &numero1);
    printf("Numero 2: ");
    scanf("%f", &numero2);

    a = (numero1 + numero2) / 2;
    c = (numero1 * numero2);

    if (numero2 == 0)
    {
        printf("Erro, impossivel dividir por 0!\n");
    }
    else
    {
        d = numero1 / numero2;
    }

    if (numero1 > numero2)
    {
        b = numero1 - numero2;
    }
    else if (numero2 > numero1)
    {
        b = numero2 - numero1;
    }
    else
    {
        printf("Erro!");
    }

    printf("%.2f\n%.2f\n%.2f\n%.2f\n", a, b, c, d);
    return 0;
}