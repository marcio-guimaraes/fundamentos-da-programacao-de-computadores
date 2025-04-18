/*Faça um programa que receba dez idades, pesos e alturas, calcule e mostre:
■■ a média das idades das dez pessoas;
■■ a quantidade de pessoas com peso superior a 90 kg e altura inferior a 1,50 metro; e
■■ a porcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de
1,90 m. */

#include <stdio.h>

int main()
{
    int idade, contador = 0, a = 0, b = 0, total_altos = 0;
    float altura, peso, soma_idade = 0;

    while (contador < 10)
    {
        contador++;
        printf("Idade: ");
        scanf("%d", &idade);
        printf("Peso: ");
        scanf("%f", &peso);
        printf("Altura: ");
        scanf("%f", &altura);

        soma_idade += idade;

        if (peso > 90 && altura < 1.50)
        {
            a++;
        }
        if (altura > 1.90)
        {
            total_altos++;
            if (idade >= 10 && idade <= 30)
            {
                b++;
            }
        }
        printf("\n");
    }

    printf("Idade média = %.2f\n", soma_idade / 10);
    printf("Quantidade de pessoas com peso superior a 90 kg e altura inferior a 1,50 m = %d\n", a);
    printf("Porcentagem de pessoas com idade entre 10 e 30 anos e mais de 1,90 m de altura = %.2f%%\n", total_altos > 0 ? (float)b / total_altos * 100 : 0);

    return 0;
}
