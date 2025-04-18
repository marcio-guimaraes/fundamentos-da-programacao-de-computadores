/* Crie um programa que receba o número dos 10 alunos de uma sala, armazenando-os em um vetor, junto
com as notas obtidas ao longo do semestre (foram realizadas quatro avaliações). Elabore sub-rotinas para:

■ determinar e mostrar a média aritmética de todos os alunos;
■ indicar os números dos alunos que deverão fazer recuperação, ou seja, aqueles com média inferior a 6. */

#include <stdio.h>

#define LINHA 3
#define COLUNA 4

void receber_notas(float alunos[][COLUNA]);
void calcular_media(float alunos[][COLUNA], float media[]);
void recuperaco(int numero[], float media[]);

int main()
{

    float alunos[LINHA][COLUNA], media[LINHA];
    int numero[10];

    for (int i = 0; i < LINHA; i++)
    {
        printf("Numero do aluno %d: ", i + 1);
        scanf("%d", &numero[i]);
    }
    

    receber_notas(alunos);
    calcular_media(alunos, media);
    recuperaco(numero, media);

    return 0;
}

void receber_notas(float alunos[][COLUNA])
{

    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            printf("Nota %d do aluno %d: ", j + 1, i + 1);
            scanf("%f", &alunos[i][j]);
        }
    }
}

void calcular_media(float alunos[][COLUNA], float media[])
{

    printf("\n");
    for (int i = 0; i < LINHA; i++)
    {
        media[i] = (alunos[i][0] + alunos[i][1] + alunos[i][2] + alunos[i][3]) / 4;

        printf("Media do aluno %d: %.2f\n", i + 1, media[i]);
    }
}

void recuperaco(int numero[], float media[]){

    printf("\n");
    for (int i = 0; i < LINHA; i++)
    {
        if (media[i] < 6)
        {
            printf("Aluno de numero %d ficou de recuperacao\n", numero[i]);
        }
        
    }
    
}