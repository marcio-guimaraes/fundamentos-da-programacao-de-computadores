/*Faça um programa que receba a idade, a altura e o peso de cinco pessoas, calcule e mostre:
■■ a quantidade de pessoas com idade superior a 50 anos;
■■ a média das alturas das pessoas com idade entre 10 e 20 anos;
■■ a porcentagem de pessoas com peso inferior a 40 kg entre todas as pessoas analisadas. */

#include <stdio.h>

int main()
{

    int idade, idadeSuperior50 = 0, contador = 0;
    float altura, peso, soma_altura = 0, media_altura = 0, inferior40kg = 0;

    while (contador < 5)
    {
        printf("Digite a idade: ");
        scanf("%d", &idade);
        printf("Digite a altura: ");
        scanf("%f", &altura);
        printf("Digite o peso: ");
        scanf("%f", &peso);

        if (idade > 50)
        {
            idadeSuperior50++;
        }
        else if (idade > 10 && idade < 20)
        {
            soma_altura += altura;
            media_altura++;
        }
        else if (peso < 40)
        {
            inferior40kg++;
        }

        altura = 0;
        contador++;
        printf("\n");
    }

    printf("Quantidade de pessoas com idade superior a 50 anos = %d\n", idadeSuperior50);
    printf("Media de altura das pessoas com idade entre 10 e 20 = %.2f\n", soma_altura / media_altura);
    printf("Porcentagem das pessoas com peso inferior a 40kg = %.2f%%\n", inferior40kg / contador * 100);
    return 0;
}