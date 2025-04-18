/*Faça um programa que receba uma frase, calcule e mostre a quantidade de palavras da frase digitada. Antes
de contar a quantidade de palavras da frase, esta deverá passar pelas seguintes correções:
a) Eliminação de espaços no início da frase.
b) Eliminação de espaços no fim da frase.
c) Eliminação de espaços duplicados entre palavras. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void remover_espacos(int tam, char frase1[], char frase2[])
{

    int espaco = 1, j = 0;
    for (int i = 0; i < tam; i++)
    {
        if (isspace(frase1[i]))
        {
            if (espaco == 0)
            {
                espaco = 1;
                frase2[j++] = frase1[i];
            }
            else if (espaco == 1)
            {
                continue;
            }
        }
        else
        {
            frase2[j++] = frase1[i];
            espaco = 0;
        }
    }
    frase2[j] = '\0';
}

int contar_palavras(char frase[])
{
    int quantPalavras = 0, vPalavra = 0;

    int i = 0;
    while (frase[i] != '\0')
    {
        if (vPalavra == 0)
        {
            quantPalavras++;
            vPalavra = 1;
        }
        else if (isspace(frase[i]))
        {
            vPalavra = 0;
        }

        i++;
    }

    return quantPalavras;
}

int main()
{

    char frase1[200];
    fgets(frase1, 200, stdin);

    int tam = strlen(frase1);
    frase1[tam - 1] = '\0';
    tam--;

    char frase2[tam];

    remover_espacos(tam, frase1, frase2);
    int quantPalavras = contar_palavras(frase2);

    printf("Quantidade de palavras = %d\n", quantPalavras);

    return 0;
}