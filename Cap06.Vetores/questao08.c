/*Faça um programa que preencha um vetor com os nomes de sete alunos e carregue outro vetor com a média
final desses alunos. Calcule e mostre:

■■ o nome do aluno com maior média (desconsiderar empates);
■■ para cada aluno não aprovado, isto é, com média menor que 7, mostrar quanto esse aluno precisa tirar na prova de exame
final para ser aprovado. Considerar que a média para aprovação no exame é 5.
*/

#include <stdio.h>

int main()
{

    int count = 7, i_maior = 0;
    float notas[count];
    char nome_aluno[count][30];

    for (int i = 0; i < count; i++)
    {
        printf("Nome do aluno %d: ", i + 1);
        scanf("%s", nome_aluno[i]);
        printf("Nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    float maior = notas[0];
    for (int i = 0; i < count; i++)
    {
        if (notas[i] > maior)
        {
            maior = notas[i];
            i_maior = i;
        }
    }

    for (int i = 0; i < count; i++)
    {
        if (notas[i] < 7)
        {
            printf("%s precisa tirar %.1f no exame final para ser aprovado\n", nome_aluno[i], 10 - notas[i]);
        }
    }

    printf("%s teve a maior nota = %.1f\n", nome_aluno[i_maior], maior);

    return 0;
}
