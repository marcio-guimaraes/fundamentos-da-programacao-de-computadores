/*Faça um programa que receba duas notas, calcule e mostre a média aritmética e a mensagem que se encontra
na tabela a seguir:
MÉDIA aritmética || mensagem
[0,0 - 3,0).........Reprovado
[3,0 - 7,0).........Exame
[7,0 - 10,0]........Aprovado*/

#include <stdio.h>

int main()
{

    float nota1, nota2, media;

    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if (media < 0 && media < 3)
    {
        printf("Reprovado com nota = %.2f\n", media);
    }
    else if (media >= 3 && media < 7)
    {
        printf("Exame com nota = %.2f\n", media);
    }
    else if (media >= 7 && media <= 10)
    {
        printf("Aprovado com nota = %.2f\n", media);
    }
    else
    {
        printf("Invalido\n");
    }
    return 0;
}