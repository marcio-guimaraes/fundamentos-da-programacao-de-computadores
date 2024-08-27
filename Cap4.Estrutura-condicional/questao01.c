/*Faça um programa que receba quatro notas de um aluno, calcule e mostre a média aritmética das notas e a
mensagem de aprovado ou reprovado, considerando para aprovação média 7.*/

#include <stdio.h>

int main()
{

    float nota1, nota2, nota3, nota4, media;

    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);
    printf("Nota 3: ");
    scanf("%f", &nota3);
    printf("Nota 4: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;
    if (media >= 7)
    {
        printf("Aluno aprovado com nota %.2f\n", media);
    }
    else
    {
        printf("Aluno reprovado com nota %.2f\n", media);
    }

    return 0;
}