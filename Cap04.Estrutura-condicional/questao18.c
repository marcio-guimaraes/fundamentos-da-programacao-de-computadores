/*Faça um programa que receba a idade de uma pessoa e mostre a mensagem de maioridade ou não.*/

#include <stdio.h>

int main()
{
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade >= 18)
    {
        printf("Maioridade alcançada.\n");
    }
    else
    {
        printf("Voce nao eh maior de idade.\n");
    }

    return 0;
}
