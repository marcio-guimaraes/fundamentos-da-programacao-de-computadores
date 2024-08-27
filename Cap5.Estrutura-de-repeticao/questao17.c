/*Foi feita uma pesquisa sobre a audiência de canal de TV em várias casas de uma cidade, em determinado
dia. Para cada casa consultada foi fornecido o número do canal (4, 5, 7, 12) e o número de pessoas que
estavam assistindo àquele canal. Se a televisão estivesse desligada, nada era anotado, ou seja, essa casa
não entrava na pesquisa. Faça um programa que:

■ leia um número indeterminado de dados (número do canal e número de pessoas que estavam assistindo);
■ calcule e mostre a porcentagem de audiência de cada canal. */

#include <stdio.h>

int main()
{

    int nCanal, nPessoas, canal4 = 0, canal5 = 0, canal7 = 0, canal12 = 0, count = 0;

    while (1)
    {
        printf("Canal: ");
        scanf("%d", &nCanal);
        if (nCanal == 0)
        {
            break;
        }
        printf("Numero de pessoas: ");
        scanf("%d", &nPessoas);

        if (nCanal == 4)
        {
            canal4 = canal4 + nPessoas;
        }
        else if (nCanal == 5)
        {
            canal5 = canal5 + nPessoas;
        }
        else if (nCanal == 7)
        {
            canal7 = canal7 + nPessoas;
        }
        else if (nCanal == 12)
        {
            canal12 = canal12 + nPessoas;
        }
        else
        {
            printf("Canal invalido\n");
            continue;
        }

        count = count + nPessoas;
    }

    printf("Porcentagem Canal 4 = %.2f%%\n", (float)canal4 / count * 100);
    printf("Porcentagem Canal 5 = %.2f%%\n", (float)canal5 / count * 100);
    printf("Porcentagem Canal 7 = %.2f%%\n", (float)canal7 / count * 100);
    printf("Porcentagem Canal 12 = %.2f%%\n", (float)canal12 / count * 100);
    return 0;
}