/*. Uma escola deseja saber se existem alunos cursando, simultaneamente, as disciplinas Lógica e Linguagem de
Programação. Coloque os números das matrículas dos alunos que cursam Lógica em um vetor, quinze alunos.

Coloque os números das matrículas dos alunos que cursam Linguagem de Programação em outro vetor, dez
alunos. Mostre o número das matrículas que aparecem nos dois vetores.*/

#include <stdio.h>

int main()
{

    int logica[15], linguagem_de_programacao[10];
    int count1 = 15, count2 = 10, i, n, encotrar = 0;

    for (i = 0; i < count1; i++)
    {
        printf("Matricula %d de Logica: ", i + 1);
        scanf("%d", &logica[i]);
    }

    for (i = 0; i < count2; i++)
    {
        printf("Matricula %d de Linguagem de Programacao: ", i + 1);
        scanf("%d", &linguagem_de_programacao[i]);
    }

    for (i = 0; i < count1; i++)
    {
        for (n = 0; n < count2; n++)
        {
            if (logica[i] == linguagem_de_programacao[n])
            {
                printf("Matricula em dois cursos = %d\n", logica[i]);
                encotrar = 1;
            }
        }
    }

    if (encotrar != 1)
    {
        printf("Nenhuma matricula foi encontrada nos dois cursos\n");
    }

    return 0;
}