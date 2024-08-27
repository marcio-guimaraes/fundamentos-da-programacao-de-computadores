/*Elabore um programa que: receba a idade de oito alunos e armazene-as em um vetor; armazene o código
de cinco disciplinas em outro vetor; armazene em uma matriz a quantidade de provas que cada aluno fez
em cada disciplina*/

#include <stdio.h>

#define alunos 8
#define disciplinas 5

int armazenar(int idade[alunos], int codigo[disciplinas], int notas[alunos][disciplinas], char c_alunos[alunos])
{
    for (int i = 0; i < disciplinas; i++)
    {
        printf("Codigo disciplina: ");
        scanf("%d", &codigo[i]);
    }
    printf("\n");

    for (int i = 0; i < alunos; i++)
    {
        printf("Codigo do aluno: ");
        scanf(" %c", &c_alunos[i]);
        printf("Idade: ");
        scanf("%d", &idade[i]);
        for (int j = 0; j < disciplinas; j++)
        {
            printf("Quantidades de notas na disciplina %d: ", codigo[j]);
            scanf("%d", &notas[i][j]);
        }
        printf("\n");
    }

    return 0;
}