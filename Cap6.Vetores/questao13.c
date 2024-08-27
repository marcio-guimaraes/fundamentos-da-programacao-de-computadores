/*. Faça um programa que receba o nome e a nota de oito alunos e mostre o relatório a seguir:
Digite o nome do 1° aluno: Carlos
Digite a nota do Carlos: 8
Digite o nome do 2° aluno: Pedro
Digite a nota do Pedro: 5
Relatórios de notas
Carlos 8.0
Pedro 5.0
..
..
..
Média da classe = ??*/

#include <stdio.h>

int main()
{

    char nome[8][30];
    float nota[8], media=0;

    for (int i = 0; i < 8; i++)
    {
        printf("Digite o nome do %d aluno: ", i + 1);
        scanf("%s", nome[i]);
        printf("Digite a nota de %s: ", nome[i]);
        scanf("%f", &nota[i]);
        media += nota[i];
    }

    for (int i = 0; i < 8; i++)
    {
        printf("%s %.1f\n", nome[i], nota[i]);
    }
    printf("Media da classe = %.1f", media/8);

    return 0;
}