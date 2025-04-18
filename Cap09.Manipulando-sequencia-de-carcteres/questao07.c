/*Faça um programa que receba uma frase e mostre quantas letras diferentes ela contém. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{

    int alfabeto[26] = {0}, quantLetras = 0;
    char frase[100];

    fgets(frase, 100, stdin);
    int tam = strlen(frase);
    frase[tam - 1] = '\0';
    tam--;

    strlwr(frase);

    for (int i = 0; i < tam; i++)
    {
        if (!isspace(frase[i]))
        {
            int aux = (int)frase[i];
            alfabeto[aux - 97]++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (alfabeto[i] > 0)
        {
            quantLetras++;
        }
    }

    printf("Quantidade de letras = %d\n", quantLetras);

    return 0;
}