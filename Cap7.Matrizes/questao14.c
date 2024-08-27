/*4. Faça um programa que preencha uma matriz 2 x 3, calcule e mostre a quantidade de elementos da matriz que não 
pertencem ao intervalo [5,15]. */

#include <stdio.h>

int main()
{

    int matriz[2][3], soma = 0;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matriz[i][j]);
            if (5 >= matriz[i][j] || matriz[i][j] >= 20)
            {
                soma++;
            }
        }
    }
    printf("%d\n", soma);

    return 0;
}