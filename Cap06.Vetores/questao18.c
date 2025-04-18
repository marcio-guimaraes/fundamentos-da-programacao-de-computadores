/*Faça um programa que preencha um vetor com quinze números, determine e mostre:
■■ o maior número e a posição por ele ocupada no vetor;
■■ o menor número e a posição por ele ocupada no vetor. */

#include <stdio.h>

int main()
{

    int numeros[15], maior, i_maior, menor, i_menor;

    for (int i = 0; i < 15; i++)
    {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    maior = numeros[0];
    i_maior = 0;
    menor = numeros[0];
    i_menor = 0;
    for (int i = 0; i < 15; i++)
    {
        if (maior < numeros[i])
        {
            maior = numeros[i];
            i_maior = i;
        }
        if (menor > numeros[i])
        {
            menor = numeros[i];
            i_menor = i;
        }
    }

    printf("Maior numero = %d - Posicao = %d\n", maior, i_maior);
    printf("Menor numero = %d - Posicao = %d\n", menor, i_menor);

    return 0;
}