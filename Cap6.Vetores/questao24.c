/*Faça um programa que leia um vetor com quinze posições para números inteiros. Crie, a seguir, um vetor
resultante que contenha todos os números primos do vetor digitado. Escreva o vetor resultante.*/

#include <stdio.h>

int main()
{

    int numeros[15], primos[15] = {0}, verificador = 0, x = 0;

    for (int i = 0; i < 15; i++)
    {
        printf("Numero: ");
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < 15; i++)
    {
        for (int n = 1; n <= numeros[i]; n++)
        {
            if (numeros[i] % n == 0)
            {
                verificador++;
            }
        }

        if (verificador == 2)
        {
            primos[x] = numeros[i];
            x++;
        }
        verificador = 0;
    }

    for (int i = 0; i < 15; i++)
    {
        if (primos[i] == 0)
            break;
        printf("Numero primo = %d\n", primos[i]);
    }

    return 0;
}