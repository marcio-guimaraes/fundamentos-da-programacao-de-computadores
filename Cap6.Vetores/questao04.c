/*Faça um programa que preencha um vetor com quinze elementos inteiros e verifique a existência de elementos
iguais a 30, mostrando as posições em que apareceram*/

#include <stdio.h>

int main()
{

    int valores[15];
    int count = 15, i, encontrar = 0;

    for (i = 0; i < count; i++)
    {
        printf("Digite o numero: ");
        scanf("%d", &valores[i]);
    }

    for (i = 0; i < count; i++)
    {
        if (valores[i] == 30)
        {
            printf("Valor encontrado na posicao: %d\n", i + 1);
            encontrar = 1;
        }
    }

    if (encontrar != 1)
    {
        printf("Nenhuma ocorrencia encontrada\n");
    }

    return 0;
}