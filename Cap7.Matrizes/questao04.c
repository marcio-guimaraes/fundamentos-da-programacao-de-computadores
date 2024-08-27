/*Faça um programa que receba:

■■ as notas de 15 alunos em cinco provas diferentes e armazene-as em uma matriz 15 x 5;
■■ os nomes dos 15 alunos e armazene-os em um vetor de 15 posições.

O programa deverá calcular e mostrar:
■■ para cada aluno, o nome, a média aritmética das cinco provas e a situação (aprovado, reprovado ou exame);
■■ a média da classe. */

#include <stdio.h>
#include <string.h>

#define LINHA 15
#define COLUNA 5

int main()
{
    double notas[LINHA][COLUNA], soma, media, total_media = 0;
    char nomes[LINHA][50];

    for (int i = 0; i < LINHA; i++)
    {
        printf("Digite o nome do aluno %d: ", i + 1);
        fgets(nomes[i], 50, stdin);
        nomes[i][strcspn(nomes[i], "\n")] = '\0';  // Remove o caractere de nova linha

        printf("Digite as notas do aluno %d:\n", i + 1);
        for (int j = 0; j < COLUNA; j++)
        {
            scanf("%lf", &notas[i][j]);
        }
        getchar();  // Limpa o buffer de entrada para a próxima leitura
    }

    // Calculando e exibindo as médias e situações
    for (int i = 0; i < LINHA; i++)
    {
        soma = 0;
        for (int j = 0; j < COLUNA; j++)
        {
            soma += notas[i][j];
        }
        media = soma / COLUNA;
        total_media += media;
        
        printf("%s - Média: %.2lf\n", nomes[i], media);
        if (media < 6)
        {
            printf("Situação: Reprovado\n");
        }
        else if (media >= 6 && media <= 7)
        {
            printf("Situação: Exame\n");
        }
        else
        {
            printf("Situação: Aprovado\n");
        }
    }

    printf("Média da classe: %.2lf\n", total_media / LINHA);

    return 0;
}
