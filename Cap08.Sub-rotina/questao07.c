/*Elabore uma sub-rotina que leia um número não determinado de valores positivos e retorne a média aritmética desses valores.
Terminar a entrada de dados com o valor zero.*/

#include <stdio.h>

float media_aritmetica()
{
    int numero, soma = 0, count = 0;
    while (1)
    {
        printf("Numero(zero para encerrar): ");
        if (numero == 0)
        {
            break;
        }

        scanf("%d", &numero);
        soma += numero;
        count++;
    }

    float media = (float)soma / --count;
    return media;
}

int main()
{
    float media;
    media = media_aritmetica();
    printf("Media = %.2f\n", media);

    return 0;
}