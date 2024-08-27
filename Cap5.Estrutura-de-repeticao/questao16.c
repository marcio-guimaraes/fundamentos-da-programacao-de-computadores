/* Faça um programa que receba várias idades, calcule e mostre a média das idades digitadas.
Finalize digitando idade igual a zero. */

#include <stdio.h>

int main()
{

    int idade, quantidade = 0, total = 0;

    while (1)
    {

        printf("Idade: ");
        scanf("%d", &idade);

        if (idade == 0)
            break;

        total = total + idade;
        quantidade++;
    }

    printf("Media = %.2f\n", (float)total / quantidade);

    return 0;
}