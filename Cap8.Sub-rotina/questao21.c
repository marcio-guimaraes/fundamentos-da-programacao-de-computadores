/*Faça uma sub-rotina que receba uma matriz 10X10 e determine o maior elemento acima da diagonal
principal. Esse valor deverá ser mostrado no programa principal.*/

#include <stdio.h>

#define TAM 10

int diagonal(int matriz[][TAM]);

int main()
{

    int matriz[TAM][TAM];

    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            printf("Numero: ");
            scanf("%d", &matriz[i][j]);
        }
    }

    int maior = diagonal(matriz);

    printf("Maior = %d\n", maior);

    return 0;
}

int diagonal(int matriz[][TAM])
{

    int maior = matriz[0][1];

    for (int i = 0; i < TAM; i++)
    {
        for (int j = i + 1; j < TAM; j++)
        {
            if (matriz[i][j] > maior)
            {
                maior = matriz[i][j];
            }
            
        }
    }

    return maior;
}