/*Faça um programa que receba uma frase e gere uma nova frase, duplicando cada caractere da frase digitada.
Exemplo:
Frase: PROGRAMAR É BOM
Saída: PPRROOGGRRAAMMAARR ÉÉ BBOOMM*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{

    char frase[100];

    printf("Frase: ");
    fgets(frase, 100, stdin);

    char frase_duplicada[200];

    int tam = strlen(frase);

    int j = 0;
    for (int i = 0; i < tam; i++)
    {
        if (isspace(frase[i]))
        {
            frase_duplicada[j] = frase[i];
            j++;
        }
        else
        {
            frase_duplicada[j] = frase[i];
            j++;
            frase_duplicada[j] = frase[i];
            j++;
        }
    }

    printf("Frase duplicada = %s\n", frase_duplicada);

    return 0;
}