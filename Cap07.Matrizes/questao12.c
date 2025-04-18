/*. O programa deverá calcular e mostrar:
■■ a quantidade de alunos com idade entre 18 e 25 anos que fizeram mais de duas provas em determinada disciplina cujo código é digitado 
pelo usuário. O usuário poderá digitar um código não cadastrado; 
nesse caso, o programa deverá mostrar uma mensagem de erro;
■■ uma listagem contendo o código dos alunos que fizeram menos que três provas em determinada
disciplina, seguido do código da disciplina;
■■ a média de idade dos alunos que não fizeram nenhuma prova em alguma disciplina. Cuidado para não contar duas vezes o mesmo aluno.
*/

#include <stdio.h>
#include "questao11.c"

int main()
{

    int idades[alunos], codigos[disciplinas], notas[alunos][disciplinas];
    char c_alunos[alunos];
    armazenar(idades, codigos, notas, c_alunos);

    int soma18a25 = 0, codigo, indice = -1, nenhumaProva = 0, somaIdade = 0;
    printf("Codigo da disciplina desejada: ");
    scanf("%d", &codigo);

    // VERIFICANDO SE O CÓDIGO É VÁLIDO
    for (int i = 0; i < disciplinas; i++)
    {
        if (codigo == codigos[i])
        {
            indice = i;
            break;
        }
    }

    // QUANTIDADE DE ALUNOS ENTRE 18 E 25 COM MAIS DE DUAS PROVAS
    if (indice != -1)
    {
        for (int i = 0; i < alunos; i++)
        {
            if (18 <= idades[i] && idades[i] <= 25 && 2 < notas[i][indice])
            {
                soma18a25++;
            }
        }
        printf("Quantidade de alunos com idade entre 18 e 25: %d\n\n", soma18a25);
    }
    else
    {
        printf("Código inválido!\n");
    }

    // NOME DOS ALUNOS QUE FIZERAM MENOS DE TRÊS PROVAS
    for (int i = 0; i < alunos; i++)
    {
        for (int j = 0; j < disciplinas; j++)
        {
            if (notas[i][j] < 3)
            {
                printf("O aluno %c tem menos de 3 notas na discplina %d\n", c_alunos[i], codigos[j]);
            }
        }
    }

    // IDADE MEDIA DOS ALUNOS QUE NÃO FIZERAM NENHUMA PROVA EM ALGUMA DISCIPLINA
    for (int i = 0; i < alunos; i++)
    {
        for (int j = 0; j < disciplinas; j++)
        {
            if (notas[i][j] == 0)
            {
                somaIdade += idades[i];
                nenhumaProva++;
                continue;
            }
        }
    }
    printf("\nIdade media dos alunos que nao fizeram nenhuma prova: %.2lf\n", (double)somaIdade / nenhumaProva);

    return 0;
}